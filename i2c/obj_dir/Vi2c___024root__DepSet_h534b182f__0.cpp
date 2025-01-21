// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c.h for the primary calling header

#include "Vi2c__pch.h"
#include "Vi2c___024root.h"

VL_INLINE_OPT void Vi2c___024root___ico_sequent__TOP__0(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ i2c__DOT__done_tick_out;
    i2c__DOT__done_tick_out = 0;
    // Body
    vlSelf->i2c__DOT__state_next = vlSelf->i2c__DOT__state_reg;
    vlSelf->i2c__DOT__ctr_next = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelf->i2c__DOT__ctr_reg)));
    vlSelf->i2c__DOT__bit_next = vlSelf->i2c__DOT__bit_reg;
    vlSelf->i2c__DOT__tx_next = vlSelf->i2c__DOT__tx_reg;
    vlSelf->i2c__DOT__rx_next = vlSelf->i2c__DOT__rx_reg;
    vlSelf->i2c__DOT__cmd_next = vlSelf->i2c__DOT__cmd_reg;
    i2c__DOT__done_tick_out = 0U;
    vlSelf->i2c__DOT__sda_out = 1U;
    if ((8U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((4U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next 
                = (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg) 
                    == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg))
                    ? 0U : 6U);
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next;
        } else if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->i2c__DOT__sda_out = 0U;
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg))) {
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next = 0U;
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = 3U;
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg)));
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = 0xbU;
                }
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg 
                    = vlSelf->i2c__DOT__bit_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg 
                    = vlSelf->i2c__DOT__tx_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out 
                    = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg) 
                             >> 8U));
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg))) {
                    if ((8U == (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg))) {
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 0xbU;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                            = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = 0U;
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                            = (0x1feU & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg) 
                                         << 1U));
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg)));
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 0U;
                    }
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 0xaU;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg)));
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                        = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next 
                        = vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 0U;
                }
                vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out;
                i2c__DOT__done_tick_out = vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out;
                vlSelf->i2c__DOT__bit_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next;
                vlSelf->i2c__DOT__tx_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next;
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next;
            }
        } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg 
                = vlSelf->i2c__DOT__tx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg 
                = vlSelf->clock_divisor;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out 
                = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg) 
                         >> 8U));
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = 0xaU;
                vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = 9U;
                vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg)));
            }
            vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg 
                = vlSelf->i2c__DOT__rx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg 
                = vlSelf->i2c__DOT__tx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg 
                = vlSelf->clock_divisor;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out 
                = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg) 
                         >> 8U));
            vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__sda 
                = vlSelf->i2c__DOT__sda_reg;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = 9U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next = 0U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next 
                    = ((0x1feU & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg) 
                                  << 1U)) | (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__sda));
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = 8U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg)));
                vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next 
                    = vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg;
            }
            vlSelf->i2c__DOT__rx_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next;
        }
    } else if ((4U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg 
                    = vlSelf->i2c__DOT__tx_reg;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out 
                    = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg) 
                             >> 8U));
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg))) {
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = 8U;
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next = 0U;
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = 7U;
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg)));
                }
                vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out;
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg 
                    = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next 
                    = (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg) 
                        == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg))
                        ? 0U : 6U);
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next;
            }
        } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = 0U;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = 6U;
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = 5U;
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg)));
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next = 1U;
                vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next = 0U;
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next;
        }
    } else if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_hold__9__nack 
                = (1U & (IData)(vlSelf->data_in));
            vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in 
                = vlSelf->data_in;
            vlSelf->i2c__DOT__sda_out = 0U;
            vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd 
                = vlSelf->cmd;
            vlSelf->__Vtask_i2c__DOT__next_hold__9__write 
                = vlSelf->write;
            if (vlSelf->__Vtask_i2c__DOT__next_hold__9__write) {
                vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next 
                    = vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd;
                vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next = 0U;
                if ((4U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                    if ((2U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                    } else if ((1U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next 
                            = (((IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in) 
                                << 1U) | (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__nack));
                    }
                } else if ((2U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                    if ((1U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next 
                            = (((IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in) 
                                << 1U) | (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__nack));
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 5U;
                    }
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 4U;
                }
            } else {
                vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 3U;
            }
            vlSelf->i2c__DOT__bit_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next;
            vlSelf->i2c__DOT__tx_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next;
            vlSelf->i2c__DOT__cmd_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = 0U;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = 3U;
                vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = 2U;
                vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg)));
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next;
        }
    } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
        vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg 
            = vlSelf->i2c__DOT__ctr_reg;
        vlSelf->i2c__DOT__sda_out = 0U;
        if (((IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg) 
             == (IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = 2U;
            vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next = 0U;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = 1U;
            vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg)));
        }
        vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next;
        vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next;
    } else {
        vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd 
            = vlSelf->cmd;
        vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg 
            = vlSelf->i2c__DOT__ctr_reg;
        vlSelf->__Vtask_i2c__DOT__next_idle__12__write 
            = vlSelf->write;
        if (((IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__write) 
             & (0U == (IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd)))) {
            vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = 1U;
            vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next = 0U;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = 0U;
            vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg)));
        }
        vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next;
        vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next;
    }
    vlSelf->done_tick = i2c__DOT__done_tick_out;
}

