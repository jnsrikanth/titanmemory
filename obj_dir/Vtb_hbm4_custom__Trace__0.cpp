// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_hbm4_custom__Syms.h"


void Vtb_hbm4_custom___024root__trace_chg_0_sub_0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_hbm4_custom___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_chg_0\n"); );
    // Body
    Vtb_hbm4_custom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_hbm4_custom___024root*>(voidSelf);
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_hbm4_custom___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_hbm4_custom___024root__trace_chg_dtype____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);
void Vtb_hbm4_custom___024root__trace_chg_dtype____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*71:0*/, 32>& __VdtypeVar);

void Vtb_hbm4_custom___024root__trace_chg_0_sub_0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_chg_0_sub_0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_2;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_hbm4_custom__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_hbm4_custom__DOT__critical_threshold),4);
        bufp->chgBit(oldp+3,(vlSelfRef.tb_hbm4_custom__DOT__enable_preempt));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_hbm4_custom__DOT__trigger_refresh));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgCData(oldp+5,((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                               >> 7U))),8);
        bufp->chgQData(oldp+6,((0x000000ffffffffffULL 
                                & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                    << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                              >> 0x00000017U)))),40);
        bufp->chgCData(oldp+8,((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                               >> 0x0000000fU))),8);
        bufp->chgWData(oldp+9,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req),319);
        bufp->chgWData(oldp+19,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req),319);
        bufp->chgWData(oldp+29,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i),319);
        bufp->chgBit(oldp+39,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgBit(oldp+40,(vlSelfRef.tb_hbm4_custom__DOT__host_req_ready));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o));
        bufp->chgWData(oldp+42,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o),319);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        __VExpandSel_WordIdx_1 = (((IData)(0x00000020U) 
                                   + ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                      << 8U)) >> 5U);
        __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000020U) 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
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
        __Vtemp_2[0U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [__VExpandSel_WordIdx_1] 
                              >> __VExpandSel_LoShift_1)) 
                          << 0x0000000eU) | ((0x00003fc0U 
                                              & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot][67U] 
                                                 >> 1U)) 
                                             | (((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt) 
                                                 << 3U) 
                                                | (((7U 
                                                     == (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt)) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active) 
                                                      << 1U)))));
        __Vtemp_2[1U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [__VExpandSel_WordIdx_1] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                [((IData)(2U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(1U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[2U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                [((IData)(3U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(2U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[3U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                [((IData)(4U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(3U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[4U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                [((IData)(5U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(4U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[5U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                [((IData)(6U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(5U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[6U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                [((IData)(7U) 
                                                  + __VExpandSel_WordIdx_1)] 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(6U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[7U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                             << __VExpandSel_HiShift_1) 
                            & __VExpandSel_HiMask_1) 
                           | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                              [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                              [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                              >> __VExpandSel_LoShift_1)) 
                          >> 0x00000012U) | ((((((0x0000003cU 
                                                  <= __VExpandSel_WordIdx_1)
                                                  ? 0U
                                                  : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(8U) 
                                                   + __VExpandSel_WordIdx_1)]) 
                                                << __VExpandSel_HiShift_1) 
                                               & __VExpandSel_HiMask_1) 
                                              | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                 [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                 [((IData)(7U) 
                                                   + __VExpandSel_WordIdx_1)] 
                                                 >> __VExpandSel_LoShift_1)) 
                                             << 0x0000000eU));
        __Vtemp_2[8U] = ((((((0x0000003cU <= __VExpandSel_WordIdx_1)
                              ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(8U) + __VExpandSel_WordIdx_1)]) 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                             [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                             [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1)) 
                         >> 0x00000012U);
        bufp->chgWData(oldp+52,(__Vtemp_2),270);
        bufp->chgBit(oldp+61,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid));
        bufp->chgCData(oldp+62,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx),3);
        bufp->chgBit(oldp+64,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat));
        bufp->chgWData(oldp+65,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data),256);
        bufp->chgSData(oldp+73,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt),16);
        Vtb_hbm4_custom___024root__trace_chg_dtype____0(vlSelf, bufp, 74, vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer);
        Vtb_hbm4_custom___024root__trace_chg_dtype____1(vlSelf, bufp, 90, vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_bg),4);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg),4);
        bufp->chgCData(oldp+188,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_b),2);
        bufp->chgCData(oldp+189,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b),2);
        bufp->chgBit(oldp+190,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot));
        bufp->chgCData(oldp+191,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot),7);
        bufp->chgCData(oldp+192,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot),7);
        bufp->chgBit(oldp+193,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate));
        bufp->chgCData(oldp+194,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio),4);
        bufp->chgIData(oldp+195,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age),32);
        bufp->chgCData(oldp+196,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt),3);
        bufp->chgBit(oldp+197,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active));
        bufp->chgCData(oldp+198,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot),7);
    }
    bufp->chgBit(oldp+199,(vlSelfRef.tb_hbm4_custom__DOT__clk));
    bufp->chgWData(oldp+200,(vlSelfRef.tb_hbm4_custom__DOT__host_req),319);
    bufp->chgIData(oldp+210,(vlSelfRef.tb_hbm4_custom__DOT__error_count),32);
    bufp->chgIData(oldp+211,(vlSelfRef.tb_hbm4_custom__DOT__test_count),32);
    bufp->chgBit(oldp+212,((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U] 
                            & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))));
    bufp->chgBit(oldp+213,(((~ vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U]) 
                            & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))));
}

