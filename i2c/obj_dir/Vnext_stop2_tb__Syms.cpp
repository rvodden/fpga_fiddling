// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vnext_stop2_tb__pch.h"
#include "Vnext_stop2_tb.h"
#include "Vnext_stop2_tb___024root.h"
#include "Vnext_stop2_tb___024unit.h"

// FUNCTIONS
Vnext_stop2_tb__Syms::~Vnext_stop2_tb__Syms()
{
}

Vnext_stop2_tb__Syms::Vnext_stop2_tb__Syms(VerilatedContext* contextp, const char* namep, Vnext_stop2_tb* modelp)
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
    __Vscope_next_stop2_tb.configure(this, name(), "next_stop2_tb", "next_stop2_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_next_stop2_tb__then_state_next_should_be.configure(this, name(), "next_stop2_tb.then_state_next_should_be", "then_state_next_should_be", -12, VerilatedScope::SCOPE_OTHER);
}
