// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrom__Syms.h"


void Vrom::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vrom::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlTOPp->rom__DOT__mem[0]),8);
            tracep->chgCData(oldp+1,(vlTOPp->rom__DOT__mem[1]),8);
            tracep->chgCData(oldp+2,(vlTOPp->rom__DOT__mem[2]),8);
            tracep->chgCData(oldp+3,(vlTOPp->rom__DOT__mem[3]),8);
            tracep->chgCData(oldp+4,(vlTOPp->rom__DOT__mem[4]),8);
            tracep->chgCData(oldp+5,(vlTOPp->rom__DOT__mem[5]),8);
            tracep->chgCData(oldp+6,(vlTOPp->rom__DOT__mem[6]),8);
            tracep->chgCData(oldp+7,(vlTOPp->rom__DOT__mem[7]),8);
            tracep->chgCData(oldp+8,(vlTOPp->rom__DOT__mem[8]),8);
            tracep->chgCData(oldp+9,(vlTOPp->rom__DOT__mem[9]),8);
            tracep->chgCData(oldp+10,(vlTOPp->rom__DOT__mem[10]),8);
            tracep->chgCData(oldp+11,(vlTOPp->rom__DOT__mem[11]),8);
            tracep->chgCData(oldp+12,(vlTOPp->rom__DOT__mem[12]),8);
            tracep->chgCData(oldp+13,(vlTOPp->rom__DOT__mem[13]),8);
            tracep->chgCData(oldp+14,(vlTOPp->rom__DOT__mem[14]),8);
            tracep->chgCData(oldp+15,(vlTOPp->rom__DOT__mem[15]),8);
            tracep->chgCData(oldp+16,(vlTOPp->rom__DOT__mem[16]),8);
            tracep->chgCData(oldp+17,(vlTOPp->rom__DOT__mem[17]),8);
            tracep->chgCData(oldp+18,(vlTOPp->rom__DOT__mem[18]),8);
            tracep->chgCData(oldp+19,(vlTOPp->rom__DOT__mem[19]),8);
            tracep->chgCData(oldp+20,(vlTOPp->rom__DOT__mem[20]),8);
            tracep->chgCData(oldp+21,(vlTOPp->rom__DOT__mem[21]),8);
            tracep->chgCData(oldp+22,(vlTOPp->rom__DOT__mem[22]),8);
            tracep->chgCData(oldp+23,(vlTOPp->rom__DOT__mem[23]),8);
            tracep->chgCData(oldp+24,(vlTOPp->rom__DOT__mem[24]),8);
            tracep->chgCData(oldp+25,(vlTOPp->rom__DOT__mem[25]),8);
            tracep->chgCData(oldp+26,(vlTOPp->rom__DOT__mem[26]),8);
            tracep->chgCData(oldp+27,(vlTOPp->rom__DOT__mem[27]),8);
            tracep->chgCData(oldp+28,(vlTOPp->rom__DOT__mem[28]),8);
            tracep->chgCData(oldp+29,(vlTOPp->rom__DOT__mem[29]),8);
            tracep->chgCData(oldp+30,(vlTOPp->rom__DOT__mem[30]),8);
            tracep->chgCData(oldp+31,(vlTOPp->rom__DOT__mem[31]),8);
        }
        tracep->chgBit(oldp+32,(vlTOPp->ce_i));
        tracep->chgIData(oldp+33,(vlTOPp->addr_i),32);
        tracep->chgIData(oldp+34,(vlTOPp->inst_o),32);
        tracep->chgCData(oldp+35,((0x1cU & vlTOPp->addr_i)),5);
    }
}

void Vrom::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
