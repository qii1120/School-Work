// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top_regfile.h"

VL_INLINE_OPT void Vtest_top_regfile___ico_sequent__TOP__test_top__core_top0__regfile0__0(Vtest_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_top_regfile___ico_sequent__TOP__test_top__core_top0__regfile0__0\n"); );
    // Body
    vlSelf->__PVT__rdata2_o = ((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))
                                ? 0U : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o) 
                                           == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o)) 
                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o))
                                         ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o
                                         : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o)
                                             ? vlSelf->__PVT__regs
                                            [vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o]
                                             : 0U)));
    vlSelf->__PVT__rdata1_o = ((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))
                                ? 0U : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o) 
                                           == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o)) 
                                          & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o)) 
                                         & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o))
                                         ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o
                                         : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o)
                                             ? vlSelf->__PVT__regs
                                            [vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o]
                                             : 0U)));
}

VL_INLINE_OPT void Vtest_top_regfile___nba_sequent__TOP__test_top__core_top0__regfile0__0(Vtest_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_top_regfile___nba_sequent__TOP__test_top__core_top0__regfile0__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regs__v0;
    __Vdlyvdim0__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regs__v0;
    __Vdlyvval__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regs__v0;
    __Vdlyvset__regs__v0 = 0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o) 
             & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o)))) {
            __Vdlyvval__regs__v0 = vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o;
            __Vdlyvset__regs__v0 = 1U;
            __Vdlyvdim0__regs__v0 = vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o;
        }
    }
    if (__Vdlyvset__regs__v0) {
        vlSelf->__PVT__regs[__Vdlyvdim0__regs__v0] 
            = __Vdlyvval__regs__v0;
    }
}
