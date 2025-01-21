// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vi2c_tb__Syms.h"


void Vi2c_tb___024root__trace_chg_0_sub_0(Vi2c_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vi2c_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_chg_0\n"); );
    // Init
    Vi2c_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_tb___024root*>(voidSelf);
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vi2c_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vi2c_tb___024root__trace_chg_0_sub_0(Vi2c_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->i2c_tb__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->i2c_tb__DOT__write));
        bufp->chgCData(oldp+2,(vlSelf->i2c_tb__DOT__data_in),8);
        bufp->chgCData(oldp+3,(vlSelf->i2c_tb__DOT__cmd),3);
        bufp->chgBit(oldp+4,(vlSelf->i2c_tb__DOT__sda_tb));
        bufp->chgBit(oldp+5,(vlSelf->i2c_tb__DOT__drive_sda));
        bufp->chgCData(oldp+6,(vlSelf->i2c_tb__DOT__test_data),8);
        bufp->chgBit(oldp+7,(vlSelf->i2c_tb__DOT__test_ack));
        bufp->chgIData(oldp+8,(vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii),32);
        bufp->chgIData(oldp+9,(vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii),32);
        bufp->chgBit(oldp+10,((1U & (IData)(vlSelf->i2c_tb__DOT__data_in))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+11,(vlSelf->i2c_tb__DOT__i2c1__DOT__state_next),4);
        bufp->chgCData(oldp+12,(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next),3);
        bufp->chgSData(oldp+13,(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next),9);
        bufp->chgSData(oldp+14,(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next),9);
        bufp->chgSData(oldp+15,(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next),16);
        bufp->chgCData(oldp+16,(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+17,(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out));
        bufp->chgCData(oldp+18,((0xffU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg) 
                                          >> 1U))),8);
        bufp->chgBit(oldp+19,((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg))));
        bufp->chgBit(oldp+20,(vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out));
        bufp->chgBit(oldp+21,(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg));
        bufp->chgCData(oldp+22,(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg),4);
        bufp->chgCData(oldp+23,(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg),3);
        bufp->chgSData(oldp+24,(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg),9);
        bufp->chgSData(oldp+25,(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg),9);
        bufp->chgSData(oldp+26,(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg),16);
        bufp->chgCData(oldp+27,(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg),4);
        bufp->chgBit(oldp+28,(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out));
        bufp->chgBit(oldp+29,(vlSelf->i2c_tb__DOT__i2c1__DOT__sda_reg));
        bufp->chgBit(oldp+30,(vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase) 
                               & (((3U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg)) 
                                   & (8U > (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))) 
                                  | ((4U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg)) 
                                     & (8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg)))))));
        bufp->chgBit(oldp+32,(vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase));
    }
    bufp->chgBit(oldp+33,(vlSelf->i2c_tb__DOT__clk));
    bufp->chgBit(oldp+34,((1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                     | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                 | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                    & (IData)(vlSelf->i2c_tb__DOT__sda_tb))))));
}

void Vi2c_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_cleanup\n"); );
    // Init
    Vi2c_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_tb___024root*>(voidSelf);
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
