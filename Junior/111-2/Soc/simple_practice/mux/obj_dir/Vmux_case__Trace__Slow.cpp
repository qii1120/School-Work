// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_case__Syms.h"


//======================

void Vmux_case::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmux_case::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmux_case::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmux_case::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmux_case::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a_i", false,-1);
        tracep->declBit(c+2,"b_i", false,-1);
        tracep->declBit(c+3,"c_i", false,-1);
        tracep->declBit(c+4,"d_i", false,-1);
        tracep->declBus(c+5,"sel_i", false,-1, 1,0);
        tracep->declBit(c+6,"q_o", false,-1);
        tracep->declBit(c+1,"mux_case a_i", false,-1);
        tracep->declBit(c+2,"mux_case b_i", false,-1);
        tracep->declBit(c+3,"mux_case c_i", false,-1);
        tracep->declBit(c+4,"mux_case d_i", false,-1);
        tracep->declBus(c+5,"mux_case sel_i", false,-1, 1,0);
        tracep->declBit(c+6,"mux_case q_o", false,-1);
    }
}

void Vmux_case::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmux_case::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmux_case::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a_i));
        tracep->fullBit(oldp+2,(vlTOPp->b_i));
        tracep->fullBit(oldp+3,(vlTOPp->c_i));
        tracep->fullBit(oldp+4,(vlTOPp->d_i));
        tracep->fullCData(oldp+5,(vlTOPp->sel_i),2);
        tracep->fullBit(oldp+6,(vlTOPp->q_o));
    }
}
