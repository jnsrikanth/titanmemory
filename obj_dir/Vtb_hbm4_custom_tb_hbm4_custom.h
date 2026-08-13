// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_hbm4_custom.h for the primary calling header

#ifndef VERILATED_VTB_HBM4_CUSTOM_TB_HBM4_CUSTOM_H_
#define VERILATED_VTB_HBM4_CUSTOM_TB_HBM4_CUSTOM_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4;


class Vtb_hbm4_custom__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_hbm4_custom_tb_hbm4_custom final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst_n;
    CData/*0:0*/ __PVT__host_req_ready;
    CData/*0:0*/ __PVT__host_resp_ready;
    CData/*3:0*/ __PVT__critical_threshold;
    CData/*0:0*/ __PVT__enable_preempt;
    CData/*0:0*/ __PVT__mem_req_ready;
    CData/*0:0*/ __PVT__mem_resp_valid;
    CData/*7:0*/ __PVT__mem_resp_tag;
    CData/*0:0*/ __PVT__dut__DOT__u_rob__DOT__commit_valid_o;
    CData/*6:0*/ __PVT__dut__DOT__u_rob__DOT__head;
    CData/*6:0*/ __PVT__dut__DOT__u_rob__DOT__tail;
    CData/*7:0*/ __PVT__dut__DOT__u_rob__DOT__count;
    CData/*0:0*/ __PVT__dut__DOT__u_flit__DOT__early_valid_o;
    CData/*0:0*/ __PVT__dut__DOT__u_router__DOT__is_critical;
    VlWide<8>/*255:0*/ __PVT__mem_resp_data;
    IData/*31:0*/ __PVT__error_count;
    IData/*31:0*/ __PVT__test_count;
    IData/*31:0*/ __PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i;
    VlWide<10>/*312:0*/ __PVT__host_req;
    VlWide<10>/*312:0*/ __PVT__dut__DOT__hp_req;
    VlWide<10>/*312:0*/ __PVT__dut__DOT__np_req;
    VlWide<10>/*312:0*/ __PVT__dut__DOT__u_flit__DOT__req_i;
    VlUnpacked<VlWide<10>/*313:0*/, 128> __PVT__dut__DOT__u_rob__DOT__rob;
    VlNBACommitQueue<VlUnpacked<VlWide<10>/*313:0*/, 128>, true, VlWide<10>/*313:0*/, 1> __VdlyCommitQueuedut__DOT__u_rob__DOT__rob;
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask_wait_response__1____VDynScope_wait_response_4;
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask_wait_response__6____VDynScope_wait_response_4;
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask_wait_response__11____VDynScope_wait_response_4;

    // INTERNAL VARIABLES
    Vtb_hbm4_custom__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_hbm4_custom_tb_hbm4_custom();
    ~Vtb_hbm4_custom_tb_hbm4_custom();
    void ctor(Vtb_hbm4_custom__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_hbm4_custom_tb_hbm4_custom);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
