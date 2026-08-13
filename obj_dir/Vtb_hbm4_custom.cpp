// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_hbm4_custom__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_hbm4_custom::Vtb_hbm4_custom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_hbm4_custom__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_hbm4_custom::Vtb_hbm4_custom(const char* _vcname__)
    : Vtb_hbm4_custom(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_hbm4_custom::~Vtb_hbm4_custom() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_hbm4_custom___024root___eval_debug_assertions(Vtb_hbm4_custom___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_hbm4_custom___024root___eval_static(Vtb_hbm4_custom___024root* vlSelf);
void Vtb_hbm4_custom___024root___eval_initial(Vtb_hbm4_custom___024root* vlSelf);
void Vtb_hbm4_custom___024root___eval_settle(Vtb_hbm4_custom___024root* vlSelf);
void Vtb_hbm4_custom___024root___eval(Vtb_hbm4_custom___024root* vlSelf);

void Vtb_hbm4_custom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_hbm4_custom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_hbm4_custom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_hbm4_custom___024root___eval_static(&(vlSymsp->TOP));
        Vtb_hbm4_custom___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_hbm4_custom___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_hbm4_custom___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_hbm4_custom::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_hbm4_custom::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_hbm4_custom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_hbm4_custom___024root___eval_final(Vtb_hbm4_custom___024root* vlSelf);

VL_ATTR_COLD void Vtb_hbm4_custom::final() {
    contextp()->executingFinal(true);
    Vtb_hbm4_custom___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_hbm4_custom::hierName() const { return vlSymsp->name(); }
const char* Vtb_hbm4_custom::modelName() const { return "Vtb_hbm4_custom"; }
unsigned Vtb_hbm4_custom::threads() const { return 1; }
void Vtb_hbm4_custom::prepareClone() const { contextp()->prepareClone(); }
void Vtb_hbm4_custom::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_hbm4_custom::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_hbm4_custom___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_hbm4_custom___024root__trace_init_top(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_hbm4_custom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_hbm4_custom___024root*>(voidSelf);
    Vtb_hbm4_custom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_hbm4_custom___024root__trace_decl_types(tracep);
    Vtb_hbm4_custom___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_hbm4_custom___024root__trace_register(Vtb_hbm4_custom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_hbm4_custom::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_hbm4_custom::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 223);
    Vtb_hbm4_custom___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
