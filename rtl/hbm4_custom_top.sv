module hbm4_custom_top (
  input  logic                clk,
  input  logic                rst_n,

  // Host Request Interface
  input  hbm4_custom_pkg::mem_req_t host_req_i,
  output logic                host_req_ready_o,

  // Host Response Interface (Priority-aware out-of-order commit)
  output hbm4_custom_pkg::mem_resp_t host_resp_o,
  input  logic                host_resp_ready_i,

  // Configuration
  input  logic [hbm4_custom_pkg::PRIORITY_BITS-1:0] critical_threshold_i,
  input  logic                enable_preempt_i,

  // DRAM PHY / Model Interface
  output logic                early_valid_o,
  output logic [hbm4_custom_pkg::TAG_WIDTH-1:0] early_tag_o,
  output logic [hbm4_custom_pkg::ADDR_WIDTH-1:0] early_addr_o,
  output hbm4_custom_pkg::priority_header_t early_hdr_o,

  output hbm4_custom_pkg::mem_req_t dram_req_o,
  input  logic                dram_req_ready_i,

  input  logic                dram_resp_valid_i,
  input  logic [hbm4_custom_pkg::TAG_WIDTH-1:0] dram_resp_tag_i,
  input  logic [2:0]          dram_resp_beat_idx_i,
  input  logic                dram_resp_last_beat_i,
  input  logic [hbm4_custom_pkg::DATA_WIDTH-1:0] dram_resp_data_i
);
  import hbm4_custom_pkg::*;

  //----------------------------------------------------------------
  // Internal Wires
  //----------------------------------------------------------------
  mem_req_t hp_req, np_req, combined_req;
  logic     hp_ready, np_ready, combined_ready;

  logic                alloc_valid;
  logic [TAG_WIDTH-1:0] alloc_tag;
  logic [ADDR_WIDTH-1:0] alloc_addr;
  priority_header_t    alloc_hdr;
  logic                alloc_ready;

  //----------------------------------------------------------------
  // Priority Router
  //----------------------------------------------------------------
  priority_router u_router (
    .clk                  (clk),
    .rst_n                (rst_n),
    .req_i                (host_req_i),
    .req_ready_o          (host_req_ready_o),
    .hp_req_o             (hp_req),
    .hp_ready_i           (hp_ready),
    .np_req_o             (np_req),
    .np_ready_i           (np_ready),
    .critical_threshold_i (critical_threshold_i),
    .enable_preempt_i     (enable_preempt_i)
  );

  // Combine high-priority and normal-priority requests (HP wins)
  always_comb begin
    if (hp_req.valid) begin
      combined_req = hp_req;
      hp_ready     = combined_ready;
      np_ready     = 1'b0;
    end else begin
      combined_req = np_req;
      hp_ready     = 1'b0;
      np_ready     = combined_ready;
    end
  end

  //----------------------------------------------------------------
  // Micro-flit Engine
  //----------------------------------------------------------------
  micro_flit_engine u_flit (
    .clk               (clk),
    .rst_n             (rst_n),
    .req_i             (combined_req),
    .req_ready_o       (combined_ready),
    .early_valid_o     (early_valid_o),
    .early_tag_o       (early_tag_o),
    .early_addr_o      (early_addr_o),
    .early_hdr_o       (early_hdr_o),
    .alloc_valid_o     (alloc_valid),
    .alloc_tag_o       (alloc_tag),
    .alloc_addr_o      (alloc_addr),
    .alloc_hdr_o       (alloc_hdr),
    .alloc_ready_i     (alloc_ready),
    .dram_req_o        (dram_req_o),
    .dram_req_ready_i  (dram_req_ready_i)
  );

  //----------------------------------------------------------------
  // Reorder Buffer (Priority-Aware Out-of-Order Commit)
  //----------------------------------------------------------------
  reorder_buffer u_rob (
    .clk                  (clk),
    .rst_n                (rst_n),
    .alloc_valid_i        (alloc_valid),
    .alloc_tag_i          (alloc_tag),
    .alloc_addr_i         (alloc_addr),
    .alloc_hdr_i          (alloc_hdr),
    .alloc_ready_o        (alloc_ready),
    .complete_valid_i     (dram_resp_valid_i),
    .complete_tag_i       (dram_resp_tag_i),
    .complete_beat_idx_i  (dram_resp_beat_idx_i),
    .complete_last_beat_i (dram_resp_last_beat_i),
    .complete_data_i      (dram_resp_data_i),
    .commit_resp_o        (host_resp_o),
    .commit_ready_i       (host_resp_ready_i)
  );

endmodule
