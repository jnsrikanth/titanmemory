module priority_router (
  input  logic                clk,
  input  logic                rst_n,

  // From host
  input  hbm4_custom_pkg::mem_req_t req_i,
  output logic                req_ready_o,

  // High priority path (Preemptive route)
  output hbm4_custom_pkg::mem_req_t hp_req_o,
  input  logic                hp_ready_i,

  // Normal priority path
  output hbm4_custom_pkg::mem_req_t np_req_o,
  input  logic                np_ready_i,

  // Config
  input  logic [hbm4_custom_pkg::PRIORITY_BITS-1:0] critical_threshold_i,
  input  logic                enable_preempt_i
);
  import hbm4_custom_pkg::*;

  logic is_critical;

  assign is_critical = req_i.valid &&
                       (req_i.hdr.prio_lvl >= critical_threshold_i) &&
                       (req_i.hdr.preempt || enable_preempt_i);

  always_comb begin
    hp_req_o    = '0;
    np_req_o    = '0;
    req_ready_o = 1'b0;

    if (req_i.valid) begin
      if (is_critical) begin
        hp_req_o    = req_i;
        req_ready_o = hp_ready_i;
      end else begin
        np_req_o    = req_i;
        req_ready_o = np_ready_i;
      end
    end
  end

endmodule
