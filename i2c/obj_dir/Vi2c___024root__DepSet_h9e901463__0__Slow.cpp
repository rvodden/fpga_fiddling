// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c.h for the primary calling header

#include "Vi2c__pch.h"
#include "Vi2c__Syms.h"
#include "Vi2c___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__stl(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vi2c___024root___eval_triggers__stl(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vi2c___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
