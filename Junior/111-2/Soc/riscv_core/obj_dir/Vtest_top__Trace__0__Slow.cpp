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
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+150,"halt_o", false,-1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+44,"halt_o", false,-1);
    tracep->declBus(c+2,"ctrl_stall_o", false,-1, 5,0);
    tracep->declBit(c+3,"ctrl_flush_jump_o", false,-1);
    tracep->declBus(c+4,"ctrl_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+45,"pc_wire", false,-1, 31,0);
    tracep->declBit(c+46,"ce_wire", false,-1);
    tracep->declBus(c+45,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+151,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+47,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+48,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+47,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_op2_o", false,-1, 31,0);
    tracep->declBit(c+8,"id_reg_we_o", false,-1);
    tracep->declBus(c+9,"id_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+10,"id_reg1_addr_o", false,-1, 4,0);
    tracep->declBus(c+11,"id_reg2_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"id_reg1_re_o", false,-1);
    tracep->declBit(c+13,"id_reg2_re_o", false,-1);
    tracep->declBit(c+49,"id_stallreq_o", false,-1);
    tracep->declBus(c+14,"reg1_data_o", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_data_o", false,-1, 31,0);
    tracep->declBit(c+50,"id_exe_inst_is_load_o", false,-1);
    tracep->declBus(c+51,"id_exe_rd_o", false,-1, 4,0);
    tracep->declBus(c+52,"id_exe_op1_o", false,-1, 31,0);
    tracep->declBus(c+53,"id_exe_op2_o", false,-1, 31,0);
    tracep->declBit(c+54,"id_exe_reg_we_o", false,-1);
    tracep->declBus(c+55,"id_exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+56,"id_exe_inst_o", false,-1, 31,0);
    tracep->declBus(c+57,"id_exe_inst_addr_o", false,-1, 31,0);
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
    tracep->declBus(c+58,"exe_mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+59,"exe_mem_reg_we_o", false,-1);
    tracep->declBus(c+60,"exe_mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+61,"exe_mem_mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+62,"exe_mem_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+63,"exe_mem_mem_we_o", false,-1);
    tracep->declBus(c+64,"exe_mem_mem_op_o", false,-1, 3,0);
    tracep->declBus(c+24,"mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"mem_reg_we_o", false,-1);
    tracep->declBus(c+26,"mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+27,"mem_ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+28,"mem_ram_w_request_o", false,-1);
    tracep->declBus(c+29,"mem_ram_data_o", false,-1, 31,0);
    tracep->declBit(c+44,"mem_halt_o", false,-1);
    tracep->declBus(c+30,"ram_data_o", false,-1, 31,0);
    tracep->declBus(c+65,"mem_wb_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+66,"mem_wb_reg_we_o", false,-1);
    tracep->declBus(c+67,"mem_wb_reg_wdata_o", false,-1, 31,0);
    tracep->pushNamePrefix("ctrl0 ");
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+49,"stallreq_from_id_i", false,-1);
    tracep->declBit(c+23,"stallreq_from_exe_i", false,-1);
    tracep->declBit(c+3,"jump_enable_i", false,-1);
    tracep->declBus(c+4,"jump_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"stall_o", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_o", false,-1);
    tracep->declBus(c+4,"new_pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe0 ");
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBus(c+52,"op1_i", false,-1, 31,0);
    tracep->declBus(c+53,"op2_i", false,-1, 31,0);
    tracep->declBit(c+54,"reg_we_i", false,-1);
    tracep->declBus(c+55,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+56,"inst_i", false,-1, 31,0);
    tracep->declBus(c+57,"inst_addr_i", false,-1, 31,0);
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
    tracep->declBus(c+68,"opcode", false,-1, 6,0);
    tracep->declBus(c+69,"funct3", false,-1, 2,0);
    tracep->declBus(c+70,"funct7", false,-1, 6,0);
    tracep->declBit(c+71,"isType_r", false,-1);
    tracep->declBit(c+72,"isType_m", false,-1);
    tracep->declBus(c+73,"load_addr_offset", false,-1, 31,0);
    tracep->declBus(c+74,"store_addr_offset", false,-1, 31,0);
    tracep->declBit(c+75,"op1_eq_op2", false,-1);
    tracep->declBus(c+57,"pc", false,-1, 31,0);
    tracep->declBus(c+31,"a_o", false,-1, 31,0);
    tracep->declBus(c+32,"b_o", false,-1, 31,0);
    tracep->declBit(c+33,"mult_req_o", false,-1);
    tracep->declBit(c+152,"div_req_o", false,-1);
    tracep->declBit(c+76,"mult_ready_i", false,-1);
    tracep->declBit(c+153,"div_ready_i", false,-1);
    tracep->declQuad(c+77,"mult_result_i", false,-1, 63,0);
    tracep->declQuad(c+154,"div_result_i", false,-1, 63,0);
    tracep->declBit(c+79,"is_a_neg", false,-1);
    tracep->declBit(c+80,"is_b_neg", false,-1);
    tracep->declBit(c+81,"signed_adjust", false,-1);
    tracep->declQuad(c+34,"invert_result", false,-1, 63,0);
    tracep->pushNamePrefix("mul0 ");
    tracep->declBus(c+156,"XLEN", false,-1, 31,0);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBus(c+31,"a_i", false,-1, 31,0);
    tracep->declBus(c+32,"b_i", false,-1, 31,0);
    tracep->declBit(c+33,"req_i", false,-1);
    tracep->declBit(c+76,"ready_o", false,-1);
    tracep->declQuad(c+77,"result_o", false,-1, 63,0);
    tracep->declBit(c+36,"is_a_zero", false,-1);
    tracep->declBit(c+37,"is_b_zero", false,-1);
    tracep->declBus(c+31,"op_a", false,-1, 31,0);
    tracep->declBus(c+32,"op_b", false,-1, 31,0);
    tracep->declBit(c+82,"is_calc_done", false,-1);
    tracep->declBus(c+83,"reg32", false,-1, 31,0);
    tracep->declArray(c+84,"result", false,-1, 64,0);
    tracep->declBus(c+87,"cnt", false,-1, 5,0);
    tracep->declBit(c+88,"is_ready", false,-1);
    tracep->declBus(c+157,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+158,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+159,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+89,"S", false,-1, 2,0);
    tracep->declBus(c+38,"S_nxt", false,-1, 2,0);
    tracep->declBit(c+90,"mul_add", false,-1);
    tracep->declBus(c+83,"adder_opa", false,-1, 31,0);
    tracep->declBus(c+91,"adder_opb", false,-1, 31,0);
    tracep->declQuad(c+92,"adder_tmp", false,-1, 32,0);
    tracep->declArray(c+94,"result_tmp", false,-1, 64,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exe_mem0 ");
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBus(c+16,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+17,"reg_we_i", false,-1);
    tracep->declBus(c+18,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+19,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+20,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+21,"mem_we_i", false,-1);
    tracep->declBus(c+22,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+58,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+59,"reg_we_o", false,-1);
    tracep->declBus(c+60,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+61,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+62,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+63,"mem_we_o", false,-1);
    tracep->declBus(c+64,"mem_op_o", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id0 ");
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBus(c+47,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+48,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+51,"exe_rd_i", false,-1, 4,0);
    tracep->declBit(c+50,"pre_inst_is_load_i", false,-1);
    tracep->declBit(c+49,"stallreq_o", false,-1);
    tracep->declBus(c+10,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+11,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+12,"reg1_re_o", false,-1);
    tracep->declBit(c+13,"reg2_re_o", false,-1);
    tracep->declBus(c+5,"inst_o", false,-1, 31,0);
    tracep->declBus(c+47,"inst_addr_o", false,-1, 31,0);
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
    tracep->declBus(c+39,"op1_o_final", false,-1, 31,0);
    tracep->declBus(c+40,"op2_o_final", false,-1, 31,0);
    tracep->declBus(c+97,"opcode", false,-1, 6,0);
    tracep->declBus(c+98,"rd", false,-1, 4,0);
    tracep->declBus(c+99,"i_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+100,"r_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+160,"i_reg2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+101,"r_reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+161,"i_reg1_re_o", false,-1);
    tracep->declBit(c+102,"r_reg1_re_o", false,-1);
    tracep->declBit(c+162,"i_reg2_re_o", false,-1);
    tracep->declBit(c+103,"r_reg2_re_o", false,-1);
    tracep->declBus(c+14,"i_op1_o", false,-1, 31,0);
    tracep->declBus(c+41,"r_op1_o", false,-1, 31,0);
    tracep->declBus(c+104,"i_op2_o", false,-1, 31,0);
    tracep->declBus(c+42,"r_op2_o", false,-1, 31,0);
    tracep->declBit(c+161,"i_reg_we_o", false,-1);
    tracep->declBit(c+105,"r_reg_we_o", false,-1);
    tracep->declBus(c+106,"i_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+107,"r_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+108,"rs1", false,-1, 4,0);
    tracep->declBus(c+109,"rs2", false,-1, 4,0);
    tracep->declBit(c+49,"is_load_hazard", false,-1);
    tracep->pushNamePrefix("inst_type_i ");
    tracep->declBus(c+48,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+99,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+160,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+161,"reg1_re_o", false,-1);
    tracep->declBit(c+162,"reg2_re_o", false,-1);
    tracep->declBus(c+14,"op1_o", false,-1, 31,0);
    tracep->declBus(c+104,"op2_o", false,-1, 31,0);
    tracep->declBit(c+161,"reg_we_o", false,-1);
    tracep->declBus(c+106,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+110,"funct3", false,-1, 2,0);
    tracep->declBus(c+98,"rd", false,-1, 4,0);
    tracep->declBus(c+108,"rs1", false,-1, 4,0);
    tracep->declBus(c+109,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_type_r ");
    tracep->declBus(c+48,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+100,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+101,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+102,"reg1_re_o", false,-1);
    tracep->declBit(c+103,"reg2_re_o", false,-1);
    tracep->declBus(c+41,"op1_o", false,-1, 31,0);
    tracep->declBus(c+42,"op2_o", false,-1, 31,0);
    tracep->declBit(c+105,"reg_we_o", false,-1);
    tracep->declBus(c+107,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+97,"opcode", false,-1, 6,0);
    tracep->declBus(c+110,"funct3", false,-1, 2,0);
    tracep->declBus(c+111,"funct7", false,-1, 6,0);
    tracep->declBus(c+109,"shamt", false,-1, 4,0);
    tracep->declBus(c+98,"rd", false,-1, 4,0);
    tracep->declBus(c+108,"rs1", false,-1, 4,0);
    tracep->declBus(c+109,"rs2", false,-1, 4,0);
    tracep->declBit(c+112,"isType_r", false,-1);
    tracep->declBit(c+113,"isType_m", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_exe0 ");
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+6,"op1_i", false,-1, 31,0);
    tracep->declBus(c+7,"op2_i", false,-1, 31,0);
    tracep->declBit(c+8,"reg_we_i", false,-1);
    tracep->declBus(c+9,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+5,"inst_i", false,-1, 31,0);
    tracep->declBus(c+47,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+52,"op1_o", false,-1, 31,0);
    tracep->declBus(c+53,"op2_o", false,-1, 31,0);
    tracep->declBit(c+54,"reg_we_o", false,-1);
    tracep->declBus(c+55,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+56,"inst_o", false,-1, 31,0);
    tracep->declBit(c+50,"inst_is_load_o", false,-1);
    tracep->declBus(c+51,"rd_o", false,-1, 4,0);
    tracep->declBus(c+57,"inst_addr_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id0 ");
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+45,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+151,"inst_i", false,-1, 31,0);
    tracep->declBus(c+47,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+48,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem0 ");
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBus(c+58,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+59,"reg_we_i", false,-1);
    tracep->declBus(c+60,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+30,"ram_data_i", false,-1, 31,0);
    tracep->declBit(c+63,"mem_we_i", false,-1);
    tracep->declBus(c+61,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+62,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+64,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+27,"ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+28,"ram_w_request_o", false,-1);
    tracep->declBus(c+29,"ram_data_o", false,-1, 31,0);
    tracep->declBus(c+24,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"reg_we_o", false,-1);
    tracep->declBus(c+26,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+44,"halt_o", false,-1);
    tracep->declBus(c+114,"ram_addr_offset", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb0 ");
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBus(c+24,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+25,"reg_we_i", false,-1);
    tracep->declBus(c+26,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+65,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+66,"reg_we_o", false,-1);
    tracep->declBus(c+67,"reg_wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg0 ");
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+4,"new_pc_i", false,-1, 31,0);
    tracep->declBus(c+45,"pc_o", false,-1, 31,0);
    tracep->declBit(c+46,"ce_o", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBit(c+66,"we_i", false,-1);
    tracep->declBus(c+65,"waddr_i", false,-1, 4,0);
    tracep->declBus(c+67,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+12,"re1_i", false,-1);
    tracep->declBus(c+10,"raddr1_i", false,-1, 4,0);
    tracep->declBit(c+13,"re2_i", false,-1);
    tracep->declBus(c+11,"raddr2_i", false,-1, 4,0);
    tracep->declBus(c+14,"rdata1_o", false,-1, 31,0);
    tracep->declBus(c+15,"rdata2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+115+i*1,"regs", true,(i+0), 31,0);
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
    tracep->declBus(c+163,"RAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+164,"RAM_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk_i", false,-1);
    tracep->declBit(c+148,"rst_i", false,-1);
    tracep->declBus(c+27,"addr_i", false,-1, 31,0);
    tracep->declBit(c+28,"we_i", false,-1);
    tracep->declBus(c+29,"data_i", false,-1, 31,0);
    tracep->declBus(c+30,"data_o", false,-1, 31,0);
    tracep->declBit(c+46,"inst_ce_i", false,-1);
    tracep->declBus(c+45,"pc_i", false,-1, 31,0);
    tracep->declBus(c+151,"inst_o", false,-1, 31,0);
    tracep->declBus(c+43,"addr4", false,-1, 20,0);
    tracep->declBus(c+147,"rom_addr4", false,-1, 20,0);
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
    bufp->fullQData(oldp+34,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__invert_result),64);
    bufp->fullBit(oldp+36,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o))))));
    bufp->fullBit(oldp+37,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o))))));
    bufp->fullCData(oldp+38,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S))
                               ? ((1U & ((~ (IData)(
                                                    (0U 
                                                     != vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o))) 
                                         | (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o)))))
                                   ? 3U : ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__is_ready)
                                            ? 0U : 1U))
                               : ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S))
                                   ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt))
                                       ? 1U : 3U) : 0U))),3);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
    bufp->fullIData(oldp+41,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                               : 0U)),32);
    bufp->fullIData(oldp+42,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                               : 0U)),32);
    bufp->fullIData(oldp+43,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),21);
    bufp->fullBit(oldp+44,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
    bufp->fullIData(oldp+45,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__test_top.__PVT__ce_wire));
    bufp->fullIData(oldp+47,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
    bufp->fullBit(oldp+49,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                            & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xfU)) 
                                == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                               | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)) 
                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
    bufp->fullCData(oldp+51,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
    bufp->fullCData(oldp+55,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
    bufp->fullBit(oldp+59,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    bufp->fullIData(oldp+60,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
    bufp->fullCData(oldp+64,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
    bufp->fullBit(oldp+66,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
    bufp->fullIData(oldp+67,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
    bufp->fullCData(oldp+68,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
    bufp->fullCData(oldp+69,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+70,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_r));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_m));
    bufp->fullIData(oldp+73,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+74,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 7U))))),32);
    bufp->fullBit(oldp+75,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__op1_eq_op2));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_ready_i));
    bufp->fullQData(oldp+77,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_result_i),64);
    bufp->fullBit(oldp+79,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            >> 0x1fU)));
    bufp->fullBit(oldp+80,((vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
                            >> 0x1fU)));
    bufp->fullBit(oldp+81,(((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                             ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+82,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
    bufp->fullIData(oldp+83,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32),32);
    bufp->fullWData(oldp+84,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result),65);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt),6);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__is_ready));
    bufp->fullCData(oldp+89,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S),3);
    bufp->fullBit(oldp+90,((1U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[0U])));
    bufp->fullIData(oldp+91,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
    bufp->fullQData(oldp+92,((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
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
    bufp->fullWData(oldp+94,(__Vtemp_h210f4419__0),65);
    bufp->fullCData(oldp+97,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
    bufp->fullCData(oldp+98,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 7U))),5);
    bufp->fullCData(oldp+99,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                        ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xfU)
                                        : ((0x1000U 
                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU)
                                            : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU))))),5);
    bufp->fullCData(oldp+100,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+101,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : 0U)),5);
    bufp->fullBit(oldp+102,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
    bufp->fullIData(oldp+104,(((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
    bufp->fullBit(oldp+105,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
    bufp->fullCData(oldp+106,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U) : 
                                        ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U)
                                          : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U))))),5);
    bufp->fullCData(oldp+107,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+108,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+109,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+110,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+111,((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+112,(((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                             & ((0U == (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0x19U)) 
                                | (0x20U == (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x19U))))));
    bufp->fullBit(oldp+113,((IData)((0x2000033U == 
                                     (0xfe00007fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
    bufp->fullCData(oldp+114,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    bufp->fullIData(oldp+147,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    bufp->fullBit(oldp+148,(vlSelf->rst_i));
    bufp->fullBit(oldp+149,(vlSelf->clk_i));
    bufp->fullBit(oldp+150,(vlSelf->halt_o));
    bufp->fullIData(oldp+151,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
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
    bufp->fullBit(oldp+152,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_req_o));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_ready_i));
    bufp->fullQData(oldp+154,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_result_i),64);
    bufp->fullIData(oldp+156,(0x20U),32);
    bufp->fullCData(oldp+157,(0U),3);
    bufp->fullCData(oldp+158,(1U),3);
    bufp->fullCData(oldp+159,(3U),3);
    bufp->fullCData(oldp+160,(0U),5);
    bufp->fullBit(oldp+161,(1U));
    bufp->fullBit(oldp+162,(0U));
    bufp->fullIData(oldp+163,(0x200000U),32);
    bufp->fullIData(oldp+164,(0x15U),32);
}
