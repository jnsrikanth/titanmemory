// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__0(Vtb_hbm4_custom___024root* vlSelf);
VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1(Vtb_hbm4_custom___024root* vlSelf);
VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__2(Vtb_hbm4_custom___024root* vlSelf);

void Vtb_hbm4_custom___024root___eval_initial(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__0(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_hbm4_custom__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_hbm4_custom.sv", 
                                             15);
        vlSelfRef.tb_hbm4_custom__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__clk)));
    }
    co_return;
}

extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_hebd838a7_0;
void Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(Vtb_hbm4_custom___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_1__sync);
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h0eefe58c_0;
VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_2__sync);
VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_2__sync);

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_hbm4_custom__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_hbm4_custom__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_hbm4_custom__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_hbm4_custom__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_hbm4_custom__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_hbm4_custom__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb_hbm4_custom__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    QData/*39:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__addr;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__addr = 0;
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__tag;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__tag = 0;
    CData/*3:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__prio;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__prio = 0;
    CData/*0:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__preempt;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__preempt = 0;
    IData/*31:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b = 0;
    QData/*39:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__addr;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__addr = 0;
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__tag;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__tag = 0;
    CData/*3:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__prio;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__prio = 0;
    CData/*0:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__preempt;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__preempt = 0;
    IData/*31:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b = 0;
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__wait_first_commit_tag__4__expected_tag;
    __Vtask_tb_hbm4_custom__DOT__wait_first_commit_tag__4__expected_tag = 0;
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_tag;
    __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_tag = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data;
    VL_ZERO_W(256, __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data);
    VlWide<8>/*255:0*/ __Vtemp_8;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    VL_WRITEF_NX("==========================================================\n HBM4 Custom Microarchitecture Advanced Testbench Suite\n Features Tested:\n   1. Multi-beat Micro-Flit Streaming (8-beat flits)\n   2. Priority-Aware Out-of-Order ROB Commit Selection\n   3. Hardware Refresh Preemption & Ultra-Low Latency Path\n==========================================================\n",0);
    vlSelfRef.tb_hbm4_custom__DOT__rst_n = 0U;
    VL_ASSIGN_W(319, vlSelfRef.tb_hbm4_custom__DOT__host_req, Vtb_hbm4_custom__ConstPool__CONST_hebd838a7_0);
    vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready = 1U;
    vlSelfRef.tb_hbm4_custom__DOT__critical_threshold = 0x0cU;
    vlSelfRef.tb_hbm4_custom__DOT__enable_preempt = 1U;
    vlSelfRef.tb_hbm4_custom__DOT__trigger_refresh = 0U;
    tb_hbm4_custom__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_hbm4_custom__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_hbm4_custom__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_hbm4_custom__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_hbm4_custom__DOT__rst_n = 1U;
    tb_hbm4_custom__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, tb_hbm4_custom__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_hbm4_custom__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_hbm4_custom__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n[TEST 1] Single Flit Read (Address: 0x1000_0000, Tag: 0x01)...\n",0);
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, nullptr);
        Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(vlSelf, __Vfork_1__sync);
        Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(vlSelf, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "tb/tb_hbm4_custom.sv", 
                                      125);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             131);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    tb_hbm4_custom__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, tb_hbm4_custom__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             132);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_hbm4_custom__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_hbm4_custom__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n[TEST 2] Out-of-Order ROB Commit Reordering Test...\n",0);
    vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready = 0U;
    VL_WRITEF_NX(" -> Issuing Low-Priority (Prio 2) Request Tag 0x02...\n",0);
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__preempt = 0U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__prio = 2U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__tag = 2U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__addr = 0x0000000020000000ULL;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b = 0U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b)) {
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[1U] 
            = (0x00657f00U | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b 
                              >> 9U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[4U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[5U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[6U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[7U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[8U] 
            = ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__addr) 
               << 0x00000017U);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[9U] 
            = (0x7fffffffU & (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__addr) 
                               >> 9U) | ((IData)((__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xff80007fU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__prio) 
                   << 0x00000013U) | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__preempt) 
                                       << 0x00000012U) 
                                      | ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__tag) 
                                         << 7U))));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xffffff81U & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((0x0000000eU & (__Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b 
                                   << 1U)) | (7U == __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b)) 
                  << 1U));
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__host_req_ready)))) {
            Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                                  "@(posedge tb_hbm4_custom.clk)");
            co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_hbm4_custom.clk)", 
                                                                 "tb/tb_hbm4_custom.sv", 
                                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b 
            = ((IData)(1U) + __Vtask_tb_hbm4_custom__DOT__send_flit_request__2__unnamedblk1__DOT__b);
    }
    vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] = (0xfffffffeU 
                                                   & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
    VL_WRITEF_NX(" -> Issuing High-Priority (Prio 15, Critical) Request Tag 0x03...\n",0);
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__preempt = 1U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__prio = 0x0fU;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__tag = 3U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__addr = 0x0000000030000000ULL;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b = 0U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b)) {
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[1U] 
            = (0x00657f00U | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b 
                              >> 9U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[4U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[5U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[6U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[7U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[8U] 
            = ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__addr) 
               << 0x00000017U);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[9U] 
            = (0x7fffffffU & (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__addr) 
                               >> 9U) | ((IData)((__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xff80007fU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__prio) 
                   << 0x00000013U) | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__preempt) 
                                       << 0x00000012U) 
                                      | ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__tag) 
                                         << 7U))));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xffffff81U & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((0x0000000eU & (__Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b 
                                   << 1U)) | (7U == __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b)) 
                  << 1U));
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__host_req_ready)))) {
            Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                                  "@(posedge tb_hbm4_custom.clk)");
            co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_hbm4_custom.clk)", 
                                                                 "tb/tb_hbm4_custom.sv", 
                                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b 
            = ((IData)(1U) + __Vtask_tb_hbm4_custom__DOT__send_flit_request__3__unnamedblk1__DOT__b);
    }
    vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] = (0xfffffffeU 
                                                   & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
    tb_hbm4_custom__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x0000000fU;
    while (VL_LTS_III(32, 0U, tb_hbm4_custom__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             149);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_hbm4_custom__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_hbm4_custom__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready = 1U;
    __Vtask_tb_hbm4_custom__DOT__wait_first_commit_tag__4__expected_tag = 3U;
    vlSelfRef.tb_hbm4_custom__DOT__test_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_hbm4_custom__DOT__test_count);
    while ((1U & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active)))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             243);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][67U] 
                         >> 7U)) != (IData)(__Vtask_tb_hbm4_custom__DOT__wait_first_commit_tag__4__expected_tag))) {
        VL_WRITEF_NX("  ERROR: Priority OOO commit order failure! Expected Tag 0x%02h first, but got Tag 0x%02h\n",2
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_first_commit_tag__4__expected_tag
                     , '#',8,(0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][67U] 
                                             >> 7U)));
        vlSelfRef.tb_hbm4_custom__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: Priority Out-of-Order ROB Commit verified! Tag 0x%02h (Prio 15) preempted earlier Low-Prio tags!\n",1
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_first_commit_tag__4__expected_tag);
    }
    VL_ASSIGN_W(256, __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data, Vtb_hbm4_custom__ConstPool__CONST_h0eefe58c_0);
    __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_tag = 2U;
    vlSelfRef.tb_hbm4_custom__DOT__test_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_hbm4_custom__DOT__test_count);
    while ((1U & (~ (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) 
                      & ((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][67U] 
                                         >> 7U)) == (IData)(__Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_tag))) 
                     & (0U == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt)))))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __VExpandSel_WordIdx_1 = (((IData)(0x00000020U) 
                               + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                  << 8U)) >> 5U);
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000020U) 
                                             + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                << 8U)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if ((0U != (((((((((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                          [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                          << __VExpandSel_HiShift_1) 
                         & __VExpandSel_HiMask_1) | 
                        (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1)) 
                       ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[0U]) 
                      | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1)) 
                         ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[1U])) 
                     | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1)) 
                        ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[2U])) 
                    | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                          [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                          << __VExpandSel_HiShift_1) 
                         & __VExpandSel_HiMask_1) | 
                        (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                         >> __VExpandSel_LoShift_1)) 
                       ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[3U])) 
                   | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                         << __VExpandSel_HiShift_1) 
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                      ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[4U])) 
                  | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        << __VExpandSel_HiShift_1) 
                       & __VExpandSel_HiMask_1) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                   [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                   [
                                                   ((IData)(5U) 
                                                    + __VExpandSel_WordIdx_1)] 
                                                   >> __VExpandSel_LoShift_1)) 
                     ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[5U])) 
                 | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                    ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[6U])) 
                | ((((((0x0000003cU <= __VExpandSel_WordIdx_1)
                        ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(8U) + __VExpandSel_WordIdx_1)]) 
                      << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                    | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                       >> __VExpandSel_LoShift_1)) 
                   ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data[7U])))) {
        __VExpandSel_WordIdx_2 = (((IData)(0x00000020U) 
                                   + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                      << 8U)) >> 5U);
        __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000020U) 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                  << 8U)));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_8[0U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[1U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[2U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[3U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[4U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[5U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[6U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_8[7U] = (((((0x0000003cU <= __VExpandSel_WordIdx_2)
                             ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(8U) + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        VL_WRITEF_NX("  ERROR: Data mismatch for tag 0x%02h. Got: 0x%h Exp: 0x%h\n",3
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_tag
                     , '#',256,__Vtemp_8.data(), '#',256,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_data.data());
        vlSelfRef.tb_hbm4_custom__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: Received response for tag=0x%02h with matching data payload\n",1
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__5__expected_tag);
    }
    while (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             155);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    tb_hbm4_custom__DOT__unnamedblk1_5__DOT____Vrepeat4 = 2U;
    while (VL_LTS_III(32, 0U, tb_hbm4_custom__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             156);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_hbm4_custom__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_hbm4_custom__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n[TEST 3] Hardware Refresh Preemption Test...\n -> Injecting background refresh cycle into Bank Group 0...\n",0);
    vlSelfRef.tb_hbm4_custom__DOT__trigger_refresh = 1U;
    Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_hbm4_custom.clk)", 
                                                         "tb/tb_hbm4_custom.sv", 
                                                         166);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_hbm4_custom__DOT__trigger_refresh = 0U;
    VL_WRITEF_NX(" -> Issuing Critical Read (Tag 0x04, Prio 15, Preempt=1) targeting Bank Group 0 (Addr: 0x0000_0000)...\n",0);
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(2U, nullptr);
        Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(vlSelf, __Vfork_2__sync);
        Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(vlSelf, __Vfork_2__sync);
        co_await __Vfork_2__sync.join(nullptr, "tb/tb_hbm4_custom.sv", 
                                      170);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0U < (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt))) {
        VL_WRITEF_NX("  PASS: Refresh preemption successfully triggered! (Preempt Count = %0d)\n",1
                     , '#',16,vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt);
    } else {
        VL_WRITEF_NX("  ERROR: Refresh preemption was NOT triggered!\n",0);
        vlSelfRef.tb_hbm4_custom__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__error_count);
    }
    tb_hbm4_custom__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_hbm4_custom__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_hbm4_custom__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_hbm4_custom__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n==========================================================\n",0);
    if ((0U == vlSelfRef.tb_hbm4_custom__DOT__error_count)) {
        VL_WRITEF_NX(" ALL ADVANCED ARCHITECTURE TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX(" FAILED with %0d error(s)\n",1
                     , '~',32,vlSelfRef.tb_hbm4_custom__DOT__error_count);
    }
    VL_WRITEF_NX("==========================================================\n\n",0);
    VL_FINISH_MT("tb/tb_hbm4_custom.sv", 195, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h9e67c271_0;

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_tag;
    __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_tag = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data;
    VL_ZERO_W(256, __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data);
    VlWide<8>/*255:0*/ __Vtemp_2;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    VL_ASSIGN_W(256, __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data, Vtb_hbm4_custom__ConstPool__CONST_h9e67c271_0);
    __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_tag = 4U;
    vlSelfRef.tb_hbm4_custom__DOT__test_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_hbm4_custom__DOT__test_count);
    while ((1U & (~ (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) 
                      & ((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][67U] 
                                         >> 7U)) == (IData)(__Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_tag))) 
                     & (0U == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt)))))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             230);
    }
    __VExpandSel_WordIdx_1 = (((IData)(0x00000020U) 
                               + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                  << 8U)) >> 5U);
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000020U) 
                                             + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                << 8U)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if ((0U != (((((((((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                          [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                          << __VExpandSel_HiShift_1) 
                         & __VExpandSel_HiMask_1) | 
                        (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1)) 
                       ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[0U]) 
                      | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1)) 
                         ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[1U])) 
                     | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1)) 
                        ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[2U])) 
                    | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                          [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                          << __VExpandSel_HiShift_1) 
                         & __VExpandSel_HiMask_1) | 
                        (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                         >> __VExpandSel_LoShift_1)) 
                       ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[3U])) 
                   | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                         << __VExpandSel_HiShift_1) 
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                      ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[4U])) 
                  | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        << __VExpandSel_HiShift_1) 
                       & __VExpandSel_HiMask_1) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                   [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                   [
                                                   ((IData)(5U) 
                                                    + __VExpandSel_WordIdx_1)] 
                                                   >> __VExpandSel_LoShift_1)) 
                     ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[5U])) 
                 | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                    ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[6U])) 
                | ((((((0x0000003cU <= __VExpandSel_WordIdx_1)
                        ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(8U) + __VExpandSel_WordIdx_1)]) 
                      << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                    | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                       >> __VExpandSel_LoShift_1)) 
                   ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data[7U])))) {
        __VExpandSel_WordIdx_2 = (((IData)(0x00000020U) 
                                   + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                      << 8U)) >> 5U);
        __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000020U) 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                  << 8U)));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_2[0U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[1U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[2U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[3U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[4U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[5U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[6U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[7U] = (((((0x0000003cU <= __VExpandSel_WordIdx_2)
                             ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(8U) + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        VL_WRITEF_NX("  ERROR: Data mismatch for tag 0x%02h. Got: 0x%h Exp: 0x%h\n",3
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_tag
                     , '#',256,__Vtemp_2.data(), '#',256,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_data.data());
        vlSelfRef.tb_hbm4_custom__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: Received response for tag=0x%02h with matching data payload\n",1
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__7__expected_tag);
    }
    __Vfork_2__sync.done("tb/tb_hbm4_custom.sv", 172);
    co_return;
}

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*39:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__addr;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__addr = 0;
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__tag;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__tag = 0;
    CData/*3:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__prio;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__prio = 0;
    CData/*0:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__preempt;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__preempt = 0;
    IData/*31:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b = 0;
    // Body
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__preempt = 1U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__prio = 0x0fU;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__tag = 4U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__addr = 0ULL;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b = 0U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b)) {
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[1U] 
            = (0x00657f00U | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b 
                              >> 9U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[4U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[5U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[6U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[7U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[8U] 
            = ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__addr) 
               << 0x00000017U);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[9U] 
            = (0x7fffffffU & (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__addr) 
                               >> 9U) | ((IData)((__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xff80007fU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__prio) 
                   << 0x00000013U) | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__preempt) 
                                       << 0x00000012U) 
                                      | ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__tag) 
                                         << 7U))));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xffffff81U & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((0x0000000eU & (__Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b 
                                   << 1U)) | (7U == __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b)) 
                  << 1U));
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             219);
        while ((1U & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__host_req_ready)))) {
            Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                                  "@(posedge tb_hbm4_custom.clk)");
            co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_hbm4_custom.clk)", 
                                                                 "tb/tb_hbm4_custom.sv", 
                                                                 220);
        }
        __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b 
            = ((IData)(1U) + __Vtask_tb_hbm4_custom__DOT__send_flit_request__6__unnamedblk1__DOT__b);
    }
    vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] = (0xfffffffeU 
                                                   & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
    __Vfork_2__sync.done("tb/tb_hbm4_custom.sv", 171);
    co_return;
}

extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h36fa5bf4_0;

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_tag;
    __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_tag = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data;
    VL_ZERO_W(256, __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data);
    VlWide<8>/*255:0*/ __Vtemp_2;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    VL_ASSIGN_W(256, __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data, Vtb_hbm4_custom__ConstPool__CONST_h36fa5bf4_0);
    __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_tag = 1U;
    vlSelfRef.tb_hbm4_custom__DOT__test_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_hbm4_custom__DOT__test_count);
    while ((1U & (~ (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) 
                      & ((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][67U] 
                                         >> 7U)) == (IData)(__Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_tag))) 
                     & (0U == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt)))))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             230);
    }
    __VExpandSel_WordIdx_1 = (((IData)(0x00000020U) 
                               + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                  << 8U)) >> 5U);
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000020U) 
                                             + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                << 8U)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if ((0U != (((((((((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                          [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                          << __VExpandSel_HiShift_1) 
                         & __VExpandSel_HiMask_1) | 
                        (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1)) 
                       ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[0U]) 
                      | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1)) 
                         ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[1U])) 
                     | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1)) 
                        ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[2U])) 
                    | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                          [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                          << __VExpandSel_HiShift_1) 
                         & __VExpandSel_HiMask_1) | 
                        (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                         >> __VExpandSel_LoShift_1)) 
                       ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[3U])) 
                   | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                         << __VExpandSel_HiShift_1) 
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                      ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[4U])) 
                  | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        << __VExpandSel_HiShift_1) 
                       & __VExpandSel_HiMask_1) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                   [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                   [
                                                   ((IData)(5U) 
                                                    + __VExpandSel_WordIdx_1)] 
                                                   >> __VExpandSel_LoShift_1)) 
                     ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[5U])) 
                 | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                    ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[6U])) 
                | ((((((0x0000003cU <= __VExpandSel_WordIdx_1)
                        ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(8U) + __VExpandSel_WordIdx_1)]) 
                      << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                    | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                       [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                       >> __VExpandSel_LoShift_1)) 
                   ^ __Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data[7U])))) {
        __VExpandSel_WordIdx_2 = (((IData)(0x00000020U) 
                                   + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                      << 8U)) >> 5U);
        __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000020U) 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                  << 8U)));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_2[0U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[1U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[2U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[3U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[4U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[5U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[6U] = (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                           [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                           [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_2[7U] = (((((0x0000003cU <= __VExpandSel_WordIdx_2)
                             ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(8U) + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                            [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                            [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        VL_WRITEF_NX("  ERROR: Data mismatch for tag 0x%02h. Got: 0x%h Exp: 0x%h\n",3
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_tag
                     , '#',256,__Vtemp_2.data(), '#',256,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_data.data());
        vlSelfRef.tb_hbm4_custom__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: Received response for tag=0x%02h with matching data payload\n",1
                     , '#',8,__Vtask_tb_hbm4_custom__DOT__wait_response_tag__1__expected_tag);
    }
    __Vfork_1__sync.done("tb/tb_hbm4_custom.sv", 127);
    co_return;
}

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtb_hbm4_custom___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*39:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__addr;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__addr = 0;
    CData/*7:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__tag;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__tag = 0;
    CData/*3:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__prio;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__prio = 0;
    CData/*0:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__preempt;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__preempt = 0;
    IData/*31:0*/ __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b = 0;
    // Body
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__preempt = 1U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__prio = 0x0eU;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__tag = 1U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__addr = 0x0000000010000000ULL;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b = 0U;
    __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b)) {
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[1U] 
            = (0x00657f00U | (__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b 
                              >> 9U));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[4U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[5U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[6U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[7U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__host_req[8U] 
            = ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__addr) 
               << 0x00000017U);
        vlSelfRef.tb_hbm4_custom__DOT__host_req[9U] 
            = (0x7fffffffU & (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__addr) 
                               >> 9U) | ((IData)((__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xff80007fU & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__prio) 
                   << 0x00000013U) | (((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__preempt) 
                                       << 0x00000012U) 
                                      | ((IData)(__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__tag) 
                                         << 7U))));
        vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
            = ((0xffffff81U & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]) 
               | (((0x0000000eU & (__Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b 
                                   << 1U)) | (7U == __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b)) 
                  << 1U));
        Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_hbm4_custom.clk)", 
                                                             "tb/tb_hbm4_custom.sv", 
                                                             219);
        while ((1U & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__host_req_ready)))) {
            Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(vlSelf, 
                                                                  "@(posedge tb_hbm4_custom.clk)");
            co_await vlSelfRef.__VtrigSched_h7f885a59__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_hbm4_custom.clk)", 
                                                                 "tb/tb_hbm4_custom.sv", 
                                                                 220);
        }
        __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b 
            = ((IData)(1U) + __Vtask_tb_hbm4_custom__DOT__send_flit_request__0__unnamedblk1__DOT__b);
    }
    vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] = (0xfffffffeU 
                                                   & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U]);
    __Vfork_1__sync.done("tb/tb_hbm4_custom.sv", 126);
    co_return;
}

VlCoroutine Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__2(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000002faf080ULL, 
                                         nullptr, "tb/tb_hbm4_custom.sv", 
                                         254);
    VL_WRITEF_NX("ERROR: Simulation Global Timeout Watchdog Expired!\n",0);
    VL_FINISH_MT("tb/tb_hbm4_custom.sv", 256, "");
    co_return;
}

