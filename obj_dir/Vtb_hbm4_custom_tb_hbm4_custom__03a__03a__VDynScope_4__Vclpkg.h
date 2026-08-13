// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_hbm4_custom.h for the primary calling header

#ifndef VERILATED_VTB_HBM4_CUSTOM_TB_HBM4_CUSTOM__03A__03A__VDYNSCOPE_4__VCLPKG_H_
#define VERILATED_VTB_HBM4_CUSTOM_TB_HBM4_CUSTOM__03A__03A__VDYNSCOPE_4__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_hbm4_custom__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_hbm4_custom__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg();
    ~Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg();
    void ctor(Vtb_hbm4_custom__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_hbm4_custom__Syms;

class Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__expected_tag;
    VlWide<8>/*255:0*/ __PVT__expected_data;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_hbm4_custom::__VDynScope_4"; }
    VlClass* clone() const { return new Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4(*this); }
  private:
    void _ctor_var_reset(Vtb_hbm4_custom__Syms* __restrict vlSymsp);
  public:
    Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4() = default;
    void init(Vtb_hbm4_custom__Syms* __restrict vlSymsp);
    ~Vtb_hbm4_custom_tb_hbm4_custom__03a__03a__VDynScope_4() {}
};


#endif  // guard
