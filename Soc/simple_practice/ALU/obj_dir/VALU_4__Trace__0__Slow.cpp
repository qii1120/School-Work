// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_4__Syms.h"


VL_ATTR_COLD void VALU_4___024root__trace_init_sub__TOP__0(VALU_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+22,"a", false,-1, 3,0);
    tracep->declBus(c+23,"b", false,-1, 3,0);
    tracep->declBit(c+24,"c_in", false,-1);
    tracep->declBus(c+25,"sel", false,-1, 1,0);
    tracep->declBus(c+26,"result", false,-1, 3,0);
    tracep->declBit(c+27,"c_out", false,-1);
    tracep->pushNamePrefix("ALU_4 ");
    tracep->declBus(c+22,"a", false,-1, 3,0);
    tracep->declBus(c+23,"b", false,-1, 3,0);
    tracep->declBit(c+24,"c_in", false,-1);
    tracep->declBus(c+25,"sel", false,-1, 1,0);
    tracep->declBus(c+26,"result", false,-1, 3,0);
    tracep->declBit(c+27,"c_out", false,-1);
    tracep->declBit(c+1,"out_0", false,-1);
    tracep->declBit(c+2,"out_1", false,-1);
    tracep->declBit(c+3,"out_2", false,-1);
    tracep->pushNamePrefix("op1 ");
    tracep->declBit(c+28,"a", false,-1);
    tracep->declBit(c+29,"b", false,-1);
    tracep->declBit(c+24,"c_in", false,-1);
    tracep->declBus(c+25,"sel", false,-1, 1,0);
    tracep->declBit(c+4,"result", false,-1);
    tracep->declBit(c+1,"c_out", false,-1);
    tracep->declBit(c+5,"out_0", false,-1);
    tracep->declBit(c+30,"out_1", false,-1);
    tracep->declBit(c+31,"out_2", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+28,"a", false,-1);
    tracep->declBit(c+29,"b", false,-1);
    tracep->declBit(c+24,"c_in", false,-1);
    tracep->declBit(c+31,"sum", false,-1);
    tracep->declBit(c+1,"c_out", false,-1);
    tracep->declBit(c+6,"s1", false,-1);
    tracep->declBit(c+5,"c1", false,-1);
    tracep->declBit(c+32,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+5,"a_i", false,-1);
    tracep->declBit(c+30,"b_i", false,-1);
    tracep->declBit(c+31,"c_i", false,-1);
    tracep->declBus(c+25,"sel_i", false,-1, 1,0);
    tracep->declBit(c+4,"q_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op2 ");
    tracep->declBit(c+33,"a", false,-1);
    tracep->declBit(c+34,"b", false,-1);
    tracep->declBit(c+1,"c_in", false,-1);
    tracep->declBus(c+25,"sel", false,-1, 1,0);
    tracep->declBit(c+7,"result", false,-1);
    tracep->declBit(c+2,"c_out", false,-1);
    tracep->declBit(c+8,"out_0", false,-1);
    tracep->declBit(c+35,"out_1", false,-1);
    tracep->declBit(c+9,"out_2", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+33,"a", false,-1);
    tracep->declBit(c+34,"b", false,-1);
    tracep->declBit(c+1,"c_in", false,-1);
    tracep->declBit(c+9,"sum", false,-1);
    tracep->declBit(c+2,"c_out", false,-1);
    tracep->declBit(c+10,"s1", false,-1);
    tracep->declBit(c+8,"c1", false,-1);
    tracep->declBit(c+11,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+8,"a_i", false,-1);
    tracep->declBit(c+35,"b_i", false,-1);
    tracep->declBit(c+9,"c_i", false,-1);
    tracep->declBus(c+25,"sel_i", false,-1, 1,0);
    tracep->declBit(c+7,"q_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op3 ");
    tracep->declBit(c+36,"a", false,-1);
    tracep->declBit(c+37,"b", false,-1);
    tracep->declBit(c+2,"c_in", false,-1);
    tracep->declBus(c+25,"sel", false,-1, 1,0);
    tracep->declBit(c+12,"result", false,-1);
    tracep->declBit(c+3,"c_out", false,-1);
    tracep->declBit(c+13,"out_0", false,-1);
    tracep->declBit(c+38,"out_1", false,-1);
    tracep->declBit(c+14,"out_2", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+36,"a", false,-1);
    tracep->declBit(c+37,"b", false,-1);
    tracep->declBit(c+2,"c_in", false,-1);
    tracep->declBit(c+14,"sum", false,-1);
    tracep->declBit(c+3,"c_out", false,-1);
    tracep->declBit(c+15,"s1", false,-1);
    tracep->declBit(c+13,"c1", false,-1);
    tracep->declBit(c+16,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+13,"a_i", false,-1);
    tracep->declBit(c+38,"b_i", false,-1);
    tracep->declBit(c+14,"c_i", false,-1);
    tracep->declBus(c+25,"sel_i", false,-1, 1,0);
    tracep->declBit(c+12,"q_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("op4 ");
    tracep->declBit(c+39,"a", false,-1);
    tracep->declBit(c+40,"b", false,-1);
    tracep->declBit(c+3,"c_in", false,-1);
    tracep->declBus(c+25,"sel", false,-1, 1,0);
    tracep->declBit(c+17,"result", false,-1);
    tracep->declBit(c+27,"c_out", false,-1);
    tracep->declBit(c+18,"out_0", false,-1);
    tracep->declBit(c+41,"out_1", false,-1);
    tracep->declBit(c+19,"out_2", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+39,"a", false,-1);
    tracep->declBit(c+40,"b", false,-1);
    tracep->declBit(c+3,"c_in", false,-1);
    tracep->declBit(c+19,"sum", false,-1);
    tracep->declBit(c+27,"c_out", false,-1);
    tracep->declBit(c+20,"s1", false,-1);
    tracep->declBit(c+18,"c1", false,-1);
    tracep->declBit(c+21,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+18,"a_i", false,-1);
    tracep->declBit(c+41,"b_i", false,-1);
    tracep->declBit(c+19,"c_i", false,-1);
    tracep->declBus(c+25,"sel_i", false,-1, 1,0);
    tracep->declBit(c+17,"q_o", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VALU_4___024root__trace_init_top(VALU_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_init_top\n"); );
    // Body
    VALU_4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU_4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU_4___024root__trace_register(VALU_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU_4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU_4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU_4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU_4___024root__trace_full_sub_0(VALU_4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU_4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_full_top_0\n"); );
    // Init
    VALU_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_4___024root*>(voidSelf);
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU_4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU_4___024root__trace_full_sub_0(VALU_4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ALU_4__DOT__out_0));
    bufp->fullBit(oldp+2,(vlSelf->ALU_4__DOT__out_1));
    bufp->fullBit(oldp+3,(vlSelf->ALU_4__DOT__out_2));
    bufp->fullBit(oldp+4,(vlSelf->ALU_4__DOT____Vcellout__op1____pinNumber5));
    bufp->fullBit(oldp+5,(vlSelf->ALU_4__DOT__op1__DOT__out_0));
    bufp->fullBit(oldp+6,(vlSelf->ALU_4__DOT__op1__DOT__add__DOT__s1));
    bufp->fullBit(oldp+7,(vlSelf->ALU_4__DOT____Vcellout__op2____pinNumber5));
    bufp->fullBit(oldp+8,(vlSelf->ALU_4__DOT__op2__DOT__out_0));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ALU_4__DOT__op2__DOT__add__DOT__s1) 
                           ^ (IData)(vlSelf->ALU_4__DOT__out_0))));
    bufp->fullBit(oldp+10,(vlSelf->ALU_4__DOT__op2__DOT__add__DOT__s1));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->ALU_4__DOT__op2__DOT__add__DOT__s1) 
                            & (IData)(vlSelf->ALU_4__DOT__out_0))));
    bufp->fullBit(oldp+12,(vlSelf->ALU_4__DOT____Vcellout__op3____pinNumber5));
    bufp->fullBit(oldp+13,(vlSelf->ALU_4__DOT__op3__DOT__out_0));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ALU_4__DOT__op3__DOT__add__DOT__s1) 
                            ^ (IData)(vlSelf->ALU_4__DOT__out_1))));
    bufp->fullBit(oldp+15,(vlSelf->ALU_4__DOT__op3__DOT__add__DOT__s1));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->ALU_4__DOT__op3__DOT__add__DOT__s1) 
                            & (IData)(vlSelf->ALU_4__DOT__out_1))));
    bufp->fullBit(oldp+17,(vlSelf->ALU_4__DOT____Vcellout__op4____pinNumber5));
    bufp->fullBit(oldp+18,(vlSelf->ALU_4__DOT__op4__DOT__out_0));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->ALU_4__DOT__op4__DOT__add__DOT__s1) 
                            ^ (IData)(vlSelf->ALU_4__DOT__out_2))));
    bufp->fullBit(oldp+20,(vlSelf->ALU_4__DOT__op4__DOT__add__DOT__s1));
    bufp->fullBit(oldp+21,(((IData)(vlSelf->ALU_4__DOT__op4__DOT__add__DOT__s1) 
                            & (IData)(vlSelf->ALU_4__DOT__out_2))));
    bufp->fullCData(oldp+22,(vlSelf->a),4);
    bufp->fullCData(oldp+23,(vlSelf->b),4);
    bufp->fullBit(oldp+24,(vlSelf->c_in));
    bufp->fullCData(oldp+25,(vlSelf->sel),2);
    bufp->fullCData(oldp+26,(vlSelf->result),4);
    bufp->fullBit(oldp+27,(vlSelf->c_out));
    bufp->fullBit(oldp+28,((1U & (IData)(vlSelf->a))));
    bufp->fullBit(oldp+29,((1U & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->a) 
                                  | (IData)(vlSelf->b)))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ALU_4__DOT__op1__DOT__add__DOT__s1) 
                            ^ (IData)(vlSelf->c_in))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ALU_4__DOT__op1__DOT__add__DOT__s1) 
                            & (IData)(vlSelf->c_in))));
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->a) 
                                  >> 1U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->b) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & (((IData)(vlSelf->a) 
                                   | (IData)(vlSelf->b)) 
                                  >> 1U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->a) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->b) 
                                  >> 2U))));
    bufp->fullBit(oldp+38,((1U & (((IData)(vlSelf->a) 
                                   | (IData)(vlSelf->b)) 
                                  >> 2U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->a) 
                                  >> 3U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->b) 
                                  >> 3U))));
    bufp->fullBit(oldp+41,((1U & (((IData)(vlSelf->a) 
                                   | (IData)(vlSelf->b)) 
                                  >> 3U))));
}
