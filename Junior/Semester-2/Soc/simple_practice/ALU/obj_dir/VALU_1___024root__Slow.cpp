// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_1.h for the primary calling header

#include "verilated.h"

#include "VALU_1__Syms.h"
#include "VALU_1___024root.h"

void VALU_1___024root___ctor_var_reset(VALU_1___024root* vlSelf);

VALU_1___024root::VALU_1___024root(VALU_1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU_1___024root___ctor_var_reset(this);
}

void VALU_1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU_1___024root::~VALU_1___024root() {
}
