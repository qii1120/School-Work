// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul.h for the primary calling header

#ifndef VERILATED_VMUL___024ROOT_H_
#define VERILATED_VMUL___024ROOT_H_  // guard

#include "verilated.h"

class Vmul__Syms;

class Vmul___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(req_i,0,0);
    VL_OUT8(ready_o,0,0);
    CData/*5:0*/ mul__DOT__cnt;
    CData/*2:0*/ mul__DOT__S;
    CData/*2:0*/ mul__DOT__S_nxt;
    CData/*0:0*/ mul__DOT__mul_add;
    CData/*0:0*/ __Vtrigrprev__TOP__clk_i;
    CData/*0:0*/ __VactContinue;
    VL_IN(a_i,31,0);
    VL_IN(b_i,31,0);
    VL_OUT(result_o,31,0);
    IData/*31:0*/ mul__DOT__reg32;
    VlWide<3>/*64:0*/ mul__DOT__result;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ mul__DOT__result_tmp;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul___024root(Vmul__Syms* symsp, const char* v__name);
    ~Vmul___024root();
    VL_UNCOPYABLE(Vmul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
