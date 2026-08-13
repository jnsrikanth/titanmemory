// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

void Vtb_hbm4_custom___024root___timing_ready(Vtb_hbm4_custom___024root* vlSelf);

VL_ATTR_COLD void Vtb_hbm4_custom___024root___eval_static(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_static\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_hbm4_custom__DOT__error_count = 0U;
        vlSelfRef.tb_hbm4_custom__DOT__test_count = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0 
        = vlSelfRef.tb_hbm4_custom__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__rst_n__0 
        = vlSelfRef.tb_hbm4_custom__DOT__rst_n;
    Vtb_hbm4_custom___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root___eval_final(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_final\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_hbm4_custom___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_hbm4_custom___024root___eval_phase__stl(Vtb_hbm4_custom___024root* vlSelf);

VL_ATTR_COLD void Vtb_hbm4_custom___024root___eval_settle(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_settle\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_hbm4_custom___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_hbm4_custom.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_hbm4_custom___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_hbm4_custom___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_hbm4_custom___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_hbm4_custom___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_hbm4_custom___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___trigger_anySet__stl\n"); );
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

extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_hebd838a7_0;

VL_ATTR_COLD void Vtb_hbm4_custom___024root___stl_sequent__TOP__0(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___stl_sequent__TOP__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i;
    tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i;
    tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i = 0;
    // Body
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

VL_ATTR_COLD bool Vtb_hbm4_custom___024root___eval_phase__stl(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_phase__stl\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_hbm4_custom___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_hbm4_custom___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_hbm4_custom___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_hbm4_custom___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_hbm4_custom___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_hbm4_custom___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_hbm4_custom.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_hbm4_custom.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_hbm4_custom___024root___ctor_var_reset(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___ctor_var_reset\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_hbm4_custom__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3792931344783352497ull);
    vlSelf->tb_hbm4_custom__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 589947470956930912ull);
    VL_SCOPED_RAND_RESET_W(319, vlSelf->tb_hbm4_custom__DOT__host_req, __VscopeHash, 11635985508940387821ull);
    vlSelf->tb_hbm4_custom__DOT__host_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1931133728018934453ull);
    vlSelf->tb_hbm4_custom__DOT__host_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384937030704028099ull);
    vlSelf->tb_hbm4_custom__DOT__critical_threshold = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17690039585706079085ull);
    vlSelf->tb_hbm4_custom__DOT__enable_preempt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1963317177284153700ull);
    vlSelf->tb_hbm4_custom__DOT__dram_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10621598554680413074ull);
    vlSelf->tb_hbm4_custom__DOT__dram_resp_tag = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8040381472882141112ull);
    vlSelf->tb_hbm4_custom__DOT__dram_resp_beat_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14071266485091721001ull);
    vlSelf->tb_hbm4_custom__DOT__dram_resp_last_beat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13074447829283385058ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb_hbm4_custom__DOT__dram_resp_data, __VscopeHash, 17782535367241952353ull);
    vlSelf->tb_hbm4_custom__DOT__trigger_refresh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11488290658101480960ull);
    VL_SCOPED_RAND_RESET_W(319, vlSelf->tb_hbm4_custom__DOT__dut__DOT__hp_req, __VscopeHash, 5898664290186177529ull);
    VL_SCOPED_RAND_RESET_W(319, vlSelf->tb_hbm4_custom__DOT__dut__DOT__np_req, __VscopeHash, 17619714239525776024ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(2160, vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob[__Vi0], __VscopeHash, 10606399237953155309ull);
    }
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6243530130754259982ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8454955948182935181ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7073187117566858200ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12364269210809539125ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11971858019032842276ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14599999545636579092ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11217662026982120015ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776656424465026538ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3962552970416056909ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__unnamedblk3__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(319, vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i, __VscopeHash, 17965874828538410699ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2506388761293978318ull);
    VL_SCOPED_RAND_RESET_W(319, vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o, __VscopeHash, 3109767236162821632ull);
    vlSelf->tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6322227006104682922ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__bank_state[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1971011654217645570ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2389305294833792890ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__flight_q[__Vi0], __VscopeHash, 17297799990244817707ull);
    }
    vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12846326078464805331ull);
    vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__target_bg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12777712906161190088ull);
    vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__req_bg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6940202811677101559ull);
    vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__target_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3862918563314577545ull);
    vlSelf->tb_hbm4_custom__DOT__dram_inst__DOT__req_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17849293164457804543ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
