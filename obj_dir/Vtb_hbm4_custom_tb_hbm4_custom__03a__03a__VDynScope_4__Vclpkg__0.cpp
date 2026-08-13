// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

void Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4::init(Vtb_hbm4_custom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4::_ctor_var_reset(Vtb_hbm4_custom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__expected_tag = VL_SCOPED_RAND_RESET_I(8, 17827187665533905435ULL, 1099212529894856940ull);
    VL_SCOPED_RAND_RESET_W(256, __PVT__expected_data, 17827187665533905435ULL, 7201442447652915145ull);
}
