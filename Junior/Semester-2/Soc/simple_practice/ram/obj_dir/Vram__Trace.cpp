// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram__Syms.h"


void Vram::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vram__Syms* __restrict vlSymsp = static_cast<Vram__Syms*>(userp);
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vram::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vram__Syms* __restrict vlSymsp = static_cast<Vram__Syms*>(userp);
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->ram__DOT__mem[0]),8);
            tracep->chgCData(oldp+1,(vlTOPp->ram__DOT__mem[1]),8);
            tracep->chgCData(oldp+2,(vlTOPp->ram__DOT__mem[2]),8);
            tracep->chgCData(oldp+3,(vlTOPp->ram__DOT__mem[3]),8);
            tracep->chgCData(oldp+4,(vlTOPp->ram__DOT__mem[4]),8);
            tracep->chgCData(oldp+5,(vlTOPp->ram__DOT__mem[5]),8);
            tracep->chgCData(oldp+6,(vlTOPp->ram__DOT__mem[6]),8);
            tracep->chgCData(oldp+7,(vlTOPp->ram__DOT__mem[7]),8);
            tracep->chgCData(oldp+8,(vlTOPp->ram__DOT__mem[8]),8);
            tracep->chgCData(oldp+9,(vlTOPp->ram__DOT__mem[9]),8);
            tracep->chgCData(oldp+10,(vlTOPp->ram__DOT__mem[10]),8);
            tracep->chgCData(oldp+11,(vlTOPp->ram__DOT__mem[11]),8);
            tracep->chgCData(oldp+12,(vlTOPp->ram__DOT__mem[12]),8);
            tracep->chgCData(oldp+13,(vlTOPp->ram__DOT__mem[13]),8);
            tracep->chgCData(oldp+14,(vlTOPp->ram__DOT__mem[14]),8);
            tracep->chgCData(oldp+15,(vlTOPp->ram__DOT__mem[15]),8);
            tracep->chgCData(oldp+16,(vlTOPp->ram__DOT__mem[16]),8);
            tracep->chgCData(oldp+17,(vlTOPp->ram__DOT__mem[17]),8);
            tracep->chgCData(oldp+18,(vlTOPp->ram__DOT__mem[18]),8);
            tracep->chgCData(oldp+19,(vlTOPp->ram__DOT__mem[19]),8);
            tracep->chgCData(oldp+20,(vlTOPp->ram__DOT__mem[20]),8);
            tracep->chgCData(oldp+21,(vlTOPp->ram__DOT__mem[21]),8);
            tracep->chgCData(oldp+22,(vlTOPp->ram__DOT__mem[22]),8);
            tracep->chgCData(oldp+23,(vlTOPp->ram__DOT__mem[23]),8);
            tracep->chgCData(oldp+24,(vlTOPp->ram__DOT__mem[24]),8);
            tracep->chgCData(oldp+25,(vlTOPp->ram__DOT__mem[25]),8);
            tracep->chgCData(oldp+26,(vlTOPp->ram__DOT__mem[26]),8);
            tracep->chgCData(oldp+27,(vlTOPp->ram__DOT__mem[27]),8);
            tracep->chgCData(oldp+28,(vlTOPp->ram__DOT__mem[28]),8);
            tracep->chgCData(oldp+29,(vlTOPp->ram__DOT__mem[29]),8);
            tracep->chgCData(oldp+30,(vlTOPp->ram__DOT__mem[30]),8);
            tracep->chgCData(oldp+31,(vlTOPp->ram__DOT__mem[31]),8);
        }
        tracep->chgBit(oldp+32,(vlTOPp->clk_i));
        tracep->chgBit(oldp+33,(vlTOPp->ce_i));
        tracep->chgBit(oldp+34,(vlTOPp->we_i));
        tracep->chgIData(oldp+35,(vlTOPp->addr_i),32);
        tracep->chgIData(oldp+36,(vlTOPp->data_i),32);
        tracep->chgIData(oldp+37,(vlTOPp->data_o),32);
        tracep->chgCData(oldp+38,((0x1cU & vlTOPp->addr_i)),5);
    }
}

void Vram::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vram__Syms* __restrict vlSymsp = static_cast<Vram__Syms*>(userp);
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
