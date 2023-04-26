// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrom__Syms.h"


//======================

void Vrom::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vrom::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrom::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vrom::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vrom::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+33,"ce_i", false,-1);
        tracep->declBus(c+34,"addr_i", false,-1, 31,0);
        tracep->declBus(c+35,"inst_o", false,-1, 31,0);
        tracep->declBus(c+37,"rom XLEN", false,-1, 31,0);
        tracep->declBus(c+37,"rom MEM_SIZE", false,-1, 31,0);
        tracep->declBit(c+33,"rom ce_i", false,-1);
        tracep->declBus(c+34,"rom addr_i", false,-1, 31,0);
        tracep->declBus(c+35,"rom inst_o", false,-1, 31,0);
        tracep->declBus(c+38,"rom MADDR_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1+i*1,"rom mem", true,(i+0), 7,0);}}
        tracep->declBus(c+36,"rom addr4", false,-1, 4,0);
    }
}

void Vrom::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vrom::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vrom::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vrom__Syms* __restrict vlSymsp = static_cast<Vrom__Syms*>(userp);
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->rom__DOT__mem[0]),8);
        tracep->fullCData(oldp+2,(vlTOPp->rom__DOT__mem[1]),8);
        tracep->fullCData(oldp+3,(vlTOPp->rom__DOT__mem[2]),8);
        tracep->fullCData(oldp+4,(vlTOPp->rom__DOT__mem[3]),8);
        tracep->fullCData(oldp+5,(vlTOPp->rom__DOT__mem[4]),8);
        tracep->fullCData(oldp+6,(vlTOPp->rom__DOT__mem[5]),8);
        tracep->fullCData(oldp+7,(vlTOPp->rom__DOT__mem[6]),8);
        tracep->fullCData(oldp+8,(vlTOPp->rom__DOT__mem[7]),8);
        tracep->fullCData(oldp+9,(vlTOPp->rom__DOT__mem[8]),8);
        tracep->fullCData(oldp+10,(vlTOPp->rom__DOT__mem[9]),8);
        tracep->fullCData(oldp+11,(vlTOPp->rom__DOT__mem[10]),8);
        tracep->fullCData(oldp+12,(vlTOPp->rom__DOT__mem[11]),8);
        tracep->fullCData(oldp+13,(vlTOPp->rom__DOT__mem[12]),8);
        tracep->fullCData(oldp+14,(vlTOPp->rom__DOT__mem[13]),8);
        tracep->fullCData(oldp+15,(vlTOPp->rom__DOT__mem[14]),8);
        tracep->fullCData(oldp+16,(vlTOPp->rom__DOT__mem[15]),8);
        tracep->fullCData(oldp+17,(vlTOPp->rom__DOT__mem[16]),8);
        tracep->fullCData(oldp+18,(vlTOPp->rom__DOT__mem[17]),8);
        tracep->fullCData(oldp+19,(vlTOPp->rom__DOT__mem[18]),8);
        tracep->fullCData(oldp+20,(vlTOPp->rom__DOT__mem[19]),8);
        tracep->fullCData(oldp+21,(vlTOPp->rom__DOT__mem[20]),8);
        tracep->fullCData(oldp+22,(vlTOPp->rom__DOT__mem[21]),8);
        tracep->fullCData(oldp+23,(vlTOPp->rom__DOT__mem[22]),8);
        tracep->fullCData(oldp+24,(vlTOPp->rom__DOT__mem[23]),8);
        tracep->fullCData(oldp+25,(vlTOPp->rom__DOT__mem[24]),8);
        tracep->fullCData(oldp+26,(vlTOPp->rom__DOT__mem[25]),8);
        tracep->fullCData(oldp+27,(vlTOPp->rom__DOT__mem[26]),8);
        tracep->fullCData(oldp+28,(vlTOPp->rom__DOT__mem[27]),8);
        tracep->fullCData(oldp+29,(vlTOPp->rom__DOT__mem[28]),8);
        tracep->fullCData(oldp+30,(vlTOPp->rom__DOT__mem[29]),8);
        tracep->fullCData(oldp+31,(vlTOPp->rom__DOT__mem[30]),8);
        tracep->fullCData(oldp+32,(vlTOPp->rom__DOT__mem[31]),8);
        tracep->fullBit(oldp+33,(vlTOPp->ce_i));
        tracep->fullIData(oldp+34,(vlTOPp->addr_i),32);
        tracep->fullIData(oldp+35,(vlTOPp->inst_o),32);
        tracep->fullCData(oldp+36,((0x1cU & vlTOPp->addr_i)),5);
        tracep->fullIData(oldp+37,(0x20U),32);
        tracep->fullIData(oldp+38,(5U),32);
    }
}
