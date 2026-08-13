module micro_flit_engine (
  input  logic                clk,
  input  logic                rst_n,

  // From priority router
  input  hbm4_custom_pkg::mem_req_t req_i,
  output logic                req_ready_o,

  // Early decode path (emitted immediately on beat 0)
  output logic                early_valid_o,
  output logic [hbm4_custom_pkg::TAG_WIDTH-1:0] early_tag_o,
  output logic [hbm4_custom_pkg::ADDR_WIDTH-1:0] early_addr_o,
  output hbm4_custom_pkg::priority_header_t early_hdr_o,

  // ROB allocation interface
  output logic                alloc_valid_o,
  output logic [hbm4_custom_pkg::TAG_WIDTH-1:0] alloc_tag_o,
  output logic [hbm4_custom_pkg::ADDR_WIDTH-1:0] alloc_addr_o,
  output hbm4_custom_pkg::priority_header_t alloc_hdr_o,
  input  logic                alloc_ready_i,

  // DRAM channel beat interface
  output hbm4_custom_pkg::mem_req_t dram_req_o,
  input  logic                dram_req_ready_i
);
  import hbm4_custom_pkg::*;

  // Ready when both ROB allocation and DRAM channel can accept
  assign req_ready_o = alloc_ready_i && dram_req_ready_i;

  // Early decode (fires on beat 0 for zero-overhead bank pre-activation)
  assign early_valid_o = req_i.valid && (req_i.beat_idx == 3'b000) && req_ready_o;
  assign early_tag_o   = req_i.tag;
  assign early_addr_o  = req_i.addr;
  assign early_hdr_o   = req_i.hdr;

  // Allocate ROB slot on beat 0
  assign alloc_valid_o = req_i.valid && (req_i.beat_idx == 3'b000) && req_ready_o;
  assign alloc_tag_o   = req_i.tag;
  assign alloc_addr_o  = req_i.addr;
  assign alloc_hdr_o   = req_i.hdr;

  // Forward request beats directly to DRAM channel pipeline
  always_comb begin
    dram_req_o       = req_i;
    dram_req_o.valid = req_i.valid && alloc_ready_i;
  end

endmodule
