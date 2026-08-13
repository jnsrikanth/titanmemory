// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_hbm4_custom.h for the primary calling header

#include "Vtb_hbm4_custom__pch.h"

void Vtb_hbm4_custom_tb_hbm4_custom___ctor_var_reset(Vtb_hbm4_custom_tb_hbm4_custom* vlSelf);

Vtb_hbm4_custom_tb_hbm4_custom::Vtb_hbm4_custom_tb_hbm4_custom() = default;
Vtb_hbm4_custom_tb_hbm4_custom::~Vtb_hbm4_custom_tb_hbm4_custom() = default;

void Vtb_hbm4_custom_tb_hbm4_custom::ctor(Vtb_hbm4_custom__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_hbm4_custom_tb_hbm4_custom___ctor_var_reset(this);
}

void Vtb_hbm4_custom_tb_hbm4_custom::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_hbm4_custom_tb_hbm4_custom::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
