// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top_core_top.h"

VL_INLINE_OPT void Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__0\n"); );
    // Body
    vlSelf->__PVT__mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
    vlSelf->__PVT__mem_csr_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                   & (IData)(vlSelf->__PVT__exe_mem_csr_we_o));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_csr_we_o = 0U;
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
    } else {
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_csr_we_o = 0U;
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = vlSelf->__PVT__id_exe_reg_we_o;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                                vlSelf->__PVT__exe_mem_we_o = 0U;
                                vlSelf->__PVT__exe_mem_op_o = 0U;
                                vlSelf->__PVT__exe_mem_addr_o = 0U;
                                vlSelf->__PVT__exe_mem_data_o = 0U;
                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                vlSelf->__PVT__exe_stallreq_o = 0U;
                            }
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                                vlSelf->__PVT__exe_jump_addr_o 
                                    = (vlSelf->__PVT__id_exe_inst_addr_o 
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
                                                         >> 0x14U)))))));
                            } else {
                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                vlSelf->__PVT__exe_jump_addr_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                    vlSelf->__PVT__exe_jump_enable_o 
                        = (1U & (IData)((7U == (7U 
                                                & vlSelf->__PVT__id_exe_inst_o))));
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_jump_addr_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)));
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                    vlSelf->__PVT__exe_jump_enable_o 
                        = (1U & ((vlSelf->__PVT__id_exe_inst_o 
                                  >> 1U) & vlSelf->__PVT__id_exe_inst_o));
                } else {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                        vlSelf->__PVT__exe_jump_addr_o 
                            = ((1U & vlSelf->__PVT__id_exe_inst_o)
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
                                : 0U);
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
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
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                        }
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                : 0U);
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_we_o = 1U;
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        if (vlSelf->__PVT__exe0__DOT__isType_r) {
                            if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xdU)))) {
                                    if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        if ((0U != 
                                             (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0x19U))) {
                                            if ((0x20U 
                                                 != 
                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0x19U))) {
                                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xcU)))) {
                                    if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                                >> 0x19U))) {
                                        if ((0x20U 
                                             != (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))) {
                                            vlSelf->__PVT__exe_reg_we_o = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_m)))) {
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = (IData)(
                                                      (3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->__PVT__id_exe_inst_o)));
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_op_o 
                            = ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                             >> 0xcU)))
                                ? 1U : ((1U == (7U 
                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0xcU)))
                                         ? 2U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 0U)));
                        vlSelf->__PVT__exe_mem_addr_o 
                            = (vlSelf->__PVT__id_exe_op1_o 
                               + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 7U)))));
                        vlSelf->__PVT__exe_mem_data_o 
                            = vlSelf->__PVT__id_exe_op2_o;
                    } else {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                    }
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                    }
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = ((1U & vlSelf->__PVT__id_exe_inst_o)
                            ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                            : 0U);
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                            >> 0x19U))) {
                                    if ((0x20U != (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x19U))) {
                                        vlSelf->__PVT__exe_reg_we_o = 0U;
                                    }
                                }
                            }
                        }
                        if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x19U))) {
                                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                }
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_mem_we_o = 0U;
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = (
                                                   (0x4000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0xdU
                                                      : 0xcU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 0xbU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0xaU
                                                      : 9U)));
                    vlSelf->__PVT__exe_mem_addr_o = 
                        (vlSelf->__PVT__id_exe_op1_o 
                         + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x14U)));
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = vlSelf->__PVT__id_exe_reg_waddr_o;
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
            }
            vlSelf->__PVT__exe_mem_data_o = 0U;
            vlSelf->__PVT__exe_reg_we_o = (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->__PVT__id_exe_inst_o)));
        }
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg2_re_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_re_o = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg2_re_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_re_o = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                } else if ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 0U);
                                }
                                vlSelf->__PVT__id_csr_we_o 
                                    = (IData)((0U != 
                                               (0x3000U 
                                                & vlSelf->__PVT__if_id_inst_o)));
                                vlSelf->__PVT__id_reg_we_o 
                                    = (IData)((0U != 
                                               (0x3000U 
                                                & vlSelf->__PVT__if_id_inst_o)));
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg2_re_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o = 0U;
                                vlSelf->__PVT__id_reg1_re_o = 0U;
                            } else if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_csr_we_o = 1U;
                                vlSelf->__PVT__id_reg_we_o = 1U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg2_re_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                                vlSelf->__PVT__id_reg1_re_o = 1U;
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_csr_we_o = 1U;
                                vlSelf->__PVT__id_reg_we_o = 1U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg2_re_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                                vlSelf->__PVT__id_reg1_re_o = 1U;
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o = 0U;
                            vlSelf->__PVT__id_reg2_addr_o = 0U;
                            vlSelf->__PVT__id_reg2_re_o = 0U;
                            vlSelf->__PVT__id_reg1_addr_o = 0U;
                            vlSelf->__PVT__id_reg1_re_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg2_re_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_re_o = 0U;
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if ((IData)(
                                                            (0x30200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_mret = 1U;
                                                }
                                                if ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_ecall = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 0U);
                                }
                                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                    vlSelf->__PVT__id_csr_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_csr_we_o = 0U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg_we_o 
                            = (1U & (IData)((7U == 
                                             (7U & vlSelf->__PVT__if_id_inst_o))));
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                    } else {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 0U);
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 0U);
                                }
                                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                    vlSelf->__PVT__id_csr_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_csr_we_o = 0U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & 0U);
                            }
                            vlSelf->__PVT__id_reg2_addr_o = 0U;
                        } else {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg2_addr_o = 0U;
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 0U);
                                }
                                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                    vlSelf->__PVT__id_csr_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_csr_we_o = 0U;
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & 0U);
                            }
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg_we_o 
                            = (1U & (IData)((7U == 
                                             (7U & vlSelf->__PVT__if_id_inst_o))));
                    }
                    vlSelf->__PVT__id_reg2_re_o = (IData)(
                                                          (3U 
                                                           == 
                                                           (0xfU 
                                                            & vlSelf->__PVT__if_id_inst_o)));
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & ((~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U)) 
                                                      & ((4U 
                                                          & vlSelf->__PVT__if_id_inst_o)
                                                          ? 
                                                         ((vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U) 
                                                          & vlSelf->__PVT__if_id_inst_o)
                                                          : 
                                                         ((vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U) 
                                                          & vlSelf->__PVT__if_id_inst_o))));
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_csr_we_o = 0U;
                vlSelf->__PVT__id_reg_we_o = 0U;
                vlSelf->__PVT__id_reg_waddr_o = 0U;
                vlSelf->__PVT__id_reg2_addr_o = 0U;
                vlSelf->__PVT__id_reg2_re_o = 0U;
                vlSelf->__PVT__id_reg1_addr_o = 0U;
                vlSelf->__PVT__id_reg1_re_o = 0U;
            }
        } else {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                vlSelf->__PVT__id_csr_we_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            } else {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = (0x1fU & 0U);
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & 0U);
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->__PVT__if_id_inst_o)) 
                                                              & (IData)(vlSelf->__PVT__id0__DOT__r_reg1_re_o))));
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o))));
                }
                vlSelf->__PVT__id_reg_we_o = (1U & (IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x18U 
                                                              & vlSelf->__PVT__if_id_inst_o)) 
                                                            & ((4U 
                                                                & vlSelf->__PVT__if_id_inst_o)
                                                                ? 
                                                               ((vlSelf->__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & vlSelf->__PVT__if_id_inst_o)
                                                                : 
                                                               ((vlSelf->__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & (vlSelf->__PVT__if_id_inst_o 
                                                                   & (IData)(vlSelf->__PVT__id0__DOT__r_reg_we_o)))))));
            } else {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                vlSelf->__PVT__id_csr_we_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            } else {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_we_o = (1U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSelf->__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSelf->__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSelf->__PVT__if_id_inst_o)
                                                         : 
                                                        ((vlSelf->__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSelf->__PVT__if_id_inst_o))));
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o))));
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_we_o = (1U 
                                                  & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->__PVT__if_id_inst_o))));
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o))));
                }
                vlSelf->__PVT__id_reg2_addr_o = 0U;
            }
            vlSelf->__PVT__id_reg2_re_o = (1U & ((vlSelf->__PVT__if_id_inst_o 
                                                  >> 5U) 
                                                 & ((0x10U 
                                                     & vlSelf->__PVT__if_id_inst_o)
                                                     ? (IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0xfU 
                                                                  & vlSelf->__PVT__if_id_inst_o)) 
                                                                & (IData)(vlSelf->__PVT__id0__DOT__r_reg2_re_o)))
                                                     : (IData)(
                                                               (3U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->__PVT__if_id_inst_o))))));
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
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_csr_addr_o 
                                    = (0xfffU & ((0x2000U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 
                                                 (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSelf->__PVT__if_id_inst_o 
                                                   >> 0x14U)
                                                   : 0U)));
                            } else if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_csr_addr_o 
                                    = (vlSelf->__PVT__if_id_inst_o 
                                       >> 0x14U);
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_csr_addr_o 
                                    = (vlSelf->__PVT__if_id_inst_o 
                                       >> 0x14U);
                            }
                        } else {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                vlSelf->__PVT__id_csr_addr_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
            vlSelf->__PVT__id_csr_addr_o = 0U;
        } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
            vlSelf->__PVT__id_csr_addr_o = 0U;
        } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else {
            vlSelf->__PVT__id_csr_addr_o = 0U;
        }
        vlSelf->__PVT__exe_csr_we_o = vlSelf->__PVT__id_exe_csr_we_o;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_waddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_waddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->__PVT__exe0__DOT__is_div_q_i = 0U;
        vlSelf->__PVT__exe0__DOT__div_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__is_div_q_i 
                                                    = 
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0xdU)));
                                                vlSelf->__PVT__exe0__DOT__div_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__invert_result_div = ((IData)(vlSelf->__PVT__exe0__DOT__div_req_o)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__exe0__DOT__div_result_i))
                                                    : 0U);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_raddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_raddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__csr_file_csr_rdata_o = ((((IData)(vlSelf->__PVT__mem_wb_csr_waddr_o) 
                                             == (IData)(vlSelf->__PVT__exe_csr_raddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                            ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                            : ((0x800U 
                                                & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                ? (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                    ? 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : 0x16U)
                                                             : 0U)))
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csr0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__mcycle)))))))))))
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csr0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__minstret))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__mcycle)))))))))
                                                      : 0U)
                                                     : 0U))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__mip_external) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mip_timer) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mip_software) 
                                                                    << 3U)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mtval
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__interrupt_type) 
                                                               << 0x1fU) 
                                                              | ((vlSelf->__PVT__csr0__DOT__cause_rem 
                                                                  << 4U) 
                                                                 | (IData)(vlSelf->__PVT__csr0__DOT__cause))))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mepc
                                                              : vlSelf->__PVT__csr0__DOT__mscratch))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mtvec
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__mie_external) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mie_timer) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mie_software) 
                                                                    << 3U)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0x40001100U
                                                              : 
                                                             (0x1800U 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mpie) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                                                                    << 3U)))))))))))
                                                      : 0U)
                                                     : 0U))));
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)) {
                                                if (
                                                    (0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)) {
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)) {
                                                        vlSelf->__PVT__exe0__DOT__a_o 
                                                            = vlSelf->__PVT__id_exe_op1_o;
                                                        vlSelf->__PVT__exe0__DOT__b_o 
                                                            = vlSelf->__PVT__id_exe_op2_o;
                                                    } else {
                                                        vlSelf->__PVT__exe0__DOT__a_o 
                                                            = 
                                                            ((vlSelf->__PVT__id_exe_op1_o 
                                                              >> 0x1fU)
                                                              ? 
                                                             ((IData)(1U) 
                                                              + 
                                                              (~ vlSelf->__PVT__id_exe_op1_o))
                                                              : vlSelf->__PVT__id_exe_op1_o);
                                                        vlSelf->__PVT__exe0__DOT__b_o 
                                                            = 
                                                            ((vlSelf->__PVT__id_exe_op2_o 
                                                              >> 0x1fU)
                                                              ? 
                                                             ((IData)(1U) 
                                                              + 
                                                              (~ vlSelf->__PVT__id_exe_op2_o))
                                                              : vlSelf->__PVT__id_exe_op2_o);
                                                    }
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)) {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = vlSelf->__PVT__id_exe_op1_o;
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = vlSelf->__PVT__id_exe_op2_o;
                                                } else {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = 
                                                        ((vlSelf->__PVT__id_exe_op1_o 
                                                          >> 0x1fU)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->__PVT__id_exe_op1_o))
                                                          : vlSelf->__PVT__id_exe_op1_o);
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = 
                                                        ((vlSelf->__PVT__id_exe_op2_o 
                                                          >> 0x1fU)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->__PVT__id_exe_op2_o))
                                                          : vlSelf->__PVT__id_exe_op2_o);
                                                }
                                            } else if (
                                                       (0x2000U 
                                                        & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__a_o 
                                                    = 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? vlSelf->__PVT__id_exe_op1_o
                                                      : 
                                                     ((vlSelf->__PVT__id_exe_op1_o 
                                                       >> 0x1fU)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__id_exe_op1_o))
                                                       : vlSelf->__PVT__id_exe_op1_o));
                                                vlSelf->__PVT__exe0__DOT__b_o 
                                                    = vlSelf->__PVT__id_exe_op2_o;
                                            } else if (
                                                       (0x1000U 
                                                        & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__a_o 
                                                    = 
                                                    ((vlSelf->__PVT__id_exe_op1_o 
                                                      >> 0x1fU)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__id_exe_op1_o))
                                                      : vlSelf->__PVT__id_exe_op1_o);
                                                vlSelf->__PVT__exe0__DOT__b_o 
                                                    = 
                                                    ((vlSelf->__PVT__id_exe_op2_o 
                                                      >> 0x1fU)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__id_exe_op2_o))
                                                      : vlSelf->__PVT__id_exe_op2_o);
                                            } else {
                                                vlSelf->__PVT__exe0__DOT__a_o 
                                                    = vlSelf->__PVT__id_exe_op1_o;
                                                vlSelf->__PVT__exe0__DOT__b_o 
                                                    = vlSelf->__PVT__id_exe_op2_o;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__div0__DOT__S_next = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__exe0__DOT__div_req_o)
                                                     ? 
                                                    (((0U 
                                                       == vlSelf->__PVT__exe0__DOT__a_o) 
                                                      | (0U 
                                                         == vlSelf->__PVT__exe0__DOT__b_o))
                                                      ? 3U
                                                      : 1U)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__cnt))
                                                      ? 1U
                                                      : 3U)
                                                     : 0U));
    vlSelf->exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__a_o))) 
                 | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__b_o)))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_csr_wdata_o = 0U;
        vlSelf->__Vcellout__mem0__csr_waddr_o = 0U;
        vlSelf->__PVT__mem_mem_we_o = 0U;
        vlSelf->__PVT__exe0__DOT__mult_req_o = 0U;
    } else {
        vlSelf->__PVT__mem_csr_wdata_o = vlSelf->__PVT__exe_mem_csr_wdata_o;
        vlSelf->__Vcellout__mem0__csr_waddr_o = (0xfffU 
                                                 & vlSelf->__Vcellout__exe_mem0__csr_waddr_o);
        vlSelf->__PVT__mem_mem_we_o = vlSelf->__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_we_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_we_o = 0U;
            }
        }
        vlSelf->__PVT__exe0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0xeU)))) {
                                                vlSelf->__PVT__exe0__DOT__mult_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__mul0__DOT__req = ((~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)) 
                                                & (IData)(vlSelf->__PVT__exe0__DOT__mult_req_o));
    vlSelf->__PVT__exe0__DOT__csr_rdata = ((((IData)(vlSelf->__PVT__id_exe_csr_addr_o) 
                                             == (0xfffU 
                                                 & vlSelf->__Vcellout__mem0__csr_waddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_csr_we_o))
                                            ? vlSelf->__PVT__mem_csr_wdata_o
                                            : vlSelf->__PVT__csr_file_csr_rdata_o);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_csr_wdata_o 
                                        = ((0x2000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? (
                                                   (~ vlSelf->__PVT__id_exe_op1_o) 
                                                   & vlSelf->__PVT__exe0__DOT__csr_rdata)
                                                : (vlSelf->__PVT__id_exe_op1_o 
                                                   | vlSelf->__PVT__exe0__DOT__csr_rdata))
                                            : ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? vlSelf->__PVT__id_exe_op1_o
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
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
        vlSelf->__PVT__mem_mem_addr_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
    } else {
        vlSelf->__PVT__mem_mem_addr_o = vlSelf->__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_addr_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_addr_o = 0U;
            }
        }
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

