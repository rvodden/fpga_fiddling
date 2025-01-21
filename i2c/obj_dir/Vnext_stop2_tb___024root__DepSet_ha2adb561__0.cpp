// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_stop2_tb.h for the primary calling header

#include "Vnext_stop2_tb__pch.h"
#include "Vnext_stop2_tb__Syms.h"
#include "Vnext_stop2_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vnext_stop2_tb___024root___eval_initial__TOP__Vtiming__0(Vnext_stop2_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_stop2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_stop2_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_next_stop2_tb__DOT__then_state_next_should_be__2__stateValue;
    __Vtask_next_stop2_tb__DOT__then_state_next_should_be__2__stateValue = 0;
    SData/*15:0*/ __Vtask_next_stop2_tb__DOT__when_ctr_reg_is_at__3__value;
    __Vtask_next_stop2_tb__DOT__when_ctr_reg_is_at__3__value = 0;
    CData/*3:0*/ __Vtask_next_stop2_tb__DOT__then_state_next_should_be__4__stateValue;
    __Vtask_next_stop2_tb__DOT__then_state_next_should_be__4__stateValue = 0;
    // Body
    VL_WRITEF("When ctr_reg is at     0\n");
    vlSelf->next_stop2_tb__DOT__ctr_reg = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/steps/ctr_reg_steps.v", 
                                       6);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_stop2_tb.v", 
                                       17);
    __Vtask_next_stop2_tb__DOT__then_state_next_should_be__2__stateValue = 6U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_stop2_tb__DOT__then_state_next_should_be__2__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_stop2_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_stop2_tb__DOT__then_state_next_should_be__2__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_stop2_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_stop2_tb__DOT__then_state_next_should_be__2__stateValue),
                  4,vlSelf->next_stop2_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_stop2_tb.v", 
                                       19);
    __Vtask_next_stop2_tb__DOT__when_ctr_reg_is_at__3__value = 0xffffU;
    VL_WRITEF("When ctr_reg is at %5#\n",16,__Vtask_next_stop2_tb__DOT__when_ctr_reg_is_at__3__value);
    vlSelf->next_stop2_tb__DOT__ctr_reg = __Vtask_next_stop2_tb__DOT__when_ctr_reg_is_at__3__value;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/steps/ctr_reg_steps.v", 
                                       6);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_stop2_tb.v", 
                                       21);
    __Vtask_next_stop2_tb__DOT__then_state_next_should_be__4__stateValue = 0U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_stop2_tb__DOT__then_state_next_should_be__4__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_stop2_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_stop2_tb__DOT__then_state_next_should_be__4__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_stop2_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_stop2_tb__DOT__then_state_next_should_be__4__stateValue),
                  4,vlSelf->next_stop2_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    VL_FINISH_MT("test/next_stop2_tb.v", 23, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_stop2_tb___024root___dump_triggers__act(Vnext_stop2_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnext_stop2_tb___024root___eval_triggers__act(Vnext_stop2_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_stop2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_stop2_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnext_stop2_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
