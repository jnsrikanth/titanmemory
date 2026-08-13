`timescale 1ns/1ps

module tb_hbm4_custom;

  import hbm4_custom_pkg::*;

  //----------------------------------------------------------------
  // Clock & Reset
  //----------------------------------------------------------------
  logic clk;
  logic rst_n;

  initial begin
    clk = 0;
    forever #5 clk = ~clk;   // 100 MHz
  end

  //----------------------------------------------------------------
  // DUT Signals
  //----------------------------------------------------------------
  mem_req_t   host_req;
  logic       host_req_ready;

  mem_resp_t  host_resp;
  logic       host_resp_ready;

  logic [PRIORITY_BITS-1:0] critical_threshold;
  logic                     enable_preempt;

  // DRAM Model Signals
  logic                early_valid;
  logic [TAG_WIDTH-1:0] early_tag;
  logic [ADDR_WIDTH-1:0] early_addr;
  priority_header_t    early_hdr;

  mem_req_t            dram_req;
  logic                dram_req_ready;

  logic                dram_resp_valid;
  logic [TAG_WIDTH-1:0] dram_resp_tag;
  logic [2:0]          dram_resp_beat_idx;
  logic                dram_resp_last_beat;
  logic [DATA_WIDTH-1:0] dram_resp_data;

  logic                trigger_refresh;
  logic [15:0]         refresh_preempt_count;

  //----------------------------------------------------------------
  // DUT Instance
  //----------------------------------------------------------------
  hbm4_custom_top dut (
    .clk                  (clk),
    .rst_n                (rst_n),
    .host_req_i           (host_req),
    .host_req_ready_o     (host_req_ready),
    .host_resp_o          (host_resp),
    .host_resp_ready_i    (host_resp_ready),
    .critical_threshold_i (critical_threshold),
    .enable_preempt_i     (enable_preempt),
    .early_valid_o        (early_valid),
    .early_tag_o          (early_tag),
    .early_addr_o         (early_addr),
    .early_hdr_o          (early_hdr),
    .dram_req_o           (dram_req),
    .dram_req_ready_i     (dram_req_ready),
    .dram_resp_valid_i    (dram_resp_valid),
    .dram_resp_tag_i      (dram_resp_tag),
    .dram_resp_beat_idx_i (dram_resp_beat_idx),
    .dram_resp_last_beat_i(dram_resp_last_beat),
    .dram_resp_data_i     (dram_resp_data)
  );

  //----------------------------------------------------------------
  // Behavioral HBM4 DRAM Model Instance
  //----------------------------------------------------------------
  hbm4_dram_model dram_inst (
    .clk                     (clk),
    .rst_n                   (rst_n),
    .early_valid_i           (early_valid),
    .early_tag_i             (early_tag),
    .early_addr_i            (early_addr),
    .early_hdr_i             (early_hdr),
    .dram_req_i              (dram_req),
    .dram_req_ready_o        (dram_req_ready),
    .complete_valid_o        (dram_resp_valid),
    .complete_tag_o          (dram_resp_tag),
    .complete_beat_idx_o     (dram_resp_beat_idx),
    .complete_last_beat_o    (dram_resp_last_beat),
    .complete_data_o         (dram_resp_data),
    .trigger_refresh_i       (trigger_refresh),
    .refresh_preempt_count_o (refresh_preempt_count)
  );

  //----------------------------------------------------------------
  // Test Verification Logic
  //----------------------------------------------------------------
  int error_count = 0;
  int test_count  = 0;

  initial begin
    $display("==========================================================");
    $display(" HBM4 Custom Microarchitecture Advanced Testbench Suite");
    $display(" Features Tested:");
    $display("   1. Multi-beat Micro-Flit Streaming (8-beat flits)");
    $display("   2. Priority-Aware Out-of-Order ROB Commit Selection");
    $display("   3. Hardware Refresh Preemption & Ultra-Low Latency Path");
    $display("==========================================================");

    // Initial resets
    rst_n               = 0;
    host_req            = '0;
    host_resp_ready     = 1'b1;
    critical_threshold  = 4'd12;
    enable_preempt      = 1'b1;
    trigger_refresh     = 1'b0;

    repeat (5) @(posedge clk);
    rst_n = 1;
    repeat (2) @(posedge clk);

    //--------------------------------------------------------------
    // TEST 1: Single Flit Read (Multi-beat streaming)
    //--------------------------------------------------------------
    $display("\n[TEST 1] Single Flit Read (Address: 0x1000_0000, Tag: 0x01)...");
    fork
      send_flit_request(40'h1000_0000, 8'h01, 4'd14, 1'b1);
      wait_response_tag(8'h01, {16'b0, {6{40'h1000_0000}}});
    join

    // Ensure all beats of Tag 0x01 commit before Test 2
    while (host_resp.valid) @(posedge clk);
    repeat (2) @(posedge clk);

    //--------------------------------------------------------------
    // TEST 2: Out-of-Order Priority Reordering
    // Hold host response consume temporarily so both responses arrive
    // in ROB, then verify Priority 15 commits ahead of Priority 2!
    //--------------------------------------------------------------
    $display("\n[TEST 2] Out-of-Order ROB Commit Reordering Test...");
    host_resp_ready = 1'b0; // hold ROB commit

    $display(" -> Issuing Low-Priority (Prio 2) Request Tag 0x02...");
    send_flit_request(40'h2000_0000, 8'h02, 4'd2, 1'b0);

    $display(" -> Issuing High-Priority (Prio 15, Critical) Request Tag 0x03...");
    send_flit_request(40'h3000_0000, 8'h03, 4'd15, 1'b1);

    // Wait for both to be present in ROB
    repeat (15) @(posedge clk);
    host_resp_ready = 1'b1; // release ROB commit

    // Check first commit from ROB: MUST be Tag 0x03!
    wait_first_commit_tag(8'h03);
    wait_response_tag(8'h02, {16'b0, {6{40'h2000_0000}}});
    while (host_resp.valid) @(posedge clk);
    repeat (2) @(posedge clk);

    //--------------------------------------------------------------
    // TEST 3: Hardware Refresh Preemption
    // Inject Refresh into Bank Group 0 (addr[7:4] = 0x0), then issue Critical Read.
    // Verify preemption counter increments and ultra-low latency response.
    //--------------------------------------------------------------
    $display("\n[TEST 3] Hardware Refresh Preemption Test...");
    $display(" -> Injecting background refresh cycle into Bank Group 0...");
    trigger_refresh = 1'b1;
    @(posedge clk);
    trigger_refresh = 1'b0;

    $display(" -> Issuing Critical Read (Tag 0x04, Prio 15, Preempt=1) targeting Bank Group 0 (Addr: 0x0000_0000)...");
    fork
      send_flit_request(40'h0000_0000, 8'h04, 4'd15, 1'b1); // Address in Bank Group 0
      wait_response_tag(8'h04, {16'b0, {6{40'h0000_0000}}});
    join

    if (refresh_preempt_count > 0) begin
      $display("  PASS: Refresh preemption successfully triggered! (Preempt Count = %0d)", refresh_preempt_count);
    end else begin
      $display("  ERROR: Refresh preemption was NOT triggered!");
      error_count++;
    end

    //--------------------------------------------------------------
    // Summary
    //--------------------------------------------------------------
    repeat (10) @(posedge clk);

    $display("\n==========================================================");
    if (error_count == 0) begin
      $display(" ALL ADVANCED ARCHITECTURE TESTS PASSED!");
    end else begin
      $display(" FAILED with %0d error(s)", error_count);
    end
    $display("==========================================================\n");

    $finish;
  end

  //----------------------------------------------------------------
  // Helper Tasks
  //----------------------------------------------------------------
  task automatic send_flit_request(
    input logic [ADDR_WIDTH-1:0] addr,
    input logic [TAG_WIDTH-1:0]  tag,
    input logic [PRIORITY_BITS-1:0] prio,
    input logic                  preempt
  );
    for (int b = 0; b < FLIT_BEATS; b++) begin
      host_req.valid        = 1'b1;
      host_req.addr         = addr;
      host_req.data         = 256'hCAFE_0000 | b;
      host_req.tag          = tag;
      host_req.hdr.prio_lvl = prio;
      host_req.hdr.preempt  = preempt;
      host_req.hdr.reserved = 3'b0;
      host_req.rtype        = REQ_READ;
      host_req.beat_idx     = b[2:0];
      host_req.last_beat    = (b == FLIT_BEATS - 1);

      @(posedge clk);
      while (!host_req_ready) @(posedge clk);
    end
    host_req.valid = 1'b0;
  endtask

  task automatic wait_response_tag(
    input logic [TAG_WIDTH-1:0]  expected_tag,
    input logic [DATA_WIDTH-1:0] expected_data
  );
    test_count++;
    while (!(host_resp.valid && host_resp.tag == expected_tag && host_resp.beat_idx == 3'b000)) @(posedge clk);
    if (host_resp.data !== expected_data) begin
      $display("  ERROR: Data mismatch for tag 0x%02h. Got: 0x%h Exp: 0x%h", expected_tag, host_resp.data, expected_data);
      error_count++;
    end else begin
      $display("  PASS: Received response for tag=0x%02h with matching data payload", expected_tag);
    end
  endtask

  task automatic wait_first_commit_tag(
    input logic [TAG_WIDTH-1:0] expected_tag
  );
    test_count++;
    while (!host_resp.valid) @(posedge clk);
    if (host_resp.tag !== expected_tag) begin
      $display("  ERROR: Priority OOO commit order failure! Expected Tag 0x%02h first, but got Tag 0x%02h", expected_tag, host_resp.tag);
      error_count++;
    end else begin
      $display("  PASS: Priority Out-of-Order ROB Commit verified! Tag 0x%02h (Prio 15) preempted earlier Low-Prio tags!", expected_tag);
    end
  endtask

  // Watchdog Timer
  initial begin
    #50000;
    $display("ERROR: Simulation Global Timeout Watchdog Expired!");
    $finish;
  end

endmodule
