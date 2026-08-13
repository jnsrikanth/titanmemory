// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

VL_ATTR_COLD void Vtb_hbm4_custom_tb_hbm4_custom___eval_static__TOP__tb_hbm4_custom(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___eval_static__TOP__tb_hbm4_custom\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__error_count = 0U;
    vlSelfRef.__PVT__test_count = 0U;
}

extern const VlWide<10>/*319:0*/ Vtb_hbm4_custom__ConstPool__CONST_h347e189a_0;

VL_ATTR_COLD void Vtb_hbm4_custom_tb_hbm4_custom___stl_sequent__TOP__tb_hbm4_custom__0(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___stl_sequent__TOP__tb_hbm4_custom__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dut__DOT__u_rob__DOT__commit_valid_o 
        = (1U & ((vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                  [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][9U] 
                  >> 0x00000019U) & vlSelfRef.__PVT__dut__DOT__u_rob__DOT__rob
                 [vlSelfRef.__PVT__dut__DOT__u_rob__DOT__head][8U]));
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

VL_ATTR_COLD void Vtb_hbm4_custom_tb_hbm4_custom___ctor_var_reset(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_hbm4_custom_tb_hbm4_custom___ctor_var_reset\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    VL_SCOPED_RAND_RESET_W(313, vlSelf->__PVT__host_req, __VscopeHash, 2491196844537464692ull);
    vlSelf->__PVT__host_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13339781475700046847ull);
    vlSelf->__PVT__host_resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12995225346068949510ull);
    vlSelf->__PVT__critical_threshold = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10957483026578550548ull);
    vlSelf->__PVT__enable_preempt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3926431823375671587ull);
    vlSelf->__PVT__mem_req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653000016004071877ull);
    vlSelf->__PVT__mem_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953970547806985782ull);
    vlSelf->__PVT__mem_resp_tag = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8189200595609784864ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__mem_resp_data, __VscopeHash, 10853456841072758915ull);
    VL_SCOPED_RAND_RESET_W(313, vlSelf->__PVT__dut__DOT__hp_req, __VscopeHash, 15459453478249532037ull);
    VL_SCOPED_RAND_RESET_W(313, vlSelf->__PVT__dut__DOT__np_req, __VscopeHash, 13496443682154601288ull);
    vlSelf->__PVT__dut__DOT__u_rob__DOT__commit_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13458700718175365378ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(314, vlSelf->__PVT__dut__DOT__u_rob__DOT__rob[__Vi0], __VscopeHash, 12465001180619150228ull);
    }
    vlSelf->__PVT__dut__DOT__u_rob__DOT__head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16979302227276806534ull);
    vlSelf->__PVT__dut__DOT__u_rob__DOT__tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3471903127381401103ull);
    vlSelf->__PVT__dut__DOT__u_rob__DOT__count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17182383805401813474ull);
    vlSelf->__PVT__dut__DOT__u_rob__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__dut__DOT__u_rob__DOT__unnamedblk1__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(313, vlSelf->__PVT__dut__DOT__u_flit__DOT__req_i, __VscopeHash, 5325270821337441138ull);
    vlSelf->__PVT__dut__DOT__u_flit__DOT__early_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444253776047006002ull);
    vlSelf->__PVT__dut__DOT__u_router__DOT__is_critical = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11251454983349396684ull);
}