void Vi2c___024root___eval_ico(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vi2c___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vi2c___024root___eval_triggers__ico(Vi2c___024root* vlSelf);

bool Vi2c___024root___eval_phase__ico(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vi2c___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vi2c___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vi2c___024root___eval_act(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vi2c___024root___nba_sequent__TOP__0(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ i2c__DOT__ready_out;
    i2c__DOT__ready_out = 0;
    CData/*0:0*/ i2c__DOT__done_tick_out;
    i2c__DOT__done_tick_out = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->i2c__DOT__ctr_reg = 0U;
        vlSelf->i2c__DOT__tx_reg = 0U;
        vlSelf->i2c__DOT__cmd_reg = 0U;
        vlSelf->i2c__DOT__bit_reg = 0U;
        vlSelf->i2c__DOT__rx_reg = 0U;
        vlSelf->i2c__DOT__state_reg = 0U;
    } else {
        vlSelf->i2c__DOT__ctr_reg = vlSelf->i2c__DOT__ctr_next;
        vlSelf->i2c__DOT__tx_reg = vlSelf->i2c__DOT__tx_next;
        vlSelf->i2c__DOT__cmd_reg = vlSelf->i2c__DOT__cmd_next;
        vlSelf->i2c__DOT__bit_reg = vlSelf->i2c__DOT__bit_next;
        vlSelf->i2c__DOT__rx_reg = vlSelf->i2c__DOT__rx_next;
        vlSelf->i2c__DOT__state_reg = vlSelf->i2c__DOT__state_next;
    }
    vlSelf->i2c__DOT__sda_reg = ((IData)(vlSelf->reset) 
                                 || (IData)(vlSelf->i2c__DOT__sda_out));
    vlSelf->data_out = (0xffU & ((IData)(vlSelf->i2c__DOT__rx_reg) 
                                 >> 1U));
    vlSelf->ack = (1U & (IData)(vlSelf->i2c__DOT__rx_reg));
    i2c__DOT__ready_out = 0U;
    if ((1U & (~ ((IData)(vlSelf->i2c__DOT__state_reg) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->i2c__DOT__state_reg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                    i2c__DOT__ready_out = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->i2c__DOT__state_reg)))) {
                i2c__DOT__ready_out = 1U;
            }
        }
    }
    vlSelf->i2c__DOT__state_next = vlSelf->i2c__DOT__state_reg;
    vlSelf->i2c__DOT__ctr_next = (0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelf->i2c__DOT__ctr_reg)));
    vlSelf->i2c__DOT__bit_next = vlSelf->i2c__DOT__bit_reg;
    vlSelf->i2c__DOT__tx_next = vlSelf->i2c__DOT__tx_reg;
    vlSelf->i2c__DOT__rx_next = vlSelf->i2c__DOT__rx_reg;
    vlSelf->i2c__DOT__cmd_next = vlSelf->i2c__DOT__cmd_reg;
    i2c__DOT__done_tick_out = 0U;
    vlSelf->i2c__DOT__sda_out = 1U;
    if ((8U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((4U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next 
                = (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__0__ctr_reg) 
                    == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__0__dbl_clock_divisor_reg))
                    ? 0U : 6U);
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop2__0__state_next;
        } else if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->i2c__DOT__sda_out = 0U;
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__clock_divisor_reg))) {
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next = 0U;
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = 3U;
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_reg)));
                    vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next = 0xbU;
                }
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data_end__1__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data_end__1__ctr_next;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg 
                    = vlSelf->i2c__DOT__bit_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg 
                    = vlSelf->i2c__DOT__tx_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out 
                    = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg) 
                             >> 8U));
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__clock_divisor_reg))) {
                    if ((8U == (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg))) {
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 0xbU;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                            = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = 0U;
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                            = (0x1feU & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg) 
                                         << 1U));
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg)));
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 0U;
                    }
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next = 0xaU;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_reg)));
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next 
                        = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_reg;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next 
                        = vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_reg;
                    vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out = 0U;
                }
                vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data4__2__sda_out;
                i2c__DOT__done_tick_out = vlSelf->__Vtask_i2c__DOT__next_data4__2__done_tick_out;
                vlSelf->i2c__DOT__bit_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__bit_next;
                vlSelf->i2c__DOT__tx_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__tx_next;
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data4__2__ctr_next;
            }
        } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg 
                = vlSelf->i2c__DOT__tx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg 
                = vlSelf->clock_divisor;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out 
                = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__tx_reg) 
                         >> 8U));
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = 0xaU;
                vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next = 9U;
                vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_reg)));
            }
            vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data3__3__sda_out;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data3__3__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data3__3__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg 
                = vlSelf->i2c__DOT__rx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg 
                = vlSelf->i2c__DOT__tx_reg;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg 
                = vlSelf->clock_divisor;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out 
                = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__tx_reg) 
                         >> 8U));
            vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data2__4__sda_out;
            vlSelf->__Vtask_i2c__DOT__next_data2__4__sda 
                = vlSelf->i2c__DOT__sda_reg;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = 9U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next = 0U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next 
                    = ((0x1feU & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg) 
                                  << 1U)) | (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__sda));
            } else {
                vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next = 8U;
                vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_reg)));
                vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next 
                    = vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_reg;
            }
            vlSelf->i2c__DOT__rx_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__rx_next;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data2__4__ctr_next;
        }
    } else if ((4U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg 
                    = vlSelf->i2c__DOT__tx_reg;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg 
                    = vlSelf->clock_divisor;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out 
                    = (1U & ((IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__tx_reg) 
                             >> 8U));
                if (((IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg) 
                     == (IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__clock_divisor_reg))) {
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = 8U;
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next = 0U;
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next = 7U;
                    vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_reg)));
                }
                vlSelf->i2c__DOT__sda_out = vlSelf->__Vtask_i2c__DOT__next_data1__5__sda_out;
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_data1__5__state_next;
                vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_data1__5__ctr_next;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg 
                    = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg 
                    = vlSelf->i2c__DOT__ctr_reg;
                vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next 
                    = (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__6__ctr_reg) 
                        == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop2__6__dbl_clock_divisor_reg))
                        ? 0U : 6U);
                vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop2__6__state_next;
            }
        } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = 0U;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = 6U;
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next = 5U;
                vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_reg)));
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_stop1__7__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_stop1__7__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_restart__8__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next = 1U;
                vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next = 0U;
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_restart__8__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_restart__8__ctr_next;
        }
    } else if ((2U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_hold__9__nack 
                = (1U & (IData)(vlSelf->data_in));
            vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in 
                = vlSelf->data_in;
            vlSelf->i2c__DOT__sda_out = 0U;
            vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd 
                = vlSelf->cmd;
            vlSelf->__Vtask_i2c__DOT__next_hold__9__write 
                = vlSelf->write;
            if (vlSelf->__Vtask_i2c__DOT__next_hold__9__write) {
                vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next 
                    = vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd;
                vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next = 0U;
                if ((4U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                    if ((2U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                    } else if ((1U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 1U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next 
                            = (((IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in) 
                                << 1U) | (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__nack));
                    }
                } else if ((2U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                    if ((1U & (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd))) {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next = 0U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 7U;
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next 
                            = (((IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__data_in) 
                                << 1U) | (IData)(vlSelf->__Vtask_i2c__DOT__next_hold__9__nack));
                    } else {
                        vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 5U;
                    }
                } else {
                    vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 4U;
                }
            } else {
                vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next = 3U;
            }
            vlSelf->i2c__DOT__bit_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__bit_next;
            vlSelf->i2c__DOT__tx_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__tx_next;
            vlSelf->i2c__DOT__cmd_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__cmd_next;
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_hold__9__ctr_next;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg 
                = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
            vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg 
                = vlSelf->i2c__DOT__ctr_reg;
            vlSelf->i2c__DOT__sda_out = 0U;
            if (((IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg) 
                 == (IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__dbl_clock_divisor_reg))) {
                vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = 3U;
                vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next = 0U;
            } else {
                vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next = 2U;
                vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_reg)));
            }
            vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_start2__10__state_next;
            vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_start2__10__ctr_next;
        }
    } else if ((1U & (IData)(vlSelf->i2c__DOT__state_reg))) {
        vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->clock_divisor), 1U));
        vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg 
            = vlSelf->i2c__DOT__ctr_reg;
        vlSelf->i2c__DOT__sda_out = 0U;
        if (((IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg) 
             == (IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__dbl_clock_divisor_reg))) {
            vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = 2U;
            vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next = 0U;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next = 1U;
            vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_reg)));
        }
        vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_start1__11__state_next;
        vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_start1__11__ctr_next;
    } else {
        vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd 
            = vlSelf->cmd;
        vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg 
            = vlSelf->i2c__DOT__ctr_reg;
        vlSelf->__Vtask_i2c__DOT__next_idle__12__write 
            = vlSelf->write;
        if (((IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__write) 
             & (0U == (IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__cmd)))) {
            vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = 1U;
            vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next = 0U;
        } else {
            vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next = 0U;
            vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_reg)));
        }
        vlSelf->i2c__DOT__state_next = vlSelf->__Vtask_i2c__DOT__next_idle__12__state_next;
        vlSelf->i2c__DOT__ctr_next = vlSelf->__Vtask_i2c__DOT__next_idle__12__ctr_next;
    }
    vlSelf->ready = i2c__DOT__ready_out;
    vlSelf->done_tick = i2c__DOT__done_tick_out;
}

void Vi2c___024root___eval_nba(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vi2c___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vi2c___024root___eval_triggers__act(Vi2c___024root* vlSelf);

bool Vi2c___024root___eval_phase__act(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vi2c___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vi2c___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vi2c___024root___eval_phase__nba(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vi2c___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__ico(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__nba(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c___024root___dump_triggers__act(Vi2c___024root* vlSelf);
#endif  // VL_DEBUG

void Vi2c___024root___eval(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vi2c___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("hw/i2c.v", 34, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vi2c___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vi2c___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hw/i2c.v", 34, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vi2c___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hw/i2c.v", 34, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vi2c___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vi2c___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vi2c___024root___eval_debug_assertions(Vi2c___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->write & 0xfeU))) {
        Verilated::overWidthError("write");}
    if (VL_UNLIKELY((vlSelf->cmd & 0xf8U))) {
        Verilated::overWidthError("cmd");}
    if (VL_UNLIKELY((vlSelf->SDA & 0xfeU))) {
        Verilated::overWidthError("SDA");}
}
#endif  // VL_DEBUG
