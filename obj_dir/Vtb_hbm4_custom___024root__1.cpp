// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_hebd838a7_0;

void Vtb_hbm4_custom___024root___nba_sequent__TOP__1(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___nba_sequent__TOP__1\n"); );
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
}

void Vtb_hbm4_custom___024root___nba_sequent__TOP__0(Vtb_hbm4_custom___024root* vlSelf);

void Vtb_hbm4_custom___024root___eval_nba(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_nba\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_hbm4_custom___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_hbm4_custom___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_hbm4_custom__DOT__host_req_ready = 0U;
            if ((1U & vlSelfRef.tb_hbm4_custom__DOT__host_req[0U])) {
                vlSelfRef.tb_hbm4_custom__DOT__host_req_ready 
                    = ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical)
                        ? (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U] 
                           & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))
                        : ((~ vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U]) 
                           & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot)));
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
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

void Vtb_hbm4_custom___024root___timing_ready(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___timing_ready\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7f885a59__0.ready("@(posedge tb_hbm4_custom.clk)");
    }
}

void Vtb_hbm4_custom___024root___timing_resume(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___timing_resume\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h7f885a59__0.moveToResumeQueue(
                                                          "@(posedge tb_hbm4_custom.clk)");
    vlSelfRef.__VtrigSched_h7f885a59__0.resume("@(posedge tb_hbm4_custom.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_hbm4_custom___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_hbm4_custom___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_hbm4_custom___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_hbm4_custom___024root___act_sequent__TOP__0(Vtb_hbm4_custom___024root* vlSelf);

bool Vtb_hbm4_custom___024root___eval_phase__act(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_phase__act\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_hbm4_custom__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_hbm4_custom__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0 
            = vlSelfRef.tb_hbm4_custom__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__rst_n__0 
            = vlSelfRef.tb_hbm4_custom__DOT__rst_n;
    }
    Vtb_hbm4_custom___024root___timing_ready(vlSelf);
    Vtb_hbm4_custom___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_hbm4_custom___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_hbm4_custom___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_hbm4_custom___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_hbm4_custom___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_hbm4_custom___024root___act_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_hbm4_custom___024root___eval_phase__inact(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_phase__inact\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_hbm4_custom.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_hbm4_custom___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_hbm4_custom___024root___eval_phase__nba(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_phase__nba\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_hbm4_custom___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_hbm4_custom___024root___eval_nba(vlSelf);
        Vtb_hbm4_custom___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_hbm4_custom___024root___eval(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_hbm4_custom___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_hbm4_custom.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_hbm4_custom.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_hbm4_custom___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_hbm4_custom.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_hbm4_custom___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_hbm4_custom___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_hbm4_custom___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0(Vtb_hbm4_custom___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root____VbeforeTrig_h7f885a59__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_hbm4_custom__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_hbm4_custom__DOT__clk__0 
        = vlSelfRef.tb_hbm4_custom__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7f885a59__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_hbm4_custom___024root___eval_debug_assertions(Vtb_hbm4_custom___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root___eval_debug_assertions\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
