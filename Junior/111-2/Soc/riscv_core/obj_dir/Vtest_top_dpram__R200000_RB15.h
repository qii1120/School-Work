// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_DPRAM__R200000_RB15_H_
#define VERILATED_VTEST_TOP_DPRAM__R200000_RB15_H_  // guard

#include "verilated.h"

class Vtest_top__Syms;

class Vtest_top_dpram__R200000_RB15 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__ce_i,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__inst_ce_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_OUT(__PVT__inst_o,31,0);
    VlUnpacked<CData/*7:0*/, 2097152> __PVT__mem;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_dpram__R200000_RB15(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_dpram__R200000_RB15();
    VL_UNCOPYABLE(Vtest_top_dpram__R200000_RB15);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void readByte(uint32_t byte_addr, uint32_t& val);
    void writeByte(uint32_t byte_addr, uint32_t val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
