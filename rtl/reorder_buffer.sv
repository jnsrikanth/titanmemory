module reorder_buffer (
  input  logic                clk,
  input  logic                rst_n,

  // Allocate entry on new transaction (beat 0)
  input  logic                alloc_valid_i,
  input  logic [hbm4_custom_pkg::TAG_WIDTH-1:0] alloc_tag_i,
  input  logic [hbm4_custom_pkg::ADDR_WIDTH-1:0] alloc_addr_i,
  input  hbm4_custom_pkg::priority_header_t alloc_hdr_i,
  output logic                alloc_ready_o,

  // Response completion beats from DRAM channel
  input  logic                complete_valid_i,
  input  logic [hbm4_custom_pkg::TAG_WIDTH-1:0] complete_tag_i,
  input  logic [2:0]          complete_beat_idx_i,
  input  logic                complete_last_beat_i,
  input  logic [hbm4_custom_pkg::DATA_WIDTH-1:0] complete_data_i,

  // Commit beats to host (Priority-aware out-of-order)
  output hbm4_custom_pkg::mem_resp_t commit_resp_o,
  input  logic                commit_ready_i
);
  import hbm4_custom_pkg::*;

  rob_entry_t rob [ROB_ENTRIES];

  //----------------------------------------------------------------
  // Free Slot Allocation Logic (Bitmask search)
  //----------------------------------------------------------------
  logic [$clog2(ROB_ENTRIES)-1:0] alloc_slot;
  logic                           has_free_slot;

  always_comb begin
    has_free_slot = 1'b0;
    alloc_slot    = '0;
    for (int i = 0; i < ROB_ENTRIES; i++) begin
      if (!rob[i].valid && !has_free_slot) begin
        has_free_slot = 1'b1;
        alloc_slot    = i[$clog2(ROB_ENTRIES)-1:0];
      end
    end
  end

  assign alloc_ready_o = has_free_slot;

  //----------------------------------------------------------------
  // Commit Selection Logic (Highest Priority, Oldest Age)
  //----------------------------------------------------------------
  logic [$clog2(ROB_ENTRIES)-1:0] commit_slot;
  logic                           has_commit_candidate;
  logic [PRIORITY_BITS-1:0]       max_prio;
  logic [31:0]                    max_age;

  always_comb begin
    has_commit_candidate = 1'b0;
    commit_slot          = '0;
    max_prio             = '0;
    max_age              = '0;

    for (int i = 0; i < ROB_ENTRIES; i++) begin
      if (rob[i].valid && rob[i].fully_completed) begin
        if (!has_commit_candidate) begin
          has_commit_candidate = 1'b1;
          commit_slot          = i[$clog2(ROB_ENTRIES)-1:0];
          max_prio             = rob[i].hdr.prio_lvl;
          max_age              = rob[i].age;
        end else begin
          // Select higher priority, or older entry if priority is equal
          if (rob[i].hdr.prio_lvl > max_prio) begin
            commit_slot = i[$clog2(ROB_ENTRIES)-1:0];
            max_prio    = rob[i].hdr.prio_lvl;
            max_age     = rob[i].age;
          end else if (rob[i].hdr.prio_lvl == max_prio && rob[i].age > max_age) begin
            commit_slot = i[$clog2(ROB_ENTRIES)-1:0];
            max_age     = rob[i].age;
          end
        end
      end
    end
  end

  // Stream out beats during commit phase
  logic [2:0] commit_beat_cnt;
  logic       committing_active;
  logic [$clog2(ROB_ENTRIES)-1:0] active_commit_slot;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < ROB_ENTRIES; i++) begin
        rob[i].valid           <= 1'b0;
        rob[i].fully_completed <= 1'b0;
        rob[i].completed_beats <= '0;
        rob[i].age             <= '0;
      end
      commit_beat_cnt    <= '0;
      committing_active  <= 1'b0;
      active_commit_slot <= '0;
    end else begin
      // 1. Age increment for active entries
      for (int i = 0; i < ROB_ENTRIES; i++) begin
        if (rob[i].valid) begin
          rob[i].age <= rob[i].age + 1'b1;
        end
      end

      // 2. Allocate new entry
      if (alloc_valid_i && alloc_ready_o) begin
        rob[alloc_slot].valid           <= 1'b1;
        rob[alloc_slot].tag             <= alloc_tag_i;
        rob[alloc_slot].addr            <= alloc_addr_i;
        rob[alloc_slot].hdr             <= alloc_hdr_i;
        rob[alloc_slot].bank_group      <= `GET_BANK_GROUP(alloc_addr_i);
        rob[alloc_slot].bank            <= `GET_BANK(alloc_addr_i);
        rob[alloc_slot].completed_beats <= '0;
        rob[alloc_slot].fully_completed <= 1'b0;
        rob[alloc_slot].age             <= '0;
      end

      // 3. Receive completed beats from DRAM
      if (complete_valid_i) begin
        for (int i = 0; i < ROB_ENTRIES; i++) begin
          if (rob[i].valid && (rob[i].tag == complete_tag_i)) begin
            rob[i].payload[complete_beat_idx_i] <= complete_data_i;
            rob[i].completed_beats[complete_beat_idx_i] <= 1'b1;
            if (complete_last_beat_i || (complete_beat_idx_i == FLIT_BEATS - 1)) begin
              rob[i].fully_completed <= 1'b1;
            end
          end
        end
      end

      // 4. Multi-beat Commit FSM (Dynamic reordering before beat 0 handshake)
      if (committing_active) begin
        if (commit_beat_cnt == 3'b000 && !commit_ready_i) begin
          // Dynamic reordering while waiting for ready handshake
          if (has_commit_candidate && (max_prio > rob[active_commit_slot].hdr.prio_lvl)) begin
            active_commit_slot <= commit_slot;
          end
        end

        if (commit_ready_i) begin
          if (commit_beat_cnt == FLIT_BEATS - 1) begin
            // Free the ROB slot after last beat committed
            rob[active_commit_slot].valid <= 1'b0;
            committing_active             <= 1'b0;
            commit_beat_cnt               <= '0;
          end else begin
            commit_beat_cnt <= commit_beat_cnt + 1'b1;
          end
        end
      end else begin
        if (has_commit_candidate) begin
          committing_active  <= 1'b1;
          active_commit_slot <= commit_slot;
          commit_beat_cnt    <= '0;
        end
      end
    end
  end

  // Output drive
  always_comb begin
    commit_resp_o           = '0;
    commit_resp_o.valid     = committing_active;
    commit_resp_o.tag       = rob[active_commit_slot].tag;
    commit_resp_o.beat_idx  = commit_beat_cnt;
    commit_resp_o.last_beat = (commit_beat_cnt == FLIT_BEATS - 1);
    commit_resp_o.data      = rob[active_commit_slot].payload[commit_beat_cnt];
    commit_resp_o.error     = 1'b0;
  end

endmodule
