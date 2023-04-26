// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU_4.h for the primary calling header

#ifndef VERILATED_VALU_4___024ROOT_H_
#define VERILATED_VALU_4___024ROOT_H_  // guard

#include "verilated.h"

class VALU_4__Syms;

class VALU_4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ALU_4__DOT__op1__DOT__out_0;
    CData/*0:0*/ ALU_4__DOT__op2__DOT__out_0;
    CData/*0:0*/ ALU_4__DOT__op3__DOT__out_0;
    CData/*0:0*/ ALU_4__DOT__op4__DOT__out_0;
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(c_in,0,0);
    VL_IN8(sel,1,0);
    VL_OUT8(result,3,0);
    VL_OUT8(c_out,0,0);
    CData/*0:0*/ ALU_4__DOT__out_0;
    CData/*0:0*/ ALU_4__DOT__out_1;
    CData/*0:0*/ ALU_4__DOT__out_2;
    CData/*0:0*/ ALU_4__DOT____Vcellout__op1____pinNumber5;
    CData/*0:0*/ ALU_4__DOT____Vcellout__op2____pinNumber5;
    CData/*0:0*/ ALU_4__DOT____Vcellout__op3____pinNumber5;
    CData/*0:0*/ ALU_4__DOT____Vcellout__op4____pinNumber5;
    CData/*0:0*/ ALU_4__DOT__op1__DOT__add__DOT__s1;
    CData/*0:0*/ ALU_4__DOT__op2__DOT__add__DOT__s1;
    CData/*0:0*/ ALU_4__DOT__op3__DOT__add__DOT__s1;
    CData/*0:0*/ ALU_4__DOT__op4__DOT__add__DOT__s1;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU_4___024root(VALU_4__Syms* symsp, const char* v__name);
    ~VALU_4___024root();
    VL_UNCOPYABLE(VALU_4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
