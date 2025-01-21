// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c.h for the primary calling header

#include "Vi2c__pch.h"
#include "Vi2c__Syms.h"
#include "Vi2c___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__ico(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG

void Vi2c___024root___eval_triggers__ico(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vi2c___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__act(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG

void Vi2c___024root___eval_triggers__act(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vi2c___024root___dump_triggers__act(vlSelf);
    }
#endif
}
