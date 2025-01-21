// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vi2c_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vi2c_tb::Vi2c_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vi2c_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vi2c_tb::Vi2c_tb(const char* _vcname__)
    : Vi2c_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vi2c_tb::~Vi2c_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vi2c_tb___024root___eval_debug_assertions(Vi2c_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vi2c_tb___024root___eval_static(Vi2c_tb___024root* vlSelf);
void Vi2c_tb___024root___eval_initial(Vi2c_tb___024root* vlSelf);
void Vi2c_tb___024root___eval_settle(Vi2c_tb___024root* vlSelf);
void Vi2c_tb___024root___eval(Vi2c_tb___024root* vlSelf);

void Vi2c_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi2c_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vi2c_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vi2c_tb___024root___eval_static(&(vlSymsp->TOP));
        Vi2c_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vi2c_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vi2c_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vi2c_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vi2c_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vi2c_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vi2c_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vi2c_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vi2c_tb___024root___eval_final(Vi2c_tb___024root* vlSelf);

VL_ATTR_COLD void Vi2c_tb::final() {
    Vi2c_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vi2c_tb::hierName() const { return vlSymsp->name(); }
const char* Vi2c_tb::modelName() const { return "Vi2c_tb"; }
unsigned Vi2c_tb::threads() const { return 1; }
void Vi2c_tb::prepareClone() const { contextp()->prepareClone(); }
void Vi2c_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vi2c_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vi2c_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vi2c_tb___024root__trace_init_top(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vi2c_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_tb___024root*>(voidSelf);
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vi2c_tb___024root__trace_decl_types(tracep);
    Vi2c_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_register(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vi2c_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vi2c_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vi2c_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
