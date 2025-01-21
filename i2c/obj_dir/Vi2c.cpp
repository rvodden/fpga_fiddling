// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vi2c__pch.h"

//============================================================
// Constructors

Vi2c::Vi2c(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vi2c__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , write{vlSymsp->TOP.write}
    , data_in{vlSymsp->TOP.data_in}
    , cmd{vlSymsp->TOP.cmd}
    , ready{vlSymsp->TOP.ready}
    , data_out{vlSymsp->TOP.data_out}
    , ack{vlSymsp->TOP.ack}
    , done_tick{vlSymsp->TOP.done_tick}
    , SDA{vlSymsp->TOP.SDA}
    , SCL{vlSymsp->TOP.SCL}
    , clock_divisor{vlSymsp->TOP.clock_divisor}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vi2c::Vi2c(const char* _vcname__)
    : Vi2c(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vi2c::~Vi2c() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vi2c___024root___eval_debug_assertions(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG
void Vi2c___024root___eval_static(Vi2c___024root* vlSelf);
void Vi2c___024root___eval_initial(Vi2c___024root* vlSelf);
void Vi2c___024root___eval_settle(Vi2c___024root* vlSelf);
void Vi2c___024root___eval(Vi2c___024root* vlSelf);

void Vi2c::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi2c::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vi2c___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vi2c___024root___eval_static(&(vlSymsp->TOP));
        Vi2c___024root___eval_initial(&(vlSymsp->TOP));
        Vi2c___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vi2c___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vi2c::eventsPending() { return false; }

uint64_t Vi2c::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vi2c::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vi2c___024root___eval_final(Vi2c___024root* vlSelf);

VL_ATTR_COLD void Vi2c::final() {
    Vi2c___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vi2c::hierName() const { return vlSymsp->name(); }
const char* Vi2c::modelName() const { return "Vi2c"; }
unsigned Vi2c::threads() const { return 1; }
void Vi2c::prepareClone() const { contextp()->prepareClone(); }
void Vi2c::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vi2c::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vi2c::trace()' called on model that was Verilated without --trace option");
}
