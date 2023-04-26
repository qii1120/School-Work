// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_REGFILE_H_
#define VERILATED_VTEST_TOP_REGFILE_H_  // guard

#include "verilated.h"

class Vtest_top__Syms;

class Vtest_top_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__waddr_i,4,0);
    VL_IN8(__PVT__re1_i,0,0);
    VL_IN8(__PVT__raddr1_i,4,0);
    VL_IN8(__PVT__re2_i,0,0);
    VL_IN8(__PVT__raddr2_i,4,0);
    VL_IN(__PVT__wdata_i,31,0);
    VL_OUT(__PVT__rdata1_o,31,0);
    VL_OUT(__PVT__rdata2_o,31,0);
    IData/*31:0*/ __PVT__i;
    VlUnpacked<IData/*31:0*/, 32> __PVT__regs;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_regfile(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_regfile();
    VL_UNCOPYABLE(Vtest_top_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void readRegister(uint32_t raddr, uint32_t& val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
