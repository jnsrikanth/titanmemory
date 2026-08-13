// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_hbm4_custom.h for the primary calling header

#ifndef VERILATED_VTB_HBM4_CUSTOM___024ROOT_H_
#define VERILATED_VTB_HBM4_CUSTOM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_hbm4_custom__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_hbm4_custom___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_hbm4_custom__DOT__clk;
    CData/*0:0*/ tb_hbm4_custom__DOT__rst_n;
    CData/*0:0*/ tb_hbm4_custom__DOT__host_req_ready;
    CData/*0:0*/ tb_hbm4_custom__DOT__host_resp_ready;
    CData/*3:0*/ tb_hbm4_custom__DOT__critical_threshold;
    CData/*0:0*/ tb_hbm4_custom__DOT__enable_preempt;
    CData/*0:0*/ tb_hbm4_custom__DOT__dram_resp_valid;
    CData/*7:0*/ tb_hbm4_custom__DOT__dram_resp_tag;
    CData/*2:0*/ tb_hbm4_custom__DOT__dram_resp_beat_idx;
    CData/*0:0*/ tb_hbm4_custom__DOT__dram_resp_last_beat;
    CData/*0:0*/ tb_hbm4_custom__DOT__trigger_refresh;
    CData/*6:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
    CData/*0:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot;
    CData/*6:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot;
    CData/*0:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate;
    CData/*3:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio;
    CData/*2:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt;
    CData/*0:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active;
    CData/*6:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot;
    CData/*0:0*/ tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o;
    CData/*0:0*/ tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical;
    CData/*3:0*/ tb_hbm4_custom__DOT__dram_inst__DOT__target_bg;
    CData/*3:0*/ tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
    CData/*1:0*/ tb_hbm4_custom__DOT__dram_inst__DOT__target_b;
    CData/*1:0*/ tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt;
    VlWide<8>/*255:0*/ tb_hbm4_custom__DOT__dram_resp_data;
    IData/*31:0*/ tb_hbm4_custom__DOT__error_count;
    IData/*31:0*/ tb_hbm4_custom__DOT__test_count;
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age;
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<10>/*318:0*/ tb_hbm4_custom__DOT__host_req;
    VlWide<10>/*318:0*/ tb_hbm4_custom__DOT__dut__DOT__hp_req;
    VlWide<10>/*318:0*/ tb_hbm4_custom__DOT__dut__DOT__np_req;
    VlWide<10>/*318:0*/ tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i;
    VlWide<10>/*318:0*/ tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o;
    VlUnpacked<VlWide<68>/*2159:0*/, 128> tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob;
    VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> tb_hbm4_custom__DOT__dram_inst__DOT__bank_state;
    VlUnpacked<CData/*7:0*/, 16> tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer;
    VlUnpacked<VlWide<3>/*71:0*/, 32> tb_hbm4_custom__DOT__dram_inst__DOT__flight_q;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<VlWide<68>/*2159:0*/, 128>, true, VlWide<68>/*2159:0*/, 1> __VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7f885a59__0;

    // INTERNAL VARIABLES
    Vtb_hbm4_custom__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_hbm4_custom___024root(Vtb_hbm4_custom__Syms* symsp, const char* namep);
    ~Vtb_hbm4_custom___024root();
    VL_UNCOPYABLE(Vtb_hbm4_custom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