void Vtb_hbm4_custom___024root__trace_chg_dtype____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_chg_dtype____0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),8);
}

void Vtb_hbm4_custom___024root__trace_chg_dtype____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*71:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_chg_dtype____1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0U]),72);
    bufp->chgWData(oldp+3,(__VdtypeVar[1U]),72);
    bufp->chgWData(oldp+6,(__VdtypeVar[2U]),72);
    bufp->chgWData(oldp+9,(__VdtypeVar[3U]),72);
    bufp->chgWData(oldp+12,(__VdtypeVar[4U]),72);
    bufp->chgWData(oldp+15,(__VdtypeVar[5U]),72);
    bufp->chgWData(oldp+18,(__VdtypeVar[6U]),72);
    bufp->chgWData(oldp+21,(__VdtypeVar[7U]),72);
    bufp->chgWData(oldp+24,(__VdtypeVar[8U]),72);
    bufp->chgWData(oldp+27,(__VdtypeVar[9U]),72);
    bufp->chgWData(oldp+30,(__VdtypeVar[10U]),72);
    bufp->chgWData(oldp+33,(__VdtypeVar[11U]),72);
    bufp->chgWData(oldp+36,(__VdtypeVar[12U]),72);
    bufp->chgWData(oldp+39,(__VdtypeVar[13U]),72);
    bufp->chgWData(oldp+42,(__VdtypeVar[14U]),72);
    bufp->chgWData(oldp+45,(__VdtypeVar[15U]),72);
    bufp->chgWData(oldp+48,(__VdtypeVar[16U]),72);
    bufp->chgWData(oldp+51,(__VdtypeVar[17U]),72);
    bufp->chgWData(oldp+54,(__VdtypeVar[18U]),72);
    bufp->chgWData(oldp+57,(__VdtypeVar[19U]),72);
    bufp->chgWData(oldp+60,(__VdtypeVar[20U]),72);
    bufp->chgWData(oldp+63,(__VdtypeVar[21U]),72);
    bufp->chgWData(oldp+66,(__VdtypeVar[22U]),72);
    bufp->chgWData(oldp+69,(__VdtypeVar[23U]),72);
    bufp->chgWData(oldp+72,(__VdtypeVar[24U]),72);
    bufp->chgWData(oldp+75,(__VdtypeVar[25U]),72);
    bufp->chgWData(oldp+78,(__VdtypeVar[26U]),72);
    bufp->chgWData(oldp+81,(__VdtypeVar[27U]),72);
    bufp->chgWData(oldp+84,(__VdtypeVar[28U]),72);
    bufp->chgWData(oldp+87,(__VdtypeVar[29U]),72);
    bufp->chgWData(oldp+90,(__VdtypeVar[30U]),72);
    bufp->chgWData(oldp+93,(__VdtypeVar[31U]),72);
}

void Vtb_hbm4_custom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_cleanup\n"); );
    // Body
    Vtb_hbm4_custom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_hbm4_custom___024root*>(voidSelf);
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
