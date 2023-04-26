// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_4.h for the primary calling header

#include "verilated.h"

#include "VALU_4__Syms.h"
#include "VALU_4___024root.h"

void VALU_4___024root___ctor_var_reset(VALU_4___024root* vlSelf);

VALU_4___024root::VALU_4___024root(VALU_4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU_4___024root___ctor_var_reset(this);
}

void VALU_4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU_4___024root::~VALU_4___024root() {
}
