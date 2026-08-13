// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"


Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg::Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg() = default;
Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg::~Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg() = default;

void Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg::ctor(Vtb_hbm4_custom__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
