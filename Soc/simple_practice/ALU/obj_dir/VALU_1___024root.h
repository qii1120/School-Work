// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU_1.h for the primary calling header

#ifndef VERILATED_VALU_1___024ROOT_H_
#define VERILATED_VALU_1___024ROOT_H_  // guard

#include "verilated.h"

class VALU_1__Syms;

class VALU_1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ALU_1__DOT__out_0;
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c_in,0,0);
    VL_IN8(sel,1,0);
    VL_OUT8(result,0,0);
    VL_OUT8(c_out,0,0);
    CData/*0:0*/ ALU_1__DOT__add__DOT__s1;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU_1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU_1___024root(VALU_1__Syms* symsp, const char* v__name);
    ~VALU_1___024root();
    VL_UNCOPYABLE(VALU_1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
