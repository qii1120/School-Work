// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_test_top.h"

VL_ATTR_COLD void Vtest_top_test_top___ctor_var_reset(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->halt_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ce_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_inst_is_load_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_rd_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_op_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exe_stallreq_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_jump_enable_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_jump_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_ram_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_ram_w_request_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ram_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_halt_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__op1_o_final = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__op2_o_final = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__isType_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
}
