// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_TEST_TOP_H_
#define VERILATED_VTEST_TOP_TEST_TOP_H_  // guard

#include "verilated.h"

class Vtest_top__Syms;
class Vtest_top_dpram__R200000_RB15;
class Vtest_top_core_top;


class Vtest_top_test_top final : public VerilatedModule {
  public:
    // CELLS
    Vtest_top_dpram__R200000_RB15* data_ram0;
    Vtest_top_core_top* core_top0;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(halt_o,0,0);
    CData/*0:0*/ __PVT__halt_from_console;
    CData/*0:0*/ __PVT__u_bus__DOT__host_sel_req;
    CData/*1:0*/ __PVT__u_bus__DOT__device_sel_req;
    CData/*1:0*/ __PVT__u_bus__DOT__device_sel_resp;
    CData/*0:0*/ u_bus__DOT____Vlvbound_hc1afd9fe__0;
    CData/*0:0*/ u_bus__DOT____Vlvbound_he4603d23__0;
    CData/*0:0*/ __PVT__clint0__DOT__carry;
    CData/*2:0*/ __PVT__console0__DOT__sim_finish;
    IData/*31:0*/ __Vcellout__clint0__data_o;
    IData/*31:0*/ u_bus__DOT____Vlvbound_ha032ea3b__0;
    IData/*31:0*/ u_bus__DOT____Vlvbound_h637ba314__0;
    IData/*31:0*/ u_bus__DOT____Vlvbound_ha22eafa2__0;
    IData/*31:0*/ __PVT__clint0__DOT__msip_mem;
    IData/*31:0*/ __PVT__console0__DOT__log_fd;
    QData/*63:0*/ __PVT__clint0__DOT__mtimecmp;
    VlUnpacked<CData/*0:0*/, 1> __PVT__host_req;
    VlUnpacked<CData/*0:0*/, 1> __PVT__host_gnt;
    VlUnpacked<IData/*31:0*/, 1> __PVT__host_addr;
    VlUnpacked<CData/*0:0*/, 1> __PVT__host_we;
    VlUnpacked<IData/*31:0*/, 1> __PVT__host_wdata;
    VlUnpacked<IData/*31:0*/, 1> __PVT__host_rdata;
    VlUnpacked<CData/*0:0*/, 3> __PVT__device_req;
    VlUnpacked<IData/*31:0*/, 3> __PVT__device_addr;
    VlUnpacked<CData/*0:0*/, 3> __PVT__device_we;
    VlUnpacked<IData/*31:0*/, 3> __PVT__device_wdata;
    VlUnpacked<IData/*31:0*/, 3> __PVT__device_rdata;
    VlUnpacked<IData/*31:0*/, 3> __PVT__cfg_device_addr_base;
    VlUnpacked<IData/*31:0*/, 3> __PVT__cfg_device_addr_mask;
    VlUnpacked<IData/*31:0*/, 3> __Vcellinp__u_bus__cfg_device_addr_mask;
    VlUnpacked<IData/*31:0*/, 3> __Vcellinp__u_bus__cfg_device_addr_base;
    VlUnpacked<IData/*31:0*/, 3> __Vcellinp__u_bus__device_rdata_i;
    VlUnpacked<IData/*31:0*/, 3> __Vcellout__u_bus__device_wdata_o;
    VlUnpacked<CData/*0:0*/, 3> __Vcellout__u_bus__device_we_o;
    VlUnpacked<IData/*31:0*/, 3> __Vcellout__u_bus__device_addr_o;
    VlUnpacked<CData/*0:0*/, 3> __Vcellout__u_bus__device_req_o;
    VlUnpacked<IData/*31:0*/, 1> __Vcellout__u_bus__host_rdata_o;
    VlUnpacked<IData/*31:0*/, 1> __Vcellinp__u_bus__host_wdata_i;
    VlUnpacked<CData/*0:0*/, 1> __Vcellinp__u_bus__host_we_i;
    VlUnpacked<IData/*31:0*/, 1> __Vcellinp__u_bus__host_addr_i;
    VlUnpacked<CData/*0:0*/, 1> __Vcellout__u_bus__host_gnt_o;
    VlUnpacked<CData/*0:0*/, 1> __Vcellinp__u_bus__host_req_i;
    VlUnpacked<IData/*31:0*/, 2> __PVT__clint0__DOT__mtime_mem;
    VlUnpacked<IData/*31:0*/, 2> __PVT__clint0__DOT__mtimecmp_mem;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_test_top(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_test_top();
    VL_UNCOPYABLE(Vtest_top_test_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
