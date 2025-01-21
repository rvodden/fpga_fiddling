// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnext_data4_tb.h for the primary calling header

#include "Vnext_data4_tb__pch.h"
#include "Vnext_data4_tb__Syms.h"
#include "Vnext_data4_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vnext_data4_tb___024root___eval_initial__TOP__Vtiming__0(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_sda_out_should_be__2__value;
    __Vtask_next_data4_tb__DOT__then_sda_out_should_be__2__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_scl_out_should_be__3__value;
    __Vtask_next_data4_tb__DOT__then_scl_out_should_be__3__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_data_phase_should_be__4__value;
    __Vtask_next_data4_tb__DOT__then_data_phase_should_be__4__value = 0;
    CData/*3:0*/ __Vtask_next_data4_tb__DOT__then_state_next_should_be__5__stateValue;
    __Vtask_next_data4_tb__DOT__then_state_next_should_be__5__stateValue = 0;
    SData/*15:0*/ __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__6__value;
    __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__6__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__7__value;
    __Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__7__value = 0;
    SData/*15:0*/ __Vtask_next_data4_tb__DOT__when_ctr_reg_is_at__8__value;
    __Vtask_next_data4_tb__DOT__when_ctr_reg_is_at__8__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_sda_out_should_be__9__value;
    __Vtask_next_data4_tb__DOT__then_sda_out_should_be__9__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_scl_out_should_be__10__value;
    __Vtask_next_data4_tb__DOT__then_scl_out_should_be__10__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_data_phase_should_be__11__value;
    __Vtask_next_data4_tb__DOT__then_data_phase_should_be__11__value = 0;
    SData/*15:0*/ __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__12__value;
    __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__12__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__13__value;
    __Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__13__value = 0;
    CData/*3:0*/ __Vtask_next_data4_tb__DOT__then_state_next_should_be__16__stateValue;
    __Vtask_next_data4_tb__DOT__then_state_next_should_be__16__stateValue = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_sda_out_should_be__17__value;
    __Vtask_next_data4_tb__DOT__then_sda_out_should_be__17__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_scl_out_should_be__18__value;
    __Vtask_next_data4_tb__DOT__then_scl_out_should_be__18__value = 0;
    CData/*0:0*/ __Vtask_next_data4_tb__DOT__then_data_phase_should_be__19__value;
    __Vtask_next_data4_tb__DOT__then_data_phase_should_be__19__value = 0;
    SData/*15:0*/ __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__20__value;
    __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__20__value = 0;
    SData/*8:0*/ __Vtask_next_data4_tb__DOT__then_tx_next_should_be__22__value;
    __Vtask_next_data4_tb__DOT__then_tx_next_should_be__22__value = 0;
    CData/*3:0*/ __Vtask_next_data4_tb__DOT__then_bit_next_should_be__23__value;
    __Vtask_next_data4_tb__DOT__then_bit_next_should_be__23__value = 0;
    CData/*3:0*/ __Vtask_next_data4_tb__DOT__then_state_next_should_be__24__stateValue;
    __Vtask_next_data4_tb__DOT__then_state_next_should_be__24__stateValue = 0;
    // Body
    VL_WRITEF("When ctr_reg is at     0\n");
    vlSelf->next_data4_tb__DOT__ctr_reg = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/steps/ctr_reg_steps.v", 
                                       6);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_data4_tb.v", 
                                       32);
    __Vtask_next_data4_tb__DOT__then_sda_out_should_be__2__value = 1U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_data4_tb__DOT__then_sda_out_should_be__2__value);
    if (VL_LIKELY(__Vtask_next_data4_tb__DOT__then_sda_out_should_be__2__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_data4_tb.then_sda_out_should_be: sda_out is not %b but 1\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_sda_out_should_be__2__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    }
    __Vtask_next_data4_tb__DOT__then_scl_out_should_be__3__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_data4_tb__DOT__then_scl_out_should_be__3__value);
    if (VL_UNLIKELY(__Vtask_next_data4_tb__DOT__then_scl_out_should_be__3__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_data4_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_scl_out_should_be__3__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_data4_tb__DOT__then_data_phase_should_be__4__value = 1U;
    VL_WRITEF("Then data_phase should be %b...",1,__Vtask_next_data4_tb__DOT__then_data_phase_should_be__4__value);
    if (VL_LIKELY(__Vtask_next_data4_tb__DOT__then_data_phase_should_be__4__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: data_phase_steps.v:7: Assertion failed in %Nnext_data4_tb.then_data_phase_should_be: data_phase is not %b, but 1.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_data_phase_should_be__4__value));
        VL_STOP_MT("test/steps/data_phase_steps.v", 7, "");
    }
    __Vtask_next_data4_tb__DOT__then_state_next_should_be__5__stateValue = 0xaU;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_data4_tb__DOT__then_state_next_should_be__5__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_state_next_should_be__5__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_data4_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_data4_tb__DOT__then_state_next_should_be__5__stateValue),
                  4,vlSelf->next_data4_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__6__value 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->next_data4_tb__DOT__ctr_reg)));
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__6__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__6__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_data4_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__6__value),
                  16,vlSelf->next_data4_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    __Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__7__value = 0U;
    VL_WRITEF("THen done_tick_out should be %1#...",
              1,__Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__7__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__done_tick_out) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__7__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: done_tick_out_steps.v:12: Assertion failed in %Nnext_data4_tb.then_done_tick_out_should_be: done_tick_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__7__value),
                  1,vlSelf->next_data4_tb__DOT__done_tick_out);
        VL_STOP_MT("test/steps/done_tick_out_steps.v", 12, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_data4_tb.v", 
                                       39);
    __Vtask_next_data4_tb__DOT__when_ctr_reg_is_at__8__value = 0xffffU;
    VL_WRITEF("When ctr_reg is at %5#\n",16,__Vtask_next_data4_tb__DOT__when_ctr_reg_is_at__8__value);
    vlSelf->next_data4_tb__DOT__ctr_reg = __Vtask_next_data4_tb__DOT__when_ctr_reg_is_at__8__value;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/steps/ctr_reg_steps.v", 
                                       6);
    vlSelf->next_data4_tb__DOT__bit_reg = 8U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_data4_tb.v", 
                                       42);
    __Vtask_next_data4_tb__DOT__then_sda_out_should_be__9__value = 1U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_data4_tb__DOT__then_sda_out_should_be__9__value);
    if (VL_LIKELY(__Vtask_next_data4_tb__DOT__then_sda_out_should_be__9__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_data4_tb.then_sda_out_should_be: sda_out is not %b but 1\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_sda_out_should_be__9__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    }
    __Vtask_next_data4_tb__DOT__then_scl_out_should_be__10__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_data4_tb__DOT__then_scl_out_should_be__10__value);
    if (VL_UNLIKELY(__Vtask_next_data4_tb__DOT__then_scl_out_should_be__10__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_data4_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_scl_out_should_be__10__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_data4_tb__DOT__then_data_phase_should_be__11__value = 1U;
    VL_WRITEF("Then data_phase should be %b...",1,__Vtask_next_data4_tb__DOT__then_data_phase_should_be__11__value);
    if (VL_LIKELY(__Vtask_next_data4_tb__DOT__then_data_phase_should_be__11__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: data_phase_steps.v:7: Assertion failed in %Nnext_data4_tb.then_data_phase_should_be: data_phase is not %b, but 1.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_data_phase_should_be__11__value));
        VL_STOP_MT("test/steps/data_phase_steps.v", 7, "");
    }
    __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__12__value = 0U;
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__12__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__12__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_data4_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__12__value),
                  16,vlSelf->next_data4_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    __Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__13__value = 1U;
    VL_WRITEF("THen done_tick_out should be %1#...",
              1,__Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__13__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__done_tick_out) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__13__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: done_tick_out_steps.v:12: Assertion failed in %Nnext_data4_tb.then_done_tick_out_should_be: done_tick_out is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_done_tick_out_should_be__13__value),
                  1,vlSelf->next_data4_tb__DOT__done_tick_out);
        VL_STOP_MT("test/steps/done_tick_out_steps.v", 12, "");
    }
    VL_WRITEF("Then tx_next should be unknown...[%0t] %%Error: tx_next_steps.v:4: Assertion failed in %Nnext_data4_tb.then_tx_next_should_be_unknown: tx_next is not unknown, but %b.\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
              4,(IData)(vlSelf->next_data4_tb__DOT__state_next));
    VL_STOP_MT("test/steps/tx_next_steps.v", 4, "");
    VL_WRITEF("Then bit_next should be unknown...[%0t] %%Error: bit_next_steps.v:4: Assertion failed in %Nnext_data4_tb.then_bit_next_should_be_unknown: bit_next is not unknown, but %b.\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
              4,(IData)(vlSelf->next_data4_tb__DOT__state_next));
    VL_STOP_MT("test/steps/bit_next_steps.v", 4, "");
    __Vtask_next_data4_tb__DOT__then_state_next_should_be__16__stateValue = 0xbU;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_data4_tb__DOT__then_state_next_should_be__16__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_state_next_should_be__16__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_data4_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_data4_tb__DOT__then_state_next_should_be__16__stateValue),
                  4,vlSelf->next_data4_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_data4_tb.v", 
                                       51);
    vlSelf->next_data4_tb__DOT__bit_reg = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "test/next_data4_tb.v", 
                                       53);
    __Vtask_next_data4_tb__DOT__then_sda_out_should_be__17__value = 1U;
    VL_WRITEF("THen sda_out should be %1#...",1,__Vtask_next_data4_tb__DOT__then_sda_out_should_be__17__value);
    if (VL_LIKELY(__Vtask_next_data4_tb__DOT__then_sda_out_should_be__17__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: sda_out_steps.v:6: Assertion failed in %Nnext_data4_tb.then_sda_out_should_be: sda_out is not %b but 1\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_sda_out_should_be__17__value));
        VL_STOP_MT("test/steps/sda_out_steps.v", 6, "");
    }
    __Vtask_next_data4_tb__DOT__then_scl_out_should_be__18__value = 0U;
    VL_WRITEF("THen scl_out should be %1#...",1,__Vtask_next_data4_tb__DOT__then_scl_out_should_be__18__value);
    if (VL_UNLIKELY(__Vtask_next_data4_tb__DOT__then_scl_out_should_be__18__value)) {
        VL_WRITEF("[%0t] %%Error: scl_out_steps.v:6: Assertion failed in %Nnext_data4_tb.then_scl_out_should_be: scl_out is not %b but 0\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_scl_out_should_be__18__value));
        VL_STOP_MT("test/steps/scl_out_steps.v", 6, "");
    } else {
        VL_WRITEF(" success.\n");
    }
    __Vtask_next_data4_tb__DOT__then_data_phase_should_be__19__value = 1U;
    VL_WRITEF("Then data_phase should be %b...",1,__Vtask_next_data4_tb__DOT__then_data_phase_should_be__19__value);
    if (VL_LIKELY(__Vtask_next_data4_tb__DOT__then_data_phase_should_be__19__value)) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: data_phase_steps.v:7: Assertion failed in %Nnext_data4_tb.then_data_phase_should_be: data_phase is not %b, but 1.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  1,(IData)(__Vtask_next_data4_tb__DOT__then_data_phase_should_be__19__value));
        VL_STOP_MT("test/steps/data_phase_steps.v", 7, "");
    }
    __Vtask_next_data4_tb__DOT__then_ctr_next_should_be__20__value = 0U;
    VL_WRITEF("THen ctr_next should be %5#...",16,__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__20__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__ctr_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__20__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: ctr_next_steps.v:12: Assertion failed in %Nnext_data4_tb.then_ctr_next_should_be: ctr_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  16,(IData)(__Vtask_next_data4_tb__DOT__then_ctr_next_should_be__20__value),
                  16,vlSelf->next_data4_tb__DOT__ctr_next);
        VL_STOP_MT("test/steps/ctr_next_steps.v", 12, "");
    }
    VL_WRITEF("Then done_tick_out should be unknown...[%0t] %%Error: done_tick_out_steps.v:4: Assertion failed in %Nnext_data4_tb.then_done_tick_out_should_be_unknown: done_tick_out is not unknown, but %b.\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
              4,(IData)(vlSelf->next_data4_tb__DOT__state_next));
    VL_STOP_MT("test/steps/done_tick_out_steps.v", 4, "");
    __Vtask_next_data4_tb__DOT__then_tx_next_should_be__22__value = 0x1feU;
    VL_WRITEF("THen tx_next should be %3#...",9,__Vtask_next_data4_tb__DOT__then_tx_next_should_be__22__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__tx_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_tx_next_should_be__22__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: tx_next_steps.v:12: Assertion failed in %Nnext_data4_tb.then_tx_next_should_be: tx_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  9,(IData)(__Vtask_next_data4_tb__DOT__then_tx_next_should_be__22__value),
                  9,vlSelf->next_data4_tb__DOT__tx_next);
        VL_STOP_MT("test/steps/tx_next_steps.v", 12, "");
    }
    __Vtask_next_data4_tb__DOT__then_bit_next_should_be__23__value = 2U;
    VL_WRITEF("THen bit_next should be %2#...",4,__Vtask_next_data4_tb__DOT__then_bit_next_should_be__23__value);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__bit_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_bit_next_should_be__23__value)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: bit_next_steps.v:12: Assertion failed in %Nnext_data4_tb.then_bit_next_should_be: bit_next is not %b but %b\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_data4_tb__DOT__then_bit_next_should_be__23__value),
                  4,vlSelf->next_data4_tb__DOT__bit_next);
        VL_STOP_MT("test/steps/bit_next_steps.v", 12, "");
    }
    __Vtask_next_data4_tb__DOT__then_state_next_should_be__24__stateValue = 7U;
    VL_WRITEF("Then state_next should be %2#...",4,
              __Vtask_next_data4_tb__DOT__then_state_next_should_be__24__stateValue);
    if (VL_LIKELY(((IData)(vlSelf->next_data4_tb__DOT__state_next) 
                   == (IData)(__Vtask_next_data4_tb__DOT__then_state_next_should_be__24__stateValue)))) {
        VL_WRITEF(" success.\n");
    } else {
        VL_WRITEF("[%0t] %%Error: state_next_steps.v:7: Assertion failed in %Nnext_data4_tb.then_state_next_should_be: state_next is not %2#, but %2#.\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                  4,(IData)(__Vtask_next_data4_tb__DOT__then_state_next_should_be__24__stateValue),
                  4,vlSelf->next_data4_tb__DOT__state_next);
        VL_STOP_MT("test/steps/state_next_steps.v", 7, "");
    }
    VL_FINISH_MT("test/next_data4_tb.v", 62, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnext_data4_tb___024root___dump_triggers__act(Vnext_data4_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vnext_data4_tb___024root___eval_triggers__act(Vnext_data4_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnext_data4_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnext_data4_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnext_data4_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
