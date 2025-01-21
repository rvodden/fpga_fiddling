// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_start2_tb.h for the primary calling header

#include "Vnext_start2_tb__pch.h"
#include "Vnext_start2_tb__Syms.h"
#include "Vnext_start2_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vnext_start2_tb___024root___eval_initial__TOP__Vtiming__0(Vnext_start2_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_start2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_start2_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_next_start2_tb__DOT__then_sda_out_should_be__2__value;
    __Vtask_next_start2_tb__DOT__then_sda_out_should_be__2__value = 0;
    CData/*0:0*/ __Vtask_next_start2_tb__DOT__then_scl_out_should_be__3__value;
    __Vtask_next_start2_tb__DOT__then_scl_out_should_be__3__value = 0;
    CData/*3:0*/ __Vtask_next_start2_tb__DOT__then_state_next_should_be__4__stateValue;
    __Vtask_next_start2_tb__DOT__then_state_next_should_be__4__stateValue = 0;
    SData/*15:0*/ __Vtask_next_start2_tb__DOT__then_ctr_next_should_be__5__value;
    __Vtask_next_start2_tb__DOT__then_ctr_next_should_be__5__value = 0;
    SData/*15:0*/ __Vtask_next_start2_tb__DOT__when_ctr_reg_is_at__6__value;
    __Vtask_next_start2_tb__DOT__when_ctr_reg_is_at__6__value = 0;
    CData/*0:0*/ __Vtask_next_start2_tb__DOT__then_sda_out_should_be__7__value;
    __Vtask_next_start2_tb__DOT__then_sda_out_should_be__7__value = 0;
    CData/*3:0*/ __Vtask_next_start2_tb__DOT__then_state_next_should_be__8__stateValue;
    __Vtask_next_start2_tb__DOT__then_state_next_should_be__8__stateValue = 0;
    SData/*15:0*/ __Vtask_next_start2_tb__DOT__then_ctr_next_should_be__9__value;
    __Vtask_next_start2_tb__DOT__then_ctr_next_should_be__9__value = 0;
    // Body
    VL_WRITEF("When ctr_reg is at     0\n");
    vlSelf->next_start2_tb__DOT__ctr_reg = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/steps/ctr_reg_steps.v", 
                                       6);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_start2_tb.v", 
                                       20);
    __Vtask_next_start2_tb__DOT__then_sda_out_should_be__2__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_start2_tb__DOT__then_sda_out_should_be__2__value);
    if (VL_UNLIKELY(__Vtask_next_start2_tb__DOT__then_sda_out_should_be__2__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_start2_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_start2_tb__DOT__then_sda_out_should_be__2__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_start2_tb__DOT__then_scl_out_should_be__3__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_start2_tb__DOT__then_scl_out_should_be__3__value);
    if (VL_UNLIKELY(__Vtask_next_start2_tb__DOT__then_scl_out_should_be__3__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_start2_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_start2_tb__DOT__then_scl_out_should_be__3__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_start2_tb__DOT__then_state_next_should_be__4__stateValue = 2U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_start2_tb__DOT__then_state_next_should_be__4__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_start2_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_start2_tb__DOT__then_state_next_should_be__4__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_start2_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_start2_tb__DOT__then_state_next_should_be__4__stateValue),
                  4,vlSelf->next_start2_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_start2_tb__DOT__then_ctr_next_should_be__5__value 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->next_start2_tb__DOT__ctr_reg)));
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_start2_tb__DOT__then_ctr_next_should_be__5__value);
    if (VL_LIKELY(((IData)(vlSelf->next_start2_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_start2_tb__DOT__then_ctr_next_should_be__5__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_start2_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_start2_tb__DOT__then_ctr_next_should_be__5__value),
                  16,vlSelf->next_start2_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_start2_tb.v", 
                                       25);
    __Vtask_next_start2_tb__DOT__when_ctr_reg_is_at__6__value = 0xffffU;
    VL_WRITEF("When ctr_reg is at %5#\n",16,__Vtask_next_start2_tb__DOT__when_ctr_reg_is_at__6__value);
    vlSelf->next_start2_tb__DOT__ctr_reg = __Vtask_next_start2_tb__DOT__when_ctr_reg_is_at__6__value;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/steps/ctr_reg_steps.v", 
                                       6);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_start2_tb.v", 
                                       27);
    __Vtask_next_start2_tb__DOT__then_sda_out_should_be__7__value = 0U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_start2_tb__DOT__then_sda_out_should_be__7__value);
    if (VL_UNLIKELY(__Vtask_next_start2_tb__DOT__then_sda_out_should_be__7__value)) {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_start2_tb.then_sda_out_should_be: sda_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_start2_tb__DOT__then_sda_out_should_be__7__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_start2_tb__DOT__then_state_next_should_be__8__stateValue = 3U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_start2_tb__DOT__then_state_next_should_be__8__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_start2_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_start2_tb__DOT__then_state_next_should_be__8__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_start2_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_start2_tb__DOT__then_state_next_should_be__8__stateValue),
                  4,vlSelf->next_start2_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_start2_tb__DOT__then_ctr_next_should_be__9__value = 0U;
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_start2_tb__DOT__then_ctr_next_should_be__9__value);
    if (VL_LIKELY(((IData)(vlSelf->next_start2_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_start2_tb__DOT__then_ctr_next_should_be__9__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_start2_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_start2_tb__DOT__then_ctr_next_should_be__9__value),
                  16,vlSelf->next_start2_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    VL_FINISH_MT("test/next_start2_tb.v", 31, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_start2_tb___024root___dump_triggers__act(Vnext_start2_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnext_start2_tb___024root___eval_triggers__act(Vnext_start2_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_start2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_start2_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnext_start2_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
