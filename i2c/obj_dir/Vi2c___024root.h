// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c.h for the primary calling header

#ifndef VERILATED_VI2C___024ROOT_H_
#define VERILATED_VI2C___024ROOT_H_  // guard

#include "verilated.h"


class Vi2c__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vi2c___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(write,0,0);
        VL_IN8(data_in,7,0);
        VL_IN8(cmd,2,0);
        VL_OUT8(ready,0,0);
        VL_OUT8(data_out,7,0);
        VL_OUT8(ack,0,0);
        VL_OUT8(done_tick,0,0);
        VL_INOUT8(SDA,0,0);
        VL_OUT8(SCL,0,0);
        CData/*3:0*/ i2c__DOT__state_reg;
        CData/*3:0*/ i2c__DOT__state_next;
        CData/*2:0*/ i2c__DOT__cmd_reg;
        CData/*2:0*/ i2c__DOT__cmd_next;
        CData/*3:0*/ i2c__DOT__bit_reg;
        CData/*3:0*/ i2c__DOT__bit_next;
        CData/*0:0*/ i2c__DOT__sda_reg;
        CData/*0:0*/ i2c__DOT__sda_out;
        CData/*3:0*/ __Vtask_i2c__DOT__next_stop2__0__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data_end__1__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data4__2__bit_reg;
        CData/*0:0*/ __Vtask_i2c__DOT__next_data4__2__sda_out;
        CData/*0:0*/ __Vtask_i2c__DOT__next_data4__2__done_tick_out;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data4__2__bit_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data4__2__state_next;
        CData/*0:0*/ __Vtask_i2c__DOT__next_data3__3__sda_out;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data3__3__state_next;
        CData/*0:0*/ __Vtask_i2c__DOT__next_data2__4__sda;
        CData/*0:0*/ __Vtask_i2c__DOT__next_data2__4__sda_out;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data2__4__state_next;
        CData/*0:0*/ __Vtask_i2c__DOT__next_data1__5__sda_out;
        CData/*3:0*/ __Vtask_i2c__DOT__next_data1__5__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_stop2__6__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_stop1__7__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_restart__8__state_next;
        CData/*0:0*/ __Vtask_i2c__DOT__next_hold__9__write;
        CData/*2:0*/ __Vtask_i2c__DOT__next_hold__9__cmd;
        CData/*7:0*/ __Vtask_i2c__DOT__next_hold__9__data_in;
        CData/*0:0*/ __Vtask_i2c__DOT__next_hold__9__nack;
        CData/*3:0*/ __Vtask_i2c__DOT__next_hold__9__bit_next;
        CData/*2:0*/ __Vtask_i2c__DOT__next_hold__9__cmd_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_hold__9__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_start2__10__state_next;
        CData/*3:0*/ __Vtask_i2c__DOT__next_start1__11__state_next;
        CData/*0:0*/ __Vtask_i2c__DOT__next_idle__12__write;
        CData/*2:0*/ __Vtask_i2c__DOT__next_idle__12__cmd;
        CData/*3:0*/ __Vtask_i2c__DOT__next_idle__12__state_next;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(clock_divisor,15,0);
        SData/*8:0*/ i2c__DOT__rx_reg;
        SData/*8:0*/ i2c__DOT__rx_next;
        SData/*8:0*/ i2c__DOT__tx_reg;
        SData/*8:0*/ i2c__DOT__tx_next;
        SData/*15:0*/ i2c__DOT__ctr_reg;
        SData/*15:0*/ i2c__DOT__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop2__0__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data_end__1__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg;
    };
    struct {
        SData/*15:0*/ __Vtask_i2c__DOT__next_data_end__1__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data4__2__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data4__2__clock_divisor_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data4__2__tx_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data4__2__tx_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data4__2__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data3__3__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data3__3__clock_divisor_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data3__3__tx_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data3__3__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data2__4__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data2__4__clock_divisor_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data2__4__tx_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data2__4__rx_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data2__4__rx_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data2__4__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data1__5__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data1__5__clock_divisor_reg;
        SData/*8:0*/ __Vtask_i2c__DOT__next_data1__5__tx_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_data1__5__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop2__6__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop1__7__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_stop1__7__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_restart__8__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_restart__8__ctr_next;
        SData/*8:0*/ __Vtask_i2c__DOT__next_hold__9__tx_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_hold__9__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_start2__10__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_start2__10__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_start1__11__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_start1__11__ctr_next;
        SData/*15:0*/ __Vtask_i2c__DOT__next_idle__12__ctr_reg;
        SData/*15:0*/ __Vtask_i2c__DOT__next_idle__12__ctr_next;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vi2c__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vi2c___024root(Vi2c__Syms* symsp, const char* v__name);
    ~Vi2c___024root();
    VL_UNCOPYABLE(Vi2c___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