VL_INLINE_OPT void Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__1(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__1\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_reg_wdata_o = 0U;
        vlSelf->__PVT__mem_mem_data_o = 0U;
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
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
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
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
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                                vlSelf->__PVT__id0__DOT__op1_o_final 
                                    = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                            }
                        } else {
                            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((2U & vlSelf->__PVT__if_id_inst_o)
                            ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((2U & vlSelf->__PVT__if_id_inst_o)
                            ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                ? (0xfffff000U & vlSelf->__PVT__if_id_inst_o)
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                        } else {
                            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = (0xfffff000U & vlSelf->__PVT__if_id_inst_o);
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSelf->__PVT__if_id_inst_addr_o;
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                            ? (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                            : ((0x1000U & vlSelf->__PVT__if_id_inst_o)
                                ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U))));
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o;
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else {
            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
            vlSelf->__PVT__id0__DOT__op1_o_final = 
                ((8U & vlSelf->__PVT__if_id_inst_o)
                  ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                           ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                    ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                        ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                        : 0U) : 0U)));
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 256> Vtest_top__ConstPool__TABLE_h065ae0f9_0;

VL_INLINE_OPT void Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_sequent__TOP__test_top__core_top0__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__pc_wire;
    __Vdly__pc_wire = 0;
    IData/*31:0*/ __Vdly__id_exe_exception_o;
    __Vdly__id_exe_exception_o = 0;
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6);
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0 = 0;
    VlWide<3>/*64:0*/ __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1;
    VL_ZERO_W(65, __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1);
    CData/*0:0*/ __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1 = 0;
    VlWide<3>/*64:0*/ __Vdly__exe0__DOT__div0__DOT__result;
    VL_ZERO_W(65, __Vdly__exe0__DOT__div0__DOT__result);
    CData/*5:0*/ __Vdly__exe0__DOT__div0__DOT__cnt;
    __Vdly__exe0__DOT__div0__DOT__cnt = 0;
    QData/*63:0*/ __Vdly__csr0__DOT__minstret;
    __Vdly__csr0__DOT__minstret = 0;
    CData/*0:0*/ __Vdly__csr0__DOT__mstatus_mie;
    __Vdly__csr0__DOT__mstatus_mie = 0;
    CData/*0:0*/ __Vdly__csr0__DOT__mstatus_mpie;
    __Vdly__csr0__DOT__mstatus_mpie = 0;
    IData/*31:0*/ __Vtemp_h16ce05f5__0;
    VlWide<3>/*95:0*/ __Vtemp_hed14c396__0;
    VlWide<3>/*95:0*/ __Vtemp_hed14cf4e__0;
    VlWide<3>/*95:0*/ __Vtemp_hd4ef9c62__0;
    VlWide<3>/*95:0*/ __Vtemp_hed14c40d__0;
    VlWide<3>/*95:0*/ __Vtemp_hed14c1d2__0;
    VlWide<3>/*95:0*/ __Vtemp_h468499ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h02f3b505__0;
    VlWide<3>/*95:0*/ __Vtemp_h02f3a8bd__0;
    VlWide<3>/*95:0*/ __Vtemp_h8d9d5e00__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b9152__0;
    VlWide<3>/*95:0*/ __Vtemp_h587c631a__0;
    VlWide<3>/*95:0*/ __Vtemp_hd963d33e__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b93db__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b9196__0;
    VlWide<3>/*95:0*/ __Vtemp_h57ff11b4__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b8e57__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b901d__0;
    VlWide<3>/*95:0*/ __Vtemp_ha40bc187__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b90d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h587b963d__0;
    VlWide<3>/*95:0*/ __Vtemp_h01076f53__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa0ba2__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa0fe3__0;
    VlWide<3>/*95:0*/ __Vtemp_ha0509dde__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa0a56__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa0a97__0;
    VlWide<3>/*95:0*/ __Vtemp_h7aff3479__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa0acf__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa0b0e__0;
    VlWide<3>/*95:0*/ __Vtemp_hf94c16f1__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa014f__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa018e__0;
    VlWide<3>/*95:0*/ __Vtemp_hcb35d0a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fa9fdd0__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fa9fde1__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd9fada3__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa1050__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa1061__0;
    VlWide<3>/*95:0*/ __Vtemp_h7f043dfd__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa00cd__0;
    VlWide<3>/*95:0*/ __Vtemp_h0faa010c__0;
    VlWide<3>/*95:0*/ __Vtemp_hbb8e552a__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fa9ff31__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fa9ff60__0;
    VlWide<3>/*95:0*/ __Vtemp_h76ae544b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ae16a__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ada2b__0;
    VlWide<3>/*95:0*/ __Vtemp_h4a9437f6__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7adfde__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ae09f__0;
    VlWide<3>/*95:0*/ __Vtemp_h65c6c73b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ae077__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ae136__0;
    VlWide<3>/*95:0*/ __Vtemp_h78345209__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acad7__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acb96__0;
    VlWide<3>/*95:0*/ __Vtemp_h213b2b3b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acb4c__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acc15__0;
    VlWide<3>/*95:0*/ __Vtemp_hfdbac54b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ad9ec__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7adab5__0;
    VlWide<3>/*95:0*/ __Vtemp_ha92fef35__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7aca51__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acb18__0;
    VlWide<3>/*95:0*/ __Vtemp_h7f11872e__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acce5__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acd9c__0;
    VlWide<3>/*95:0*/ __Vtemp_hb9bb3d15__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acd66__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ad627__0;
    VlWide<3>/*95:0*/ __Vtemp_ha6c155ed__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acbca__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ad88b__0;
    VlWide<3>/*95:0*/ __Vtemp_h0b165ad5__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acc5b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7acd1a__0;
    VlWide<3>/*95:0*/ __Vtemp_h75e1b37d__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac70b__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac6ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h9bf5a532__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac798__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac751__0;
    VlWide<3>/*95:0*/ __Vtemp_hd7e69894__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ad5e8__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ad6a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h58fa84f1__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac695__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac64c__0;
    VlWide<3>/*95:0*/ __Vtemp_hca0ac6ca__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac8f9__0;
    VlWide<3>/*95:0*/ __Vtemp_hdf7ac8c0__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2c73a48__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__2;
    VlWide<3>/*95:0*/ __Vtemp_h2dac6861__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__3;
    VlWide<3>/*95:0*/ __Vtemp_he974d390__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__4;
    VlWide<3>/*95:0*/ __Vtemp_h504910aa__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__5;
    VlWide<3>/*95:0*/ __Vtemp_h7bc911d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__6;
    VlWide<3>/*95:0*/ __Vtemp_hf0b00336__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__7;
    VlWide<3>/*95:0*/ __Vtemp_hbe79adde__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__8;
    VlWide<3>/*95:0*/ __Vtemp_h11522f88__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__9;
    VlWide<3>/*95:0*/ __Vtemp_hdfab235c__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__10;
    VlWide<3>/*95:0*/ __Vtemp_hf8916474__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__11;
    VlWide<3>/*95:0*/ __Vtemp_h53eb6432__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__12;
    VlWide<3>/*95:0*/ __Vtemp_h3108d8de__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__13;
    VlWide<3>/*95:0*/ __Vtemp_h62aa6a5d__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__14;
    VlWide<3>/*95:0*/ __Vtemp_h70b3c7f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__15;
    VlWide<3>/*95:0*/ __Vtemp_hae4eb0f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__16;
    VlWide<3>/*95:0*/ __Vtemp_h1e9ea0ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__17;
    VlWide<3>/*95:0*/ __Vtemp_h31797e00__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__18;
    VlWide<3>/*95:0*/ __Vtemp_h703223a0__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__19;
    VlWide<3>/*95:0*/ __Vtemp_h3a8ac760__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__20;
    VlWide<3>/*95:0*/ __Vtemp_h48fa3bdb__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__21;
    VlWide<3>/*95:0*/ __Vtemp_h560ce438__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__22;
    VlWide<3>/*95:0*/ __Vtemp_h5f4c02bb__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__23;
    VlWide<3>/*95:0*/ __Vtemp_h5772a7f9__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__24;
    VlWide<3>/*95:0*/ __Vtemp_h5610a06d__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__25;
    VlWide<3>/*95:0*/ __Vtemp_h89db9cba__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__26;
    VlWide<3>/*95:0*/ __Vtemp_h1cc698ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__27;
    VlWide<3>/*95:0*/ __Vtemp_h75b110ac__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__28;
    VlWide<3>/*95:0*/ __Vtemp_hd2a07e43__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__29;
    VlWide<3>/*95:0*/ __Vtemp_h0fd75506__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__30;
    VlWide<3>/*95:0*/ __Vtemp_h93e3dc88__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__31;
    VlWide<3>/*95:0*/ __Vtemp_hf5b816ea__0;
    VlWide<3>/*95:0*/ __Vtemp_h97019f7e__32;
    VlWide<3>/*95:0*/ __Vtemp_h93c1bdd2__0;
    // Body
    __Vdly__csr0__DOT__minstret = vlSelf->__PVT__csr0__DOT__minstret;
    __Vdly__id_exe_exception_o = vlSelf->__PVT__id_exe_exception_o;
    vlSelf->__Vdly__if_id_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
    __Vdly__pc_wire = vlSelf->__PVT__pc_wire;
    __Vdly__exe0__DOT__div0__DOT__cnt = vlSelf->__PVT__exe0__DOT__div0__DOT__cnt;
    __Vdly__exe0__DOT__div0__DOT__result[0U] = vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U];
    __Vdly__exe0__DOT__div0__DOT__result[1U] = vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U];
    __Vdly__exe0__DOT__div0__DOT__result[2U] = vlSelf->__PVT__exe0__DOT__div0__DOT__result[2U];
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1 = 0U;
    __Vdly__csr0__DOT__mstatus_mpie = vlSelf->__PVT__csr0__DOT__mstatus_mpie;
    __Vdly__csr0__DOT__mstatus_mie = vlSelf->__PVT__csr0__DOT__mstatus_mie;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0 = 0U;
    __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32 = 0U;
    if ((1U & ((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device = 0x20U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0 = 1U;
    } else {
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[0U] 
            = ((1U & vlSelf->__PVT__exe0__DOT__b_o)
                ? vlSelf->__PVT__exe0__DOT__a_o : 0U);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[1U] = 0U;
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[2U] = 0U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32 = 1U;
        __Vtemp_h97019f7e__2[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__2[1U] = 0U;
        __Vtemp_h97019f7e__2[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h2dac6861__0, __Vtemp_h97019f7e__2, 1U);
        if ((2U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[0U] 
                = __Vtemp_h2dac6861__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[1U] 
                = __Vtemp_h2dac6861__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[2U] 
                = (1U & __Vtemp_h2dac6861__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[2U] = 0U;
        }
        __Vtemp_h97019f7e__3[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__3[1U] = 0U;
        __Vtemp_h97019f7e__3[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_he974d390__0, __Vtemp_h97019f7e__3, 2U);
        if ((4U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[0U] 
                = __Vtemp_he974d390__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[1U] 
                = __Vtemp_he974d390__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[2U] 
                = (1U & __Vtemp_he974d390__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[2U] = 0U;
        }
        __Vtemp_h97019f7e__4[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__4[1U] = 0U;
        __Vtemp_h97019f7e__4[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h504910aa__0, __Vtemp_h97019f7e__4, 3U);
        if ((8U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[0U] 
                = __Vtemp_h504910aa__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[1U] 
                = __Vtemp_h504910aa__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[2U] 
                = (1U & __Vtemp_h504910aa__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[2U] = 0U;
        }
        __Vtemp_h97019f7e__5[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__5[1U] = 0U;
        __Vtemp_h97019f7e__5[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h7bc911d4__0, __Vtemp_h97019f7e__5, 4U);
        if ((0x10U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[0U] 
                = __Vtemp_h7bc911d4__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[1U] 
                = __Vtemp_h7bc911d4__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[2U] 
                = (1U & __Vtemp_h7bc911d4__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[2U] = 0U;
        }
        __Vtemp_h97019f7e__6[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__6[1U] = 0U;
        __Vtemp_h97019f7e__6[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hf0b00336__0, __Vtemp_h97019f7e__6, 5U);
        if ((0x20U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[0U] 
                = __Vtemp_hf0b00336__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[1U] 
                = __Vtemp_hf0b00336__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[2U] 
                = (1U & __Vtemp_hf0b00336__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[2U] = 0U;
        }
        __Vtemp_h97019f7e__7[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__7[1U] = 0U;
        __Vtemp_h97019f7e__7[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hbe79adde__0, __Vtemp_h97019f7e__7, 6U);
        if ((0x40U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[0U] 
                = __Vtemp_hbe79adde__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[1U] 
                = __Vtemp_hbe79adde__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[2U] 
                = (1U & __Vtemp_hbe79adde__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[2U] = 0U;
        }
        __Vtemp_h97019f7e__8[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__8[1U] = 0U;
        __Vtemp_h97019f7e__8[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h11522f88__0, __Vtemp_h97019f7e__8, 7U);
        if ((0x80U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[0U] 
                = __Vtemp_h11522f88__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[1U] 
                = __Vtemp_h11522f88__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[2U] 
                = (1U & __Vtemp_h11522f88__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[2U] = 0U;
        }
        __Vtemp_h97019f7e__9[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__9[1U] = 0U;
        __Vtemp_h97019f7e__9[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hdfab235c__0, __Vtemp_h97019f7e__9, 8U);
        if ((0x100U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[0U] 
                = __Vtemp_hdfab235c__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[1U] 
                = __Vtemp_hdfab235c__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[2U] 
                = (1U & __Vtemp_hdfab235c__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[2U] = 0U;
        }
        __Vtemp_h97019f7e__10[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__10[1U] = 0U;
        __Vtemp_h97019f7e__10[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hf8916474__0, __Vtemp_h97019f7e__10, 9U);
        if ((0x200U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[0U] 
                = __Vtemp_hf8916474__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[1U] 
                = __Vtemp_hf8916474__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[2U] 
                = (1U & __Vtemp_hf8916474__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[2U] = 0U;
        }
        __Vtemp_h97019f7e__11[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__11[1U] = 0U;
        __Vtemp_h97019f7e__11[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h53eb6432__0, __Vtemp_h97019f7e__11, 0xaU);
        if ((0x400U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[0U] 
                = __Vtemp_h53eb6432__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[1U] 
                = __Vtemp_h53eb6432__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[2U] 
                = (1U & __Vtemp_h53eb6432__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[2U] = 0U;
        }
        __Vtemp_h97019f7e__12[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__12[1U] = 0U;
        __Vtemp_h97019f7e__12[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h3108d8de__0, __Vtemp_h97019f7e__12, 0xbU);
        if ((0x800U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[0U] 
                = __Vtemp_h3108d8de__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[1U] 
                = __Vtemp_h3108d8de__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[2U] 
                = (1U & __Vtemp_h3108d8de__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[2U] = 0U;
        }
        __Vtemp_h97019f7e__13[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__13[1U] = 0U;
        __Vtemp_h97019f7e__13[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h62aa6a5d__0, __Vtemp_h97019f7e__13, 0xcU);
        if ((0x1000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[0U] 
                = __Vtemp_h62aa6a5d__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[1U] 
                = __Vtemp_h62aa6a5d__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[2U] 
                = (1U & __Vtemp_h62aa6a5d__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[2U] = 0U;
        }
        __Vtemp_h97019f7e__14[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__14[1U] = 0U;
        __Vtemp_h97019f7e__14[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h70b3c7f3__0, __Vtemp_h97019f7e__14, 0xdU);
        if ((0x2000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[0U] 
                = __Vtemp_h70b3c7f3__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[1U] 
                = __Vtemp_h70b3c7f3__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[2U] 
                = (1U & __Vtemp_h70b3c7f3__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[2U] = 0U;
        }
        __Vtemp_h97019f7e__15[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__15[1U] = 0U;
        __Vtemp_h97019f7e__15[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hae4eb0f8__0, __Vtemp_h97019f7e__15, 0xeU);
        if ((0x4000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[0U] 
                = __Vtemp_hae4eb0f8__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[1U] 
                = __Vtemp_hae4eb0f8__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[2U] 
                = (1U & __Vtemp_hae4eb0f8__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[2U] = 0U;
        }
        __Vtemp_h97019f7e__16[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__16[1U] = 0U;
        __Vtemp_h97019f7e__16[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h1e9ea0ca__0, __Vtemp_h97019f7e__16, 0xfU);
        if ((0x8000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[0U] 
                = __Vtemp_h1e9ea0ca__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[1U] 
                = __Vtemp_h1e9ea0ca__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[2U] 
                = (1U & __Vtemp_h1e9ea0ca__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[2U] = 0U;
        }
        __Vtemp_h97019f7e__17[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__17[1U] = 0U;
        __Vtemp_h97019f7e__17[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h31797e00__0, __Vtemp_h97019f7e__17, 0x10U);
        if ((0x10000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[0U] 
                = __Vtemp_h31797e00__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[1U] 
                = __Vtemp_h31797e00__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[2U] 
                = (1U & __Vtemp_h31797e00__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[2U] = 0U;
        }
        __Vtemp_h97019f7e__18[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__18[1U] = 0U;
        __Vtemp_h97019f7e__18[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h703223a0__0, __Vtemp_h97019f7e__18, 0x11U);
        if ((0x20000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[0U] 
                = __Vtemp_h703223a0__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[1U] 
                = __Vtemp_h703223a0__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[2U] 
                = (1U & __Vtemp_h703223a0__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[2U] = 0U;
        }
        __Vtemp_h97019f7e__19[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__19[1U] = 0U;
        __Vtemp_h97019f7e__19[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h3a8ac760__0, __Vtemp_h97019f7e__19, 0x12U);
        if ((0x40000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[0U] 
                = __Vtemp_h3a8ac760__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[1U] 
                = __Vtemp_h3a8ac760__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[2U] 
                = (1U & __Vtemp_h3a8ac760__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[2U] = 0U;
        }
        __Vtemp_h97019f7e__20[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__20[1U] = 0U;
        __Vtemp_h97019f7e__20[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h48fa3bdb__0, __Vtemp_h97019f7e__20, 0x13U);
        if ((0x80000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[0U] 
                = __Vtemp_h48fa3bdb__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[1U] 
                = __Vtemp_h48fa3bdb__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[2U] 
                = (1U & __Vtemp_h48fa3bdb__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[2U] = 0U;
        }
        __Vtemp_h97019f7e__21[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__21[1U] = 0U;
        __Vtemp_h97019f7e__21[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h560ce438__0, __Vtemp_h97019f7e__21, 0x14U);
        if ((0x100000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[0U] 
                = __Vtemp_h560ce438__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[1U] 
                = __Vtemp_h560ce438__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[2U] 
                = (1U & __Vtemp_h560ce438__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[2U] = 0U;
        }
        __Vtemp_h97019f7e__22[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__22[1U] = 0U;
        __Vtemp_h97019f7e__22[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h5f4c02bb__0, __Vtemp_h97019f7e__22, 0x15U);
        if ((0x200000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[0U] 
                = __Vtemp_h5f4c02bb__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[1U] 
                = __Vtemp_h5f4c02bb__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[2U] 
                = (1U & __Vtemp_h5f4c02bb__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[2U] = 0U;
        }
        __Vtemp_h97019f7e__23[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__23[1U] = 0U;
        __Vtemp_h97019f7e__23[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h5772a7f9__0, __Vtemp_h97019f7e__23, 0x16U);
        if ((0x400000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[0U] 
                = __Vtemp_h5772a7f9__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[1U] 
                = __Vtemp_h5772a7f9__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[2U] 
                = (1U & __Vtemp_h5772a7f9__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[2U] = 0U;
        }
        __Vtemp_h97019f7e__24[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__24[1U] = 0U;
        __Vtemp_h97019f7e__24[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h5610a06d__0, __Vtemp_h97019f7e__24, 0x17U);
        if ((0x800000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[0U] 
                = __Vtemp_h5610a06d__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[1U] 
                = __Vtemp_h5610a06d__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[2U] 
                = (1U & __Vtemp_h5610a06d__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[2U] = 0U;
        }
        __Vtemp_h97019f7e__25[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__25[1U] = 0U;
        __Vtemp_h97019f7e__25[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h89db9cba__0, __Vtemp_h97019f7e__25, 0x18U);
        if ((0x1000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[0U] 
                = __Vtemp_h89db9cba__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[1U] 
                = __Vtemp_h89db9cba__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[2U] 
                = (1U & __Vtemp_h89db9cba__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[2U] = 0U;
        }
        __Vtemp_h97019f7e__26[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__26[1U] = 0U;
        __Vtemp_h97019f7e__26[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h1cc698ca__0, __Vtemp_h97019f7e__26, 0x19U);
        if ((0x2000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[0U] 
                = __Vtemp_h1cc698ca__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[1U] 
                = __Vtemp_h1cc698ca__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[2U] 
                = (1U & __Vtemp_h1cc698ca__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[2U] = 0U;
        }
        __Vtemp_h97019f7e__27[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__27[1U] = 0U;
        __Vtemp_h97019f7e__27[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h75b110ac__0, __Vtemp_h97019f7e__27, 0x1aU);
        if ((0x4000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[0U] 
                = __Vtemp_h75b110ac__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[1U] 
                = __Vtemp_h75b110ac__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[2U] 
                = (1U & __Vtemp_h75b110ac__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[2U] = 0U;
        }
        __Vtemp_h97019f7e__28[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__28[1U] = 0U;
        __Vtemp_h97019f7e__28[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hd2a07e43__0, __Vtemp_h97019f7e__28, 0x1bU);
        if ((0x8000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[0U] 
                = __Vtemp_hd2a07e43__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[1U] 
                = __Vtemp_hd2a07e43__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[2U] 
                = (1U & __Vtemp_hd2a07e43__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[2U] = 0U;
        }
        __Vtemp_h97019f7e__29[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__29[1U] = 0U;
        __Vtemp_h97019f7e__29[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h0fd75506__0, __Vtemp_h97019f7e__29, 0x1cU);
        if ((0x10000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[0U] 
                = __Vtemp_h0fd75506__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[1U] 
                = __Vtemp_h0fd75506__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[2U] 
                = (1U & __Vtemp_h0fd75506__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[2U] = 0U;
        }
        __Vtemp_h97019f7e__30[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__30[1U] = 0U;
        __Vtemp_h97019f7e__30[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h93e3dc88__0, __Vtemp_h97019f7e__30, 0x1dU);
        if ((0x20000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[0U] 
                = __Vtemp_h93e3dc88__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[1U] 
                = __Vtemp_h93e3dc88__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[2U] 
                = (1U & __Vtemp_h93e3dc88__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[2U] = 0U;
        }
        __Vtemp_h97019f7e__31[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__31[1U] = 0U;
        __Vtemp_h97019f7e__31[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hf5b816ea__0, __Vtemp_h97019f7e__31, 0x1eU);
        if ((0x40000000U & vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[0U] 
                = __Vtemp_hf5b816ea__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[1U] 
                = __Vtemp_hf5b816ea__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[2U] 
                = (1U & __Vtemp_hf5b816ea__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[2U] = 0U;
        }
        __Vtemp_h97019f7e__32[0U] = vlSelf->__PVT__exe0__DOT__a_o;
        __Vtemp_h97019f7e__32[1U] = 0U;
        __Vtemp_h97019f7e__32[2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h93c1bdd2__0, __Vtemp_h97019f7e__32, 0x1fU);
        if ((vlSelf->__PVT__exe0__DOT__b_o >> 0x1fU)) {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[0U] 
                = __Vtemp_h93c1bdd2__0[0U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[1U] 
                = __Vtemp_h93c1bdd2__0[1U];
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[2U] 
                = (1U & __Vtemp_h93c1bdd2__0[2U]);
        } else {
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[0U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[1U] = 0U;
            __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[2U] = 0U;
        }
    }
    if ((1U & (~ (1U & ((IData)(vlSymsp->TOP.rst_i) 
                        | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device = 0x20U;
    }
    if ((1U & (~ (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o))) 
                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device = 0x20U;
    }
    if ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o))) 
               | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device = 0x10U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0 = 1U;
    } else {
        __Vtemp_hdf7ae16a__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0U][0U];
        __Vtemp_hdf7ae16a__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0U][1U];
        __Vtemp_hdf7ae16a__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0U][2U];
        __Vtemp_hdf7ada2b__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [1U][0U];
        __Vtemp_hdf7ada2b__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [1U][1U];
        __Vtemp_hdf7ada2b__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_h4a9437f6__0, __Vtemp_hdf7ae16a__0, __Vtemp_hdf7ada2b__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[0U] 
            = __Vtemp_h4a9437f6__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[1U] 
            = __Vtemp_h4a9437f6__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[2U] 
            = (1U & __Vtemp_h4a9437f6__0[2U]);
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16 = 1U;
        __Vtemp_hdf7adfde__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [2U][0U];
        __Vtemp_hdf7adfde__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [2U][1U];
        __Vtemp_hdf7adfde__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [2U][2U];
        __Vtemp_hdf7ae09f__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [3U][0U];
        __Vtemp_hdf7ae09f__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [3U][1U];
        __Vtemp_hdf7ae09f__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_h65c6c73b__0, __Vtemp_hdf7adfde__0, __Vtemp_hdf7ae09f__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[0U] 
            = __Vtemp_h65c6c73b__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[1U] 
            = __Vtemp_h65c6c73b__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[2U] 
            = (1U & __Vtemp_h65c6c73b__0[2U]);
        __Vtemp_hdf7ae077__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [4U][0U];
        __Vtemp_hdf7ae077__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [4U][1U];
        __Vtemp_hdf7ae077__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [4U][2U];
        __Vtemp_hdf7ae136__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [5U][0U];
        __Vtemp_hdf7ae136__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [5U][1U];
        __Vtemp_hdf7ae136__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp_h78345209__0, __Vtemp_hdf7ae077__0, __Vtemp_hdf7ae136__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[0U] 
            = __Vtemp_h78345209__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[1U] 
            = __Vtemp_h78345209__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[2U] 
            = (1U & __Vtemp_h78345209__0[2U]);
        __Vtemp_hdf7acad7__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [6U][0U];
        __Vtemp_hdf7acad7__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [6U][1U];
        __Vtemp_hdf7acad7__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [6U][2U];
        __Vtemp_hdf7acb96__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [7U][0U];
        __Vtemp_hdf7acb96__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [7U][1U];
        __Vtemp_hdf7acb96__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp_h213b2b3b__0, __Vtemp_hdf7acad7__0, __Vtemp_hdf7acb96__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[0U] 
            = __Vtemp_h213b2b3b__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[1U] 
            = __Vtemp_h213b2b3b__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[2U] 
            = (1U & __Vtemp_h213b2b3b__0[2U]);
        __Vtemp_hdf7acb4c__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [8U][0U];
        __Vtemp_hdf7acb4c__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [8U][1U];
        __Vtemp_hdf7acb4c__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [8U][2U];
        __Vtemp_hdf7acc15__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [9U][0U];
        __Vtemp_hdf7acc15__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [9U][1U];
        __Vtemp_hdf7acc15__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [9U][2U];
        VL_ADD_W(3, __Vtemp_hfdbac54b__0, __Vtemp_hdf7acb4c__0, __Vtemp_hdf7acc15__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[0U] 
            = __Vtemp_hfdbac54b__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[1U] 
            = __Vtemp_hfdbac54b__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[2U] 
            = (1U & __Vtemp_hfdbac54b__0[2U]);
        __Vtemp_hdf7ad9ec__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][0U];
        __Vtemp_hdf7ad9ec__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][1U];
        __Vtemp_hdf7ad9ec__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xaU][2U];
        __Vtemp_hdf7adab5__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][0U];
        __Vtemp_hdf7adab5__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][1U];
        __Vtemp_hdf7adab5__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xbU][2U];
        VL_ADD_W(3, __Vtemp_ha92fef35__0, __Vtemp_hdf7ad9ec__0, __Vtemp_hdf7adab5__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[0U] 
            = __Vtemp_ha92fef35__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[1U] 
            = __Vtemp_ha92fef35__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[2U] 
            = (1U & __Vtemp_ha92fef35__0[2U]);
        __Vtemp_hdf7aca51__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][0U];
        __Vtemp_hdf7aca51__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][1U];
        __Vtemp_hdf7aca51__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xcU][2U];
        __Vtemp_hdf7acb18__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][0U];
        __Vtemp_hdf7acb18__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][1U];
        __Vtemp_hdf7acb18__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xdU][2U];
        VL_ADD_W(3, __Vtemp_h7f11872e__0, __Vtemp_hdf7aca51__0, __Vtemp_hdf7acb18__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[0U] 
            = __Vtemp_h7f11872e__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[1U] 
            = __Vtemp_h7f11872e__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[2U] 
            = (1U & __Vtemp_h7f11872e__0[2U]);
        __Vtemp_hdf7acce5__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][0U];
        __Vtemp_hdf7acce5__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][1U];
        __Vtemp_hdf7acce5__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xeU][2U];
        __Vtemp_hdf7acd9c__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][0U];
        __Vtemp_hdf7acd9c__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][1U];
        __Vtemp_hdf7acd9c__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0xfU][2U];
        VL_ADD_W(3, __Vtemp_hb9bb3d15__0, __Vtemp_hdf7acce5__0, __Vtemp_hdf7acd9c__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[0U] 
            = __Vtemp_hb9bb3d15__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[1U] 
            = __Vtemp_hb9bb3d15__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[2U] 
            = (1U & __Vtemp_hb9bb3d15__0[2U]);
        __Vtemp_hdf7acd66__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][0U];
        __Vtemp_hdf7acd66__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][1U];
        __Vtemp_hdf7acd66__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x10U][2U];
        __Vtemp_hdf7ad627__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][0U];
        __Vtemp_hdf7ad627__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][1U];
        __Vtemp_hdf7ad627__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x11U][2U];
        VL_ADD_W(3, __Vtemp_ha6c155ed__0, __Vtemp_hdf7acd66__0, __Vtemp_hdf7ad627__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[0U] 
            = __Vtemp_ha6c155ed__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[1U] 
            = __Vtemp_ha6c155ed__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[2U] 
            = (1U & __Vtemp_ha6c155ed__0[2U]);
        __Vtemp_hdf7acbca__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][0U];
        __Vtemp_hdf7acbca__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][1U];
        __Vtemp_hdf7acbca__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x12U][2U];
        __Vtemp_hdf7ad88b__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][0U];
        __Vtemp_hdf7ad88b__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][1U];
        __Vtemp_hdf7ad88b__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x13U][2U];
        VL_ADD_W(3, __Vtemp_h0b165ad5__0, __Vtemp_hdf7acbca__0, __Vtemp_hdf7ad88b__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[0U] 
            = __Vtemp_h0b165ad5__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[1U] 
            = __Vtemp_h0b165ad5__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[2U] 
            = (1U & __Vtemp_h0b165ad5__0[2U]);
        __Vtemp_hdf7acc5b__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][0U];
        __Vtemp_hdf7acc5b__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][1U];
        __Vtemp_hdf7acc5b__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x14U][2U];
        __Vtemp_hdf7acd1a__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][0U];
        __Vtemp_hdf7acd1a__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][1U];
        __Vtemp_hdf7acd1a__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x15U][2U];
        VL_ADD_W(3, __Vtemp_h75e1b37d__0, __Vtemp_hdf7acc5b__0, __Vtemp_hdf7acd1a__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[0U] 
            = __Vtemp_h75e1b37d__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[1U] 
            = __Vtemp_h75e1b37d__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[2U] 
            = (1U & __Vtemp_h75e1b37d__0[2U]);
        __Vtemp_hdf7ac70b__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][0U];
        __Vtemp_hdf7ac70b__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][1U];
        __Vtemp_hdf7ac70b__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x16U][2U];
        __Vtemp_hdf7ac6ca__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][0U];
        __Vtemp_hdf7ac6ca__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][1U];
        __Vtemp_hdf7ac6ca__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x17U][2U];
        VL_ADD_W(3, __Vtemp_h9bf5a532__0, __Vtemp_hdf7ac70b__0, __Vtemp_hdf7ac6ca__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[0U] 
            = __Vtemp_h9bf5a532__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[1U] 
            = __Vtemp_h9bf5a532__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[2U] 
            = (1U & __Vtemp_h9bf5a532__0[2U]);
        __Vtemp_hdf7ac798__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][0U];
        __Vtemp_hdf7ac798__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][1U];
        __Vtemp_hdf7ac798__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x18U][2U];
        __Vtemp_hdf7ac751__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][0U];
        __Vtemp_hdf7ac751__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][1U];
        __Vtemp_hdf7ac751__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x19U][2U];
        VL_ADD_W(3, __Vtemp_hd7e69894__0, __Vtemp_hdf7ac798__0, __Vtemp_hdf7ac751__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[0U] 
            = __Vtemp_hd7e69894__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[1U] 
            = __Vtemp_hd7e69894__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[2U] 
            = (1U & __Vtemp_hd7e69894__0[2U]);
        __Vtemp_hdf7ad5e8__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][0U];
        __Vtemp_hdf7ad5e8__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][1U];
        __Vtemp_hdf7ad5e8__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1aU][2U];
        __Vtemp_hdf7ad6a1__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][0U];
        __Vtemp_hdf7ad6a1__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][1U];
        __Vtemp_hdf7ad6a1__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1bU][2U];
        VL_ADD_W(3, __Vtemp_h58fa84f1__0, __Vtemp_hdf7ad5e8__0, __Vtemp_hdf7ad6a1__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[0U] 
            = __Vtemp_h58fa84f1__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[1U] 
            = __Vtemp_h58fa84f1__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[2U] 
            = (1U & __Vtemp_h58fa84f1__0[2U]);
        __Vtemp_hdf7ac695__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][0U];
        __Vtemp_hdf7ac695__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][1U];
        __Vtemp_hdf7ac695__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1cU][2U];
        __Vtemp_hdf7ac64c__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][0U];
        __Vtemp_hdf7ac64c__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][1U];
        __Vtemp_hdf7ac64c__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1dU][2U];
        VL_ADD_W(3, __Vtemp_hca0ac6ca__0, __Vtemp_hdf7ac695__0, __Vtemp_hdf7ac64c__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[0U] 
            = __Vtemp_hca0ac6ca__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[1U] 
            = __Vtemp_hca0ac6ca__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[2U] 
            = (1U & __Vtemp_hca0ac6ca__0[2U]);
        __Vtemp_hdf7ac8f9__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][0U];
        __Vtemp_hdf7ac8f9__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][1U];
        __Vtemp_hdf7ac8f9__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1eU][2U];
        __Vtemp_hdf7ac8c0__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][0U];
        __Vtemp_hdf7ac8c0__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][1U];
        __Vtemp_hdf7ac8c0__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i
            [0x1fU][2U];
        VL_ADD_W(3, __Vtemp_hb2c73a48__0, __Vtemp_hdf7ac8f9__0, __Vtemp_hdf7ac8c0__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[0U] 
            = __Vtemp_hb2c73a48__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[1U] 
            = __Vtemp_hb2c73a48__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[2U] 
            = (1U & __Vtemp_hb2c73a48__0[2U]);
    }
    if ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o))) 
               | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device = 8U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0 = 1U;
    } else {
        __Vtemp_h0faa0ba2__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0U][0U];
        __Vtemp_h0faa0ba2__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0U][1U];
        __Vtemp_h0faa0ba2__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0U][2U];
        __Vtemp_h0faa0fe3__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [1U][0U];
        __Vtemp_h0faa0fe3__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [1U][1U];
        __Vtemp_h0faa0fe3__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_ha0509dde__0, __Vtemp_h0faa0ba2__0, __Vtemp_h0faa0fe3__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[0U] 
            = __Vtemp_ha0509dde__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[1U] 
            = __Vtemp_ha0509dde__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[2U] 
            = (1U & __Vtemp_ha0509dde__0[2U]);
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8 = 1U;
        __Vtemp_h0faa0a56__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [2U][0U];
        __Vtemp_h0faa0a56__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [2U][1U];
        __Vtemp_h0faa0a56__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [2U][2U];
        __Vtemp_h0faa0a97__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [3U][0U];
        __Vtemp_h0faa0a97__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [3U][1U];
        __Vtemp_h0faa0a97__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_h7aff3479__0, __Vtemp_h0faa0a56__0, __Vtemp_h0faa0a97__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[0U] 
            = __Vtemp_h7aff3479__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[1U] 
            = __Vtemp_h7aff3479__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[2U] 
            = (1U & __Vtemp_h7aff3479__0[2U]);
        __Vtemp_h0faa0acf__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [4U][0U];
        __Vtemp_h0faa0acf__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [4U][1U];
        __Vtemp_h0faa0acf__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [4U][2U];
        __Vtemp_h0faa0b0e__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [5U][0U];
        __Vtemp_h0faa0b0e__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [5U][1U];
        __Vtemp_h0faa0b0e__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp_hf94c16f1__0, __Vtemp_h0faa0acf__0, __Vtemp_h0faa0b0e__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[0U] 
            = __Vtemp_hf94c16f1__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[1U] 
            = __Vtemp_hf94c16f1__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[2U] 
            = (1U & __Vtemp_hf94c16f1__0[2U]);
        __Vtemp_h0faa014f__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [6U][0U];
        __Vtemp_h0faa014f__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [6U][1U];
        __Vtemp_h0faa014f__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [6U][2U];
        __Vtemp_h0faa018e__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [7U][0U];
        __Vtemp_h0faa018e__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [7U][1U];
        __Vtemp_h0faa018e__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp_hcb35d0a1__0, __Vtemp_h0faa014f__0, __Vtemp_h0faa018e__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[0U] 
            = __Vtemp_hcb35d0a1__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[1U] 
            = __Vtemp_hcb35d0a1__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[2U] 
            = (1U & __Vtemp_hcb35d0a1__0[2U]);
        __Vtemp_h0fa9fdd0__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [8U][0U];
        __Vtemp_h0fa9fdd0__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [8U][1U];
        __Vtemp_h0fa9fdd0__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [8U][2U];
        __Vtemp_h0fa9fde1__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [9U][0U];
        __Vtemp_h0fa9fde1__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [9U][1U];
        __Vtemp_h0fa9fde1__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [9U][2U];
        VL_ADD_W(3, __Vtemp_hbd9fada3__0, __Vtemp_h0fa9fdd0__0, __Vtemp_h0fa9fde1__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[0U] 
            = __Vtemp_hbd9fada3__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[1U] 
            = __Vtemp_hbd9fada3__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[2U] 
            = (1U & __Vtemp_hbd9fada3__0[2U]);
        __Vtemp_h0faa1050__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][0U];
        __Vtemp_h0faa1050__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][1U];
        __Vtemp_h0faa1050__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xaU][2U];
        __Vtemp_h0faa1061__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][0U];
        __Vtemp_h0faa1061__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][1U];
        __Vtemp_h0faa1061__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xbU][2U];
        VL_ADD_W(3, __Vtemp_h7f043dfd__0, __Vtemp_h0faa1050__0, __Vtemp_h0faa1061__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[0U] 
            = __Vtemp_h7f043dfd__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[1U] 
            = __Vtemp_h7f043dfd__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[2U] 
            = (1U & __Vtemp_h7f043dfd__0[2U]);
        __Vtemp_h0faa00cd__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][0U];
        __Vtemp_h0faa00cd__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][1U];
        __Vtemp_h0faa00cd__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xcU][2U];
        __Vtemp_h0faa010c__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][0U];
        __Vtemp_h0faa010c__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][1U];
        __Vtemp_h0faa010c__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xdU][2U];
        VL_ADD_W(3, __Vtemp_hbb8e552a__0, __Vtemp_h0faa00cd__0, __Vtemp_h0faa010c__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[0U] 
            = __Vtemp_hbb8e552a__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[1U] 
            = __Vtemp_hbb8e552a__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[2U] 
            = (1U & __Vtemp_hbb8e552a__0[2U]);
        __Vtemp_h0fa9ff31__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][0U];
        __Vtemp_h0fa9ff31__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][1U];
        __Vtemp_h0fa9ff31__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xeU][2U];
        __Vtemp_h0fa9ff60__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][0U];
        __Vtemp_h0fa9ff60__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][1U];
        __Vtemp_h0fa9ff60__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i
            [0xfU][2U];
        VL_ADD_W(3, __Vtemp_h76ae544b__0, __Vtemp_h0fa9ff31__0, __Vtemp_h0fa9ff60__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[0U] 
            = __Vtemp_h76ae544b__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[1U] 
            = __Vtemp_h76ae544b__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[2U] 
            = (1U & __Vtemp_h76ae544b__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o))) 
                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device = 0x10U;
    }
    if ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o))) 
               | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device = 4U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0 = 1U;
    } else {
        __Vtemp_h587b9152__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [0U][0U];
        __Vtemp_h587b9152__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [0U][1U];
        __Vtemp_h587b9152__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [0U][2U];
        __Vtemp_h587c631a__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [1U][0U];
        __Vtemp_h587c631a__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [1U][1U];
        __Vtemp_h587c631a__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_hd963d33e__0, __Vtemp_h587b9152__0, __Vtemp_h587c631a__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[0U] 
            = __Vtemp_hd963d33e__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[1U] 
            = __Vtemp_hd963d33e__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[2U] 
            = (1U & __Vtemp_hd963d33e__0[2U]);
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4 = 1U;
        __Vtemp_h587b93db__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [2U][0U];
        __Vtemp_h587b93db__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [2U][1U];
        __Vtemp_h587b93db__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [2U][2U];
        __Vtemp_h587b9196__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [3U][0U];
        __Vtemp_h587b9196__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [3U][1U];
        __Vtemp_h587b9196__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_h57ff11b4__0, __Vtemp_h587b93db__0, __Vtemp_h587b9196__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[0U] 
            = __Vtemp_h57ff11b4__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[1U] 
            = __Vtemp_h57ff11b4__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[2U] 
            = (1U & __Vtemp_h57ff11b4__0[2U]);
        __Vtemp_h587b8e57__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [4U][0U];
        __Vtemp_h587b8e57__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [4U][1U];
        __Vtemp_h587b8e57__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [4U][2U];
        __Vtemp_h587b901d__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [5U][0U];
        __Vtemp_h587b901d__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [5U][1U];
        __Vtemp_h587b901d__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [5U][2U];
        VL_ADD_W(3, __Vtemp_ha40bc187__0, __Vtemp_h587b8e57__0, __Vtemp_h587b901d__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[0U] 
            = __Vtemp_ha40bc187__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[1U] 
            = __Vtemp_ha40bc187__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[2U] 
            = (1U & __Vtemp_ha40bc187__0[2U]);
        __Vtemp_h587b90d4__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [6U][0U];
        __Vtemp_h587b90d4__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [6U][1U];
        __Vtemp_h587b90d4__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [6U][2U];
        __Vtemp_h587b963d__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [7U][0U];
        __Vtemp_h587b963d__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [7U][1U];
        __Vtemp_h587b963d__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i
            [7U][2U];
        VL_ADD_W(3, __Vtemp_h01076f53__0, __Vtemp_h587b90d4__0, __Vtemp_h587b963d__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[0U] 
            = __Vtemp_h01076f53__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[1U] 
            = __Vtemp_h01076f53__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[2U] 
            = (1U & __Vtemp_h01076f53__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o))) 
                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device = 8U;
    }
    if ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o))) 
               | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device = 2U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0 = 1U;
    } else {
        __Vtemp_hed14c396__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [0U][0U];
        __Vtemp_hed14c396__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [0U][1U];
        __Vtemp_hed14c396__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [0U][2U];
        __Vtemp_hed14cf4e__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [1U][0U];
        __Vtemp_hed14cf4e__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [1U][1U];
        __Vtemp_hed14cf4e__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_hd4ef9c62__0, __Vtemp_hed14c396__0, __Vtemp_hed14cf4e__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[0U] 
            = __Vtemp_hd4ef9c62__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[1U] 
            = __Vtemp_hd4ef9c62__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[2U] 
            = (1U & __Vtemp_hd4ef9c62__0[2U]);
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2 = 1U;
        __Vtemp_hed14c40d__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [2U][0U];
        __Vtemp_hed14c40d__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [2U][1U];
        __Vtemp_hed14c40d__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [2U][2U];
        __Vtemp_hed14c1d2__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [3U][0U];
        __Vtemp_hed14c1d2__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [3U][1U];
        __Vtemp_hed14c1d2__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i
            [3U][2U];
        VL_ADD_W(3, __Vtemp_h468499ca__0, __Vtemp_hed14c40d__0, __Vtemp_hed14c1d2__0);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[0U] 
            = __Vtemp_h468499ca__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[1U] 
            = __Vtemp_h468499ca__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[2U] 
            = (1U & __Vtemp_h468499ca__0[2U]);
    }
    if ((1U & (~ (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o))) 
                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device = 4U;
    }
    if ((1U & (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o))) 
               | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device = 1U;
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0 = 1U;
    } else {
        __Vtemp_h02f3b505__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [0U][0U];
        __Vtemp_h02f3b505__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [0U][1U];
        __Vtemp_h02f3b505__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [0U][2U];
        __Vtemp_h02f3a8bd__0[0U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [1U][0U];
        __Vtemp_h02f3a8bd__0[1U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [1U][1U];
        __Vtemp_h02f3a8bd__0[2U] = vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i
            [1U][2U];
        VL_ADD_W(3, __Vtemp_h8d9d5e00__0, __Vtemp_h02f3b505__0, __Vtemp_h02f3a8bd__0);
        vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0[0U] 
            = __Vtemp_h8d9d5e00__0[0U];
        vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0[1U] 
            = __Vtemp_h8d9d5e00__0[1U];
        vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0[2U] 
            = (1U & __Vtemp_h8d9d5e00__0[2U]);
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[0U] 
            = vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0[0U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[1U] 
            = vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0[1U];
        __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[2U] 
            = vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0[2U];
        __Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1 = 1U;
    }
    if ((1U & (~ (((IData)(vlSymsp->TOP.rst_i) | (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o))) 
                  | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))))) {
        vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device = 2U;
    }
    vlSelf->__PVT__ctrl0__DOT__current_pc = ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                              ? vlSelf->__PVT__exe_jump_addr_o
                                              : vlSelf->__PVT__ctrl0__DOT__current_pc);
    vlSelf->__PVT__id_exe_reg_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                      & ((IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                          ? (IData)(vlSelf->__PVT__id_exe_reg_we_o)
                                          : ((~ (IData)(
                                                        (4U 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->__PVT__ctrl_stall_o))))) 
                                             & ((~ 
                                                 ((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                  | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                                & (IData)(vlSelf->__PVT__id_reg_we_o)))));
    vlSelf->__PVT__id_exe_inst_is_load_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                            & ((IData)(
                                                       (0xcU 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                ? (IData)(vlSelf->__PVT__id_exe_inst_is_load_o)
                                                : (
                                                   (~ (IData)(
                                                              (4U 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->__PVT__ctrl_stall_o))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                        | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__id_inst_o))))));
    __Vdly__pc_wire = ((IData)(vlSelf->__PVT__ce_wire)
                        ? ((1U & (IData)(vlSelf->__PVT__ctrl_stall_o))
                            ? vlSelf->__PVT__pc_wire
                            : (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                                ? vlSelf->__PVT__ctrl_new_pc_o
                                : ((IData)(4U) + vlSelf->__PVT__pc_wire)))
                        : 0U);
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__div_req_o))) {
        if ((0U != vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdly__exe0__DOT__div0__DOT__cnt = 0x20U;
            vlSelf->__PVT__exe0__DOT__div0__DOT__reg32 
                = vlSelf->__PVT__exe0__DOT__b_o;
        }
        if ((0U == vlSelf->__PVT__exe0__DOT__b_o)) {
            __Vdly__exe0__DOT__div0__DOT__result[0U] = 0xffffffffU;
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = (vlSelf->__PVT__exe0__DOT__a_o << 1U);
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = (vlSelf->__PVT__exe0__DOT__a_o >> 0x1fU);
        } else {
            __Vdly__exe0__DOT__div0__DOT__result[0U] 
                = vlSelf->__PVT__exe0__DOT__a_o;
            __Vdly__exe0__DOT__div0__DOT__result[1U] = 0U;
            __Vdly__exe0__DOT__div0__DOT__result[2U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))) {
        __Vdly__exe0__DOT__div0__DOT__cnt = (0x3fU 
                                             & ((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__cnt) 
                                                - (IData)(1U)));
        if (vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub) {
            __Vdly__exe0__DOT__div0__DOT__result[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U])))) 
                         << 1U));
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U]))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            __Vdly__exe0__DOT__div0__DOT__result[0U] 
                = ((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U])))) 
                   << 1U);
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U]))) 
                            >> 0x20U)) >> 0x1fU);
        }
    }
    vlSelf->__PVT__exe0__DOT__div_result_i = (((3U 
                                                == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S)) 
                                               & (~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))
                                               ? ((IData)(vlSelf->__PVT__exe0__DOT__is_div_q_i)
                                                   ? 
                                                  vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U]
                                                   : 
                                                  ((vlSelf->__PVT__exe0__DOT__div0__DOT__result[2U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U] 
                                                      >> 1U)))
                                               : ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                                   ? 0U
                                                   : vlSelf->__PVT__exe0__DOT__div_result_i));
    vlSelf->__PVT__csr0__DOT__mie_software = (1U & 
                                              ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                               & ((IData)(vlSelf->__PVT__csr0__DOT__w_mie)
                                                   ? 
                                                  (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                   >> 3U)
                                                   : (IData)(vlSelf->__PVT__csr0__DOT__mie_software))));
    vlSelf->__PVT__csr0__DOT__mie_external = (1U & 
                                              ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                               & ((IData)(vlSelf->__PVT__csr0__DOT__w_mie)
                                                   ? 
                                                  (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                   >> 0xbU)
                                                   : (IData)(vlSelf->__PVT__csr0__DOT__mie_external))));
    vlSelf->__PVT__csr0__DOT__mie_timer = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                                 & ((IData)(vlSelf->__PVT__csr0__DOT__w_mie)
                                                     ? 
                                                    (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                     >> 7U)
                                                     : (IData)(vlSelf->__PVT__csr0__DOT__mie_timer))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csr0__DOT__mcycle = 0ULL;
        __Vdly__csr0__DOT__minstret = 0ULL;
        __Vdly__id_exe_exception_o = 0U;
        vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
        vlSelf->__PVT__id_exe_rd_o = 0U;
        vlSelf->__Vdly__if_id_inst_addr_o = 0U;
        vlSelf->__PVT__id_exe_op2_o = 0U;
        vlSelf->__PVT__id_exe_op1_o = 0U;
        __Vtemp_h16ce05f5__0 = 0x13U;
    } else {
        vlSelf->__PVT__csr0__DOT__mcycle = (1ULL + vlSelf->__PVT__csr0__DOT__mcycle);
        if (vlSelf->__PVT__mem_wb_instret_incr_o) {
            __Vdly__csr0__DOT__minstret = (1ULL + vlSelf->__PVT__csr0__DOT__minstret);
        }
        __Vdly__id_exe_exception_o = (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                       | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                                       ? 0U : ((IData)(
                                                       (0xcU 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                ? vlSelf->__PVT__id_exe_exception_o
                                                : ((IData)(
                                                           (4U 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__id0__DOT__except_ecall) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__id0__DOT__except_mret)))));
        if ((0xcU == (0xcU & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            vlSelf->__PVT__id_exe_reg_waddr_o = vlSelf->__PVT__id_exe_reg_waddr_o;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & (IData)(vlSelf->__PVT__id_exe_rd_o));
            vlSelf->__PVT__id_exe_op2_o = vlSelf->__PVT__id_exe_op2_o;
            vlSelf->__PVT__id_exe_op1_o = vlSelf->__PVT__id_exe_op1_o;
        } else if ((4U == (0xcU & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & 0U);
            vlSelf->__PVT__id_exe_op2_o = 0U;
            vlSelf->__PVT__id_exe_op1_o = 0U;
        } else if (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                    | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) {
            vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & 0U);
            vlSelf->__PVT__id_exe_op2_o = 0U;
            vlSelf->__PVT__id_exe_op1_o = 0U;
        } else {
            vlSelf->__PVT__id_exe_reg_waddr_o = vlSelf->__PVT__id_reg_waddr_o;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & (vlSelf->__PVT__id_inst_o 
                                                   >> 7U));
            vlSelf->__PVT__id_exe_op2_o = (((((IData)(vlSelf->__PVT__id_reg2_re_o) 
                                              & (IData)(vlSelf->__PVT__exe_reg_we_o)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__id_reg2_addr_o))) 
                                            & ((IData)(vlSelf->__PVT__exe_reg_waddr_o) 
                                               == (IData)(vlSelf->__PVT__id_reg2_addr_o)))
                                            ? vlSelf->__PVT__exe_reg_wdata_o
                                            : (((((IData)(vlSelf->__PVT__id_reg2_re_o) 
                                                  & (IData)(vlSelf->__PVT__mem_reg_we_o)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->__PVT__id_reg2_addr_o))) 
                                                & ((IData)(vlSelf->__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSelf->__PVT__id_reg2_addr_o)))
                                                ? vlSelf->__PVT__mem_reg_wdata_o
                                                : vlSelf->__PVT__id0__DOT__op2_o_final));
            vlSelf->__PVT__id_exe_op1_o = (((((IData)(vlSelf->__PVT__id_reg1_re_o) 
                                              & (IData)(vlSelf->__PVT__exe_reg_we_o)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__id_reg1_addr_o))) 
                                            & ((IData)(vlSelf->__PVT__exe_reg_waddr_o) 
                                               == (IData)(vlSelf->__PVT__id_reg1_addr_o)))
                                            ? vlSelf->__PVT__exe_reg_wdata_o
                                            : (((((IData)(vlSelf->__PVT__id_reg1_re_o) 
                                                  & (IData)(vlSelf->__PVT__mem_reg_we_o)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->__PVT__id_reg1_addr_o))) 
                                                & ((IData)(vlSelf->__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSelf->__PVT__id_reg1_addr_o)))
                                                ? vlSelf->__PVT__mem_reg_wdata_o
                                                : vlSelf->__PVT__id0__DOT__op1_o_final));
        }
        if ((6U == (6U & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            vlSelf->__Vdly__if_id_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
            __Vtemp_h16ce05f5__0 = vlSelf->__PVT__if_id_inst_o;
        } else if ((2U == (6U & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            vlSelf->__Vdly__if_id_inst_addr_o = 0U;
            __Vtemp_h16ce05f5__0 = 0x13U;
        } else if (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                    | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) {
            vlSelf->__Vdly__if_id_inst_addr_o = 0U;
            __Vtemp_h16ce05f5__0 = 0x13U;
        } else {
            vlSelf->__Vdly__if_id_inst_addr_o = vlSelf->__PVT__pc_wire;
            __Vtemp_h16ce05f5__0 = ((IData)(vlSelf->__PVT__ce_wire)
                                     ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                         [(0x1ffffcU 
                                           & vlSelf->__PVT__pc_wire)] 
                                         << 0x18U) 
                                        | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSelf->__PVT__pc_wire)))] 
                                            << 0x10U) 
                                           | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                               [(0x1fffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1ffffcU 
                                                     & vlSelf->__PVT__pc_wire)))] 
                                               << 8U) 
                                              | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSelf->__PVT__pc_wire)))])))
                                     : 0U);
        }
    }
    vlSelf->__PVT__if_id_inst_o = __Vtemp_h16ce05f5__0;
    vlSelf->__PVT__csr0__DOT__mip_external = 0U;
    vlSelf->__PVT__id_exe_csr_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                      & (IData)(vlSelf->__PVT__id_csr_we_o));
    vlSelf->__PVT__exe_mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                       | ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o) 
                                          | (IData)(vlSelf->__PVT__exe_reg_we_o)));
    vlSelf->__PVT__exe_mem_csr_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                       & ((~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)) 
                                          & (IData)(vlSelf->__PVT__exe_csr_we_o)));
    vlSelf->__PVT__exe_mem_mem_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                       & ((~ (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)) 
                                          & (IData)(vlSelf->__PVT__exe_mem_we_o)));
    vlSelf->__PVT__interrupt_ctrl0__DOT__exception 
        = (0U != vlSelf->__PVT__exe_mem_exception_o);
    vlSelf->__PVT__exe0__DOT__div_ready_i = (3U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S));
    vlSelf->__PVT__csr0__DOT__mip_timer = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                           & ((~ (IData)(
                                                         (((((QData)((IData)(
                                                                             vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                             [1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                              [0U]))) 
                                                           - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                          >> 0x3fU))) 
                                              & (0ULL 
                                                 != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o 
        = (1U & (~ (((IData)(vlSymsp->TOP.rst_i) | 
                     (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o))) 
                    | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))));
    vlSelf->__PVT__csr0__DOT__mip_software = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                              & (0U 
                                                 != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem));
    vlSelf->__PVT__csr0__DOT__minstret = __Vdly__csr0__DOT__minstret;
    vlSelf->__PVT__exe0__DOT__div0__DOT__cnt = __Vdly__exe0__DOT__div0__DOT__cnt;
    vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U] 
        = __Vdly__exe0__DOT__div0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U] 
        = __Vdly__exe0__DOT__div0__DOT__result[1U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__result[2U] 
        = __Vdly__exe0__DOT__div0__DOT__result[2U];
    vlSelf->__PVT__pc_wire = __Vdly__pc_wire;
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v0) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v2[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o__v3[2U];
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v0) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o__v1[2U];
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csr0__DOT__mscratch = 0U;
        vlSelf->__PVT__csr0__DOT__mtvec = 0U;
        vlSelf->__PVT__csr0__DOT__mepc = 0U;
        __Vdly__csr0__DOT__mstatus_mie = 0U;
        __Vdly__csr0__DOT__mstatus_mpie = 1U;
    } else {
        vlSelf->__PVT__csr0__DOT__mscratch = (((0x340U 
                                                == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                               & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                               ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                               : vlSelf->__PVT__csr0__DOT__mscratch);
        vlSelf->__PVT__csr0__DOT__mtvec = (((0x305U 
                                             == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                            ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                            : vlSelf->__PVT__csr0__DOT__mtvec);
        vlSelf->__PVT__csr0__DOT__mepc = ((IData)(vlSelf->__PVT__int_ctrl_epc_we_o)
                                           ? (0xfffffffcU 
                                              & vlSelf->__PVT__int_ctrl_epc_o)
                                           : (((0x341U 
                                                == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                               & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                               ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                               : vlSelf->__PVT__csr0__DOT__mepc));
        if (((0x300U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
             & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))) {
            __Vdly__csr0__DOT__mstatus_mie = (1U & 
                                              (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                               >> 3U));
            __Vdly__csr0__DOT__mstatus_mpie = (1U & 
                                               (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                >> 7U));
        } else if (vlSelf->__PVT__int_ctrl_mstatus_ie_clear_o) {
            __Vdly__csr0__DOT__mstatus_mpie = vlSelf->__PVT__csr0__DOT__mstatus_mie;
            __Vdly__csr0__DOT__mstatus_mie = 0U;
        } else if (vlSelf->__PVT__int_ctrl_mstatus_ie_set_o) {
            __Vdly__csr0__DOT__mstatus_mie = vlSelf->__PVT__csr0__DOT__mstatus_mpie;
            __Vdly__csr0__DOT__mstatus_mpie = 1U;
        } else {
            __Vdly__csr0__DOT__mstatus_mie = vlSelf->__PVT__csr0__DOT__mstatus_mie;
            __Vdly__csr0__DOT__mstatus_mpie = vlSelf->__PVT__csr0__DOT__mstatus_mpie;
        }
    }
    vlSelf->__PVT__csr0__DOT__mstatus_mpie = __Vdly__csr0__DOT__mstatus_mpie;
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v0) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v4[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v5[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v6[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o__v7[2U];
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v0) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v8[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v9[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v10[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v11[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v12[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v13[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v14[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o__v15[2U];
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v0) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v16[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v17[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v18[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v19[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v20[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v21[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v22[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v23[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v24[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v25[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xaU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v26[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xbU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v27[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xcU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v28[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xdU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v29[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xeU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v30[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0xfU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o__v31[2U];
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v0) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][2U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][0U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][1U] = 0U;
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][2U] = 0U;
    }
    if (__Vdlyvset__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32) {
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v32[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v33[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v34[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v35[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v36[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v37[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v38[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v39[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v40[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v41[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xaU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v42[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xbU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v43[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xcU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v44[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xdU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v45[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xeU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v46[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0xfU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v47[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x10U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v48[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x11U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v49[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x12U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v50[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x13U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v51[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x14U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v52[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x15U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v53[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x16U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v54[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x17U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v55[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x18U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v56[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x19U][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v57[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1aU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v58[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1bU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v59[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1cU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v60[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1dU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v61[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1eU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v62[2U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][0U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[0U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][1U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[1U];
        vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0x1fU][2U] 
            = __Vdlyvval__exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o__v63[2U];
    }
    vlSelf->__PVT__mem_wb_instret_incr_o = 0U;
    vlSelf->__PVT__exe0__DOT__signed_adjust = ((vlSelf->__PVT__id_exe_op1_o 
                                                ^ vlSelf->__PVT__id_exe_op2_o) 
                                               >> 0x1fU);
    vlSelf->__PVT__exe0__DOT__op1_eq_op2 = (vlSelf->__PVT__id_exe_op1_o 
                                            == vlSelf->__PVT__id_exe_op2_o);
    vlSelf->__PVT__ce_wire = (1U & (~ (IData)(vlSymsp->TOP.rst_i)));
    vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0 
        = (((0x33U == (0x7fU & vlSelf->__PVT__if_id_inst_o)) 
            & ((0U == (vlSelf->__PVT__if_id_inst_o 
                       >> 0x19U)) | (0x20U == (vlSelf->__PVT__if_id_inst_o 
                                               >> 0x19U)))) 
           | (IData)((0x2000033U == (0xfe00007fU & vlSelf->__PVT__if_id_inst_o))));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[0U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[0U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[0U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [0U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[1U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[1U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[1U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o
        [1U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next5[0U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next5[0U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next5[0U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o
        [0U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[0U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[0U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[0U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [0U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[1U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[1U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[1U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [1U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[2U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[2U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[2U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [2U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[3U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[3U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[3U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o
        [3U][2U];
    vlSelf->__PVT__id_exe_inst_o = ((IData)(vlSymsp->TOP.rst_i)
                                     ? 0x13U : ((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                 ? vlSelf->__PVT__id_exe_inst_o
                                                 : 
                                                ((IData)(
                                                         (4U 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                  ? 0x13U
                                                  : 
                                                 (((IData)(vlSelf->__PVT__exe_jump_enable_o) 
                                                   | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                                                   ? 0x13U
                                                   : vlSelf->__PVT__id_inst_o))));
    vlSelf->__PVT__exe0__DOT__isType_r = ((0x33U == 
                                           (0x7fU & vlSelf->__PVT__id_exe_inst_o)) 
                                          & ((0U == 
                                              (vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x19U)) 
                                             | (0x20U 
                                                == 
                                                (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))));
    vlSelf->__PVT__exe0__DOT__isType_m = (IData)((0x2000033U 
                                                  == 
                                                  (0xfe00007fU 
                                                   & vlSelf->__PVT__id_exe_inst_o)));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[0U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[0U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[0U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [0U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[1U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[1U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[1U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [1U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[2U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[2U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[2U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [2U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[3U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[3U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[3U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [3U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[4U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[4U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[4U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [4U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[5U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[5U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[5U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [5U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[6U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[6U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[6U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [6U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[7U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[7U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[7U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o
        [7U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[1U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[1U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[1U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [1U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[2U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[2U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[2U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [2U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[3U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[3U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[3U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [3U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[4U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[4U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[4U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [4U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[5U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[5U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[5U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [5U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[6U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[6U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[6U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [6U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[7U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[7U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[7U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [7U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[8U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[8U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[8U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [8U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[9U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[9U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[9U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [9U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xaU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xaU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xaU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xaU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xbU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xbU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xbU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xbU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xcU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xcU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xcU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xcU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xdU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xdU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xdU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xdU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xeU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xeU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xeU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xeU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xfU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xfU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[0xfU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o
        [0xfU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1fU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1fU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1fU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1eU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1eU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1eU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [1U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1dU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1dU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1dU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [2U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1cU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1cU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1cU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [3U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1bU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1bU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1bU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [4U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1aU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1aU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x1aU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [5U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x19U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x19U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x19U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [6U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x18U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x18U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x18U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [7U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x17U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x17U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x17U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [8U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x16U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x16U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x16U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [9U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x15U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x15U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x15U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xaU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x14U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x14U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x14U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xbU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x13U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x13U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x13U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xcU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x12U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x12U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x12U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xdU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x11U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x11U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x11U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xeU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x10U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x10U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0x10U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0xfU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xfU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xfU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xfU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x10U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xeU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xeU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xeU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x11U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xdU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xdU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xdU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x12U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xcU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xcU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xcU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x13U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xbU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xbU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xbU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x14U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xaU][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xaU][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0xaU][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x15U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[9U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[9U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[9U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x16U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[8U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[8U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[8U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x17U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[7U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[7U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[7U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x18U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[6U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[6U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[6U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x19U][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[5U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[5U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[5U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1aU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[4U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[4U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[4U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1bU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[3U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[3U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[3U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1cU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[2U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[2U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[2U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1dU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[1U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[1U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[1U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1eU][2U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0U][0U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0U][1U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[0U][2U] 
        = vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o
        [0x1fU][2U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub = 
        (vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U] 
         >= vlSelf->__PVT__exe0__DOT__div0__DOT__reg32);
    vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U] 
        = vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                     vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                     - (QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__reg32)))));
    vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                      vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                      - (QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__reg32)))) 
                   >> 0x20U));
    vlSelf->__PVT__exe0__DOT__div0__DOT__S = ((1U & 
                                               (((IData)(vlSymsp->TOP.rst_i) 
                                                 | (~ (IData)(vlSelf->__PVT__exe0__DOT__div_req_o))) 
                                                | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)))
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S_next));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_mem_reg_wdata_o = 0U;
        vlSelf->__PVT__id_exe_csr_addr_o = 0U;
        vlSelf->__Vcellout__exe_mem0__csr_waddr_o = 0U;
    } else {
        if (vlSelf->__PVT__int_ctrl_interrupt_en_o) {
            vlSelf->__PVT__exe_mem_reg_waddr_o = 0U;
            vlSelf->__PVT__exe_mem_reg_wdata_o = 0U;
            vlSelf->__Vcellout__exe_mem0__csr_waddr_o = 0U;
        } else {
            vlSelf->__PVT__exe_mem_reg_waddr_o = vlSelf->__PVT__exe_reg_waddr_o;
            vlSelf->__PVT__exe_mem_reg_wdata_o = vlSelf->__PVT__exe_reg_wdata_o;
            vlSelf->__Vcellout__exe_mem0__csr_waddr_o 
                = vlSelf->__PVT__exe_csr_waddr_o;
        }
        vlSelf->__PVT__id_exe_csr_addr_o = vlSelf->__PVT__id_csr_addr_o;
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o 
        = (1U & (~ (((IData)(vlSymsp->TOP.rst_i) | 
                     (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o))) 
                    | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_csr_wdata_o = 0U;
        vlSelf->__PVT__exe_mem_mem_data_o = 0U;
        vlSelf->__PVT__csr0__DOT__cause_rem = 0U;
        vlSelf->__PVT__csr0__DOT__mtval = 0U;
    } else {
        if (vlSelf->__PVT__int_ctrl_interrupt_en_o) {
            vlSelf->__PVT__exe_mem_csr_wdata_o = 0U;
            vlSelf->__PVT__exe_mem_mem_data_o = 0U;
        } else {
            vlSelf->__PVT__exe_mem_csr_wdata_o = vlSelf->__PVT__exe_csr_wdata_o;
            vlSelf->__PVT__exe_mem_mem_data_o = vlSelf->__PVT__exe_mem_data_o;
        }
        if (vlSelf->__PVT__int_ctrl_cause_we_o) {
            vlSelf->__PVT__csr0__DOT__cause_rem = 0U;
        } else if (vlSelf->__PVT__csr0__DOT__w_mcause) {
            vlSelf->__PVT__csr0__DOT__cause_rem = (0x7ffffffU 
                                                   & (vlSelf->__PVT__mem_wb_csr_wdata_o 
                                                      >> 4U));
        }
        if (((0x343U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
             & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))) {
            vlSelf->__PVT__csr0__DOT__mtval = vlSelf->__PVT__mem_wb_csr_wdata_o;
        }
    }
    vlSelf->__PVT__mem_wb_csr_waddr_o = (((IData)(vlSymsp->TOP.rst_i) 
                                          | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                                          ? 0U : (0xfffU 
                                                  & vlSelf->__Vcellout__mem0__csr_waddr_o));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csr0__DOT__interrupt_type = 0U;
        vlSelf->__PVT__csr0__DOT__cause = 0U;
    } else if (vlSelf->__PVT__int_ctrl_cause_we_o) {
        vlSelf->__PVT__csr0__DOT__interrupt_type = vlSelf->__PVT__int_ctrl_interrupt_type_o;
        vlSelf->__PVT__csr0__DOT__cause = vlSelf->__PVT__int_ctrl_trap_casue_o;
    } else if (vlSelf->__PVT__csr0__DOT__w_mcause) {
        vlSelf->__PVT__csr0__DOT__interrupt_type = 
            (vlSelf->__PVT__mem_wb_csr_wdata_o >> 0x1fU);
        vlSelf->__PVT__csr0__DOT__cause = (0xfU & vlSelf->__PVT__mem_wb_csr_wdata_o);
    }
    vlSelf->__PVT__mem_wb_csr_wdata_o = (((IData)(vlSymsp->TOP.rst_i) 
                                          | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))
                                          ? 0U : vlSelf->__PVT__mem_csr_wdata_o);
    vlSelf->__PVT__mem_wb_csr_we_o = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                          | (IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o))) 
                                      & (IData)(vlSelf->__PVT__mem_csr_we_o));
    vlSelf->__PVT__id0__DOT__r_reg_we_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_mem_op_o = 0U;
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_csr_we_o = 0U;
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        vlSelf->__PVT__int_ctrl_interrupt_type_o = 0U;
        vlSelf->__PVT__int_ctrl_trap_casue_o = 0U;
        vlSelf->__PVT__mem_mem_we_o = 0U;
        vlSelf->__PVT__mem_mem_addr_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe0__DOT__mult_req_o = 0U;
        vlSelf->__Vcellout__mem0__csr_waddr_o = 0U;
        vlSelf->__PVT__mem_csr_wdata_o = 0U;
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        vlSelf->__PVT__exe_mem_exception_o = 0U;
        vlSelf->__PVT__interrupt_ctrl0__DOT__S = 1U;
    } else {
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__id0__DOT__except_mret = 0U;
        vlSelf->__PVT__id_csr_we_o = 0U;
        vlSelf->__PVT__id0__DOT__except_ecall = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        if (vlSelf->__PVT__int_ctrl_interrupt_en_o) {
            vlSelf->__PVT__exe_mem_mem_addr_o = 0U;
            vlSelf->__PVT__exe_mem_mem_op_o = 0U;
        } else {
            vlSelf->__PVT__exe_mem_mem_addr_o = vlSelf->__PVT__exe_mem_addr_o;
            vlSelf->__PVT__exe_mem_mem_op_o = vlSelf->__PVT__exe_mem_op_o;
        }
        vlSelf->__PVT__exe_mem_op_o = 0U;
        if ((2U == (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))) {
            if (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                 & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__eip))) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 1U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 0xbU;
            } else if (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                        & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__sip))) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 1U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 3U;
            } else if (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                        & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__tip))) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 1U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 7U;
            } else if ((2U & vlSelf->__PVT__exe_mem_exception_o)) {
                vlSelf->__PVT__int_ctrl_interrupt_type_o = 0U;
                vlSelf->__PVT__int_ctrl_trap_casue_o = 0xbU;
            }
        }
        vlSelf->__PVT__exe_mem_exception_o = ((IData)(vlSelf->__PVT__int_ctrl_interrupt_en_o)
                                               ? 0U
                                               : vlSelf->__PVT__id_exe_exception_o);
        vlSelf->__PVT__mem_mem_we_o = vlSelf->__PVT__exe_mem_mem_we_o;
        vlSelf->__PVT__mem_mem_addr_o = vlSelf->__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_mem_we_o = 0U;
                    vlSelf->__PVT__mem_mem_addr_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_mem_we_o = 0U;
            vlSelf->__PVT__mem_mem_addr_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_mem_we_o = 0U;
                vlSelf->__PVT__mem_mem_addr_o = 0U;
            }
        }
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = vlSelf->__PVT__id_exe_reg_we_o;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                                vlSelf->__PVT__exe_mem_we_o = 0U;
                                vlSelf->__PVT__exe_mem_op_o = 0U;
                                vlSelf->__PVT__exe_mem_addr_o = 0U;
                                vlSelf->__PVT__exe_mem_data_o = 0U;
                                vlSelf->__PVT__exe_stallreq_o = 0U;
                                vlSelf->__PVT__exe_reg_we_o = 0U;
                            }
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = ((1U & vlSelf->__PVT__id_exe_inst_o)
                                    ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                    : 0U);
                        } else {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                        }
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                : 0U);
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                        }
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                : 0U);
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_we_o = 1U;
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        if (vlSelf->__PVT__exe0__DOT__isType_r) {
                            if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xdU)))) {
                                    if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        if ((0U != 
                                             (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0x19U))) {
                                            if ((0x20U 
                                                 != 
                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0x19U))) {
                                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xcU)))) {
                                    if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                                >> 0x19U))) {
                                        if ((0x20U 
                                             != (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))) {
                                            vlSelf->__PVT__exe_reg_we_o = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_m)))) {
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = (IData)(
                                                      (3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->__PVT__id_exe_inst_o)));
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_op_o 
                            = ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                             >> 0xcU)))
                                ? 1U : ((1U == (7U 
                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0xcU)))
                                         ? 2U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 0U)));
                        vlSelf->__PVT__exe_mem_addr_o 
                            = (vlSelf->__PVT__id_exe_op1_o 
                               + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 7U)))));
                        vlSelf->__PVT__exe_mem_data_o 
                            = vlSelf->__PVT__id_exe_op2_o;
                    } else {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                    }
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = ((1U & vlSelf->__PVT__id_exe_inst_o)
                            ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                            : 0U);
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                            >> 0x19U))) {
                                    if ((0x20U != (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x19U))) {
                                        vlSelf->__PVT__exe_reg_we_o = 0U;
                                    }
                                }
                            }
                        }
                        if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x19U))) {
                                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                }
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_mem_we_o = 0U;
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = (
                                                   (0x4000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0xdU
                                                      : 0xcU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 0xbU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0xaU
                                                      : 9U)));
                    vlSelf->__PVT__exe_mem_addr_o = 
                        (vlSelf->__PVT__id_exe_op1_o 
                         + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x14U)));
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = vlSelf->__PVT__id_exe_reg_waddr_o;
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            }
            vlSelf->__PVT__exe_mem_data_o = 0U;
            vlSelf->__PVT__exe_reg_we_o = (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->__PVT__id_exe_inst_o)));
        }
        vlSelf->__PVT__exe0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0xeU)))) {
                                                vlSelf->__PVT__exe0__DOT__mult_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->__Vcellout__mem0__csr_waddr_o = (0xfffU 
                                                 & vlSelf->__Vcellout__exe_mem0__csr_waddr_o);
        vlSelf->__PVT__mem_csr_wdata_o = vlSelf->__PVT__exe_mem_csr_wdata_o;
        vlSelf->__PVT__id_reg_we_o = 0U;
        vlSelf->__PVT__id_reg2_re_o = 0U;
        vlSelf->__PVT__id_reg1_re_o = 0U;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg_we_o = 0U;
                        vlSelf->__PVT__id_reg2_re_o = 0U;
                        vlSelf->__PVT__id_reg1_re_o = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg_we_o = 0U;
                        vlSelf->__PVT__id_reg2_re_o = 0U;
                        vlSelf->__PVT__id_reg1_re_o = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                } else if ((0x1000U 
                                            & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 0U);
                                }
                                vlSelf->__PVT__id_csr_we_o 
                                    = (IData)((0U != 
                                               (0x3000U 
                                                & vlSelf->__PVT__if_id_inst_o)));
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o = 0U;
                                vlSelf->__PVT__id_reg_we_o 
                                    = (IData)((0U != 
                                               (0x3000U 
                                                & vlSelf->__PVT__if_id_inst_o)));
                                vlSelf->__PVT__id_reg2_re_o = 0U;
                                vlSelf->__PVT__id_reg1_re_o = 0U;
                            } else if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_csr_we_o = 1U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                                vlSelf->__PVT__id_reg_we_o = 1U;
                                vlSelf->__PVT__id_reg2_re_o = 0U;
                                vlSelf->__PVT__id_reg1_re_o = 1U;
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_csr_we_o = 1U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                                vlSelf->__PVT__id_reg_we_o = 1U;
                                vlSelf->__PVT__id_reg2_re_o = 0U;
                                vlSelf->__PVT__id_reg1_re_o = 1U;
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o = 0U;
                            vlSelf->__PVT__id_reg2_addr_o = 0U;
                            vlSelf->__PVT__id_reg1_addr_o = 0U;
                            vlSelf->__PVT__id_reg_we_o = 0U;
                            vlSelf->__PVT__id_reg2_re_o = 0U;
                            vlSelf->__PVT__id_reg1_re_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg_we_o = 0U;
                        vlSelf->__PVT__id_reg2_re_o = 0U;
                        vlSelf->__PVT__id_reg1_re_o = 0U;
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    if ((1U & (~ (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__if_id_inst_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__if_id_inst_o 
                                                     >> 0xcU)))) {
                                                if ((IData)(
                                                            (0x30200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_mret = 1U;
                                                }
                                                if ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelf->__PVT__if_id_inst_o)))) {
                                                    vlSelf->__PVT__id0__DOT__except_ecall = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 0U);
                                }
                                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                    vlSelf->__PVT__id_csr_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_csr_we_o = 0U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg2_addr_o = 0U;
                        vlSelf->__PVT__id_reg1_addr_o = 0U;
                        vlSelf->__PVT__id_reg_we_o 
                            = (1U & (IData)((7U == 
                                             (7U & vlSelf->__PVT__if_id_inst_o))));
                    } else {
                        if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg_waddr_o 
                                        = (0x1fU & 0U);
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 0U);
                                }
                                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                    vlSelf->__PVT__id_csr_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_csr_we_o = 0U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & 0U);
                            }
                            vlSelf->__PVT__id_reg2_addr_o = 0U;
                        } else {
                            if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                    vlSelf->__PVT__id_inst_o 
                                        = vlSelf->__PVT__if_id_inst_o;
                                    vlSelf->__PVT__id_reg2_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 
                                           (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                                } else {
                                    vlSelf->__PVT__id_inst_o = 0x13U;
                                    vlSelf->__PVT__id_reg2_addr_o = 0U;
                                    vlSelf->__PVT__id_reg1_addr_o 
                                        = (0x1fU & 0U);
                                }
                                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                    vlSelf->__PVT__id_csr_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_csr_we_o = 0U;
                                vlSelf->__PVT__id_reg2_addr_o = 0U;
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & 0U);
                            }
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg_we_o 
                            = (1U & (IData)((7U == 
                                             (7U & vlSelf->__PVT__if_id_inst_o))));
                    }
                    vlSelf->__PVT__id_reg2_re_o = (IData)(
                                                          (3U 
                                                           == 
                                                           (0xfU 
                                                            & vlSelf->__PVT__if_id_inst_o)));
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & ((~ 
                                                       (vlSelf->__PVT__if_id_inst_o 
                                                        >> 3U)) 
                                                      & ((4U 
                                                          & vlSelf->__PVT__if_id_inst_o)
                                                          ? 
                                                         ((vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U) 
                                                          & vlSelf->__PVT__if_id_inst_o)
                                                          : 
                                                         ((vlSelf->__PVT__if_id_inst_o 
                                                           >> 1U) 
                                                          & vlSelf->__PVT__if_id_inst_o))));
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_csr_we_o = 0U;
                vlSelf->__PVT__id_reg_waddr_o = 0U;
                vlSelf->__PVT__id_reg2_addr_o = 0U;
                vlSelf->__PVT__id_reg1_addr_o = 0U;
                vlSelf->__PVT__id_reg_we_o = 0U;
                vlSelf->__PVT__id_reg2_re_o = 0U;
                vlSelf->__PVT__id_reg1_re_o = 0U;
            }
        } else {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                vlSelf->__PVT__id_csr_we_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            } else {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                                vlSelf->__PVT__id_reg2_addr_o 
                                    = (0x1fU & 0U);
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & 0U);
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->__PVT__if_id_inst_o)) 
                                                              & (IData)(vlSelf->__PVT__id0__DOT__r_reg1_re_o))));
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o))));
                }
                vlSelf->__PVT__id_reg_we_o = (1U & (IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x18U 
                                                              & vlSelf->__PVT__if_id_inst_o)) 
                                                            & ((4U 
                                                                & vlSelf->__PVT__if_id_inst_o)
                                                                ? 
                                                               ((vlSelf->__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & vlSelf->__PVT__if_id_inst_o)
                                                                : 
                                                               ((vlSelf->__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & (vlSelf->__PVT__if_id_inst_o 
                                                                   & (IData)(vlSelf->__PVT__id0__DOT__r_reg_we_o)))))));
            } else {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                vlSelf->__PVT__id_csr_we_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_csr_we_o = 0U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            } else {
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                                vlSelf->__PVT__id_reg1_addr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_we_o = (1U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__if_id_inst_o 
                                                       >> 3U)) 
                                                     & ((4U 
                                                         & vlSelf->__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSelf->__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSelf->__PVT__if_id_inst_o)
                                                         : 
                                                        ((vlSelf->__PVT__if_id_inst_o 
                                                          >> 1U) 
                                                         & vlSelf->__PVT__if_id_inst_o))));
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o))));
                } else {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_csr_we_o = 0U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_we_o = (1U 
                                                  & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->__PVT__if_id_inst_o))));
                    vlSelf->__PVT__id_reg1_re_o = (1U 
                                                   & (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o))));
                }
                vlSelf->__PVT__id_reg2_addr_o = 0U;
            }
            vlSelf->__PVT__id_reg2_re_o = (1U & ((vlSelf->__PVT__if_id_inst_o 
                                                  >> 5U) 
                                                 & ((0x10U 
                                                     & vlSelf->__PVT__if_id_inst_o)
                                                     ? (IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0xfU 
                                                                  & vlSelf->__PVT__if_id_inst_o)) 
                                                                & (IData)(vlSelf->__PVT__id0__DOT__r_reg2_re_o)))
                                                     : (IData)(
                                                               (3U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->__PVT__if_id_inst_o))))));
        }
        vlSelf->__PVT__interrupt_ctrl0__DOT__S = vlSelf->__PVT__interrupt_ctrl0__DOT__S_nxt;
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4
        [0U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4
        [0U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4
        [0U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4
        [1U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4
        [1U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4
        [1U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [0U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [0U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [0U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [1U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [1U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [1U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [2U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [2U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [2U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [3U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [3U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3
        [3U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [0U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [0U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [0U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [1U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [1U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [1U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [2U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [2U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [2U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [3U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [3U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [3U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [4U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [4U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [4U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [5U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [5U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [5U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [6U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [6U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [6U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [7U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [7U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2
        [7U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [1U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [1U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [1U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [2U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [2U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [2U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [3U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [3U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [3U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [4U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [4U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [4U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [5U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [5U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [5U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [6U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [6U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [6U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [7U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [7U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [7U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [8U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [8U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [8U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [9U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [9U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [9U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xaU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xaU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xaU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xaU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xbU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xbU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xbU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xbU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xcU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xcU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xcU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xcU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xdU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xdU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xdU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xdU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xeU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xeU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xeU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xeU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xfU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xfU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0xfU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1
        [0xfU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1fU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1fU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1fU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1eU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1eU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1eU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1dU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1dU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1dU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1cU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1cU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1cU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1bU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1bU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1bU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1aU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1aU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x1aU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x19U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x19U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x19U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x18U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x18U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x18U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x17U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x17U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x17U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x16U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x16U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x16U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x15U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x15U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xaU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x15U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x14U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x14U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xbU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x14U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x13U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x13U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xcU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x13U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x12U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x12U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xdU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x12U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x11U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x11U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xeU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x11U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x10U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x10U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0xfU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0x10U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xfU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xfU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x10U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xfU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xeU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xeU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x11U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xeU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xdU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xdU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x12U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xdU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xcU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xcU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x13U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xcU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xbU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xbU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x14U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xbU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xaU][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xaU][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x15U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0xaU][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [9U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [9U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x16U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [9U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [8U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [8U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x17U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [8U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [7U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [7U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x18U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [7U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [6U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [6U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x19U][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [6U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [5U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [5U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1aU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [5U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [4U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [4U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1bU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [4U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [3U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [3U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1cU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [3U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [2U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [2U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1dU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [2U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [1U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [1U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1eU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [1U][2U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0U][0U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][1U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0U][1U];
    vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0x1fU][2U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp
        [0U][2U];
    vlSelf->__PVT__mem_csr_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                   & (IData)(vlSelf->__PVT__exe_mem_csr_we_o));
    vlSelf->__PVT__interrupt_ctrl0__DOT__eip = ((IData)(vlSelf->__PVT__csr0__DOT__mie_external) 
                                                & (IData)(vlSelf->__PVT__csr0__DOT__mip_external));
    vlSelf->__PVT__interrupt_ctrl0__DOT__sip = ((IData)(vlSelf->__PVT__csr0__DOT__mie_software) 
                                                & (IData)(vlSelf->__PVT__csr0__DOT__mip_software));
    vlSelf->__PVT__interrupt_ctrl0__DOT__tip = ((IData)(vlSelf->__PVT__csr0__DOT__mie_timer) 
                                                & (IData)(vlSelf->__PVT__csr0__DOT__mip_timer));
    vlSelf->__PVT__csr0__DOT__mstatus_mie = __Vdly__csr0__DOT__mstatus_mie;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((0x4000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_csr_addr_o 
                                    = (0xfffU & ((0x2000U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 
                                                 (vlSelf->__PVT__if_id_inst_o 
                                                  >> 0x14U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSelf->__PVT__if_id_inst_o 
                                                   >> 0x14U)
                                                   : 0U)));
                            } else if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_csr_addr_o 
                                    = (vlSelf->__PVT__if_id_inst_o 
                                       >> 0x14U);
                            } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_csr_addr_o 
                                    = (vlSelf->__PVT__if_id_inst_o 
                                       >> 0x14U);
                            }
                        } else {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                                vlSelf->__PVT__id_csr_addr_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                            vlSelf->__PVT__id_csr_addr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                        vlSelf->__PVT__id_csr_addr_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                    vlSelf->__PVT__id_csr_addr_o = 0U;
                }
            } else {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
            vlSelf->__PVT__id_csr_addr_o = 0U;
        } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
            vlSelf->__PVT__id_csr_addr_o = 0U;
        } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
            if ((1U & (~ vlSelf->__PVT__if_id_inst_o))) {
                vlSelf->__PVT__id_csr_addr_o = 0U;
            }
        } else {
            vlSelf->__PVT__id_csr_addr_o = 0U;
        }
        vlSelf->__PVT__exe_csr_we_o = vlSelf->__PVT__id_exe_csr_we_o;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_waddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                        vlSelf->__PVT__exe_csr_raddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                    } else if ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)) {
                                        vlSelf->__PVT__exe_csr_waddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                        vlSelf->__PVT__exe_csr_raddr_o 
                                            = vlSelf->__PVT__id_exe_csr_addr_o;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->__PVT__exe0__DOT__is_div_q_i = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__is_div_q_i 
                                                    = 
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0xdU)));
                                                if (
                                                    (0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)) {
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)) {
                                                        vlSelf->__PVT__exe0__DOT__a_o 
                                                            = vlSelf->__PVT__id_exe_op1_o;
                                                        vlSelf->__PVT__exe0__DOT__b_o 
                                                            = vlSelf->__PVT__id_exe_op2_o;
                                                    } else {
                                                        vlSelf->__PVT__exe0__DOT__a_o 
                                                            = 
                                                            ((vlSelf->__PVT__id_exe_op1_o 
                                                              >> 0x1fU)
                                                              ? 
                                                             ((IData)(1U) 
                                                              + 
                                                              (~ vlSelf->__PVT__id_exe_op1_o))
                                                              : vlSelf->__PVT__id_exe_op1_o);
                                                        vlSelf->__PVT__exe0__DOT__b_o 
                                                            = 
                                                            ((vlSelf->__PVT__id_exe_op2_o 
                                                              >> 0x1fU)
                                                              ? 
                                                             ((IData)(1U) 
                                                              + 
                                                              (~ vlSelf->__PVT__id_exe_op2_o))
                                                              : vlSelf->__PVT__id_exe_op2_o);
                                                    }
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)) {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = vlSelf->__PVT__id_exe_op1_o;
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = vlSelf->__PVT__id_exe_op2_o;
                                                } else {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = 
                                                        ((vlSelf->__PVT__id_exe_op1_o 
                                                          >> 0x1fU)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->__PVT__id_exe_op1_o))
                                                          : vlSelf->__PVT__id_exe_op1_o);
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = 
                                                        ((vlSelf->__PVT__id_exe_op2_o 
                                                          >> 0x1fU)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->__PVT__id_exe_op2_o))
                                                          : vlSelf->__PVT__id_exe_op2_o);
                                                }
                                            } else if (
                                                       (0x2000U 
                                                        & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__a_o 
                                                    = 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? vlSelf->__PVT__id_exe_op1_o
                                                      : 
                                                     ((vlSelf->__PVT__id_exe_op1_o 
                                                       >> 0x1fU)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->__PVT__id_exe_op1_o))
                                                       : vlSelf->__PVT__id_exe_op1_o));
                                                vlSelf->__PVT__exe0__DOT__b_o 
                                                    = vlSelf->__PVT__id_exe_op2_o;
                                            } else if (
                                                       (0x1000U 
                                                        & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__a_o 
                                                    = 
                                                    ((vlSelf->__PVT__id_exe_op1_o 
                                                      >> 0x1fU)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__id_exe_op1_o))
                                                      : vlSelf->__PVT__id_exe_op1_o);
                                                vlSelf->__PVT__exe0__DOT__b_o 
                                                    = 
                                                    ((vlSelf->__PVT__id_exe_op2_o 
                                                      >> 0x1fU)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->__PVT__id_exe_op2_o))
                                                      : vlSelf->__PVT__id_exe_op2_o);
                                            } else {
                                                vlSelf->__PVT__exe0__DOT__a_o 
                                                    = vlSelf->__PVT__id_exe_op1_o;
                                                vlSelf->__PVT__exe0__DOT__b_o 
                                                    = vlSelf->__PVT__id_exe_op2_o;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__a_o))) 
                 | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__b_o)))));
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        vlSelf->__PVT__exe0__DOT__div_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__id_exe_inst_o)) {
                                                vlSelf->__PVT__exe0__DOT__div_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__div0__DOT__S_next = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__exe0__DOT__div_req_o)
                                                     ? 
                                                    (((0U 
                                                       == vlSelf->__PVT__exe0__DOT__a_o) 
                                                      | (0U 
                                                         == vlSelf->__PVT__exe0__DOT__b_o))
                                                      ? 3U
                                                      : 1U)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__cnt))
                                                      ? 1U
                                                      : 3U)
                                                     : 0U));
    vlSelf->__PVT__exe0__DOT__invert_result_div = ((IData)(vlSelf->__PVT__exe0__DOT__div_req_o)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__exe0__DOT__div_result_i))
                                                    : 0U);
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o 
        = (1U & (~ (((IData)(vlSymsp->TOP.rst_i) | 
                     (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o))) 
                    | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))));
    vlSelf->__PVT__csr0__DOT__w_mie = ((0x304U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                       & (IData)(vlSelf->__PVT__mem_wb_csr_we_o));
    vlSelf->__PVT__csr0__DOT__w_mcause = ((0x342U == (IData)(vlSelf->__PVT__mem_wb_csr_waddr_o)) 
                                          & (IData)(vlSelf->__PVT__mem_wb_csr_we_o));
    vlSelf->__PVT__csr_file_csr_rdata_o = ((((IData)(vlSelf->__PVT__mem_wb_csr_waddr_o) 
                                             == (IData)(vlSelf->__PVT__exe_csr_raddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_wb_csr_we_o))
                                            ? vlSelf->__PVT__mem_wb_csr_wdata_o
                                            : ((0x800U 
                                                & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                ? (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                    ? 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : 0x16U)
                                                             : 0U)))
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csr0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__mcycle)))))))))))
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csr0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 0U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__minstret))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csr0__DOT__mcycle)))))))))
                                                      : 0U)
                                                     : 0U))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__mip_external) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mip_timer) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mip_software) 
                                                                    << 3U)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mtval
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__interrupt_type) 
                                                               << 0x1fU) 
                                                              | ((vlSelf->__PVT__csr0__DOT__cause_rem 
                                                                  << 4U) 
                                                                 | (IData)(vlSelf->__PVT__csr0__DOT__cause))))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mepc
                                                              : vlSelf->__PVT__csr0__DOT__mscratch))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                         ? 0U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? vlSelf->__PVT__csr0__DOT__mtvec
                                                              : 
                                                             (((IData)(vlSelf->__PVT__csr0__DOT__mie_external) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mie_timer) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mie_software) 
                                                                    << 3U)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->__PVT__exe_csr_raddr_o))
                                                              ? 0x40001100U
                                                              : 
                                                             (0x1800U 
                                                              | (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mpie) 
                                                                  << 7U) 
                                                                 | ((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                                                                    << 3U)))))))))))
                                                      : 0U)
                                                     : 0U))));
    vlSelf->__PVT__exe0__DOT__csr_rdata = ((((IData)(vlSelf->__PVT__id_exe_csr_addr_o) 
                                             == (0xfffU 
                                                 & vlSelf->__Vcellout__mem0__csr_waddr_o)) 
                                            & (IData)(vlSelf->__PVT__mem_csr_we_o))
                                            ? vlSelf->__PVT__mem_csr_wdata_o
                                            : vlSelf->__PVT__csr_file_csr_rdata_o);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_csr_wdata_o 
                                        = ((0x2000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? (
                                                   (~ vlSelf->__PVT__id_exe_op1_o) 
                                                   & vlSelf->__PVT__exe0__DOT__csr_rdata)
                                                : (vlSelf->__PVT__id_exe_op1_o 
                                                   | vlSelf->__PVT__exe0__DOT__csr_rdata))
                                            : ((0x1000U 
                                                & vlSelf->__PVT__id_exe_inst_o)
                                                ? vlSelf->__PVT__id_exe_op1_o
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__id_exe_exception_o = __Vdly__id_exe_exception_o;
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o 
        = (1U & (~ (((IData)(vlSymsp->TOP.rst_i) | 
                     (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o))) 
                    | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))));
    vlSelf->__PVT__int_ctrl_mstatus_ie_clear_o = (IData)(
                                                         (4U 
                                                          == (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)));
    vlSelf->__PVT__int_ctrl_epc_we_o = (IData)((4U 
                                                == (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)));
    vlSelf->__PVT__int_ctrl_mstatus_ie_set_o = (IData)(
                                                       (8U 
                                                        == (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)));
    vlSelf->__PVT__int_ctrl_cause_we_o = (IData)((4U 
                                                  == (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)));
    __Vtableidx1 = ((((1U & (((IData)(vlSelf->__PVT__csr0__DOT__mstatus_mie) 
                              & ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__eip) 
                                 | ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__tip) 
                                    | (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__sip)))) 
                             | (vlSelf->__PVT__exe_mem_exception_o 
                                >> 1U))) ? 4U : ((1U 
                                                  & vlSelf->__PVT__exe_mem_exception_o)
                                                  ? 8U
                                                  : 2U)) 
                     << 4U) | (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S));
    vlSelf->__PVT__interrupt_ctrl0__DOT__S_nxt = Vtest_top__ConstPool__TABLE_h065ae0f9_0
        [__Vtableidx1];
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o 
        = (1U & (~ (((IData)(vlSymsp->TOP.rst_i) | 
                     (~ (IData)(vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o))) 
                    | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req)))));
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o 
        = (1U & (~ (1U & ((IData)(vlSymsp->TOP.rst_i) 
                          | (~ (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__req))))));
}
