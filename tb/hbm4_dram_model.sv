`timescale 1ns/1ps

module hbm4_dram_model
  import hbm4_custom_pkg::*;
(
  input  logic                clk,
  input  logic                rst_n,

  // Early decode / priority trigger from micro-flit engine
  input  logic                early_valid_i,
  input  logic [TAG_WIDTH-1:0] early_tag_i,
  input  logic [ADDR_WIDTH-1:0] early_addr_i,
  input  priority_header_t    early_hdr_i,

  // Ingress DRAM request beat stream
  input  mem_req_t            dram_req_i,
  output logic                dram_req_ready_o,

  // Egress response beats to ROB
  output logic                complete_valid_o,
  output logic [TAG_WIDTH-1:0] complete_tag_o,
  output logic [2:0]          complete_beat_idx_o,
  output logic                complete_last_beat_o,
  output logic [DATA_WIDTH-1:0] complete_data_o,

  // Control / Status
  input  logic                trigger_refresh_i,     // inject refresh for testing
  output logic [15:0]         refresh_preempt_count_o // stat counter
);

  // Bank states
  typedef enum logic [1:0] {
    BANK_IDLE       = 2'b00,
    BANK_ACTIVE     = 2'b01,
    BANK_REFRESHING = 2'b10
  } bank_state_e;

  bank_state_e bank_state [BANK_GROUPS][BANKS_PER_GROUP];
  logic [15:0] open_row   [BANK_GROUPS][BANKS_PER_GROUP];
  logic [7:0]  refresh_timer [BANK_GROUPS];

  // Request Queue / In-flight Tracker
  typedef struct packed {
    logic                     valid;
    logic [TAG_WIDTH-1:0]     tag;
    logic [ADDR_WIDTH-1:0]    addr;
    priority_header_t         hdr;
    logic [3:0]               bg;
    logic [1:0]               bank;
    logic [7:0]               delay_cycles;
    logic                     preempted;
  } flight_req_t;

  parameter int QUEUE_DEPTH = 32;
  flight_req_t flight_q [QUEUE_DEPTH];

  assign dram_req_ready_o = 1'b1;

  // Preemption Counter
  logic [15:0] preempt_cnt;
  assign refresh_preempt_count_o = preempt_cnt;

  // Temporary vars for block scoping
  logic [3:0] target_bg, req_bg;
  logic [1:0] target_b, req_b;

  //----------------------------------------------------------------
  // Refresh Preemption & Processing Logic
  //----------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int bg = 0; bg < BANK_GROUPS; bg++) begin
        refresh_timer[bg] <= '0;
        for (int b = 0; b < BANKS_PER_GROUP; b++) begin
          bank_state[bg][b] <= BANK_IDLE;
          open_row[bg][b]   <= '0;
        end
      end
      for (int i = 0; i < QUEUE_DEPTH; i++) begin
        flight_q[i].valid <= 1'b0;
      end
      preempt_cnt          <= '0;
      complete_valid_o     <= 1'b0;
      complete_tag_o       <= '0;
      complete_beat_idx_o  <= '0;
      complete_last_beat_o <= 1'b0;
      complete_data_o      <= '0;
    end else begin
      complete_valid_o <= 1'b0;

      // 1. Refresh Injection (Simulate periodic or forced background refresh)
      if (trigger_refresh_i) begin
        // Set Bank Group 0 to refreshing state with 50-cycle refresh latency
        bank_state[0][0] <= BANK_REFRESHING;
        refresh_timer[0] <= 8'd50;
      end else begin
        for (int bg = 0; bg < BANK_GROUPS; bg++) begin
          if (refresh_timer[bg] > 0) begin
            refresh_timer[bg] <= refresh_timer[bg] - 1'b1;
            if (refresh_timer[bg] == 1) begin
              for (int b = 0; b < BANKS_PER_GROUP; b++) begin
                if (bank_state[bg][b] == BANK_REFRESHING) begin
                  bank_state[bg][b] <= BANK_IDLE;
                end
              end
            end
          end
        end
      end

      // 2. Early Decode Preemption Trigger
      if (early_valid_i && early_hdr_i.preempt && (early_hdr_i.prio_lvl >= 4'd12)) begin
        target_bg = `GET_BANK_GROUP(early_addr_i);
        target_b  = `GET_BANK(early_addr_i);

        // If target bank group is refreshing, PREEMPT IT IMMEDIATELY!
        if (bank_state[target_bg][target_b] == BANK_REFRESHING) begin
          bank_state[target_bg][target_b] <= BANK_ACTIVE;
          refresh_timer[target_bg]        <= 8'd0; // Abort background refresh
          preempt_cnt                     <= preempt_cnt + 1'b1;
        end
      end

      // 3. Enqueue In-flight Request on Beat 0
      if (dram_req_i.valid && (dram_req_i.beat_idx == 3'b000)) begin
        req_bg = `GET_BANK_GROUP(dram_req_i.addr);
        req_b  = `GET_BANK(dram_req_i.addr);

        for (int i = 0; i < QUEUE_DEPTH; i++) begin
          if (!flight_q[i].valid) begin
            flight_q[i].valid     <= 1'b1;
            flight_q[i].tag       <= dram_req_i.tag;
            flight_q[i].addr      <= dram_req_i.addr;
            flight_q[i].hdr       <= dram_req_i.hdr;
            flight_q[i].bg        <= req_bg;
            flight_q[i].bank      <= req_b;

            // Calculate latency: Critical/Preempted = 2 cycles; Standard = 6 cycles; Refreshed = 30 cycles
            if (early_valid_i && early_hdr_i.preempt && (early_hdr_i.prio_lvl >= 4'd12)) begin
              flight_q[i].delay_cycles <= 8'd2; // Deterministic Ultra-Low Latency Path
              flight_q[i].preempted    <= 1'b1;
            end else if (bank_state[req_bg][req_b] == BANK_REFRESHING) begin
              flight_q[i].delay_cycles <= refresh_timer[req_bg] + 8'd6; // Stalled by refresh
              flight_q[i].preempted    <= 1'b0;
            end else begin
              flight_q[i].delay_cycles <= 8'd6; // Normal latency
              flight_q[i].preempted    <= 1'b0;
            end
            break;
          end
        end
      end

      // 4. In-flight Processing & Multi-beat Burst Response Output
      for (int i = 0; i < QUEUE_DEPTH; i++) begin
        if (flight_q[i].valid) begin
          if (flight_q[i].delay_cycles > 0) begin
            flight_q[i].delay_cycles <= flight_q[i].delay_cycles - 1'b1;
          end else begin
            // Emit response flit beats
            complete_valid_o     <= 1'b1;
            complete_tag_o       <= flight_q[i].tag;
            complete_beat_idx_o  <= 3'b000;
            complete_last_beat_o <= 1'b1;
            complete_data_o      <= {16'b0, {6{flight_q[i].addr}}};
            flight_q[i].valid    <= 1'b0;
            break;
          end
        end
      end
    end
  end

endmodule
