// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top_core_top.h"

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__1(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__1\n"); );
    // Body
    vlSelf->__PVT__mem_wb_reg_we_o = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                          | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                      & (IData)(vlSelf->__PVT__mem_reg_we_o));
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) {
        vlSelf->__PVT__mem_wb_reg_waddr_o = 0U;
        vlSelf->__PVT__mem_wb_reg_wdata_o = 0U;
    } else {
        vlSelf->__PVT__mem_wb_reg_waddr_o = vlSelf->__PVT__mem_reg_waddr_o;
        vlSelf->__PVT__mem_wb_reg_wdata_o = vlSelf->__PVT__mem_reg_wdata_o;
    }
    vlSelf->__PVT__mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
    vlSelf->__PVT__mem_reg_waddr_o = ((IData)(vlSymsp->TOP.rst_i)
                                       ? 0U : (IData)(vlSelf->__PVT__exe_mem_reg_waddr_o));
}

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__2(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__2\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
    } else {
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            } else if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = ((8U & vlSelf->__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                     ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                                  : 0U)
                                              : 0U)));
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
            }
        } else {
            vlSelf->__PVT__id0__DOT__op2_o_final = 
                ((0x20U & vlSelf->__PVT__if_id_inst_o)
                  ? ((0x10U & vlSelf->__PVT__if_id_inst_o)
                      ? ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? ((IData)(vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                                    ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                                    : 0U)
                                                : 0U)
                                            : 0U)))
                      : ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                                : 0U)
                                            : 0U))))
                  : ((0x10U & vlSelf->__PVT__if_id_inst_o)
                      ? ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? (0xfffff000U 
                                              & vlSelf->__PVT__if_id_inst_o)
                                           : 0U) : 0U)
                                   : ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? ((0x2000U 
                                               & vlSelf->__PVT__if_id_inst_o)
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__if_id_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->__PVT__if_id_inst_o 
                                                     >> 0x14U))
                                               : ((0x1000U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0x14U))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->__PVT__if_id_inst_o 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->__PVT__if_id_inst_o 
                                                      >> 0x14U))))
                                           : 0U) : 0U)))
                      : 0U));
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__3(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__3\n"); );
    // Body
    vlSelf->__PVT__mem_inst_addr_o = ((IData)(vlSymsp->TOP.rst_i)
                                       ? 0U : vlSelf->__PVT__exe_mem_inst_addr_o);
}

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__4(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__4\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_inst_addr_o = 0U;
        vlSelf->__PVT__id_exe_inst_addr_o = 0U;
    } else {
        vlSelf->__PVT__exe_mem_inst_addr_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                               ? 0U
                                               : vlSelf->__PVT__id_exe_inst_addr_o);
        vlSelf->__PVT__id_exe_inst_addr_o = ((IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                              ? vlSelf->__PVT__if_id_inst_addr_o
                                              : ((IData)(
                                                         (4U 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                   | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                                                   ? 0U
                                                   : vlSelf->__PVT__if_id_inst_addr_o)));
    }
    vlSelf->__PVT__if_id_inst_addr_o = vlSelf->__Vdly__if_id_inst_addr_o;
    vlSelf->__PVT__int_ctrl_interrupt_en_o = (1U & 
                                              ((8U 
                                                & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                ? (IData)(
                                                          (0U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))
                                                : (IData)(
                                                          (4U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))))));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__req = ((~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)) 
                                                & (IData)(vlSelf->__PVT__exe0__DOT__mult_req_o));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
    } else {
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_jump_enable_o 
                        = (1U & (IData)((7U == (7U 
                                                & vlSelf->__PVT__id_exe_inst_o))));
                    vlSelf->__PVT__exe_jump_addr_o 
                        = ((4U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((2U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                    ? (vlSelf->__PVT__id_exe_inst_addr_o 
                                       + (((- (IData)(
                                                      (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->__PVT__id_exe_inst_o) 
                                             | ((0x800U 
                                                 & (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 9U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x14U)))))))
                                    : 0U) : 0U) : 0U);
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_jump_enable_o 
                        = (1U & ((vlSelf->__PVT__id_exe_inst_o 
                                  >> 1U) & vlSelf->__PVT__id_exe_inst_o));
                    vlSelf->__PVT__exe_jump_addr_o 
                        = ((2U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? (vlSelf->__PVT__id_exe_op1_o 
                                   + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)))
                                : 0U) : 0U);
                } else {
                    vlSelf->__PVT__exe_jump_enable_o 
                        = (1U & ((vlSelf->__PVT__id_exe_inst_o 
                                  >> 1U) & (vlSelf->__PVT__id_exe_inst_o 
                                            & ((0x4000U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((vlSelf->__PVT__id_exe_op1_o 
                                                      >= vlSelf->__PVT__id_exe_op2_o)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((vlSelf->__PVT__id_exe_op1_o 
                                                      < vlSelf->__PVT__id_exe_op2_o)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    (VL_GTES_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                      ? 1U
                                                      : 0U)))
                                                : (
                                                   (~ 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0xdU)) 
                                                   & ((0x1000U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (~ (IData)(vlSelf->__PVT__exe0__DOT__op1_eq_op2))
                                                       : (IData)(vlSelf->__PVT__exe0__DOT__op1_eq_op2)))))));
                    vlSelf->__PVT__exe_jump_addr_o 
                        = ((2U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? (vlSelf->__PVT__id_exe_inst_addr_o 
                                               + ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 7U))))))
                                            : (vlSelf->__PVT__id_exe_inst_addr_o 
                                               + ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 7U)))))))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? (vlSelf->__PVT__id_exe_inst_addr_o 
                                               + ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 7U))))))
                                            : (vlSelf->__PVT__id_exe_inst_addr_o 
                                               + ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 7U))))))))
                                    : ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)
                                                 ? 
                                                (vlSelf->__PVT__id_exe_inst_addr_o 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 7U))))))
                                                 : 
                                                (vlSelf->__PVT__id_exe_inst_addr_o 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 7U)))))))))
                                : 0U) : 0U);
                }
            } else {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
        } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe_jump_enable_o = 0U;
            vlSelf->__PVT__exe_jump_addr_o = 0U;
        } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
            vlSelf->__PVT__exe_jump_enable_o = 0U;
            vlSelf->__PVT__exe_jump_addr_o = 0U;
        } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_jump_enable_o = 0U;
            vlSelf->__PVT__exe_jump_addr_o = 0U;
        }
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                                        ? (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)
                                            ? (0x1fU 
                                               & (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xfU))
                                            : 0U));
                            } else if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            }
                        } else {
                            vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((8U & vlSelf->__PVT__if_id_inst_o)
                            ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                     ? ((2U & vlSelf->__PVT__if_id_inst_o)
                                         ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                             : 0U) : 0U)
                                     : ((2U & vlSelf->__PVT__if_id_inst_o)
                                         ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                             : 0U) : 0U)));
                }
            } else {
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else {
            vlSelf->__PVT__id0__DOT__op1_o_final = 
                ((0x20U & vlSelf->__PVT__if_id_inst_o)
                  ? ((0x10U & vlSelf->__PVT__if_id_inst_o)
                      ? ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? (0xfffff000U 
                                              & vlSelf->__PVT__if_id_inst_o)
                                           : 0U) : 0U)
                                   : ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? ((IData)(vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                               ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                               : 0U)
                                           : 0U) : 0U)))
                      : ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                                : 0U)
                                            : 0U))))
                  : ((0x10U & vlSelf->__PVT__if_id_inst_o)
                      ? ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? vlSelf->__PVT__if_id_inst_addr_o
                                           : 0U) : 0U)
                                   : ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                           : 0U) : 0U)))
                      : ((8U & vlSelf->__PVT__if_id_inst_o)
                          ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                            ? ((1U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                                : 0U)
                                            : 0U)))));
        }
    }
    vlSelf->__PVT__ctrl_new_pc_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                     ? ((8U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                         ? ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                               ? 0U
                                               : vlSelf->__PVT__csr0__DOT__mepc)))
                                         : ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__int_ctrl_interrupt_type_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__csr0__DOT__mtvec)
                                                    ? 
                                                   ((0xfffffffcU 
                                                     & vlSelf->__PVT__csr0__DOT__mtvec) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__int_ctrl_trap_casue_o) 
                                                     << 2U))
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlSelf->__PVT__csr0__DOT__mtvec))
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSelf->__PVT__csr0__DOT__mtvec))))
                                             : 0U))
                                     : ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                         ? vlSelf->__PVT__exe_jump_addr_o
                                         : 0U));
    vlSelf->__PVT__exe_stallreq_o = (((~ ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                              | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))) 
                                          & ((IData)(vlSelf->exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0) 
                                             | ((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req) 
                                                & (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o))))) 
                                      & (IData)(vlSelf->__PVT__exe0__DOT__mult_req_o)) 
                                     | ((~ (IData)(vlSelf->__PVT__exe0__DOT__div_ready_i)) 
                                        & (IData)(vlSelf->__PVT__exe0__DOT__div_req_o)));
    vlSelf->__PVT__exe0__DOT__mult_result_i = ((1U 
                                                & ((IData)(vlSymsp->TOP.rst_i) 
                                                   | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))
                                                ? 0ULL
                                                : ((IData)(vlSelf->exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next5
                                                                      [0U][1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next5
                                                                       [0U][0U])))
                                                     : 0ULL)));
    vlSelf->__PVT__exe0__DOT__invert_result = ((IData)(vlSelf->__PVT__exe0__DOT__mult_req_o)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->__PVT__exe0__DOT__mult_result_i))
                                                : 0ULL);
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSelf->__PVT__ctrl_stall_o = ((IData)(vlSelf->__PVT__exe_stallreq_o)
                                        ? 0xfU : (((IData)(vlSelf->__PVT__id_exe_inst_is_load_o) 
                                                   & (((0x1fU 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->__PVT__id_exe_rd_o)) 
                                                      | ((0x1fU 
                                                          & (vlSelf->__PVT__if_id_inst_o 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->__PVT__id_exe_rd_o))))
                                                   ? 7U
                                                   : 0U));
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_wdata_o 
                        = ((8U & vlSelf->__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSelf->__PVT__id_exe_inst_o)
                                     ? 0U : ((2U & vlSelf->__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSelf->__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? vlSelf->__PVT__exe0__DOT__csr_rdata
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? vlSelf->__PVT__exe0__DOT__csr_rdata
                                                    : 0U))
                                                  : 0U)
                                              : 0U)));
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_wdata_o 
                        = ((4U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((2U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                    ? ((IData)(4U) 
                                       + vlSelf->__PVT__id_exe_inst_addr_o)
                                    : 0U) : 0U) : 0U);
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_wdata_o 
                        = ((2U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((IData)(4U) + vlSelf->__PVT__id_exe_inst_addr_o)
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_reg_wdata_o = ((0x20U 
                                               & vlSelf->__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__exe0__DOT__isType_r)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           & vlSelf->__PVT__id_exe_op2_o)
                                                           : 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           | vlSelf->__PVT__id_exe_op2_o))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x19U))
                                                            ? 
                                                           (vlSelf->__PVT__id_exe_op1_o 
                                                            >> 
                                                            (0x1fU 
                                                             & vlSelf->__PVT__id_exe_op2_o))
                                                            : 
                                                           ((0x20U 
                                                             == 
                                                             (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 0x19U))
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__id_exe_op1_o, 
                                                                           (0x1fU 
                                                                            & vlSelf->__PVT__id_exe_op2_o))
                                                             : 0U))
                                                           : 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           ^ vlSelf->__PVT__id_exe_op2_o)))
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((vlSelf->__PVT__id_exe_op1_o 
                                                            < vlSelf->__PVT__id_exe_op2_o)
                                                            ? 1U
                                                            : 0U)
                                                           : 
                                                          (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                            ? 1U
                                                            : 0U))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           << 
                                                           (0x1fU 
                                                            & vlSelf->__PVT__id_exe_op2_o))
                                                           : 
                                                          ((0U 
                                                            == 
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x19U))
                                                            ? 
                                                           (vlSelf->__PVT__id_exe_op1_o 
                                                            + vlSelf->__PVT__id_exe_op2_o)
                                                            : 
                                                           ((0x20U 
                                                             == 
                                                             (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 0x19U))
                                                             ? 
                                                            (vlSelf->__PVT__id_exe_op1_o 
                                                             - vlSelf->__PVT__id_exe_op2_o)
                                                             : 0U)))))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__exe0__DOT__isType_m)
                                                         ? 
                                                        ((0x4000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)
                                                            ? vlSelf->__PVT__exe0__DOT__div_result_i
                                                            : 
                                                           ((vlSelf->__PVT__id_exe_op1_o 
                                                             >> 0x1fU)
                                                             ? vlSelf->__PVT__exe0__DOT__invert_result_div
                                                             : vlSelf->__PVT__exe0__DOT__div_result_i))
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)
                                                            ? vlSelf->__PVT__exe0__DOT__div_result_i
                                                            : 
                                                           (((IData)(vlSelf->__PVT__exe0__DOT__signed_adjust) 
                                                             & (0U 
                                                                != vlSelf->__PVT__id_exe_op2_o))
                                                             ? vlSelf->__PVT__exe0__DOT__invert_result_div
                                                             : vlSelf->__PVT__exe0__DOT__div_result_i)))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)
                                                            ? (IData)(
                                                                      (vlSelf->__PVT__exe0__DOT__mult_result_i 
                                                                       >> 0x20U))
                                                            : 
                                                           ((vlSelf->__PVT__id_exe_op1_o 
                                                             >> 0x1fU)
                                                             ? (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__invert_result 
                                                                        >> 0x20U))
                                                             : (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__mult_result_i 
                                                                        >> 0x20U))))
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__exe0__DOT__signed_adjust)
                                                             ? (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__invert_result 
                                                                        >> 0x20U))
                                                             : (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__mult_result_i 
                                                                        >> 0x20U)))
                                                            : (IData)(vlSelf->__PVT__exe0__DOT__mult_result_i))))
                                                         : 0U))
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U)
                                               : ((0x10U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          & vlSelf->__PVT__id_exe_op2_o)
                                                          : 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          | vlSelf->__PVT__id_exe_op2_o))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x19U))
                                                           ? 
                                                          ((0x1fU 
                                                            >= vlSelf->__PVT__id_exe_op2_o)
                                                            ? 
                                                           (vlSelf->__PVT__id_exe_op1_o 
                                                            >> vlSelf->__PVT__id_exe_op2_o)
                                                            : 0U)
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x19U))
                                                            ? 
                                                           ((0x1fU 
                                                             >= vlSelf->__PVT__id_exe_op2_o)
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                             : 
                                                            (- 
                                                             (vlSelf->__PVT__id_exe_op1_o 
                                                              >> 0x1fU)))
                                                            : 0U))
                                                          : 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          ^ vlSelf->__PVT__id_exe_op2_o)))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((vlSelf->__PVT__id_exe_op1_o 
                                                           < vlSelf->__PVT__id_exe_op2_o)
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                           ? 1U
                                                           : 0U))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x1fU 
                                                           >= vlSelf->__PVT__id_exe_op2_o)
                                                           ? 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           << vlSelf->__PVT__id_exe_op2_o)
                                                           : 0U)
                                                          : 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          + vlSelf->__PVT__id_exe_op2_o))))
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U));
        }
    }
}

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__5(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__5\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_reg_wdata_o = 0U;
        vlSelf->__PVT__mem_mem_data_o = 0U;
    } else {
        vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
        vlSelf->__PVT__mem_mem_data_o = 0U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = vlSelf->__PVT__exe_mem_reg_wdata_o;
                    vlSelf->__PVT__mem_mem_data_o = 0U;
                } else {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                            ? (((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                | (1U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                ? (0xffffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : (vlSymsp->TOP__test_top.__PVT__host_rdata
                                            [0U] >> 0x10U))
                            : ((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                ? (0xffU & vlSymsp->TOP__test_top.__PVT__host_rdata
                                   [0U]) : ((1U == 
                                             (3U & vlSelf->__PVT__exe_mem_mem_addr_o))
                                             ? (0xffU 
                                                & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U] 
                                                   >> 8U))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                 ? 
                                                (0xffU 
                                                 & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U] 
                                                    >> 0x10U))
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                 [0U] 
                                                 >> 0x18U)))));
                }
            } else {
                vlSelf->__PVT__mem_reg_wdata_o = ((2U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                    ? 
                                                   vlSymsp->TOP__test_top.__PVT__host_rdata
                                                   [0U]
                                                    : 
                                                   (((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                                     | (1U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U]))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                  [0U] 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U]))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                      [0U] 
                                                                      >> 0xfU)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                            [0U] 
                                                            >> 8U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                       [0U] 
                                                                       >> 0x17U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                             [0U] 
                                                             >> 0x10U)))
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                                    [0U] 
                                                                    >> 0x1fU))) 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__test_top.__PVT__host_rdata
                                                          [0U] 
                                                          >> 0x18U)))))
                                                    : vlSelf->__PVT__exe_mem_reg_wdata_o));
                if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                        vlSelf->__PVT__mem_mem_data_o = 0U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
            vlSelf->__PVT__mem_mem_data_o = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = vlSelf->__PVT__exe_mem_reg_wdata_o;
                }
            }
            vlSelf->__PVT__mem_mem_data_o = ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                  ? vlSelf->__PVT__exe_mem_mem_data_o
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                                   | (1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->__PVT__exe_mem_mem_data_o))
                                                   : 
                                                  ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                      [0U]))))
                                              : ((1U 
                                                  & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                    [0U]) 
                                                   | (0xffU 
                                                      & vlSelf->__PVT__exe_mem_mem_data_o))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                     [0U]) 
                                                    | ((0xff00U 
                                                        & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                          [0U])))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((0xff000000U 
                                                      & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                      [0U]) 
                                                     | ((0xff0000U 
                                                         & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                            << 0x10U)) 
                                                        | (0xffffU 
                                                           & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                           [0U])))
                                                     : 
                                                    ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                      << 0x18U) 
                                                     | (0xffffffU 
                                                        & vlSymsp->TOP__test_top.__PVT__host_rdata
                                                        [0U])))))
                                                  : 0U));
        }
    }
}
