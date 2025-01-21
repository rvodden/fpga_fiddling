// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNEXT_DATA2_TB__SYMS_H_
#define VERILATED_VNEXT_DATA2_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnext_data2_tb.h"

// INCLUDE MODULE CLASSES
#include "Vnext_data2_tb___024root.h"
#include "Vnext_data2_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vnext_data2_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnext_data2_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnext_data2_tb___024root       TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_next_data2_tb;
    VerilatedScope __Vscope_next_data2_tb__then_ctr_next_should_be;
    VerilatedScope __Vscope_next_data2_tb__then_data_phase_should_be;
    VerilatedScope __Vscope_next_data2_tb__then_rx_next_should_be;
    VerilatedScope __Vscope_next_data2_tb__then_sda_out_should_be;
    VerilatedScope __Vscope_next_data2_tb__then_state_next_should_be;

    // CONSTRUCTORS
    Vnext_data2_tb__Syms(VerilatedContext* contextp, const char* namep, Vnext_data2_tb* modelp);
    ~Vnext_data2_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
