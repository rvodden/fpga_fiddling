// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnext_idle_tb__pch.h"
#include "Vnext_idle_tb.h"
#include "Vnext_idle_tb___024root.h"
#include "Vnext_idle_tb___024unit.h"

// FUNCTIONS
Vnext_idle_tb__Syms::~Vnext_idle_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vnext_idle_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vnext_idle_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vnext_idle_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vnext_idle_tb__Syms::Vnext_idle_tb__Syms(VerilatedContext* contextp, const char* namep, Vnext_idle_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_next_idle_tb.configure(this, name(), "next_idle_tb", "next_idle_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_idle_tb__then_ctr_next_should_be.configure(this, name(), "next_idle_tb.then_ctr_next_should_be", "then_ctr_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_idle_tb__then_ready_out_should_be.configure(this, name(), "next_idle_tb.then_ready_out_should_be", "then_ready_out_should_be", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_idle_tb__then_state_next_should_be.configure(this, name(), "next_idle_tb.then_state_next_should_be", "then_state_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
}
