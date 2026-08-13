package hbm4_custom_pkg;

  //----------------------------------------------------------------
  // Architecture Parameters
  //----------------------------------------------------------------
  parameter int DATA_WIDTH        = 256;          // 256 bits per beat (32 bytes)
  parameter int FLIT_BYTES        = 256;          // 256-byte micro-flit
  parameter int FLIT_BEATS        = FLIT_BYTES * 8 / DATA_WIDTH; // = 8 beats
  parameter int ROB_ENTRIES       = 128;
  parameter int PRIORITY_BITS     = 4;
  parameter int ADDR_WIDTH        = 40;
  parameter int TAG_WIDTH         = 8;
  parameter int BANK_GROUPS       = 16;
  parameter int BANKS_PER_GROUP   = 4;
  parameter int TOTAL_BANKS       = BANK_GROUPS * BANKS_PER_GROUP; // = 64 banks

  //----------------------------------------------------------------
  // Priority Header (Custom 4-bit Tag + Preempt flag)
  //----------------------------------------------------------------
  typedef struct packed {
    logic [PRIORITY_BITS-1:0] prio_lvl;   // 0 = lowest, 15 = critical / preemption
    logic                     preempt;    // 1 = allow preemption of background ops
    logic [2:0]               reserved;
  } priority_header_t;

  //----------------------------------------------------------------
  // Memory Command / Request
  //----------------------------------------------------------------
  typedef enum logic [1:0] {
    REQ_READ  = 2'b00,
    REQ_WRITE = 2'b01,
    REQ_FLUSH = 2'b10,
    REQ_REFRESH = 2'b11
  } req_type_e;

  typedef struct packed {
    logic [ADDR_WIDTH-1:0]    addr;
    logic [DATA_WIDTH-1:0]    data;
    priority_header_t         hdr;
    logic [TAG_WIDTH-1:0]     tag;
    req_type_e                rtype;
    logic [2:0]               beat_idx;   // 0 to 7 for 8-beat flit
    logic                     last_beat;  // 1 on beat 7
    logic                     valid;
  } mem_req_t;

  typedef struct packed {
    logic [DATA_WIDTH-1:0]    data;
    logic [TAG_WIDTH-1:0]     tag;
    logic [2:0]               beat_idx;
    logic                     last_beat;
    logic                     valid;
    logic                     error;
  } mem_resp_t;

  //----------------------------------------------------------------
  // Reorder Buffer Entry (Priority-Aware OOO Tracking)
  //----------------------------------------------------------------
  typedef struct packed {
    logic                     valid;
    logic [TAG_WIDTH-1:0]     tag;
    logic [ADDR_WIDTH-1:0]    addr;
    priority_header_t         hdr;
    logic [3:0]               bank_group;
    logic [1:0]               bank;
    logic [15:0]              completed_beats; // bitmask for received beats
    logic                     fully_completed;
    logic [FLIT_BEATS-1:0][DATA_WIDTH-1:0] payload;
    logic [31:0]              age;             // allocation timestamp for aging
  } rob_entry_t;

  // Address Field Unpacker Helper Macros
  `define GET_BANK_GROUP(a) a[7:4]
  `define GET_BANK(a) a[9:8]

endpackage