bool Vtb_hbm4_custom___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_hbm4_custom___024root___act_sequent__TOP__0(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___act_sequent__TOP__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical 
        = (vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
           & (((0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
                               >> 0x00000013U)) >= (IData)(vlSelfRef.tb_hbm4_custom__DOT__critical_threshold)) 
              & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__enable_preempt) 
                 | (vlSelfRef.tb_hbm4_custom__DOT__host_req[0U] 
                    >> 0x00000012U))));
    VL_ASSIGN_W(319, vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req, Vtb_hbm4_custom__ConstPool__CONST_hebd838a7_0);
    VL_ASSIGN_W(319, vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req, Vtb_hbm4_custom__ConstPool__CONST_hebd838a7_0);
    vlSelfRef.tb_hbm4_custom__DOT__host_req_ready = 0U;
    if ((1U & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical)))) {
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[0U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[0U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[1U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[1U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[2U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[2U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[3U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[3U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[4U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[4U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[5U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[5U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[6U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[6U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[7U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[7U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[8U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[8U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[9U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[9U];
        }
        if (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical) {
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[0U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[1U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[1U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[2U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[2U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[3U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[3U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[4U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[4U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[5U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[5U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[6U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[6U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[7U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[7U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[8U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[8U];
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[9U] 
                = vlSelfRef.tb_hbm4_custom__DOT__host_req[9U];
            vlSelfRef.tb_hbm4_custom__DOT__host_req_ready 
                = (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U] 
                   & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot));
        } else {
            vlSelfRef.tb_hbm4_custom__DOT__host_req_ready 
                = ((~ vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U]) 
                   & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot));
        }
    }
    if ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U])) {
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[1U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[1U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[2U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[2U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[3U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[3U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[4U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[4U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[5U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[5U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[6U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[6U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[7U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[7U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[8U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[9U];
    } else {
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[0U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[1U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[1U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[2U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[2U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[3U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[3U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[4U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[4U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[5U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[5U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[6U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[6U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[7U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[7U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[8U];
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U] 
            = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req[9U];
    }
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o 
        = (IData)(((1U == (0x0000001dU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U])) 
                   & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot)));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U]) 
           | ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot) 
              & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[1U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[1U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[1U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[2U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[2U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[2U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[3U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[3U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[3U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[4U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[4U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[4U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[5U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[5U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[5U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[6U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[6U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[6U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[7U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[7U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[7U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U]) 
           | (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U]));
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U] 
        = ((1U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U]) 
           | (0x7ffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U]));
}

extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_h3c29dc96_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_hba3542c9_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_hba354349_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_h0235c186_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_h52bdc2c9_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_h28e042c9_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_h596c22c9_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_h95f7026b_0;
extern const VlWide<68>/*2175:0*/ Vtb_hbm4_custom__ConstPool__CONST_hba32fe3b_0;
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h5b979007_0;

void Vtb_hbm4_custom___024root___nba_sequent__TOP__0(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___nba_sequent__TOP__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i;
    tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i;
    tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i = 0;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 16> tb_hbm4_custom__DOT__dram_inst__DOT__open_row;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            tb_hbm4_custom__DOT__dram_inst__DOT__open_row[__Vi0][__Vi1] = 0;
        }
    }
    CData/*6:0*/ __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot;
    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot = 0;
    CData/*2:0*/ __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt;
    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt = 0;
    IData/*31:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0;
    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0 = 0;
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0);
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v1;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2;
    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2 = 0;
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2);
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3;
    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3 = 0;
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3);
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4;
    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4 = 0;
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4);
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5;
    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5 = 0;
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5);
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6;
    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6 = 0;
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6);
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v7;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v7 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v8;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v8 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v9;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v9 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10;
    VL_ZERO_W(256, __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10);
    IData/*31:0*/ __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10;
    __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10 = 0;
    VlWide<68>/*2159:0*/ __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10;
    VL_ZERO_W(2160, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10);
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10);
    IData/*31:0*/ __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11;
    __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 = 0;
    VlWide<68>/*2159:0*/ __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11;
    VL_ZERO_W(2160, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11);
    VlWide<68>/*2159:0*/ __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11;
    VL_ZERO_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11);
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v12;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v12 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v13;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v13 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v14;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v14 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v15;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v15 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v16;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v16 = 0;
    CData/*6:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v17;
    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v0;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v1;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v2;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v3;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v4;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v5;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v6;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v7;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v8;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v9;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v10;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v11;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v12;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v12 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v13;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v14;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v15;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v16;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v16 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v17;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v18;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v19;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v20;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v20 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v21;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v22;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v23;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v24;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v24 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v25;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v26;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v27;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v28;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v28 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v29;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v30;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v31;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v32;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v32 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v33;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v33 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v34;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v34 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v35;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v35 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v36;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v36 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v37;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v37 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v38;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v38 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v39;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v39 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v40;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v40 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v41;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v41 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v42;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v42 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v43;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v43 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v44;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v44 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v45;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v45 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v46;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v46 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v47;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v47 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v48;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v48 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v49;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v49 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v50;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v50 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v51;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v51 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v52;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v52 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v53;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v53 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v54;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v54 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v55;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v55 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v56;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v56 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v57;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v57 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v58;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v58 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v59;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v59 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v60;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v60 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v61;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v61 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v62;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v62 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v63;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v63 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v64;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v64 = 0;
    CData/*1:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65;
    __VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 = 0;
    CData/*3:0*/ __VdlyDim1__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65;
    __VdlyDim1__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 = 0;
    CData/*3:0*/ __VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v17;
    __VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v0;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v1;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v1 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v2;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v3;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v3 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v4;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v5;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v6;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v10;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v10 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v11;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v11 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v12;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v12 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v13;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v13 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v14;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v15;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v16;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v16 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v20;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v20 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v21;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v21 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v22;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v22 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v23;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v23 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v24;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v24 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v25;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v26;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v26 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v30;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v30 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v31;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v31 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v32;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v32 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v33;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v33 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v34;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v34 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v35;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v35 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v36;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v36 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v40;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v40 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v41;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v41 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v42;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v42 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v43;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v43 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v44;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v44 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v45;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v45 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v46;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v46 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v50;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v50 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v51;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v51 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v52;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v52 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v53;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v53 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v54;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v54 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v55;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v55 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v56;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v56 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v60;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v60 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v61;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v61 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v62;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v62 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v63;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v63 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v64;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v64 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v65;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v66;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v66 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v70;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v70 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v71;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v71 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v72;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v72 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v73;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v73 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v74;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v74 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v75;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v75 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v76;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v76 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v80;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v80 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v81;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v81 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v82;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v82 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v83;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v83 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v84;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v84 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v85;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v85 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v86;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v86 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v90;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v90 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v91;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v91 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v92;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v92 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v93;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v93 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v94;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v94 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v95;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v95 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v96;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v96 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v100;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v100 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v101;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v101 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v102;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v102 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v103;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v103 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v104;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v104 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v105;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v105 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v106;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v106 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v110;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v110 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v111;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v111 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v112;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v112 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v113;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v113 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v114;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v114 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v115;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v115 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v116;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v116 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v120;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v120 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v121;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v121 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v122;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v122 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v123;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v123 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v124;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v124 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v125;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v125 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v126;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v126 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v130;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v130 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v131;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v131 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v132;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v132 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v133;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v133 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v134;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v134 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v135;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v135 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v136;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v136 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v140;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v140 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v141;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v141 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v142;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v142 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v143;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v143 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v144;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v144 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v145;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v145 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v146;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v146 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v150;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v150 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v151;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v151 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v152;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v152 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v153;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v153 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v154;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v154 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v155;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v155 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v156;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v156 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v160;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v160 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v161;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v161 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v162;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v162 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v163;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v163 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v164;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v164 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v165;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v165 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v166;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v166 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v170;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v170 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v171;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v171 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v172;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v172 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v173;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v173 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v174;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v174 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v175;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v175 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v176;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v176 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v180;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v180 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v181;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v181 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v182;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v182 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v183;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v183 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v184;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v184 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v185;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v185 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v186;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v186 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v190;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v190 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v191;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v191 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v192;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v192 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v193;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v193 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v194;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v194 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v195;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v195 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v196;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v196 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v200;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v200 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v201;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v201 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v202;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v202 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v203;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v203 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v204;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v204 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v205;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v205 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v206;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v206 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v210;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v210 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v211;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v211 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v212;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v212 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v213;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v213 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v214;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v214 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v215;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v215 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v216;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v216 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v220;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v220 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v221;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v221 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v222;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v222 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v223;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v223 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v224;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v224 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v225;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v225 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v226;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v226 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v230;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v230 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v231;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v231 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v232;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v232 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v233;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v233 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v234;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v234 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v235;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v235 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v236;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v236 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v240;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v240 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v241;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v241 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v242;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v242 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v243;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v243 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v244;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v244 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v245;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v245 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v246;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v246 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v250;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v250 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v251;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v251 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v252;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v252 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v253;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v253 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v254;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v254 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v255;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v255 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v256;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v256 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v260;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v260 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v261;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v261 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v262;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v262 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v263;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v263 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v264;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v264 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v265;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v265 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v266;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v266 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v270;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v270 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v271;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v271 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v272;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v272 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v273;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v273 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v274;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v274 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v275;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v275 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v276;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v276 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v280;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v280 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v281;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v281 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v282;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v282 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v283;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v283 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v284;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v284 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v285;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v285 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v286;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v286 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v290;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v290 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v291;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v291 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v292;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v292 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v293;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v293 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v294;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v294 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v295;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v295 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v296;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v296 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v300;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v300 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v301;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v301 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v302;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v302 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v303;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v303 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v304;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v304 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v305;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v305 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v306;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v306 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v310;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v310 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v311;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v311 = 0;
    QData/*39:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v312;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v312 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v313;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v313 = 0;
    CData/*3:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v314;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v314 = 0;
    CData/*1:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v315;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v315 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v316;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v316 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v321;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v321 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v323;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v323 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v325;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v325 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v327;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v327 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v329;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v329 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v331;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v331 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v333;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v333 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v335;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v335 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v337;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v337 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v339;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v339 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v341;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v341 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v343;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v343 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v345;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v345 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v347;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v347 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v349;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v349 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v351;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v351 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v353;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v353 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v355;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v355 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v357;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v357 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v359;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v359 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v361;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v361 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v363;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v363 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v365;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v365 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v367;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v367 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v369;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v369 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v371;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v371 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v373;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v373 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v375;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v375 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v377;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v377 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v379;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v379 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v381;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v381 = 0;
    CData/*7:0*/ __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382;
    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v383;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v383 = 0;
    CData/*0:0*/ __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v18;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v18 = 0;
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    VlWide<8>/*255:0*/ __Vtemp_11;
    VlWide<8>/*255:0*/ __Vtemp_13;
    VlWide<8>/*255:0*/ __Vtemp_15;
    VlWide<8>/*255:0*/ __Vtemp_17;
    VlWide<8>/*255:0*/ __Vtemp_19;
    VlWide<8>/*255:0*/ __Vtemp_21;
    VlWide<8>/*255:0*/ __Vtemp_23;
    VlWide<8>/*255:0*/ __Vtemp_25;
    VlWide<8>/*255:0*/ __Vtemp_27;
    VlWide<8>/*255:0*/ __Vtemp_29;
    VlWide<8>/*255:0*/ __Vtemp_31;
    VlWide<8>/*255:0*/ __Vtemp_33;
    VlWide<8>/*255:0*/ __Vtemp_35;
    VlWide<8>/*255:0*/ __Vtemp_37;
    VlWide<8>/*255:0*/ __Vtemp_39;
    VlWide<8>/*255:0*/ __Vtemp_41;
    VlWide<8>/*255:0*/ __Vtemp_43;
    VlWide<8>/*255:0*/ __Vtemp_45;
    VlWide<8>/*255:0*/ __Vtemp_47;
    VlWide<8>/*255:0*/ __Vtemp_49;
    VlWide<8>/*255:0*/ __Vtemp_51;
    VlWide<8>/*255:0*/ __Vtemp_53;
    VlWide<8>/*255:0*/ __Vtemp_55;
    VlWide<8>/*255:0*/ __Vtemp_57;
    VlWide<8>/*255:0*/ __Vtemp_59;
    VlWide<8>/*255:0*/ __Vtemp_61;
    VlWide<8>/*255:0*/ __Vtemp_63;
    // Body
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v1 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v2 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v3 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v4 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v5 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v6 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v7 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v8 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v9 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v10 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v11 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v12 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v13 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v14 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v15 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v16 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v17 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v18 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v19 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v20 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v21 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v22 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v23 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v24 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v25 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v26 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v27 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v28 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v29 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v30 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v31 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v32 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v33 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v34 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v35 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v36 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v37 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v38 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v39 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v40 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v41 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v42 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v43 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v44 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v45 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v46 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v47 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v48 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v49 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v50 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v51 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v52 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v53 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v54 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v55 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v56 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v57 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v58 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v59 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v60 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v61 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v62 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v63 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v64 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v0 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v0 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v6 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v10 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v16 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v20 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v26 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v30 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v36 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v40 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v46 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v50 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v56 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v60 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v66 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v70 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v76 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v80 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v86 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v90 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v96 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v100 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v106 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v110 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v116 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v120 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v126 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v130 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v136 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v140 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v146 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v150 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v156 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v160 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v166 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v170 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v176 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v180 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v186 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v190 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v196 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v200 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v206 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v210 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v216 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v220 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v226 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v230 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v236 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v240 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v246 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v250 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v256 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v260 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v266 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v270 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v276 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v280 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v286 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v290 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v296 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v300 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v306 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v310 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v316 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v321 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v323 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v325 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v327 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v329 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v331 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v333 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v335 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v337 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v339 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v341 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v343 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v345 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v347 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v349 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v351 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v353 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v355 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v357 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v359 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v361 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v363 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v365 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v367 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v369 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v371 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v373 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v375 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v377 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v379 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v381 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v383 = 0U;
    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v18 = 0U;
    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot 
        = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot;
    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt 
        = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt;
    if (vlSelfRef.tb_hbm4_custom__DOT__rst_n) {
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000080U, vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i)) {
            if ((0x00008000U & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                 [(0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i)][67U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0 
                    = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [(0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i)][0U]);
                __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0 
                    = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i);
                VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
                __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0[0U] 
                    = __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0;
                vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0, Vtb_hbm4_custom__ConstPool__CONST_h3c29dc96_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v0));
            }
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i);
        }
        if (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
             & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))) {
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v1 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba3542c9_0, Vtb_hbm4_custom__ConstPool__CONST_hba3542c9_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v1));
            __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2 
                = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                  >> 7U));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2[67U] 
                = ((0x0000807fU & __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2[67U]) 
                   | (0x0000ffffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2) 
                                     << 7U)));
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2, Vtb_hbm4_custom__ConstPool__CONST_hba354349_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v2));
            __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3 
                = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                             << 9U) 
                                            | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                               >> 0x00000017U)));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3[65U] 
                = ((0x7fffffffU & __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3[65U]) 
                   | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3) 
                      << 0x0000001fU));
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3[66U] 
                = (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3) 
                    >> 1U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3 
                                       >> 0x00000020U)) 
                              << 0x0000001fU));
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3[67U] 
                = ((0x0000ff80U & __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3[67U]) 
                   | (0x0000ffffU & ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3 
                                              >> 0x00000020U)) 
                                     >> 1U)));
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3, Vtb_hbm4_custom__ConstPool__CONST_h0235c186_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v3));
            __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4 
                = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                  >> 0x0000000fU));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4[65U] 
                = ((0x807fffffU & __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4[65U]) 
                   | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4) 
                      << 0x00000017U));
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4, Vtb_hbm4_custom__ConstPool__CONST_h52bdc2c9_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v4));
            __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5 
                = (0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U] 
                                  >> 0x0000001bU));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5[65U] 
                = ((0xff87ffffU & __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5[65U]) 
                   | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5) 
                      << 0x00000013U));
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5, Vtb_hbm4_custom__ConstPool__CONST_h28e042c9_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v5));
            __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6 
                = (3U & ((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U] 
                          << 1U) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U] 
                                    >> 0x0000001fU)));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
            __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6[65U] 
                = ((0xfff9ffffU & __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6[65U]) 
                   | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6) 
                      << 0x00000011U));
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6, Vtb_hbm4_custom__ConstPool__CONST_h596c22c9_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v6));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v7 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_h95f7026b_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v7));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v8 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_hba32fe3b_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v8));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v9 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot;
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_h3c29dc96_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v9));
        }
        if (vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid) {
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000080U, vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i)) {
                if (((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                      [(0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i)][67U] 
                      >> 0x0000000fU) & ((0x000000ffU 
                                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                             [(0x0000007fU 
                                               & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i)][67U] 
                                             >> 7U)) 
                                         == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[0U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[1U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[2U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[3U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[4U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[5U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[6U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U];
                    __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10[7U] 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U];
                    __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10 
                        = ((IData)(0x00000020U) + (0x000007ffU 
                                                   & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx) 
                                                      << 8U)));
                    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10 
                        = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i);
                    VL_ASSIGN_W(2160, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
                    VL_ASSIGNSEL_WW(2160, 256, __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, Vtb_hbm4_custom__ConstPool__CONST_h5b979007_0);
                    VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
                    VL_ASSIGNSEL_WW(2160, 256, __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, __VdlyVal__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10);
                    vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v10));
                    __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 
                        = ((IData)(0x00000821U) + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx));
                    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 
                        = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i);
                    VL_ASSIGN_W(2160, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
                    __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11[(__VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 
                                                                                >> 5U)] 
                        = (__VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11
                           [(__VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 
                             >> 5U)] | ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11)));
                    VL_ASSIGN_W(2160, __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11, Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0);
                    __VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11[(__VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 
                                                                                >> 5U)] 
                        = (__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11
                           [(__VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11 
                             >> 5U)] | ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __VdlyLsb__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11)));
                    vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11, __VdlyMask__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v11));
                    if (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat) 
                         | (7U == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx)))) {
                        __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v12 
                            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i);
                        vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba32fe3b_0, Vtb_hbm4_custom__ConstPool__CONST_hba32fe3b_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v12));
                    }
                }
                vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i);
            }
        }
        if (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) {
            if (((0U == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt)) 
                 & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready)))) {
                if (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate) 
                     & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio) 
                        > (0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                          [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][65U] 
                                          >> 0x0000001bU))))) {
                    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot 
                        = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot;
                }
            }
            if (vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready) {
                if ((7U == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt))) {
                    __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v13 
                        = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot;
                    vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_hba3542c9_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v13));
                    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active = 0U;
                    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt = 0U;
                } else {
                    __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt)));
                }
            }
        } else if (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate) {
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active = 1U;
            __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot 
                = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot;
            __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt = 0U;
        }
    } else {
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000080U, vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i)) {
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v14 
                = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_hba3542c9_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v14));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v15 
                = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_hba32fe3b_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v15));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v16 
                = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_h95f7026b_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v16));
            __VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v17 
                = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_hba35c2c9_0, Vtb_hbm4_custom__ConstPool__CONST_h3c29dc96_0, (IData)(__VdlyDim0__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob__v17));
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i);
        }
        __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active = 0U;
        __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot = 0U;
    }
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot 
        = __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot;
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt 
        = __Vdly__tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt;
    vlSelfRef.__VdlyCommitQueuetb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob.commit(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob);
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate = 0U;
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot = 0U;
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio = 0U;
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age = 0U;
    tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)) {
        if ((1U & ((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                    [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][67U] 
                    >> 0x0000000fU) & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                   [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][65U]))) {
            if (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate) {
                if (((0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                     [(0x0000007fU 
                                       & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][65U] 
                                     >> 0x0000001bU)) 
                     > (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio))) {
                    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot 
                        = (0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
                    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio 
                        = (0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                          [(0x0000007fU 
                                            & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][65U] 
                                          >> 0x0000001bU));
                    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age 
                        = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][0U];
                } else if ((((0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                             [(0x0000007fU 
                                               & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][65U] 
                                             >> 0x0000001bU)) 
                             == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio)) 
                            & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                               [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][0U] 
                               > vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age))) {
                    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot 
                        = (0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
                    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age 
                        = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][0U];
                }
            } else {
                vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate = 1U;
                vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot 
                    = (0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
                vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio 
                    = (0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                      [(0x0000007fU 
                                        & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][65U] 
                                      >> 0x0000001bU));
                vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age 
                    = vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                    [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][0U];
            }
        }
        tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot = 0U;
    vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot = 0U;
    tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i)) {
        if ((1U & ((~ (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                       [(0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i)][67U] 
                       >> 0x0000000fU)) & (~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))))) {
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot = 1U;
            vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot 
                = (0x0000007fU & tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i);
        }
        tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i);
    }
    if (vlSelfRef.tb_hbm4_custom__DOT__rst_n) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 0U;
        if (vlSelfRef.tb_hbm4_custom__DOT__trigger_refresh) {
            __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v0 = 1U;
        } else {
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[0U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[0U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[0U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v1 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v2 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v3 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v4 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[1U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[1U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[1U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v5 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v6 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v7 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v8 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[2U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[2U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[2U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v9 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v10 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v11 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v12 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[3U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[3U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[3U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v13 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v14 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v15 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v16 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[4U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[4U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[4U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v17 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v18 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v19 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v20 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[5U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[5U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[5U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v21 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v22 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v23 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v24 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[6U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[6U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[6U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v25 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v26 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v27 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v28 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[7U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[7U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[7U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v29 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v30 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v31 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v32 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[8U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[8U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[8U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v33 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v34 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v35 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v36 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[9U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[9U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[9U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v37 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v38 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v39 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v40 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[10U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[10U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[10U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v41 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v42 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v43 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v44 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[11U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[11U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[11U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v45 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v46 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v47 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v48 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[12U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[12U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[12U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v49 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v50 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v51 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v52 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[13U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[13U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[13U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v53 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v54 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v55 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v56 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[14U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[14U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[14U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v57 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v58 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v59 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v60 = 1U;
                    }
                }
            }
            if ((0U < vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[15U])) {
                __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[15U]) 
                                      - (IData)(1U)));
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16 = 1U;
                if ((1U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[15U])) {
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][0U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v61 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][1U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v62 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][2U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v63 = 1U;
                    }
                    if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][3U])) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v64 = 1U;
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
              & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                 >> 0x00000012U)) & (0x0cU <= (0x0000000fU 
                                               & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                  >> 0x00000013U))))) {
            vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_bg 
                = (0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U] 
                                  >> 0x0000001bU));
            vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_b 
                = (3U & ((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U] 
                          << 1U) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U] 
                                    >> 0x0000001fU)));
            if ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                 [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_bg]
                 [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_b])) {
                vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt 
                    = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt)));
                __VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 
                    = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_b;
                __VdlyDim1__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 
                    = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_bg;
                __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65 = 1U;
                __VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v17 
                    = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_bg;
            }
        }
        if ((IData)((1U == (0x0000001dU & vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U])))) {
            vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg 
                = (0x0000000fU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U] 
                                  >> 0x0000001bU));
            vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b 
                = (3U & ((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U] 
                          << 1U) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U] 
                                    >> 0x0000001fU)));
            {
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v0 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v1 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v2 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v3 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v4 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v5 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v6 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v10 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v11 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v12 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v13 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v14 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v15 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v16 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v20 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v21 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v22 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v23 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v24 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v25 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v26 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v30 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v31 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v32 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v33 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v34 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v35 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v36 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v40 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v41 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v42 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v43 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v44 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v45 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v46 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v50 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v51 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v52 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v53 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v54 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v55 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v56 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v60 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v61 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v62 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v63 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v64 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v65 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v66 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v70 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v71 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v72 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v73 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v74 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v75 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v76 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v80 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v81 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v82 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v83 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v84 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v85 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v86 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v90 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v91 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v92 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v93 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v94 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v95 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v96 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v100 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v101 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v102 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v103 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v104 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v105 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v106 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v110 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v111 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v112 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v113 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v114 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v115 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v116 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v120 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v121 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v122 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v123 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v124 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v125 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v126 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v130 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v131 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v132 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v133 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v134 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v135 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v136 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v140 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v141 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v142 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v143 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v144 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v145 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v146 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v150 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v151 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v152 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v153 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v154 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v155 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v156 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v160 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v161 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v162 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v163 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v164 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v165 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v166 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v170 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v171 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v172 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v173 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v174 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v175 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v176 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v180 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v181 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v182 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v183 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v184 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v185 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v186 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v190 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v191 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v192 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v193 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v194 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v195 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v196 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v200 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v201 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v202 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v203 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v204 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v205 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v206 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v210 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v211 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v212 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v213 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v214 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v215 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v216 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v220 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v221 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v222 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v223 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v224 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v225 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v226 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v230 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v231 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v232 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v233 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v234 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v235 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v236 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v240 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v241 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v242 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v243 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v244 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v245 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v246 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v250 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v251 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v252 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v253 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v254 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v255 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v256 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v260 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v261 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v262 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v263 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v264 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v265 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v266 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v270 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v271 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v272 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v273 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v274 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v275 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v276 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v280 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v281 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v282 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v283 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v284 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v285 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v286 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v290 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v291 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v292 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v293 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v294 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v295 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v296 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v300 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v301 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v302 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v303 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v304 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v305 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v306 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308 = 1U;
                    }
                    goto __Vlabel0;
                }
                if ((1U & (~ (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U] 
                              >> 7U)))) {
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v310 = 1U;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v311 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 7U));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v312 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[9U])) 
                             << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[8U])) 
                                       >> 0x00000017U)));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v313 
                        = (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o[0U] 
                                          >> 0x0000000fU));
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v314 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg;
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v315 
                        = vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b;
                    if ((((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o) 
                          & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                             >> 0x00000012U)) & (0x0cU 
                                                 <= 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                     >> 0x00000013U))))) {
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v316 = 1U;
                    } else {
                        __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318 
                            = ((2U == vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg]
                                [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b])
                                ? (0x000000ffU & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer
                                                            [vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg])))
                                : 6U);
                        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318 = 1U;
                    }
                }
                __Vlabel0: ;
            }
        }
        {
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_1[2U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000010U) 
                                     | (((IData)((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                        >> 0x00000017U)))) 
                                         >> 0x00000018U) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           << 8U)));
                    __Vtemp_1[3U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000018U) 
                                     | ((((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000010U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           >> 0x00000018U)));
                    __Vtemp_1[4U] = ((((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                      >> 0x00000017U)))) 
                                       >> 8U) | ((IData)(
                                                         ((0x000000ffffffffffULL 
                                                           & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                                 >> 0x00000017U))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000018U)) 
                                     | ((IData)(((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                        >> 0x00000017U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_1[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_1[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_1[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v321 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_3[2U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000010U) 
                                     | (((IData)((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                        >> 0x00000017U)))) 
                                         >> 0x00000018U) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           << 8U)));
                    __Vtemp_3[3U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000018U) 
                                     | ((((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000010U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           >> 0x00000018U)));
                    __Vtemp_3[4U] = ((((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                      >> 0x00000017U)))) 
                                       >> 8U) | ((IData)(
                                                         ((0x000000ffffffffffULL 
                                                           & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                                 >> 0x00000017U))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000018U)) 
                                     | ((IData)(((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                        >> 0x00000017U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_3[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_3[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_3[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v323 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_5[2U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000010U) 
                                     | (((IData)((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                        >> 0x00000017U)))) 
                                         >> 0x00000018U) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           << 8U)));
                    __Vtemp_5[3U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000018U) 
                                     | ((((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000010U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           >> 0x00000018U)));
                    __Vtemp_5[4U] = ((((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                      >> 0x00000017U)))) 
                                       >> 8U) | ((IData)(
                                                         ((0x000000ffffffffffULL 
                                                           & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                                 >> 0x00000017U))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000018U)) 
                                     | ((IData)(((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                        >> 0x00000017U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_5[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_5[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_5[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v325 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_7[2U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000010U) 
                                     | (((IData)((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                        >> 0x00000017U)))) 
                                         >> 0x00000018U) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           << 8U)));
                    __Vtemp_7[3U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000018U) 
                                     | ((((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000010U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           >> 0x00000018U)));
                    __Vtemp_7[4U] = ((((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                      >> 0x00000017U)))) 
                                       >> 8U) | ((IData)(
                                                         ((0x000000ffffffffffULL 
                                                           & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                                 >> 0x00000017U))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000018U)) 
                                     | ((IData)(((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                        >> 0x00000017U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_7[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_7[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_7[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v327 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_9[2U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000010U) 
                                     | (((IData)((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                        >> 0x00000017U)))) 
                                         >> 0x00000018U) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           << 8U)));
                    __Vtemp_9[3U] = (((IData)((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                     >> 0x00000017U)))) 
                                      << 0x00000018U) 
                                     | ((((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000010U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000010U)) 
                                        | ((IData)(
                                                   ((0x000000ffffffffffULL 
                                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                           >> 0x00000017U))) 
                                                    >> 0x00000020U)) 
                                           >> 0x00000018U)));
                    __Vtemp_9[4U] = ((((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                      >> 0x00000017U)))) 
                                       >> 8U) | ((IData)(
                                                         ((0x000000ffffffffffULL 
                                                           & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                                 >> 0x00000017U))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000018U)) 
                                     | ((IData)(((0x000000ffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                        >> 0x00000017U))) 
                                                 >> 0x00000020U)) 
                                        >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_9[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_9[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_9[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v329 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_11[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_11[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_11[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_11[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_11[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_11[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v331 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_13[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_13[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_13[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_13[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_13[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_13[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v333 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_15[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_15[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_15[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_15[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_15[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_15[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v335 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_17[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_17[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_17[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_17[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_17[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_17[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v337 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_19[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_19[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_19[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_19[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_19[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_19[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v339 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_21[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_21[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_21[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_21[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_21[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_21[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v341 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_23[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_23[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_23[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_23[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_23[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_23[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v343 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_25[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_25[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_25[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_25[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_25[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_25[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v345 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_27[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_27[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_27[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_27[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_27[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_27[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v347 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_29[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_29[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_29[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_29[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_29[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_29[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v349 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_31[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_31[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_31[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_31[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_31[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_31[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v351 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_33[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_33[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_33[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_33[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_33[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_33[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v353 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_35[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_35[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_35[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_35[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_35[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_35[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v355 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_37[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_37[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_37[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_37[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_37[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_37[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v357 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_39[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_39[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_39[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_39[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_39[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_39[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v359 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_41[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_41[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_41[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_41[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_41[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_41[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v361 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_43[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_43[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_43[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_43[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_43[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_43[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v363 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_45[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_45[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_45[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_45[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_45[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_45[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v365 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_47[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_47[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_47[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_47[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_47[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_47[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v367 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_49[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_49[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_49[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_49[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_49[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_49[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v369 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_51[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_51[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_51[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_51[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_51[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_51[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v371 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_53[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_53[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_53[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_53[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_53[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_53[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v373 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_55[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_55[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_55[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_55[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_55[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_55[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v375 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_57[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_57[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_57[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_57[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_57[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_57[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v377 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_59[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_59[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_59[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_59[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_59[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_59[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v379 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_61[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_61[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_61[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_61[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_61[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_61[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v381 = 1U;
                    goto __Vlabel1;
                }
            }
            if ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U])) {
                if ((0U < (0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
                                          >> 1U)))) {
                    __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382 
                        = (0x000000ffU & (((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
                                              >> 1U)) 
                                          - (IData)(1U)));
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382 = 1U;
                } else {
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 1U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag 
                        = (0x000000ffU & ((vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U] 
                                           << 1U) | 
                                          (vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U] 
                                           >> 0x0000001fU)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 1U;
                    __Vtemp_63[2U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000010U) 
                                      | (((IData)((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                         >> 0x00000017U)))) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            << 8U)));
                    __Vtemp_63[3U] = (((IData)((0x000000ffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                      >> 0x00000017U)))) 
                                       << 0x00000018U) 
                                      | ((((IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                          >> 0x00000017U)))) 
                                           >> 0x00000010U) 
                                          | ((IData)(
                                                     ((0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                             >> 0x00000017U))) 
                                                      >> 0x00000020U)) 
                                             << 0x00000010U)) 
                                         | ((IData)(
                                                    ((0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                          << 9U) 
                                                         | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                            >> 0x00000017U))) 
                                                     >> 0x00000020U)) 
                                            >> 0x00000018U)));
                    __Vtemp_63[4U] = ((((IData)((0x000000ffffffffffULL 
                                                 & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                       >> 0x00000017U)))) 
                                        >> 8U) | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                                  >> 0x00000017U))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000018U)) 
                                      | ((IData)(((0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                       << 9U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                         >> 0x00000017U))) 
                                                  >> 0x00000020U)) 
                                         >> 0x00000010U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[0U] 
                        = (IData)((0x000000ffffffffffULL 
                                   & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                       << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                 >> 0x00000017U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[1U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[2U] 
                        = __Vtemp_63[2U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[3U] 
                        = __Vtemp_63[3U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[4U] 
                        = __Vtemp_63[4U];
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[5U] 
                        = ((IData)((0x000000ffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                        << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                  >> 0x00000017U)))) 
                           | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                            << 9U) 
                                           | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                              >> 0x00000017U))) 
                                       >> 0x00000020U)) 
                              >> 8U));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[6U] 
                        = (((IData)((0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                         << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                   >> 0x00000017U)))) 
                            << 8U) | (IData)(((0x000000ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                     >> 0x00000017U))) 
                                              >> 0x00000020U)));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = ((0xffff0000U & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]) 
                           | (0x0000ffffU & (((IData)(
                                                      (0x000000ffffffffffULL 
                                                       & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                             >> 0x00000017U)))) 
                                              >> 0x00000018U) 
                                             | ((IData)(
                                                        ((0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U])) 
                                                                >> 0x00000017U))) 
                                                         >> 0x00000020U)) 
                                                << 8U))));
                    vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U] 
                        = (0x0000ffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data[7U]);
                    __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v383 = 1U;
                }
            }
            __Vlabel1: ;
        }
    } else {
        __VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v18 = 1U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat = 0U;
        VL_ASSIGN_W(256, vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data, Vtb_hbm4_custom__ConstPool__CONST_h9e67c271_0);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v0) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[0U] = 0x32U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][0U] = 2U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[0U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v1;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[1U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v2;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[2U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v3;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[3U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v4;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[4U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v5;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[5U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v6;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[6U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v7;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[7U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v8;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[8U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v9;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[9U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v10;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[10U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v11;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[11U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v12;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[12U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v13;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[13U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v14;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[14U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v15;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[15U] 
            = __VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v16;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[__VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v17] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v1) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v2) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v3) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v4) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v5) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v6) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v7) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v8) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v9) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v10) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v11) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v12) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v13) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v14) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v15) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v16) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v17) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v18) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v19) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v20) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v21) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v22) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v23) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v24) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v25) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v26) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v27) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v28) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v29) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v30) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v31) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v32) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v33) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v34) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v35) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v36) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v37) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v38) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v39) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v40) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v41) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v42) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v43) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v44) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v45) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v46) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v47) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v48) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v49) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v50) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v51) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v52) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v53) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v54) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v55) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v56) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v57) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v58) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v59) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v60) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v61) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][0U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v62) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][1U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v63) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][2U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v64) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][3U] = 0U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[__VdlyDim1__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65][__VdlyDim0__tb_hbm4_custom__DOT__dram_inst__DOT__bank_state__v65] = 1U;
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v0) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v1) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v1) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v2) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v2) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v2 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v3) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v4) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v5) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v6) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v8) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v10) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v11) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v11) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v12) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v12) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v12 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v13) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v14) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v15) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v16) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v18) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v20) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v21) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v21) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v22) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v22) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v22 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v23) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v24) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v25) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v26) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v28) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v30) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v31) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v31) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v32) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v32) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v32 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v33) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v34) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v35) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v36) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v38) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v40) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v41) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v41) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v42) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v42) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v42 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v43) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v44) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v45) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v46) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v48) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v50) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v51) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v51) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v52) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v52) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v52 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v53) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v54) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v55) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v56) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v58) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v60) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v61) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v61) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v62) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v62) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v62 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v63) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v64) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v65) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v66) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v68) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v70) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v71) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v71) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v72) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v72) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v72 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v73) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v74) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v75) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v76) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v78) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v80) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v81) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v81) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v82) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v82) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v82 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v83) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v84) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v85) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v86) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v88) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v90) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v91) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v91) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v92) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v92) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v92 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v93) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v94) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v95) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v96) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v98) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v100) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v101) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v101) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v102) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v102) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v102 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v103) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v104) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v105) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v106) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v108) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v110) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v111) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v111) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v112) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v112) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v112 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v113) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v114) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v115) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v116) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v118) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v120) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v121) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v121) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v122) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v122) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v122 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v123) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v124) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v125) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v126) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v128) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v130) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v131) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v131) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v132) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v132) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v132 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v133) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v134) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v135) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v136) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v138) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v140) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v141) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v141) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v142) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v142) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v142 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v143) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v144) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v145) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v146) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v148) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v150) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v151) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v151) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v152) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v152) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v152 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v153) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v154) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v155) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v156) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v158) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v160) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v161) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v161) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v162) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v162) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v162 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v163) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v164) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v165) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v166) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v168) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v170) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v171) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v171) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v172) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v172) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v172 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v173) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v174) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v175) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v176) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v178) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v180) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v181) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v181) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v182) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v182) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v182 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v183) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v184) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v185) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v186) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v188) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v190) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v191) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v191) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v192) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v192) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v192 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v193) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v194) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v195) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v196) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v198) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v200) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v201) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v201) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v202) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v202) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v202 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v203) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v204) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v205) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v206) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v208) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v210) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v211) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v211) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v212) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v212) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v212 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v213) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v214) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v215) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v216) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v218) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v220) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v221) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v221) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v222) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v222) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v222 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v223) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v224) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v225) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v226) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v228) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v230) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v231) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v231) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v232) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v232) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v232 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v233) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v234) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v235) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v236) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v238) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v240) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v241) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v241) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v242) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v242) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v242 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v243) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v244) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v245) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v246) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v248) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v250) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v251) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v251) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v252) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v252) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v252 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v253) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v254) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v255) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v256) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v258) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v260) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v261) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v261) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v262) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v262) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v262 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v263) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v264) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v265) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v266) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v268) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v270) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v271) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v271) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v272) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v272) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v272 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v273) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v274) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v275) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v276) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v278) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v280) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v281) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v281) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v282) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v282) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v282 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v283) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v284) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v285) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v286) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v288) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v290) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v291) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v291) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v292) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v292) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v292 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v293) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v294) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v295) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v296) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v298) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v300) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v301) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v301) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v302) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v302) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v302 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v303) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v304) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v305) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v306) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v308) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v310) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U] 
            = (0x00000080U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U] 
            = ((0x7fffffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v311) 
                  << 0x0000001fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U] 
            = ((0x00000080U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U]) 
               | (0x000000ffU & ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v311) 
                                 >> 1U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = ((0x007fffffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v312) 
                  << 0x00000017U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U] 
            = ((0x80000000U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][1U]) 
               | (((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v312) 
                   >> 9U) | ((IData)((__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v312 
                                      >> 0x00000020U)) 
                             << 0x00000017U)));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = ((0xff807fffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v313) 
                  << 0x0000000fU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = ((0xffff87ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v314) 
                  << 0x0000000bU));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = ((0xfffff9ffU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v315) 
                  << 9U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v316) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = (4U | (0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = (1U | vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v318) 
                  << 1U));
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = (0xfffffffeU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v320) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v321) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v322) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v323) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v324) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v325) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v326) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v327) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v328) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v329) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v330) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v331) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v332) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v333) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v334) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v335) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v336) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v337) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v338) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v339) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v340) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v341) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v342) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v343) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v344) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v345) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v346) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v347) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v348) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v349) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v350) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v351) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v352) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v353) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v354) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v355) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v356) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v357) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v358) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v359) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v360) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v361) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v362) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v363) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v364) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v365) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v366) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v367) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v368) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v369) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v370) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v371) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v372) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v373) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v374) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v375) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v376) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v377) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v378) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v379) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v380) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v381) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U] 
            = ((0xfffffe01U & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][0U]) 
               | ((IData)(__VdlyVal__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v382) 
                  << 1U));
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__flight_q__v383) {
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U]);
    }
    if (__VdlySet__tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer__v18) {
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[0U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[0U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[0U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[0U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[1U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[1U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[1U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[1U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[2U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[2U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[2U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[2U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[3U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[3U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[3U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[3U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[4U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[4U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[4U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[4U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[5U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[5U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[5U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[5U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[6U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[6U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[6U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[6U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[7U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[7U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[7U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[7U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[8U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[8U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[8U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[8U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[9U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[9U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[9U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[9U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[10U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[10U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[10U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[10U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[11U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[11U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[11U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[11U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[12U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[12U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[12U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[12U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[13U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[13U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[13U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[13U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[14U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[14U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[14U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[14U][3U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[15U][0U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[15U][1U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[15U][2U] = 0U;
        tb_hbm4_custom__DOT__dram_inst__DOT__open_row[15U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[4U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[5U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[6U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[7U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[8U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[9U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[10U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[11U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[12U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[13U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[14U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[15U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[0U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[1U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[2U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[3U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[4U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[5U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[6U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[7U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[8U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[9U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[10U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[11U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[12U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[13U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[14U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][0U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][1U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][2U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[15U][3U] = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[0U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[1U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[2U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[3U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[4U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[5U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[6U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[7U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[8U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[9U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[10U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[11U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[12U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[13U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[14U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[15U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[16U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[17U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[18U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[19U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[20U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[21U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[22U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[23U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[24U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[25U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[26U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[27U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[28U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[29U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[30U][2U]);
        vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U] 
            = (0x0000007fU & vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[31U][2U]);
    }
}
