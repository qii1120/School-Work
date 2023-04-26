// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_case__Syms.h"


void Vmux_case::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmux_case::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a_i));
        tracep->chgBit(oldp+1,(vlTOPp->b_i));
        tracep->chgBit(oldp+2,(vlTOPp->c_i));
        tracep->chgBit(oldp+3,(vlTOPp->d_i));
        tracep->chgCData(oldp+4,(vlTOPp->sel_i),2);
        tracep->chgBit(oldp+5,(vlTOPp->q_o));
    }
}

void Vmux_case::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmux_case__Syms* __restrict vlSymsp = static_cast<Vmux_case__Syms*>(userp);
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
