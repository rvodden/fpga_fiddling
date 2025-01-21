// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vi2c_tb__Syms.h"


VL_ATTR_COLD void Vi2c_tb___024root__trace_init_sub__TOP____024unit__0(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vi2c_tb___024root__trace_init_sub__TOP__0(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vi2c_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("i2c_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"clock_divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"done_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"SDA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"SCL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sda_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"drive_sda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"test_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"test_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"read_and_ack__Vstatic__ii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"write_and_read_ack__Vstatic__ii",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("i2c1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"clock_divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+20,0,"ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"done_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"SDA",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"SCL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"cmd_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"cmd_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"rx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+14,0,"rx_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+26,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+15,0,"tx_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+27,0,"ctr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"ctr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,0,"bit_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"bit_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"scl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"scl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"sda_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sda_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"receiving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"nack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ready_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"done_tick_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"data_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"clock_divisor_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"dbl_clock_divisor_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_init_sub__TOP____024unit__0(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+38,0,"k_START_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"k_RESTART_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"k_STOP_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"k_READ_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"k_WRITE_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+43,0,"k_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"k_start1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"k_start2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"k_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"k_restart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"k_stop1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"k_stop2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"k_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"k_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"k_data3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"k_data4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"k_data_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_init_top(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_init_top\n"); );
    // Body
    Vi2c_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vi2c_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vi2c_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vi2c_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vi2c_tb___024root__trace_register(Vi2c_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vi2c_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vi2c_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vi2c_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vi2c_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_const_0_sub_0(Vi2c_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vi2c_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_const_0\n"); );
    // Init
    Vi2c_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_tb___024root*>(voidSelf);
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vi2c_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_const_0_sub_0(Vi2c_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+36,(5U),16);
    bufp->fullSData(oldp+37,(0xaU),16);
    bufp->fullCData(oldp+38,(0U),3);
    bufp->fullCData(oldp+39,(1U),3);
    bufp->fullCData(oldp+40,(2U),3);
    bufp->fullCData(oldp+41,(3U),3);
    bufp->fullCData(oldp+42,(4U),3);
    bufp->fullCData(oldp+43,(0U),4);
    bufp->fullCData(oldp+44,(1U),4);
    bufp->fullCData(oldp+45,(2U),4);
    bufp->fullCData(oldp+46,(3U),4);
    bufp->fullCData(oldp+47,(4U),4);
    bufp->fullCData(oldp+48,(5U),4);
    bufp->fullCData(oldp+49,(6U),4);
    bufp->fullCData(oldp+50,(7U),4);
    bufp->fullCData(oldp+51,(8U),4);
    bufp->fullCData(oldp+52,(9U),4);
    bufp->fullCData(oldp+53,(0xaU),4);
    bufp->fullCData(oldp+54,(0xbU),4);
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_full_0_sub_0(Vi2c_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vi2c_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_full_0\n"); );
    // Init
    Vi2c_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vi2c_tb___024root*>(voidSelf);
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vi2c_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vi2c_tb___024root__trace_full_0_sub_0(Vi2c_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vi2c_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->i2c_tb__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelf->i2c_tb__DOT__write));
    bufp->fullCData(oldp+3,(vlSelf->i2c_tb__DOT__data_in),8);
    bufp->fullCData(oldp+4,(vlSelf->i2c_tb__DOT__cmd),3);
    bufp->fullBit(oldp+5,(vlSelf->i2c_tb__DOT__sda_tb));
    bufp->fullBit(oldp+6,(vlSelf->i2c_tb__DOT__drive_sda));
    bufp->fullCData(oldp+7,(vlSelf->i2c_tb__DOT__test_data),8);
    bufp->fullBit(oldp+8,(vlSelf->i2c_tb__DOT__test_ack));
    bufp->fullIData(oldp+9,(vlSelf->i2c_tb__DOT__read_and_ack__Vstatic__ii),32);
    bufp->fullIData(oldp+10,(vlSelf->i2c_tb__DOT__write_and_read_ack__Vstatic__ii),32);
    bufp->fullBit(oldp+11,((1U & (IData)(vlSelf->i2c_tb__DOT__data_in))));
    bufp->fullCData(oldp+12,(vlSelf->i2c_tb__DOT__i2c1__DOT__state_next),4);
    bufp->fullCData(oldp+13,(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_next),3);
    bufp->fullSData(oldp+14,(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_next),9);
    bufp->fullSData(oldp+15,(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_next),9);
    bufp->fullSData(oldp+16,(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_next),16);
    bufp->fullCData(oldp+17,(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_next),4);
    bufp->fullBit(oldp+18,(vlSelf->i2c_tb__DOT__i2c1__DOT__ready_out));
    bufp->fullCData(oldp+19,((0xffU & ((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg) 
                                       >> 1U))),8);
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg))));
    bufp->fullBit(oldp+21,(vlSelf->i2c_tb__DOT__i2c1__DOT__done_tick_out));
    bufp->fullBit(oldp+22,(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_reg));
    bufp->fullCData(oldp+23,(vlSelf->i2c_tb__DOT__i2c1__DOT__state_reg),4);
    bufp->fullCData(oldp+24,(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg),3);
    bufp->fullSData(oldp+25,(vlSelf->i2c_tb__DOT__i2c1__DOT__rx_reg),9);
    bufp->fullSData(oldp+26,(vlSelf->i2c_tb__DOT__i2c1__DOT__tx_reg),9);
    bufp->fullSData(oldp+27,(vlSelf->i2c_tb__DOT__i2c1__DOT__ctr_reg),16);
    bufp->fullCData(oldp+28,(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg),4);
    bufp->fullBit(oldp+29,(vlSelf->i2c_tb__DOT__i2c1__DOT__scl_out));
    bufp->fullBit(oldp+30,(vlSelf->i2c_tb__DOT__i2c1__DOT__sda_reg));
    bufp->fullBit(oldp+31,(vlSelf->i2c_tb__DOT__i2c1__DOT__sda_out));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase) 
                            & (((3U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg)) 
                                & (8U > (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg))) 
                               | ((4U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__cmd_reg)) 
                                  & (8U == (IData)(vlSelf->i2c_tb__DOT__i2c1__DOT__bit_reg)))))));
    bufp->fullBit(oldp+33,(vlSelf->i2c_tb__DOT__i2c1__DOT__data_phase));
    bufp->fullBit(oldp+34,(vlSelf->i2c_tb__DOT__clk));
    bufp->fullBit(oldp+35,((1U & ((~ ((IData)(vlSelf->i2c_tb__DOT__SDA__en0) 
                                      | (IData)(vlSelf->i2c_tb__DOT__drive_sda))) 
                                  | ((IData)(vlSelf->i2c_tb__DOT__drive_sda) 
                                     & (IData)(vlSelf->i2c_tb__DOT__sda_tb))))));
}
