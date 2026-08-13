// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_hbm4_custom__Syms.h"


VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_sub__TOP__hbm4_custom_pkg__0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_sub__TOP__0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_sub__TOP__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "hbm4_custom_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_hbm4_custom___024root__trace_init_sub__TOP__hbm4_custom_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb_hbm4_custom", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+200,0,"host_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"host_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+52,0,"host_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 269,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"host_resp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"critical_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"enable_preempt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"early_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"early_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"early_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"early_hdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+42,0,"dram_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"dram_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"dram_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"dram_resp_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"dram_resp_beat_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"dram_resp_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+65,0,"dram_resp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"trigger_refresh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"refresh_preempt_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dram_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"early_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"early_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"early_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"early_hdr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+42,0,"dram_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"dram_req_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"complete_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"complete_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"complete_beat_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"complete_last_beat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+65,0,"complete_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"trigger_refresh_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"refresh_preempt_count_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);

    Vtb_hbm4_custom___024root__trace_init_dtype____0(vlSelf, tracep, "refresh_timer", 0, c+74, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_hbm4_custom___024root__trace_init_dtype____1(vlSelf, tracep, "flight_q", 0, c+90, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"preempt_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"target_bg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"req_bg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"target_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"req_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+200,0,"host_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"host_req_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+52,0,"host_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 269,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"host_resp_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"critical_threshold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"enable_preempt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"early_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"early_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"early_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"early_hdr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_WIDE(tracep,c+42,0,"dram_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"dram_req_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"dram_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"dram_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"dram_resp_beat_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"dram_resp_last_beat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+65,0,"dram_resp_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+9,0,"hp_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_WIDE(tracep,c+19,0,"np_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_WIDE(tracep,c+29,0,"combined_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"hp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"np_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"combined_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"alloc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"alloc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"alloc_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"alloc_hdr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"alloc_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_flit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+29,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"req_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"early_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"early_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"early_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"early_hdr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"alloc_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"alloc_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"alloc_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"alloc_hdr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"alloc_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+42,0,"dram_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"dram_req_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rob", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"alloc_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"alloc_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"alloc_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"alloc_hdr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"alloc_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"complete_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"complete_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"complete_beat_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"complete_last_beat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+65,0,"complete_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 255,0);
    VL_TRACE_DECL_WIDE(tracep,c+52,0,"commit_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 269,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"commit_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"alloc_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"has_free_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"commit_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"has_commit_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"max_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"max_age",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"commit_beat_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"committing_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"active_commit_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_router", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+200,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+40,0,"req_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+9,0,"hp_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"hp_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+19,0,"np_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 318,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"np_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"critical_threshold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"enable_preempt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"is_critical",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype_sub____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_dtype____0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_hbm4_custom___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype_sub____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_dtype_sub____0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 15);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype_sub____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_dtype____1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_hbm4_custom___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_dtype_sub____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_dtype_sub____1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    VL_TRACE_DECL_WIDE(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+3,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+9,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+12,fidx,"[4]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+15,fidx,"[5]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+18,fidx,"[6]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+21,fidx,"[7]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+24,fidx,"[8]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+27,fidx,"[9]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+30,fidx,"[10]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+33,fidx,"[11]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+36,fidx,"[12]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+39,fidx,"[13]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+42,fidx,"[14]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+45,fidx,"[15]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+48,fidx,"[16]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+51,fidx,"[17]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+54,fidx,"[18]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+57,fidx,"[19]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+60,fidx,"[20]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+63,fidx,"[21]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+66,fidx,"[22]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+69,fidx,"[23]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+72,fidx,"[24]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+75,fidx,"[25]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+78,fidx,"[26]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+81,fidx,"[27]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+84,fidx,"[28]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+87,fidx,"[29]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+90,fidx,"[30]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+93,fidx,"[31]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_sub__TOP__hbm4_custom_pkg__0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_sub__TOP__hbm4_custom_pkg__0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+216,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"FLIT_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"FLIT_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"PRIORITY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"BANK_GROUPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"BANKS_PER_GROUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"TOTAL_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_init_top(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_init_top\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_hbm4_custom___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_hbm4_custom___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_hbm4_custom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_register(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_register\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_hbm4_custom___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_hbm4_custom___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_hbm4_custom___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_hbm4_custom___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_const_0_sub_0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_const_0\n"); );
    // Body
    Vtb_hbm4_custom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_hbm4_custom___024root*>(voidSelf);
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_hbm4_custom___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_const_0_sub_0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_const_0_sub_0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+214,(1U));
    bufp->fullIData(oldp+215,(0x00000020U),32);
    bufp->fullIData(oldp+216,(0x00000100U),32);
    bufp->fullIData(oldp+217,(8U),32);
    bufp->fullIData(oldp+218,(0x00000080U),32);
    bufp->fullIData(oldp+219,(4U),32);
    bufp->fullIData(oldp+220,(0x00000028U),32);
    bufp->fullIData(oldp+221,(0x00000010U),32);
    bufp->fullIData(oldp+222,(0x00000040U),32);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_0_sub_0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_full_0\n"); );
    // Body
    Vtb_hbm4_custom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_hbm4_custom___024root*>(voidSelf);
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_hbm4_custom___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_dtype____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar);
VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_dtype____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*71:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_0_sub_0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_full_0_sub_0\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_hbm4_custom__DOT__rst_n));
    bufp->fullBit(oldp+1,(vlSelfRef.tb_hbm4_custom__DOT__host_resp_ready));
    bufp->fullCData(oldp+2,(vlSelfRef.tb_hbm4_custom__DOT__critical_threshold),4);
    bufp->fullBit(oldp+3,(vlSelfRef.tb_hbm4_custom__DOT__enable_preempt));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_hbm4_custom__DOT__trigger_refresh));
    bufp->fullCData(oldp+5,((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                            >> 7U))),8);
    bufp->fullQData(oldp+6,((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[9U])) 
                                 << 9U) | ((QData)((IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[8U])) 
                                           >> 0x00000017U)))),40);
    bufp->fullCData(oldp+8,((0x000000ffU & (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i[0U] 
                                            >> 0x0000000fU))),8);
    bufp->fullWData(oldp+9,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req),319);
    bufp->fullWData(oldp+19,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__np_req),319);
    bufp->fullWData(oldp+29,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__req_i),319);
    bufp->fullBit(oldp+39,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_router__DOT__is_critical));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_hbm4_custom__DOT__host_req_ready));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__early_valid_o));
    bufp->fullWData(oldp+42,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_flit__DOT__dram_req_o),319);
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
    __Vtemp_2[0U] = (((((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                         [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                         [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                         << __VExpandSel_HiShift_1) 
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1)) 
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [__VExpandSel_WordIdx_1] >> __VExpandSel_LoShift_1)) 
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
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
                        & __VExpandSel_HiMask_1) | 
                       (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                        [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                        [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1)) 
                      >> 0x00000012U) | ((((((0x0000003cU 
                                              <= __VExpandSel_WordIdx_1)
                                              ? 0U : vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
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
                       & __VExpandSel_HiMask_1) | (vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__rob
                                                   [vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot]
                                                   [
                                                   ((IData)(7U) 
                                                    + __VExpandSel_WordIdx_1)] 
                                                   >> __VExpandSel_LoShift_1)) 
                     >> 0x00000012U);
    bufp->fullWData(oldp+52,(__Vtemp_2),270);
    bufp->fullBit(oldp+61,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_valid));
    bufp->fullCData(oldp+62,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_tag),8);
    bufp->fullCData(oldp+63,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_beat_idx),3);
    bufp->fullBit(oldp+64,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_last_beat));
    bufp->fullWData(oldp+65,(vlSelfRef.tb_hbm4_custom__DOT__dram_resp_data),256);
    bufp->fullSData(oldp+73,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__preempt_cnt),16);
    Vtb_hbm4_custom___024root__trace_full_dtype____0(vlSelf, bufp, 74, vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__refresh_timer);
    Vtb_hbm4_custom___024root__trace_full_dtype____1(vlSelf, bufp, 90, vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__flight_q);
    bufp->fullCData(oldp+186,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_bg),4);
    bufp->fullCData(oldp+187,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_bg),4);
    bufp->fullCData(oldp+188,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__target_b),2);
    bufp->fullCData(oldp+189,(vlSelfRef.tb_hbm4_custom__DOT__dram_inst__DOT__req_b),2);
    bufp->fullBit(oldp+190,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot));
    bufp->fullCData(oldp+191,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__alloc_slot),7);
    bufp->fullCData(oldp+192,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_slot),7);
    bufp->fullBit(oldp+193,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_commit_candidate));
    bufp->fullCData(oldp+194,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_prio),4);
    bufp->fullIData(oldp+195,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__max_age),32);
    bufp->fullCData(oldp+196,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__commit_beat_cnt),3);
    bufp->fullBit(oldp+197,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__committing_active));
    bufp->fullCData(oldp+198,(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__active_commit_slot),7);
    bufp->fullBit(oldp+199,(vlSelfRef.tb_hbm4_custom__DOT__clk));
    bufp->fullWData(oldp+200,(vlSelfRef.tb_hbm4_custom__DOT__host_req),319);
    bufp->fullIData(oldp+210,(vlSelfRef.tb_hbm4_custom__DOT__error_count),32);
    bufp->fullIData(oldp+211,(vlSelfRef.tb_hbm4_custom__DOT__test_count),32);
    bufp->fullBit(oldp+212,((vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U] 
                             & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))));
    bufp->fullBit(oldp+213,(((~ vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__hp_req[0U]) 
                             & (IData)(vlSelfRef.tb_hbm4_custom__DOT__dut__DOT__u_rob__DOT__has_free_slot))));
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_dtype____0(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_full_dtype____0\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->fullCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->fullCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->fullCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->fullCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->fullCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->fullCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->fullCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->fullCData(oldp+15,(__VdtypeVar[15]),8);
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_full_dtype____1(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*71:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_hbm4_custom___024root__trace_full_dtype____1\n"); );
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullWData(oldp+0,(__VdtypeVar[0U]),72);
    bufp->fullWData(oldp+3,(__VdtypeVar[1U]),72);
    bufp->fullWData(oldp+6,(__VdtypeVar[2U]),72);
    bufp->fullWData(oldp+9,(__VdtypeVar[3U]),72);
    bufp->fullWData(oldp+12,(__VdtypeVar[4U]),72);
    bufp->fullWData(oldp+15,(__VdtypeVar[5U]),72);
    bufp->fullWData(oldp+18,(__VdtypeVar[6U]),72);
    bufp->fullWData(oldp+21,(__VdtypeVar[7U]),72);
    bufp->fullWData(oldp+24,(__VdtypeVar[8U]),72);
    bufp->fullWData(oldp+27,(__VdtypeVar[9U]),72);
    bufp->fullWData(oldp+30,(__VdtypeVar[10U]),72);
    bufp->fullWData(oldp+33,(__VdtypeVar[11U]),72);
    bufp->fullWData(oldp+36,(__VdtypeVar[12U]),72);
    bufp->fullWData(oldp+39,(__VdtypeVar[13U]),72);
    bufp->fullWData(oldp+42,(__VdtypeVar[14U]),72);
    bufp->fullWData(oldp+45,(__VdtypeVar[15U]),72);
    bufp->fullWData(oldp+48,(__VdtypeVar[16U]),72);
    bufp->fullWData(oldp+51,(__VdtypeVar[17U]),72);
    bufp->fullWData(oldp+54,(__VdtypeVar[18U]),72);
    bufp->fullWData(oldp+57,(__VdtypeVar[19U]),72);
    bufp->fullWData(oldp+60,(__VdtypeVar[20U]),72);
    bufp->fullWData(oldp+63,(__VdtypeVar[21U]),72);
    bufp->fullWData(oldp+66,(__VdtypeVar[22U]),72);
    bufp->fullWData(oldp+69,(__VdtypeVar[23U]),72);
    bufp->fullWData(oldp+72,(__VdtypeVar[24U]),72);
    bufp->fullWData(oldp+75,(__VdtypeVar[25U]),72);
    bufp->fullWData(oldp+78,(__VdtypeVar[26U]),72);
    bufp->fullWData(oldp+81,(__VdtypeVar[27U]),72);
    bufp->fullWData(oldp+84,(__VdtypeVar[28U]),72);
    bufp->fullWData(oldp+87,(__VdtypeVar[29U]),72);
    bufp->fullWData(oldp+90,(__VdtypeVar[30U]),72);
    bufp->fullWData(oldp+93,(__VdtypeVar[31U]),72);
}
