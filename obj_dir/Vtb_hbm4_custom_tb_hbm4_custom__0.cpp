// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                nullptr, 
                                                "tb/tb_hbm4_custom.sv", 
                                                15);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0;
void Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0(Vtb_hbm4_custom___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_hbc45c689_0;
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h36fa5bf4_0;
VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h6605bd80_0;
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h0eefe58c_0;
VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);
VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h14b26c6b_0;
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h2550f18e_0;
VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync);
VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync);

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*39:0*/ __Vtask_send_request__0__addr;
    __Vtask_send_request__0__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_send_request__0__data;
    VL_ZERO_W(256, __Vtask_send_request__0__data);
    CData/*7:0*/ __Vtask_send_request__0__tag;
    __Vtask_send_request__0__tag = 0;
    CData/*3:0*/ __Vtask_send_request__0__prio;
    __Vtask_send_request__0__prio = 0;
    CData/*0:0*/ __Vtask_send_request__0__preempt;
    __Vtask_send_request__0__preempt = 0;
    CData/*7:0*/ __Vtask_wait_response__1__expected_tag;
    __Vtask_wait_response__1__expected_tag = 0;
    VlWide<8>/*255:0*/ __Vtask_wait_response__1__expected_data;
    VL_ZERO_W(256, __Vtask_wait_response__1__expected_data);
    QData/*39:0*/ __Vtask_send_request__5__addr;
    __Vtask_send_request__5__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_send_request__5__data;
    VL_ZERO_W(256, __Vtask_send_request__5__data);
    CData/*7:0*/ __Vtask_send_request__5__tag;
    __Vtask_send_request__5__tag = 0;
    CData/*3:0*/ __Vtask_send_request__5__prio;
    __Vtask_send_request__5__prio = 0;
    CData/*0:0*/ __Vtask_send_request__5__preempt;
    __Vtask_send_request__5__preempt = 0;
    CData/*7:0*/ __Vtask_wait_response__6__expected_tag;
    __Vtask_wait_response__6__expected_tag = 0;
    VlWide<8>/*255:0*/ __Vtask_wait_response__6__expected_data;
    VL_ZERO_W(256, __Vtask_wait_response__6__expected_data);
    QData/*39:0*/ __Vtask_send_request__10__addr;
    __Vtask_send_request__10__addr = 0;
    VlWide<8>/*255:0*/ __Vtask_send_request__10__data;
    VL_ZERO_W(256, __Vtask_send_request__10__data);
    CData/*7:0*/ __Vtask_send_request__10__tag;
    __Vtask_send_request__10__tag = 0;
    CData/*3:0*/ __Vtask_send_request__10__prio;
    __Vtask_send_request__10__prio = 0;
    CData/*0:0*/ __Vtask_send_request__10__preempt;
    __Vtask_send_request__10__preempt = 0;
    CData/*7:0*/ __Vtask_wait_response__11__expected_tag;
    __Vtask_wait_response__11__expected_tag = 0;
    VlWide<8>/*255:0*/ __Vtask_wait_response__11__expected_data;
    VL_ZERO_W(256, __Vtask_wait_response__11__expected_data);
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_WRITEF_NX("========================================\n HBM4 Custom Microarchitecture Testbench\n========================================\n",0);
    vlSelfRef.__PVT__rst_n = 0U;
    VL_ASSIGN_W(313, vlSelfRef.__PVT__host_req, Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0);
    vlSelfRef.__PVT__host_resp_ready = 1U;
    vlSelfRef.__PVT__critical_threshold = 0x0cU;
    vlSelfRef.__PVT__enable_preempt = 1U;
    unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                100);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    vlSelfRef.__PVT__rst_n = 1U;
    unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                102);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("\n[TEST 1] Sending high-priority request...\n",0);
    __Vtask_send_request__0__preempt = 1U;
    __Vtask_send_request__0__prio = 0x0fU;
    __Vtask_send_request__0__tag = 1U;
    VL_ASSIGN_W(256, __Vtask_send_request__0__data, Vtb_hbm4_custom__ConstPool__CONST_hbc45c689_0);
    __Vtask_send_request__0__addr = 0x0000000010000000ULL;
    Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge tb_hbm4_custom.clk)", 
                                                            "tb/tb_hbm4_custom.sv", 
                                                            151);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__PVT__host_req[0U] = (1U | vlSelfRef.__PVT__host_req[0U]);
    vlSelfRef.__PVT__host_req[0U] = ((0x0001ffffU & vlSelfRef.__PVT__host_req[0U]) 
                                     | (__Vtask_send_request__0__data[0U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[1U] = ((__Vtask_send_request__0__data[0U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[1U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[2U] = ((__Vtask_send_request__0__data[1U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[2U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[3U] = ((__Vtask_send_request__0__data[2U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[3U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[4U] = ((__Vtask_send_request__0__data[3U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[4U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[5U] = ((__Vtask_send_request__0__data[4U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[5U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[6U] = ((__Vtask_send_request__0__data[5U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[6U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[7U] = ((__Vtask_send_request__0__data[6U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__0__data[7U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[8U] = ((__Vtask_send_request__0__data[7U] 
                                      >> 0x0000000fU) 
                                     | ((IData)(__Vtask_send_request__0__addr) 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[9U] = (0x01ffffffU & 
                                     (((IData)(__Vtask_send_request__0__addr) 
                                       >> 0x0000000fU) 
                                      | ((IData)((__Vtask_send_request__0__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000011U)));
    vlSelfRef.__PVT__host_req[0U] = ((0xfffe0001U & vlSelfRef.__PVT__host_req[0U]) 
                                     | (((IData)(__Vtask_send_request__0__prio) 
                                         << 0x0000000dU) 
                                        | (((IData)(__Vtask_send_request__0__preempt) 
                                            << 0x0000000cU) 
                                           | ((IData)(__Vtask_send_request__0__tag) 
                                              << 1U))));
    while ((1U & (~ (IData)(vlSelfRef.__PVT__host_req_ready)))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                161);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    }
    Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge tb_hbm4_custom.clk)", 
                                                            "tb/tb_hbm4_custom.sv", 
                                                            162);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__PVT__host_req[0U] = (0xfffffffeU & vlSelfRef.__PVT__host_req[0U]);
    VL_ASSIGN_W(256, __Vtask_wait_response__1__expected_data, Vtb_hbm4_custom__ConstPool__CONST_h36fa5bf4_0);
    __Vtask_wait_response__1__expected_tag = 1U;
    vlSelfRef.__Vtask_wait_response__1____VDynScope_wait_response_4 
        = VL_NEW(Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4, vlSymsp);
    VL_NULL_CHECK(vlSelfRef.__Vtask_wait_response__1____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 167)->__PVT__expected_tag 
        = __Vtask_wait_response__1__expected_tag;
    VL_ASSIGN_W(256, VL_NULL_CHECK(vlSelfRef.__Vtask_wait_response__1____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 168)
                ->__PVT__expected_data, __Vtask_wait_response__1__expected_data);
    vlSelfRef.__PVT__test_count = ((IData)(1U) + vlSelfRef.__PVT__test_count);
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(1U, vlProcess);
        Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
        Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
        co_await __Vfork_1__sync.join(vlProcess, "tb/tb_hbm4_custom.sv", 
                                      171);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    }
    vlProcess->disableFork();
    VL_WRITEF_NX("\n[TEST 2] Sending second high-priority request...\n",0);
    __Vtask_send_request__5__preempt = 1U;
    __Vtask_send_request__5__prio = 0x0eU;
    __Vtask_send_request__5__tag = 2U;
    VL_ASSIGN_W(256, __Vtask_send_request__5__data, Vtb_hbm4_custom__ConstPool__CONST_h6605bd80_0);
    __Vtask_send_request__5__addr = 0x0000000020000000ULL;
    Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge tb_hbm4_custom.clk)", 
                                                            "tb/tb_hbm4_custom.sv", 
                                                            151);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__PVT__host_req[0U] = (1U | vlSelfRef.__PVT__host_req[0U]);
    vlSelfRef.__PVT__host_req[0U] = ((0x0001ffffU & vlSelfRef.__PVT__host_req[0U]) 
                                     | (__Vtask_send_request__5__data[0U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[1U] = ((__Vtask_send_request__5__data[0U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[1U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[2U] = ((__Vtask_send_request__5__data[1U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[2U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[3U] = ((__Vtask_send_request__5__data[2U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[3U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[4U] = ((__Vtask_send_request__5__data[3U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[4U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[5U] = ((__Vtask_send_request__5__data[4U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[5U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[6U] = ((__Vtask_send_request__5__data[5U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[6U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[7U] = ((__Vtask_send_request__5__data[6U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__5__data[7U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[8U] = ((__Vtask_send_request__5__data[7U] 
                                      >> 0x0000000fU) 
                                     | ((IData)(__Vtask_send_request__5__addr) 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[9U] = (0x01ffffffU & 
                                     (((IData)(__Vtask_send_request__5__addr) 
                                       >> 0x0000000fU) 
                                      | ((IData)((__Vtask_send_request__5__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000011U)));
    vlSelfRef.__PVT__host_req[0U] = ((0xfffe0001U & vlSelfRef.__PVT__host_req[0U]) 
                                     | (((IData)(__Vtask_send_request__5__prio) 
                                         << 0x0000000dU) 
                                        | (((IData)(__Vtask_send_request__5__preempt) 
                                            << 0x0000000cU) 
                                           | ((IData)(__Vtask_send_request__5__tag) 
                                              << 1U))));
    while ((1U & (~ (IData)(vlSelfRef.__PVT__host_req_ready)))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                161);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    }
    Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge tb_hbm4_custom.clk)", 
                                                            "tb/tb_hbm4_custom.sv", 
                                                            162);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__PVT__host_req[0U] = (0xfffffffeU & vlSelfRef.__PVT__host_req[0U]);
    VL_ASSIGN_W(256, __Vtask_wait_response__6__expected_data, Vtb_hbm4_custom__ConstPool__CONST_h0eefe58c_0);
    __Vtask_wait_response__6__expected_tag = 2U;
    vlSelfRef.__Vtask_wait_response__6____VDynScope_wait_response_4 
        = VL_NEW(Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4, vlSymsp);
    VL_NULL_CHECK(vlSelfRef.__Vtask_wait_response__6____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 167)->__PVT__expected_tag 
        = __Vtask_wait_response__6__expected_tag;
    VL_ASSIGN_W(256, VL_NULL_CHECK(vlSelfRef.__Vtask_wait_response__6____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 168)
                ->__PVT__expected_data, __Vtask_wait_response__6__expected_data);
    vlSelfRef.__PVT__test_count = ((IData)(1U) + vlSelfRef.__PVT__test_count);
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
        Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
        co_await __Vfork_2__sync.join(vlProcess, "tb/tb_hbm4_custom.sv", 
                                      171);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    }
    vlProcess->disableFork();
    VL_WRITEF_NX("\n[TEST 3] Sending low-priority request...\n",0);
    __Vtask_send_request__10__preempt = 0U;
    __Vtask_send_request__10__prio = 3U;
    __Vtask_send_request__10__tag = 3U;
    VL_ASSIGN_W(256, __Vtask_send_request__10__data, Vtb_hbm4_custom__ConstPool__CONST_h14b26c6b_0);
    __Vtask_send_request__10__addr = 0x0000000030000000ULL;
    Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge tb_hbm4_custom.clk)", 
                                                            "tb/tb_hbm4_custom.sv", 
                                                            151);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__PVT__host_req[0U] = (1U | vlSelfRef.__PVT__host_req[0U]);
    vlSelfRef.__PVT__host_req[0U] = ((0x0001ffffU & vlSelfRef.__PVT__host_req[0U]) 
                                     | (__Vtask_send_request__10__data[0U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[1U] = ((__Vtask_send_request__10__data[0U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[1U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[2U] = ((__Vtask_send_request__10__data[1U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[2U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[3U] = ((__Vtask_send_request__10__data[2U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[3U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[4U] = ((__Vtask_send_request__10__data[3U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[4U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[5U] = ((__Vtask_send_request__10__data[4U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[5U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[6U] = ((__Vtask_send_request__10__data[5U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[6U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[7U] = ((__Vtask_send_request__10__data[6U] 
                                      >> 0x0000000fU) 
                                     | (__Vtask_send_request__10__data[7U] 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[8U] = ((__Vtask_send_request__10__data[7U] 
                                      >> 0x0000000fU) 
                                     | ((IData)(__Vtask_send_request__10__addr) 
                                        << 0x00000011U));
    vlSelfRef.__PVT__host_req[9U] = (0x01ffffffU & 
                                     (((IData)(__Vtask_send_request__10__addr) 
                                       >> 0x0000000fU) 
                                      | ((IData)((__Vtask_send_request__10__addr 
                                                  >> 0x00000020U)) 
                                         << 0x00000011U)));
    vlSelfRef.__PVT__host_req[0U] = ((0xfffe0001U & vlSelfRef.__PVT__host_req[0U]) 
                                     | (((IData)(__Vtask_send_request__10__prio) 
                                         << 0x0000000dU) 
                                        | (((IData)(__Vtask_send_request__10__preempt) 
                                            << 0x0000000cU) 
                                           | ((IData)(__Vtask_send_request__10__tag) 
                                              << 1U))));
    while ((1U & (~ (IData)(vlSelfRef.__PVT__host_req_ready)))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                161);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    }
    Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                          "@(posedge tb_hbm4_custom.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge tb_hbm4_custom.clk)", 
                                                            "tb/tb_hbm4_custom.sv", 
                                                            162);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__PVT__host_req[0U] = (0xfffffffeU & vlSelfRef.__PVT__host_req[0U]);
    VL_ASSIGN_W(256, __Vtask_wait_response__11__expected_data, Vtb_hbm4_custom__ConstPool__CONST_h2550f18e_0);
    __Vtask_wait_response__11__expected_tag = 3U;
    vlSelfRef.__Vtask_wait_response__11____VDynScope_wait_response_4 
        = VL_NEW(Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4, vlSymsp);
    VL_NULL_CHECK(vlSelfRef.__Vtask_wait_response__11____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 167)->__PVT__expected_tag 
        = __Vtask_wait_response__11__expected_tag;
    VL_ASSIGN_W(256, VL_NULL_CHECK(vlSelfRef.__Vtask_wait_response__11____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 168)
                ->__PVT__expected_data, __Vtask_wait_response__11__expected_data);
    vlSelfRef.__PVT__test_count = ((IData)(1U) + vlSelfRef.__PVT__test_count);
    {
        VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(1U, vlProcess);
        Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_3__sync);
        Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_3__sync);
        co_await __Vfork_3__sync.join(vlProcess, "tb/tb_hbm4_custom.sv", 
                                      171);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    }
    vlProcess->disableFork();
    unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                128);
        vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
        unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("\n========================================\n",0);
    if ((0U == vlSelfRef.__PVT__error_count)) {
        VL_WRITEF_NX(" ALL TESTS PASSED (%0d tests)\n",1
                     , '~',32,vlSelfRef.__PVT__test_count);
    } else {
        VL_WRITEF_NX(" FAILED with %0d errors out of %0d tests\n",2
                     , '~',32,vlSelfRef.__PVT__error_count
                     , '~',32,vlSelfRef.__PVT__test_count);
    }
    VL_WRITEF_NX("========================================\n\n",0);
    vlProcess->disableFork();
    VL_FINISH_MT("tb/tb_hbm4_custom.sv", 138, "");
    vlProcess->state(VlProcess::FINISHED);
    vlSymsp->TOP.__Vm_traceActivity[5U] = 1U;
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask___VforkTask_1__14____VDynScope_wait_response_4;
    VlWide<8>/*255:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_3__sync.onKill(vlProcess);
    __Vtask___VforkTask_1__14____VDynScope_wait_response_4 
        = vlSelfRef.__Vtask_wait_response__11____VDynScope_wait_response_4;
    while ((1U & (~ ((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o) 
                     & ((0x000000ffU & (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                        [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][9U] 
                                        >> 0x00000011U)) 
                        == VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 179)
                        ->__PVT__expected_tag))))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                179);
    }
    if (VL_UNLIKELY(((0U != ((((((((vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                    [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][0U] 
                                    ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                    ->__PVT__expected_data[0U]) 
                                   | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                      [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][1U] 
                                      ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                      ->__PVT__expected_data[1U])) 
                                  | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                     [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][2U] 
                                     ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                     ->__PVT__expected_data[2U])) 
                                 | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                    [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][3U] 
                                    ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                    ->__PVT__expected_data[3U])) 
                                | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                   [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][4U] 
                                   ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                   ->__PVT__expected_data[4U])) 
                               | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                  [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][5U] 
                                  ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                  ->__PVT__expected_data[5U])) 
                              | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                 [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][6U] 
                                 ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                 ->__PVT__expected_data[6U])) 
                             | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][7U] 
                                ^ VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                ->__PVT__expected_data[7U])))))) {
        VL_WRITEF_NX("  ERROR: Data mismatch for tag 0x%02h\n",1
                     , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 181)
                     ->__PVT__expected_tag);
        __Vtemp_2[0U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][0U];
        __Vtemp_2[1U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][5U];
        __Vtemp_2[6U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][6U];
        __Vtemp_2[7U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][7U];
        VL_WRITEF_NX("         Got: 0x%h\n         Exp: 0x%h\n",2
                     , '#',256,__Vtemp_2.data(), '#',256,VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 183)
                     ->__PVT__expected_data.data());
        vlSelfRef.__PVT__error_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: tag=0x%02h data correct\n",1
                     , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_1__14____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 186)
                     ->__PVT__expected_tag);
    }
    __Vfork_3__sync.done("tb/tb_hbm4_custom.sv", 178);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_3__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask___VforkTask_0__13____VDynScope_wait_response_4;
    IData/*31:0*/ __Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_3__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__13____VDynScope_wait_response_4 
        = vlSelfRef.__Vtask_wait_response__11____VDynScope_wait_response_4;
    __Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    __Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                174);
        __Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask___VforkTask_0__13__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("  ERROR: Timeout waiting for tag 0x%02h\n",1
                 , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_0__13____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 175)
                 ->__PVT__expected_tag);
    vlSelfRef.__PVT__error_count = ((IData)(1U) + vlSelfRef.__PVT__error_count);
    __Vfork_3__sync.done("tb/tb_hbm4_custom.sv", 172);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask___VforkTask_1__9____VDynScope_wait_response_4;
    VlWide<8>/*255:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    __Vtask___VforkTask_1__9____VDynScope_wait_response_4 
        = vlSelfRef.__Vtask_wait_response__6____VDynScope_wait_response_4;
    while ((1U & (~ ((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o) 
                     & ((0x000000ffU & (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                        [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][9U] 
                                        >> 0x00000011U)) 
                        == VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 179)
                        ->__PVT__expected_tag))))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                179);
    }
    if (VL_UNLIKELY(((0U != ((((((((vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                    [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][0U] 
                                    ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                    ->__PVT__expected_data[0U]) 
                                   | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                      [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][1U] 
                                      ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                      ->__PVT__expected_data[1U])) 
                                  | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                     [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][2U] 
                                     ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                     ->__PVT__expected_data[2U])) 
                                 | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                    [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][3U] 
                                    ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                    ->__PVT__expected_data[3U])) 
                                | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                   [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][4U] 
                                   ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                   ->__PVT__expected_data[4U])) 
                               | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                  [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][5U] 
                                  ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                  ->__PVT__expected_data[5U])) 
                              | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                 [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][6U] 
                                 ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                 ->__PVT__expected_data[6U])) 
                             | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][7U] 
                                ^ VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                ->__PVT__expected_data[7U])))))) {
        VL_WRITEF_NX("  ERROR: Data mismatch for tag 0x%02h\n",1
                     , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 181)
                     ->__PVT__expected_tag);
        __Vtemp_2[0U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][0U];
        __Vtemp_2[1U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][5U];
        __Vtemp_2[6U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][6U];
        __Vtemp_2[7U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][7U];
        VL_WRITEF_NX("         Got: 0x%h\n         Exp: 0x%h\n",2
                     , '#',256,__Vtemp_2.data(), '#',256,VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 183)
                     ->__PVT__expected_data.data());
        vlSelfRef.__PVT__error_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: tag=0x%02h data correct\n",1
                     , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_1__9____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 186)
                     ->__PVT__expected_tag);
    }
    __Vfork_2__sync.done("tb/tb_hbm4_custom.sv", 178);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_2__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask___VforkTask_0__8____VDynScope_wait_response_4;
    IData/*31:0*/ __Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__8____VDynScope_wait_response_4 
        = vlSelfRef.__Vtask_wait_response__6____VDynScope_wait_response_4;
    __Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    __Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                174);
        __Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask___VforkTask_0__8__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("  ERROR: Timeout waiting for tag 0x%02h\n",1
                 , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_0__8____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 175)
                 ->__PVT__expected_tag);
    vlSelfRef.__PVT__error_count = ((IData)(1U) + vlSelfRef.__PVT__error_count);
    __Vfork_2__sync.done("tb/tb_hbm4_custom.sv", 172);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask___VforkTask_1__4____VDynScope_wait_response_4;
    VlWide<8>/*255:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_1__sync.onKill(vlProcess);
    __Vtask___VforkTask_1__4____VDynScope_wait_response_4 
        = vlSelfRef.__Vtask_wait_response__1____VDynScope_wait_response_4;
    while ((1U & (~ ((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o) 
                     & ((0x000000ffU & (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                        [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][9U] 
                                        >> 0x00000011U)) 
                        == VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 179)
                        ->__PVT__expected_tag))))) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                179);
    }
    if (VL_UNLIKELY(((0U != ((((((((vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                    [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][0U] 
                                    ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                    ->__PVT__expected_data[0U]) 
                                   | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                      [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][1U] 
                                      ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                      ->__PVT__expected_data[1U])) 
                                  | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                     [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][2U] 
                                     ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                     ->__PVT__expected_data[2U])) 
                                 | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                    [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][3U] 
                                    ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                    ->__PVT__expected_data[3U])) 
                                | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                   [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][4U] 
                                   ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                   ->__PVT__expected_data[4U])) 
                               | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                  [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][5U] 
                                  ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                  ->__PVT__expected_data[5U])) 
                              | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                 [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][6U] 
                                 ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                 ->__PVT__expected_data[6U])) 
                             | (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][7U] 
                                ^ VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 180)
                                ->__PVT__expected_data[7U])))))) {
        VL_WRITEF_NX("  ERROR: Data mismatch for tag 0x%02h\n",1
                     , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 181)
                     ->__PVT__expected_tag);
        __Vtemp_2[0U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][0U];
        __Vtemp_2[1U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][1U];
        __Vtemp_2[2U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][2U];
        __Vtemp_2[3U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][3U];
        __Vtemp_2[4U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][4U];
        __Vtemp_2[5U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][5U];
        __Vtemp_2[6U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][6U];
        __Vtemp_2[7U] = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
            [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][7U];
        VL_WRITEF_NX("         Got: 0x%h\n         Exp: 0x%h\n",2
                     , '#',256,__Vtemp_2.data(), '#',256,VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 183)
                     ->__PVT__expected_data.data());
        vlSelfRef.__PVT__error_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__error_count);
    } else {
        VL_WRITEF_NX("  PASS: tag=0x%02h data correct\n",1
                     , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_1__4____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 186)
                     ->__PVT__expected_tag);
    }
    __Vfork_1__sync.done("tb/tb_hbm4_custom.sv", 178);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__1____Vfork_1__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4> __Vtask___VforkTask_0__3____VDynScope_wait_response_4;
    IData/*31:0*/ __Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_1__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__3____VDynScope_wait_response_4 
        = vlSelfRef.__Vtask_wait_response__1____VDynScope_wait_response_4;
    __Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    __Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_hbm4_custom___024root____VbeforeTrig_h4f4e63d8__0((&vlSymsp->TOP), 
                                                              "@(posedge tb_hbm4_custom.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h4f4e63d8__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge tb_hbm4_custom.clk)", 
                                                                "tb/tb_hbm4_custom.sv", 
                                                                174);
        __Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask___VforkTask_0__3__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    VL_WRITEF_NX("  ERROR: Timeout waiting for tag 0x%02h\n",1
                 , '#',8,VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_wait_response_4, "tb/tb_hbm4_custom.sv", 175)
                 ->__PVT__expected_tag);
    vlSelfRef.__PVT__error_count = ((IData)(1U) + vlSelfRef.__PVT__error_count);
    __Vfork_1__sync.done("tb/tb_hbm4_custom.sv", 172);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__2(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_initial__TOP__tb_hbm4_custom__Vtiming__2\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000001e8480ULL, 
                                            nullptr, 
                                            "tb/tb_hbm4_custom.sv", 
                                            195);
    VL_WRITEF_NX("ERROR: Global timeout\n",0);
    VL_FINISH_MT("tb/tb_hbm4_custom.sv", 197, "");
    co_return;
}

void Vtb_hbm4_custom_tb_hbm4_custom___act_sequent__TOP__tb_hbm4_custom__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___act_sequent__TOP__tb_hbm4_custom__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical 
        = (vlSelfRef.__PVT__host_req[0U] & (((0x0000000fU 
                                              & (vlSelfRef.__PVT__host_req[0U] 
                                                 >> 0x0000000dU)) 
                                             >= (IData)(vlSelfRef.__PVT__critical_threshold)) 
                                            & ((IData)(vlSelfRef.__PVT__enable_preempt) 
                                               | (vlSelfRef.__PVT__host_req[0U] 
                                                  >> 0x0000000cU))));
    VL_ASSIGN_W(313, vlSelfRef.__PVT__dut__DOT__np_req, Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0);
    VL_ASSIGN_W(313, vlSelfRef.__PVT__dut__DOT__hp_req, Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0);
    vlSelfRef.__PVT__host_req_ready = 0U;
    if ((1U & vlSelfRef.__PVT__host_req[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical)))) {
            vlSelfRef.__PVT__dut__DOT__np_req[0U] = vlSelfRef.__PVT__host_req[0U];
            vlSelfRef.__PVT__dut__DOT__np_req[1U] = vlSelfRef.__PVT__host_req[1U];
            vlSelfRef.__PVT__dut__DOT__np_req[2U] = vlSelfRef.__PVT__host_req[2U];
            vlSelfRef.__PVT__dut__DOT__np_req[3U] = vlSelfRef.__PVT__host_req[3U];
            vlSelfRef.__PVT__dut__DOT__np_req[4U] = vlSelfRef.__PVT__host_req[4U];
            vlSelfRef.__PVT__dut__DOT__np_req[5U] = vlSelfRef.__PVT__host_req[5U];
            vlSelfRef.__PVT__dut__DOT__np_req[6U] = vlSelfRef.__PVT__host_req[6U];
            vlSelfRef.__PVT__dut__DOT__np_req[7U] = vlSelfRef.__PVT__host_req[7U];
            vlSelfRef.__PVT__dut__DOT__np_req[8U] = vlSelfRef.__PVT__host_req[8U];
            vlSelfRef.__PVT__dut__DOT__np_req[9U] = vlSelfRef.__PVT__host_req[9U];
        }
        if (vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical) {
            vlSelfRef.__PVT__dut__DOT__hp_req[0U] = vlSelfRef.__PVT__host_req[0U];
            vlSelfRef.__PVT__dut__DOT__hp_req[1U] = vlSelfRef.__PVT__host_req[1U];
            vlSelfRef.__PVT__dut__DOT__hp_req[2U] = vlSelfRef.__PVT__host_req[2U];
            vlSelfRef.__PVT__dut__DOT__hp_req[3U] = vlSelfRef.__PVT__host_req[3U];
            vlSelfRef.__PVT__dut__DOT__hp_req[4U] = vlSelfRef.__PVT__host_req[4U];
            vlSelfRef.__PVT__dut__DOT__hp_req[5U] = vlSelfRef.__PVT__host_req[5U];
            vlSelfRef.__PVT__dut__DOT__hp_req[6U] = vlSelfRef.__PVT__host_req[6U];
            vlSelfRef.__PVT__dut__DOT__hp_req[7U] = vlSelfRef.__PVT__host_req[7U];
            vlSelfRef.__PVT__dut__DOT__hp_req[8U] = vlSelfRef.__PVT__host_req[8U];
            vlSelfRef.__PVT__dut__DOT__hp_req[9U] = vlSelfRef.__PVT__host_req[9U];
            vlSelfRef.__PVT__host_req_ready = (vlSelfRef.__PVT__dut__DOT__hp_req[0U] 
                                               & (0x80U 
                                                  > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)));
        } else {
            vlSelfRef.__PVT__host_req_ready = ((~ vlSelfRef.__PVT__dut__DOT__hp_req[0U]) 
                                               & (0x80U 
                                                  > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)));
        }
    }
    if ((1U & vlSelfRef.__PVT__dut__DOT__hp_req[0U])) {
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[0U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[1U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[1U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[2U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[2U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[3U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[3U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[4U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[4U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[5U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[5U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[6U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[6U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[7U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[7U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[8U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[9U];
    } else {
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[0U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[1U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[1U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[2U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[2U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[3U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[3U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[4U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[4U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[5U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[5U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[6U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[6U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[7U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[7U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[8U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[9U];
    }
    vlSelfRef.__PVT__dut__DOT__u_flit__DOT__early_valid_o 
        = ((0x80U > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)) 
           & vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U]);
}

extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h336ddd95_0;
extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0;
extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h336fdd95_0;
extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h356b5f14_0;
extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h3570508c_0;
extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h356dda54_0;
extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h07d2d341_0;
extern const VlWide<8>/*255:0*/ Vtb_hbm4_custom__ConstPool__CONST_h9e67c271_0;

void Vtb_hbm4_custom_tb_hbm4_custom___nba_sequent__TOP__tb_hbm4_custom__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___nba_sequent__TOP__tb_hbm4_custom__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__dut__DOT__u_rob__DOT__count;
    __Vdly__dut__DOT__u_rob__DOT__count = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v0;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v0 = 0;
    CData/*7:0*/ __VdlyVal__dut__DOT__u_rob__DOT__rob__v1;
    __VdlyVal__dut__DOT__u_rob__DOT__rob__v1 = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v1;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v1 = 0;
    VlWide<10>/*313:0*/ __VdlyElem__dut__DOT__u_rob__DOT__rob__v1;
    VL_ZERO_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v1);
    QData/*39:0*/ __VdlyVal__dut__DOT__u_rob__DOT__rob__v2;
    __VdlyVal__dut__DOT__u_rob__DOT__rob__v2 = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v2;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v2 = 0;
    VlWide<10>/*313:0*/ __VdlyElem__dut__DOT__u_rob__DOT__rob__v2;
    VL_ZERO_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v2);
    CData/*7:0*/ __VdlyVal__dut__DOT__u_rob__DOT__rob__v3;
    __VdlyVal__dut__DOT__u_rob__DOT__rob__v3 = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v3;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v3 = 0;
    VlWide<10>/*313:0*/ __VdlyElem__dut__DOT__u_rob__DOT__rob__v3;
    VL_ZERO_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v3);
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v4;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v4 = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v5;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v5 = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v6;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v6 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__dut__DOT__u_rob__DOT__rob__v7;
    VL_ZERO_W(256, __VdlyVal__dut__DOT__u_rob__DOT__rob__v7);
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v7;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v7 = 0;
    VlWide<10>/*313:0*/ __VdlyElem__dut__DOT__u_rob__DOT__rob__v7;
    VL_ZERO_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v7);
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v8;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v8 = 0;
    CData/*6:0*/ __VdlyDim0__dut__DOT__u_rob__DOT__rob__v9;
    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v9 = 0;
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    __Vdly__dut__DOT__u_rob__DOT__count = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count;
    if (vlSelfRef.__PVT__rst_n) {
        if ((((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__early_valid_o) 
              & (0x80U > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count))) 
             & (~ ((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o) 
                   & (IData)(vlSelfRef.__PVT__host_resp_ready))))) {
            __Vdly__dut__DOT__u_rob__DOT__count = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__early_valid_o) 
                        & (0x80U > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)))) 
                    & ((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o) 
                       & (IData)(vlSelfRef.__PVT__host_resp_ready)))) {
            __Vdly__dut__DOT__u_rob__DOT__count = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count) 
                                                      - (IData)(1U)));
        }
    } else {
        __Vdly__dut__DOT__u_rob__DOT__count = 0U;
    }
    if (vlSelfRef.__PVT__rst_n) {
        if (((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__early_valid_o) 
             & (0x80U > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)))) {
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v0 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail;
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_h336ddd95_0, Vtb_hbm4_custom__ConstPool__CONST_h336ddd95_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v0));
            __VdlyVal__dut__DOT__u_rob__DOT__rob__v1 
                = (0x000000ffU & (vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
                                  >> 1U));
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v1 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail;
            VL_ASSIGN_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v1, Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0);
            __VdlyElem__dut__DOT__u_rob__DOT__rob__v1[9U] 
                = ((0x0201ffffU & __VdlyElem__dut__DOT__u_rob__DOT__rob__v1[9U]) 
                   | (0x03ffffffU & ((IData)(__VdlyVal__dut__DOT__u_rob__DOT__rob__v1) 
                                     << 0x00000011U)));
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__dut__DOT__u_rob__DOT__rob__v1, Vtb_hbm4_custom__ConstPool__CONST_h336fdd95_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v1));
            __VdlyVal__dut__DOT__u_rob__DOT__rob__v2 
                = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                             << 0x0000000fU) 
                                            | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                               >> 0x00000011U)));
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v2 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail;
            VL_ASSIGN_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v2, Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0);
            __VdlyElem__dut__DOT__u_rob__DOT__rob__v2[8U] 
                = ((0x000001ffU & __VdlyElem__dut__DOT__u_rob__DOT__rob__v2[8U]) 
                   | ((IData)(__VdlyVal__dut__DOT__u_rob__DOT__rob__v2) 
                      << 9U));
            __VdlyElem__dut__DOT__u_rob__DOT__rob__v2[9U] 
                = ((0x03fe0000U & __VdlyElem__dut__DOT__u_rob__DOT__rob__v2[9U]) 
                   | (0x03ffffffU & (((IData)(__VdlyVal__dut__DOT__u_rob__DOT__rob__v2) 
                                      >> 0x00000017U) 
                                     | ((IData)((__VdlyVal__dut__DOT__u_rob__DOT__rob__v2 
                                                 >> 0x00000020U)) 
                                        << 9U))));
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__dut__DOT__u_rob__DOT__rob__v2, Vtb_hbm4_custom__ConstPool__CONST_h356b5f14_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v2));
            __VdlyVal__dut__DOT__u_rob__DOT__rob__v3 
                = (0x000000ffU & (vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
                                  >> 9U));
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v3 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail;
            VL_ASSIGN_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v3, Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0);
            __VdlyElem__dut__DOT__u_rob__DOT__rob__v3[8U] 
                = ((0xfffffe01U & __VdlyElem__dut__DOT__u_rob__DOT__rob__v3[8U]) 
                   | ((IData)(__VdlyVal__dut__DOT__u_rob__DOT__rob__v3) 
                      << 1U));
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__dut__DOT__u_rob__DOT__rob__v3, Vtb_hbm4_custom__ConstPool__CONST_h3570508c_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v3));
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v4 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail;
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0, Vtb_hbm4_custom__ConstPool__CONST_h356dda54_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v4));
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v5 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail;
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0, Vtb_hbm4_custom__ConstPool__CONST_h07d2d341_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v5));
            vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail)));
        }
        if (vlSelfRef.__PVT__mem_resp_valid) {
            vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000080U, vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)) {
                if ((((vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                       [(0x0000007fU & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][9U] 
                       >> 0x00000019U) & (~ vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                          [(0x0000007fU 
                                            & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][8U])) 
                     & ((0x000000ffU & (vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                                        [(0x0000007fU 
                                          & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i)][9U] 
                                        >> 0x00000011U)) 
                        == (IData)(vlSelfRef.__PVT__mem_resp_tag)))) {
                    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v6 
                        = (0x0000007fU & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
                    vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_h356dda54_0, Vtb_hbm4_custom__ConstPool__CONST_h356dda54_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v6));
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[0U] 
                        = vlSelfRef.__PVT__mem_resp_data[0U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[1U] 
                        = vlSelfRef.__PVT__mem_resp_data[1U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[2U] 
                        = vlSelfRef.__PVT__mem_resp_data[2U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[3U] 
                        = vlSelfRef.__PVT__mem_resp_data[3U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[4U] 
                        = vlSelfRef.__PVT__mem_resp_data[4U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[5U] 
                        = vlSelfRef.__PVT__mem_resp_data[5U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[6U] 
                        = vlSelfRef.__PVT__mem_resp_data[6U];
                    __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[7U] 
                        = vlSelfRef.__PVT__mem_resp_data[7U];
                    __VdlyDim0__dut__DOT__u_rob__DOT__rob__v7 
                        = (0x0000007fU & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
                    VL_ASSIGN_W(314, __VdlyElem__dut__DOT__u_rob__DOT__rob__v7, Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0);
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[0U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[0U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[1U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[1U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[2U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[2U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[3U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[3U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[4U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[4U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[5U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[5U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[6U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[6U];
                    __VdlyElem__dut__DOT__u_rob__DOT__rob__v7[7U] 
                        = __VdlyVal__dut__DOT__u_rob__DOT__rob__v7[7U];
                    vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(__VdlyElem__dut__DOT__u_rob__DOT__rob__v7, Vtb_hbm4_custom__ConstPool__CONST_h07d2d341_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v7));
                }
                vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i);
            }
        }
        if (((IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o) 
             & (IData)(vlSelfRef.__PVT__host_resp_ready))) {
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v8 
                = vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head;
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0, Vtb_hbm4_custom__ConstPool__CONST_h336ddd95_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v8));
            vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head)));
        }
    } else {
        vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i = 0U;
        vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head = 0U;
        vlSelfRef.__PVT__dut__DOT__u_rob__DOT__tail = 0U;
        while (VL_GTS_III(32, 0x00000080U, vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__dut__DOT__u_rob__DOT__rob__v9 
                = (0x0000007fU & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.enqueue(Vtb_hbm4_custom__ConstPool__CONST_h356ddd95_0, Vtb_hbm4_custom__ConstPool__CONST_h336ddd95_0, (IData)(__VdlyDim0__dut__DOT__u_rob__DOT__rob__v9));
            vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.__PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuedut__DOT__u_rob__DOT__rob.commit(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob);
    if (vlSelfRef.__PVT__rst_n) {
        vlSelfRef.__PVT__mem_resp_valid = 0U;
        if (((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__early_valid_o) 
             & (IData)(vlSelfRef.__PVT__mem_req_ready))) {
            vlSelfRef.__PVT__mem_resp_valid = 1U;
            vlSelfRef.__PVT__mem_resp_tag = (0x000000ffU 
                                             & (vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
                                                >> 1U));
            __Vtemp_1[3U] = (((IData)((0x000000ffffffffffULL 
                                       & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                           << 0x0000000fU) 
                                          | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                             >> 0x00000011U)))) 
                              << 0x00000018U) | ((((IData)(
                                                           (0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                << 0x0000000fU) 
                                                               | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                  >> 0x00000011U)))) 
                                                   >> 0x00000010U) 
                                                  | ((IData)(
                                                             ((0x000000ffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                   << 0x0000000fU) 
                                                                  | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                     >> 0x00000011U))) 
                                                              >> 0x00000020U)) 
                                                     << 0x00000010U)) 
                                                 | ((IData)(
                                                            ((0x000000ffffffffffULL 
                                                              & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                  << 0x0000000fU) 
                                                                 | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                    >> 0x00000011U))) 
                                                             >> 0x00000020U)) 
                                                    >> 0x00000018U)));
            vlSelfRef.__PVT__mem_resp_data[0U] = (IData)(
                                                         (0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                              << 0x0000000fU) 
                                                             | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                >> 0x00000011U))));
            vlSelfRef.__PVT__mem_resp_data[1U] = (((IData)(
                                                           (0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                << 0x0000000fU) 
                                                               | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                  >> 0x00000011U)))) 
                                                   << 8U) 
                                                  | (IData)(
                                                            ((0x000000ffffffffffULL 
                                                              & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                  << 0x0000000fU) 
                                                                 | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                    >> 0x00000011U))) 
                                                             >> 0x00000020U)));
            vlSelfRef.__PVT__mem_resp_data[2U] = (((IData)(
                                                           (0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                << 0x0000000fU) 
                                                               | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                  >> 0x00000011U)))) 
                                                   << 0x00000010U) 
                                                  | (((IData)(
                                                              (0x000000ffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                   << 0x0000000fU) 
                                                                  | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                     >> 0x00000011U)))) 
                                                      >> 0x00000018U) 
                                                     | ((IData)(
                                                                ((0x000000ffffffffffULL 
                                                                  & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                      << 0x0000000fU) 
                                                                     | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                        >> 0x00000011U))) 
                                                                 >> 0x00000020U)) 
                                                        << 8U)));
            vlSelfRef.__PVT__mem_resp_data[3U] = __Vtemp_1[3U];
            vlSelfRef.__PVT__mem_resp_data[4U] = ((
                                                   ((IData)(
                                                            (0x000000ffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                 << 0x0000000fU) 
                                                                | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                   >> 0x00000011U)))) 
                                                    >> 8U) 
                                                   | ((IData)(
                                                              ((0x000000ffffffffffULL 
                                                                & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                    << 0x0000000fU) 
                                                                   | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                      >> 0x00000011U))) 
                                                               >> 0x00000020U)) 
                                                      << 0x00000018U)) 
                                                  | ((IData)(
                                                             ((0x000000ffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                   << 0x0000000fU) 
                                                                  | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                     >> 0x00000011U))) 
                                                              >> 0x00000020U)) 
                                                     >> 0x00000010U));
            vlSelfRef.__PVT__mem_resp_data[5U] = ((IData)(
                                                          (0x000000ffffffffffULL 
                                                           & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                               << 0x0000000fU) 
                                                              | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                 >> 0x00000011U)))) 
                                                  | ((IData)(
                                                             ((0x000000ffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                   << 0x0000000fU) 
                                                                  | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                     >> 0x00000011U))) 
                                                              >> 0x00000020U)) 
                                                     >> 8U));
            vlSelfRef.__PVT__mem_resp_data[6U] = (((IData)(
                                                           (0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                << 0x0000000fU) 
                                                               | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                  >> 0x00000011U)))) 
                                                   << 8U) 
                                                  | (IData)(
                                                            ((0x000000ffffffffffULL 
                                                              & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                  << 0x0000000fU) 
                                                                 | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                    >> 0x00000011U))) 
                                                             >> 0x00000020U)));
            vlSelfRef.__PVT__mem_resp_data[7U] = (0x0000ffffU 
                                                  & (((IData)(
                                                              (0x000000ffffffffffULL 
                                                               & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                   << 0x0000000fU) 
                                                                  | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                     >> 0x00000011U)))) 
                                                      >> 0x00000018U) 
                                                     | ((IData)(
                                                                ((0x000000ffffffffffULL 
                                                                  & (((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                                                      << 0x0000000fU) 
                                                                     | ((QData)((IData)(vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                                                        >> 0x00000011U))) 
                                                                 >> 0x00000020U)) 
                                                        << 8U)));
        }
    } else {
        vlSelfRef.__PVT__mem_resp_valid = 0U;
        vlSelfRef.__PVT__mem_resp_tag = 0U;
        VL_ASSIGN_W(256, vlSelfRef.__PVT__mem_resp_data, Vtb_hbm4_custom__ConstPool__CONST_h9e67c271_0);
    }
    vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count = __Vdly__dut__DOT__u_rob__DOT__count;
    vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o 
        = (1U & ((vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                  [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][9U] 
                  >> 0x00000019U) & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                 [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][8U]));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__rst_n)))) {
        vlSelfRef.__PVT__mem_req_ready = 1U;
    }
}

void Vtb_hbm4_custom_tb_hbm4_custom___nba_sequent__TOP__tb_hbm4_custom__1(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___nba_sequent__TOP__tb_hbm4_custom__1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical 
        = (vlSelfRef.__PVT__host_req[0U] & (((0x0000000fU 
                                              & (vlSelfRef.__PVT__host_req[0U] 
                                                 >> 0x0000000dU)) 
                                             >= (IData)(vlSelfRef.__PVT__critical_threshold)) 
                                            & ((IData)(vlSelfRef.__PVT__enable_preempt) 
                                               | (vlSelfRef.__PVT__host_req[0U] 
                                                  >> 0x0000000cU))));
    VL_ASSIGN_W(313, vlSelfRef.__PVT__dut__DOT__np_req, Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0);
    VL_ASSIGN_W(313, vlSelfRef.__PVT__dut__DOT__hp_req, Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0);
    if ((1U & vlSelfRef.__PVT__host_req[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical)))) {
            vlSelfRef.__PVT__dut__DOT__np_req[0U] = vlSelfRef.__PVT__host_req[0U];
            vlSelfRef.__PVT__dut__DOT__np_req[1U] = vlSelfRef.__PVT__host_req[1U];
            vlSelfRef.__PVT__dut__DOT__np_req[2U] = vlSelfRef.__PVT__host_req[2U];
            vlSelfRef.__PVT__dut__DOT__np_req[3U] = vlSelfRef.__PVT__host_req[3U];
            vlSelfRef.__PVT__dut__DOT__np_req[4U] = vlSelfRef.__PVT__host_req[4U];
            vlSelfRef.__PVT__dut__DOT__np_req[5U] = vlSelfRef.__PVT__host_req[5U];
            vlSelfRef.__PVT__dut__DOT__np_req[6U] = vlSelfRef.__PVT__host_req[6U];
            vlSelfRef.__PVT__dut__DOT__np_req[7U] = vlSelfRef.__PVT__host_req[7U];
            vlSelfRef.__PVT__dut__DOT__np_req[8U] = vlSelfRef.__PVT__host_req[8U];
            vlSelfRef.__PVT__dut__DOT__np_req[9U] = vlSelfRef.__PVT__host_req[9U];
        }
        if (vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical) {
            vlSelfRef.__PVT__dut__DOT__hp_req[0U] = vlSelfRef.__PVT__host_req[0U];
            vlSelfRef.__PVT__dut__DOT__hp_req[1U] = vlSelfRef.__PVT__host_req[1U];
            vlSelfRef.__PVT__dut__DOT__hp_req[2U] = vlSelfRef.__PVT__host_req[2U];
            vlSelfRef.__PVT__dut__DOT__hp_req[3U] = vlSelfRef.__PVT__host_req[3U];
            vlSelfRef.__PVT__dut__DOT__hp_req[4U] = vlSelfRef.__PVT__host_req[4U];
            vlSelfRef.__PVT__dut__DOT__hp_req[5U] = vlSelfRef.__PVT__host_req[5U];
            vlSelfRef.__PVT__dut__DOT__hp_req[6U] = vlSelfRef.__PVT__host_req[6U];
            vlSelfRef.__PVT__dut__DOT__hp_req[7U] = vlSelfRef.__PVT__host_req[7U];
            vlSelfRef.__PVT__dut__DOT__hp_req[8U] = vlSelfRef.__PVT__host_req[8U];
            vlSelfRef.__PVT__dut__DOT__hp_req[9U] = vlSelfRef.__PVT__host_req[9U];
        }
    }
    if ((1U & vlSelfRef.__PVT__dut__DOT__hp_req[0U])) {
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[0U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[1U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[1U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[2U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[2U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[3U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[3U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[4U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[4U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[5U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[5U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[6U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[6U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[7U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[7U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[8U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U] 
            = vlSelfRef.__PVT__dut__DOT__hp_req[9U];
    } else {
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[0U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[1U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[1U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[2U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[2U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[3U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[3U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[4U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[4U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[5U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[5U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[6U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[6U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[7U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[7U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[8U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[8U];
        vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[9U] 
            = vlSelfRef.__PVT__dut__DOT__np_req[9U];
    }
}

void Vtb_hbm4_custom_tb_hbm4_custom___nba_comb__TOP__tb_hbm4_custom__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___nba_comb__TOP__tb_hbm4_custom__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__host_req_ready = 0U;
    if ((1U & vlSelfRef.__PVT__host_req[0U])) {
        vlSelfRef.__PVT__host_req_ready = ((IData)(vlSelfRef.__PVT__dut__DOT__u_router__DOT__is_critical)
                                            ? (vlSelfRef.__PVT__dut__DOT__hp_req[0U] 
                                               & (0x80U 
                                                  > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)))
                                            : ((~ vlSelfRef.__PVT__dut__DOT__hp_req[0U]) 
                                               & (0x80U 
                                                  > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count))));
    }
    vlSelfRef.__PVT__dut__DOT__u_flit__DOT__early_valid_o 
        = ((0x80U > (IData)(vlSelfRef.__PVT__dut__DOT__u_rob__DOT__count)) 
           & vlSelfRef.__PVT__dut__DOT__u_flit__DOT__req_i[0U]);
}
