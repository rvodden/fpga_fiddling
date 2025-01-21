// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VI2C__SYMS_H_
#define VERILATED_VI2C__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vi2c.h"

// INCLUDE MODULE CLASSES
#include "Vi2c___024root.h"
#include "Vi2c___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vi2c__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vi2c* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vi2c___024root                 TOP;

    // CONSTRUCTORS
    Vi2c__Syms(VerilatedContext* contextp, const char* namep, Vi2c* modelp);
    ~Vi2c__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
