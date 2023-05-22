// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_core_top.h"

VL_ATTR_COLD void Vtest_top_core_top___eval_initial__TOP__test_top__core_top0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___eval_initial__TOP__test_top__core_top0\n"); );
    // Body
    vlSelf->__PVT__id_csr_we_o = 0U;
}

VL_ATTR_COLD void Vtest_top_core_top___ctor_var_reset(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rom_ce_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rom_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rom_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_ce_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ce_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_csr_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_inst_is_load_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_rd_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_csr_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_op_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exe_stallreq_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_jump_enable_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_jump_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_csr_waddr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_csr_raddr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exe_mem_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__exe_mem0__csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__mem0__csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_csr_waddr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__mem_wb_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_instret_incr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_file_csr_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__op1_o_final = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__op2_o_final = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__r_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__isType_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__isType_m = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__a_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__b_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__div_result_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mult_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__div_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__mult_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__div_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__is_div_q_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__mult_result_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__exe0__DOT__signed_adjust = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__invert_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__exe0__DOT__invert_result_div = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__result);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mul_add = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp);
    vlSelf->__PVT__exe0__DOT__div0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__div0__DOT__result);
    vlSelf->__PVT__exe0__DOT__div0__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exe0__DOT__div0__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__div0__DOT__S_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp);
    vlSelf->__PVT__csr0__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr0__DOT__minstret = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr0__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mtval = VL_RAND_RESET_I(32);
}
