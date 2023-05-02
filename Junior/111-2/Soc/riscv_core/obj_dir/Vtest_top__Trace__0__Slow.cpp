// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+172,"halt_o", false,-1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+50,"halt_o", false,-1);
    tracep->declBus(c+2,"ctrl_stall_o", false,-1, 5,0);
    tracep->declBit(c+3,"ctrl_flush_jump_o", false,-1);
    tracep->declBus(c+4,"ctrl_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+51,"pc_wire", false,-1, 31,0);
    tracep->declBit(c+52,"ce_wire", false,-1);
    tracep->declBus(c+51,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+173,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+53,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+54,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+53,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_op2_o", false,-1, 31,0);
    tracep->declBit(c+8,"id_reg_we_o", false,-1);
    tracep->declBus(c+9,"id_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+10,"id_reg1_addr_o", false,-1, 4,0);
    tracep->declBus(c+11,"id_reg2_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"id_reg1_re_o", false,-1);
    tracep->declBit(c+13,"id_reg2_re_o", false,-1);
    tracep->declBit(c+55,"id_stallreq_o", false,-1);
    tracep->declBus(c+14,"reg1_data_o", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_data_o", false,-1, 31,0);
    tracep->declBit(c+56,"id_exe_inst_is_load_o", false,-1);
    tracep->declBus(c+57,"id_exe_rd_o", false,-1, 4,0);
    tracep->declBus(c+58,"id_exe_op1_o", false,-1, 31,0);
    tracep->declBus(c+59,"id_exe_op2_o", false,-1, 31,0);
    tracep->declBit(c+60,"id_exe_reg_we_o", false,-1);
    tracep->declBus(c+61,"id_exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+62,"id_exe_inst_o", false,-1, 31,0);
    tracep->declBus(c+63,"id_exe_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+16,"exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+17,"exe_reg_we_o", false,-1);
    tracep->declBus(c+18,"exe_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+19,"exe_mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+20,"exe_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+21,"exe_mem_we_o", false,-1);
    tracep->declBus(c+22,"exe_mem_op_o", false,-1, 3,0);
    tracep->declBit(c+23,"exe_stallreq_o", false,-1);
    tracep->declBit(c+3,"exe_jump_enable_o", false,-1);
    tracep->declBus(c+4,"exe_jump_addr_o", false,-1, 31,0);
    tracep->declBus(c+64,"exe_mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+65,"exe_mem_reg_we_o", false,-1);
    tracep->declBus(c+66,"exe_mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+67,"exe_mem_mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+68,"exe_mem_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+69,"exe_mem_mem_we_o", false,-1);
    tracep->declBus(c+70,"exe_mem_mem_op_o", false,-1, 3,0);
    tracep->declBus(c+24,"mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"mem_reg_we_o", false,-1);
    tracep->declBus(c+26,"mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+27,"mem_ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+28,"mem_ram_w_request_o", false,-1);
    tracep->declBus(c+29,"mem_ram_data_o", false,-1, 31,0);
    tracep->declBit(c+50,"mem_halt_o", false,-1);
    tracep->declBus(c+30,"ram_data_o", false,-1, 31,0);
    tracep->declBus(c+71,"mem_wb_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+72,"mem_wb_reg_we_o", false,-1);
    tracep->declBus(c+73,"mem_wb_reg_wdata_o", false,-1, 31,0);
    tracep->pushNamePrefix("ctrl0 ");
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+55,"stallreq_from_id_i", false,-1);
    tracep->declBit(c+23,"stallreq_from_exe_i", false,-1);
    tracep->declBit(c+3,"jump_enable_i", false,-1);
    tracep->declBus(c+4,"jump_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"stall_o", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_o", false,-1);
    tracep->declBus(c+4,"new_pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe0 ");
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBus(c+58,"op1_i", false,-1, 31,0);
    tracep->declBus(c+59,"op2_i", false,-1, 31,0);
    tracep->declBit(c+60,"reg_we_i", false,-1);
    tracep->declBus(c+61,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+62,"inst_i", false,-1, 31,0);
    tracep->declBus(c+63,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+16,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+17,"reg_we_o", false,-1);
    tracep->declBus(c+18,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+19,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+20,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+21,"mem_we_o", false,-1);
    tracep->declBus(c+22,"mem_op_o", false,-1, 3,0);
    tracep->declBit(c+23,"stallreq_o", false,-1);
    tracep->declBus(c+4,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+3,"jump_enable_o", false,-1);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+75,"funct3", false,-1, 2,0);
    tracep->declBus(c+76,"funct7", false,-1, 6,0);
    tracep->declBit(c+77,"isType_r", false,-1);
    tracep->declBit(c+78,"isType_m", false,-1);
    tracep->declBus(c+79,"load_addr_offset", false,-1, 31,0);
    tracep->declBus(c+80,"store_addr_offset", false,-1, 31,0);
    tracep->declBit(c+81,"op1_eq_op2", false,-1);
    tracep->declBus(c+63,"pc", false,-1, 31,0);
    tracep->declBus(c+31,"a_o", false,-1, 31,0);
    tracep->declBus(c+32,"b_o", false,-1, 31,0);
    tracep->declBus(c+82,"div_result_i", false,-1, 31,0);
    tracep->declBit(c+33,"mult_req_o", false,-1);
    tracep->declBit(c+34,"div_req_o", false,-1);
    tracep->declBit(c+83,"mult_ready_i", false,-1);
    tracep->declBit(c+84,"div_ready_i", false,-1);
    tracep->declBit(c+35,"is_div_q_i", false,-1);
    tracep->declQuad(c+85,"mult_result_i", false,-1, 63,0);
    tracep->declBit(c+87,"is_a_neg", false,-1);
    tracep->declBit(c+88,"is_b_neg", false,-1);
    tracep->declBit(c+89,"signed_adjust", false,-1);
    tracep->declQuad(c+36,"invert_result", false,-1, 63,0);
    tracep->declBus(c+38,"invert_result_div", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBus(c+174,"XLEN", false,-1, 31,0);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+31,"a_i", false,-1, 31,0);
    tracep->declBus(c+32,"b_i", false,-1, 31,0);
    tracep->declBit(c+34,"req_i", false,-1);
    tracep->declBit(c+35,"is_q_i", false,-1);
    tracep->declBus(c+82,"result_o", false,-1, 31,0);
    tracep->declBit(c+84,"ready_o", false,-1);
    tracep->declBit(c+39,"is_a_zero", false,-1);
    tracep->declBit(c+40,"is_b_zero", false,-1);
    tracep->declBus(c+31,"op_a", false,-1, 31,0);
    tracep->declBus(c+32,"op_b", false,-1, 31,0);
    tracep->declBit(c+90,"is_calc_done", false,-1);
    tracep->declBus(c+91,"reg32", false,-1, 31,0);
    tracep->declArray(c+92,"result", false,-1, 64,0);
    tracep->declBus(c+95,"cnt", false,-1, 5,0);
    tracep->declBus(c+96,"quotient", false,-1, 31,0);
    tracep->declBus(c+97,"remainder", false,-1, 31,0);
    tracep->declBus(c+175,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+176,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+177,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+98,"S", false,-1, 2,0);
    tracep->declBus(c+41,"S_next", false,-1, 2,0);
    tracep->declBit(c+99,"div_sub", false,-1);
    tracep->declQuad(c+100,"sub_tmp", false,-1, 32,0);
    tracep->declArray(c+102,"result_tmp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul0 ");
    tracep->declBus(c+174,"XLEN", false,-1, 31,0);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+31,"a_i", false,-1, 31,0);
    tracep->declBus(c+32,"b_i", false,-1, 31,0);
    tracep->declBit(c+33,"req_i", false,-1);
    tracep->declBit(c+83,"ready_o", false,-1);
    tracep->declQuad(c+85,"result_o", false,-1, 63,0);
    tracep->declBit(c+42,"is_a_zero", false,-1);
    tracep->declBit(c+43,"is_b_zero", false,-1);
    tracep->declBus(c+31,"op_a", false,-1, 31,0);
    tracep->declBus(c+32,"op_b", false,-1, 31,0);
    tracep->declBit(c+105,"is_calc_done", false,-1);
    tracep->declBus(c+106,"reg32", false,-1, 31,0);
    tracep->declArray(c+107,"result", false,-1, 64,0);
    tracep->declBus(c+110,"cnt", false,-1, 5,0);
    tracep->declBus(c+175,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+176,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+177,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+111,"S", false,-1, 2,0);
    tracep->declBus(c+44,"S_nxt", false,-1, 2,0);
    tracep->declBit(c+112,"mul_add", false,-1);
    tracep->declBus(c+106,"adder_opa", false,-1, 31,0);
    tracep->declBus(c+113,"adder_opb", false,-1, 31,0);
    tracep->declQuad(c+114,"adder_tmp", false,-1, 32,0);
    tracep->declArray(c+116,"result_tmp", false,-1, 64,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exe_mem0 ");
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBus(c+16,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+17,"reg_we_i", false,-1);
    tracep->declBus(c+18,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+19,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+20,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+21,"mem_we_i", false,-1);
    tracep->declBus(c+22,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+64,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+65,"reg_we_o", false,-1);
    tracep->declBus(c+66,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+67,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+68,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+69,"mem_we_o", false,-1);
    tracep->declBus(c+70,"mem_op_o", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id0 ");
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+53,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+54,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+57,"exe_rd_i", false,-1, 4,0);
    tracep->declBit(c+56,"pre_inst_is_load_i", false,-1);
    tracep->declBit(c+55,"stallreq_o", false,-1);
    tracep->declBus(c+10,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+11,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+12,"reg1_re_o", false,-1);
    tracep->declBit(c+13,"reg2_re_o", false,-1);
    tracep->declBus(c+5,"inst_o", false,-1, 31,0);
    tracep->declBus(c+53,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"op1_o", false,-1, 31,0);
    tracep->declBus(c+7,"op2_o", false,-1, 31,0);
    tracep->declBit(c+8,"reg_we_o", false,-1);
    tracep->declBus(c+9,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+16,"exe_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+18,"exe_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+17,"exe_reg_we_i", false,-1);
    tracep->declBus(c+24,"mem_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+26,"mem_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+25,"mem_reg_we_i", false,-1);
    tracep->declBus(c+45,"op1_o_final", false,-1, 31,0);
    tracep->declBus(c+46,"op2_o_final", false,-1, 31,0);
    tracep->declBus(c+119,"opcode", false,-1, 6,0);
    tracep->declBus(c+120,"rd", false,-1, 4,0);
    tracep->declBus(c+121,"i_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+122,"r_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+178,"i_reg2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+123,"r_reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+179,"i_reg1_re_o", false,-1);
    tracep->declBit(c+124,"r_reg1_re_o", false,-1);
    tracep->declBit(c+180,"i_reg2_re_o", false,-1);
    tracep->declBit(c+125,"r_reg2_re_o", false,-1);
    tracep->declBus(c+14,"i_op1_o", false,-1, 31,0);
    tracep->declBus(c+47,"r_op1_o", false,-1, 31,0);
    tracep->declBus(c+126,"i_op2_o", false,-1, 31,0);
    tracep->declBus(c+48,"r_op2_o", false,-1, 31,0);
    tracep->declBit(c+179,"i_reg_we_o", false,-1);
    tracep->declBit(c+127,"r_reg_we_o", false,-1);
    tracep->declBus(c+128,"i_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+129,"r_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+130,"rs1", false,-1, 4,0);
    tracep->declBus(c+131,"rs2", false,-1, 4,0);
    tracep->declBit(c+55,"is_load_hazard", false,-1);
    tracep->pushNamePrefix("inst_type_i ");
    tracep->declBus(c+54,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+121,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+178,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+179,"reg1_re_o", false,-1);
    tracep->declBit(c+180,"reg2_re_o", false,-1);
    tracep->declBus(c+14,"op1_o", false,-1, 31,0);
    tracep->declBus(c+126,"op2_o", false,-1, 31,0);
    tracep->declBit(c+179,"reg_we_o", false,-1);
    tracep->declBus(c+128,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+132,"funct3", false,-1, 2,0);
    tracep->declBus(c+120,"rd", false,-1, 4,0);
    tracep->declBus(c+130,"rs1", false,-1, 4,0);
    tracep->declBus(c+131,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_type_r ");
    tracep->declBus(c+54,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+122,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+123,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+124,"reg1_re_o", false,-1);
    tracep->declBit(c+125,"reg2_re_o", false,-1);
    tracep->declBus(c+47,"op1_o", false,-1, 31,0);
    tracep->declBus(c+48,"op2_o", false,-1, 31,0);
    tracep->declBit(c+127,"reg_we_o", false,-1);
    tracep->declBus(c+129,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+119,"opcode", false,-1, 6,0);
    tracep->declBus(c+132,"funct3", false,-1, 2,0);
    tracep->declBus(c+133,"funct7", false,-1, 6,0);
    tracep->declBus(c+131,"shamt", false,-1, 4,0);
    tracep->declBus(c+120,"rd", false,-1, 4,0);
    tracep->declBus(c+130,"rs1", false,-1, 4,0);
    tracep->declBus(c+131,"rs2", false,-1, 4,0);
    tracep->declBit(c+134,"isType_r", false,-1);
    tracep->declBit(c+135,"isType_m", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_exe0 ");
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+6,"op1_i", false,-1, 31,0);
    tracep->declBus(c+7,"op2_i", false,-1, 31,0);
    tracep->declBit(c+8,"reg_we_i", false,-1);
    tracep->declBus(c+9,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+5,"inst_i", false,-1, 31,0);
    tracep->declBus(c+53,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+58,"op1_o", false,-1, 31,0);
    tracep->declBus(c+59,"op2_o", false,-1, 31,0);
    tracep->declBit(c+60,"reg_we_o", false,-1);
    tracep->declBus(c+61,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+62,"inst_o", false,-1, 31,0);
    tracep->declBit(c+56,"inst_is_load_o", false,-1);
    tracep->declBus(c+57,"rd_o", false,-1, 4,0);
    tracep->declBus(c+63,"inst_addr_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id0 ");
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+51,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+173,"inst_i", false,-1, 31,0);
    tracep->declBus(c+53,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+54,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem0 ");
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+64,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+65,"reg_we_i", false,-1);
    tracep->declBus(c+66,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+30,"ram_data_i", false,-1, 31,0);
    tracep->declBit(c+69,"mem_we_i", false,-1);
    tracep->declBus(c+67,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+68,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+70,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+27,"ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+28,"ram_w_request_o", false,-1);
    tracep->declBus(c+29,"ram_data_o", false,-1, 31,0);
    tracep->declBus(c+24,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"reg_we_o", false,-1);
    tracep->declBus(c+26,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+50,"halt_o", false,-1);
    tracep->declBus(c+136,"ram_addr_offset", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb0 ");
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBus(c+24,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+25,"reg_we_i", false,-1);
    tracep->declBus(c+26,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+71,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+72,"reg_we_o", false,-1);
    tracep->declBus(c+73,"reg_wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg0 ");
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+4,"new_pc_i", false,-1, 31,0);
    tracep->declBus(c+51,"pc_o", false,-1, 31,0);
    tracep->declBit(c+52,"ce_o", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBit(c+72,"we_i", false,-1);
    tracep->declBus(c+71,"waddr_i", false,-1, 4,0);
    tracep->declBus(c+73,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+12,"re1_i", false,-1);
    tracep->declBus(c+10,"raddr1_i", false,-1, 4,0);
    tracep->declBit(c+13,"re2_i", false,-1);
    tracep->declBus(c+11,"raddr2_i", false,-1, 4,0);
    tracep->declBus(c+14,"rdata1_o", false,-1, 31,0);
    tracep->declBus(c+15,"rdata2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+137+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+181,"RAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+182,"RAM_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk_i", false,-1);
    tracep->declBit(c+170,"rst_i", false,-1);
    tracep->declBus(c+27,"addr_i", false,-1, 31,0);
    tracep->declBit(c+28,"we_i", false,-1);
    tracep->declBus(c+29,"data_i", false,-1, 31,0);
    tracep->declBus(c+30,"data_o", false,-1, 31,0);
    tracep->declBit(c+52,"inst_ce_i", false,-1);
    tracep->declBus(c+51,"pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"inst_o", false,-1, 31,0);
    tracep->declBus(c+49,"addr4", false,-1, 20,0);
    tracep->declBus(c+169,"rom_addr4", false,-1, 20,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_top\n"); );
    // Body
    Vtest_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("test_top ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__0(vlSelf, tracep);
    tracep->pushNamePrefix("data_ram0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_top___024root__trace_register(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtest_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtest_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_top_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h6e03a674__0;
    VlWide<3>/*95:0*/ __Vtemp_h210f4419__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
    bufp->fullBit(oldp+3,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
    bufp->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
    bufp->fullIData(oldp+6,((((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                               & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                              ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                              : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                   & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                                  & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))),32);
    bufp->fullIData(oldp+7,((((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                               & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                              ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                              : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                   & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                                  & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))),32);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
    bufp->fullCData(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
    bufp->fullIData(oldp+14,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    bufp->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__exe_mem_data_o),32);
    bufp->fullBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__exe_mem_we_o));
    bufp->fullCData(oldp+22,(vlSymsp->TOP__test_top.__PVT__exe_mem_op_o),4);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o));
    bufp->fullCData(oldp+24,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
    bufp->fullBit(oldp+25,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    bufp->fullIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
    bufp->fullBit(oldp+28,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
    bufp->fullIData(oldp+29,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__test_top__data_ram0.__PVT__data_o),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o),32);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_req_o));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_req_o));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__is_div_q_i));
    bufp->fullQData(oldp+36,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__invert_result),64);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__invert_result_div),32);
    bufp->fullBit(oldp+39,((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o)));
    bufp->fullBit(oldp+40,((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o)));
    bufp->fullCData(oldp+41,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__S))
                               ? ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_req_o)
                                   ? (((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o) 
                                       | (0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o))
                                       ? 3U : 1U) : 0U)
                               : ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__S))
                                   ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__cnt))
                                       ? 1U : 3U) : 0U))),3);
    bufp->fullBit(oldp+42,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o))))));
    bufp->fullBit(oldp+43,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o))))));
    bufp->fullCData(oldp+44,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S))
                               ? ((1U & ((~ (IData)(
                                                    (0U 
                                                     != vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o))) 
                                         | (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o)))))
                                   ? 3U : ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_ready_i)
                                            ? 0U : 1U))
                               : ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S))
                                   ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt))
                                       ? 1U : 3U) : 0U))),3);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
    bufp->fullIData(oldp+47,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                               : 0U)),32);
    bufp->fullIData(oldp+48,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                               : 0U)),32);
    bufp->fullIData(oldp+49,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),21);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
    bufp->fullIData(oldp+51,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__test_top.__PVT__ce_wire));
    bufp->fullIData(oldp+53,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
    bufp->fullBit(oldp+55,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                            & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xfU)) 
                                == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                               | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)) 
                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
    bufp->fullCData(oldp+57,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
    bufp->fullCData(oldp+61,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    bufp->fullIData(oldp+66,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
    bufp->fullCData(oldp+70,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
    bufp->fullIData(oldp+73,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
    bufp->fullCData(oldp+74,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
    bufp->fullCData(oldp+75,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+76,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_r));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_m));
    bufp->fullIData(oldp+79,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+80,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 7U))))),32);
    bufp->fullBit(oldp+81,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__op1_eq_op2));
    bufp->fullIData(oldp+82,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_result_i),32);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_ready_i));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_ready_i));
    bufp->fullQData(oldp+85,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_result_i),64);
    bufp->fullBit(oldp+87,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >> 0x1fU)));
    bufp->fullBit(oldp+88,((vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
                            >> 0x1fU)));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__signed_adjust));
    bufp->fullBit(oldp+90,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__cnt)))))));
    bufp->fullIData(oldp+91,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32),32);
    bufp->fullWData(oldp+92,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result),65);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__cnt),6);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[2U] 
                               << 0x1fU) | (vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                            >> 1U))),32);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__S),3);
    bufp->fullBit(oldp+99,((vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U] 
                            >= vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32)));
    bufp->fullQData(oldp+100,((0x1ffffffffULL & ((QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                 - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32))))),33);
    __Vtemp_h6e03a674__0[0U] = vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[0U];
    __Vtemp_h6e03a674__0[1U] = (IData)((0x1ffffffffULL 
                                        & ((QData)((IData)(
                                                           vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                           - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32)))));
    __Vtemp_h6e03a674__0[2U] = (IData)(((0x1ffffffffULL 
                                         & ((QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                            - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32)))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+102,(__Vtemp_h6e03a674__0),65);
    bufp->fullBit(oldp+105,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
    bufp->fullIData(oldp+106,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32),32);
    bufp->fullWData(oldp+107,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result),65);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt),6);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S),3);
    bufp->fullBit(oldp+112,((1U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[0U])));
    bufp->fullIData(oldp+113,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
    bufp->fullQData(oldp+114,((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                                 + (QData)((IData)(
                                                                   vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U]))))),33);
    __Vtemp_h210f4419__0[0U] = vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[0U];
    __Vtemp_h210f4419__0[1U] = (IData)((0x1ffffffffULL 
                                        & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                           + (QData)((IData)(
                                                             vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U])))));
    __Vtemp_h210f4419__0[2U] = (IData)(((0x1ffffffffULL 
                                         & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                            + (QData)((IData)(
                                                              vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+116,(__Vtemp_h210f4419__0),65);
    bufp->fullCData(oldp+119,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
    bufp->fullCData(oldp+120,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 7U))),5);
    bufp->fullCData(oldp+121,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU)
                                         : ((0x1000U 
                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                             ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU)
                                             : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))))),5);
    bufp->fullCData(oldp+122,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+123,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : 0U)),5);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
    bufp->fullIData(oldp+126,(((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                ? (((- (IData)((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))
                                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                    ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))
                                    : (((- (IData)(
                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0x14U))))),32);
    bufp->fullBit(oldp+127,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
    bufp->fullCData(oldp+128,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U) : 
                                        ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U)
                                          : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U))))),5);
    bufp->fullCData(oldp+129,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+130,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+131,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+132,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+133,((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+134,(((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                             & ((0U == (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0x19U)) 
                                | (0x20U == (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x19U))))));
    bufp->fullBit(oldp+135,((IData)((0x2000033U == 
                                     (0xfe00007fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
    bufp->fullCData(oldp+136,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    bufp->fullIData(oldp+169,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    bufp->fullBit(oldp+170,(vlSelf->rst_i));
    bufp->fullBit(oldp+171,(vlSelf->clk_i));
    bufp->fullBit(oldp+172,(vlSelf->halt_o));
    bufp->fullIData(oldp+173,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                    [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                    << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                  << 0x10U) 
                                                 | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                     << 8U) 
                                                    | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                : 0U)),32);
    bufp->fullIData(oldp+174,(0x20U),32);
    bufp->fullCData(oldp+175,(0U),3);
    bufp->fullCData(oldp+176,(1U),3);
    bufp->fullCData(oldp+177,(3U),3);
    bufp->fullCData(oldp+178,(0U),5);
    bufp->fullBit(oldp+179,(1U));
    bufp->fullBit(oldp+180,(0U));
    bufp->fullIData(oldp+181,(0x200000U),32);
    bufp->fullIData(oldp+182,(0x15U),32);
}
