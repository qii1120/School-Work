// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_pip.h for the primary calling header

#include "verilated.h"

#include "Vmul_pip__Syms.h"
#include "Vmul_pip___024root.h"

void Vmul_pip___024root___ctor_var_reset(Vmul_pip___024root* vlSelf);

Vmul_pip___024root::Vmul_pip___024root(Vmul_pip__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmul_pip___024root___ctor_var_reset(this);
}

void Vmul_pip___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmul_pip___024root::~Vmul_pip___024root() {
}
