// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP_CORE_TOP_H_
#define VERILATED_VTEST_TOP_CORE_TOP_H_  // guard

#include "verilated.h"

class Vtest_top__Syms;
class Vtest_top_regfile;


class Vtest_top_core_top final : public VerilatedModule {
  public:
    // CELLS
    Vtest_top_regfile* regfile0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_OUT8(__PVT__rom_ce_o,0,0);
        VL_OUT8(__PVT__ram_ce_o,0,0);
        VL_OUT8(__PVT__ram_we_o,0,0);
        CData/*5:0*/ __PVT__ctrl_stall_o;
        CData/*0:0*/ __PVT__ce_wire;
        CData/*4:0*/ __PVT__id_reg1_addr_o;
        CData/*4:0*/ __PVT__id_reg2_addr_o;
        CData/*0:0*/ __PVT__id_reg1_re_o;
        CData/*0:0*/ __PVT__id_reg2_re_o;
        CData/*0:0*/ __PVT__id_reg_we_o;
        CData/*4:0*/ __PVT__id_reg_waddr_o;
        CData/*0:0*/ __PVT__id_csr_we_o;
        CData/*0:0*/ __PVT__id_exe_reg_we_o;
        CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
        CData/*0:0*/ __PVT__id_exe_inst_is_load_o;
        CData/*4:0*/ __PVT__id_exe_rd_o;
        CData/*0:0*/ __PVT__id_exe_csr_we_o;
        CData/*4:0*/ __PVT__exe_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_op_o;
        CData/*0:0*/ __PVT__exe_stallreq_o;
        CData/*0:0*/ __PVT__exe_jump_enable_o;
        CData/*0:0*/ __PVT__exe_csr_we_o;
        CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
        CData/*0:0*/ __PVT__exe_mem_reg_we_o;
        CData/*0:0*/ __PVT__exe_mem_mem_we_o;
        CData/*3:0*/ __PVT__exe_mem_mem_op_o;
        CData/*0:0*/ __PVT__exe_mem_csr_we_o;
        CData/*4:0*/ __PVT__mem_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_reg_we_o;
        CData/*0:0*/ __PVT__mem_mem_we_o;
        CData/*0:0*/ __PVT__mem_csr_we_o;
        CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
        CData/*0:0*/ __PVT__mem_wb_reg_we_o;
        CData/*0:0*/ __PVT__mem_wb_csr_we_o;
        CData/*0:0*/ __PVT__mem_wb_instret_incr_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg1_re_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg2_re_o;
        CData/*0:0*/ __PVT__id0__DOT__r_reg_we_o;
        CData/*0:0*/ id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
        CData/*0:0*/ __PVT__exe0__DOT__isType_r;
        CData/*0:0*/ __PVT__exe0__DOT__isType_m;
        CData/*0:0*/ __PVT__exe0__DOT__op1_eq_op2;
        CData/*0:0*/ __PVT__exe0__DOT__mult_req_o;
        CData/*0:0*/ __PVT__exe0__DOT__div_req_o;
        CData/*0:0*/ __PVT__exe0__DOT__mult_ready_i;
        CData/*0:0*/ __PVT__exe0__DOT__div_ready_i;
        CData/*0:0*/ __PVT__exe0__DOT__is_div_q_i;
        CData/*0:0*/ __PVT__exe0__DOT__signed_adjust;
        CData/*5:0*/ __PVT__exe0__DOT__mul0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__mul0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__mul0__DOT__S_nxt;
        CData/*0:0*/ __PVT__exe0__DOT__mul0__DOT__mul_add;
        CData/*5:0*/ __PVT__exe0__DOT__div0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__div0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__div0__DOT__S_next;
        CData/*0:0*/ __PVT__exe0__DOT__div0__DOT__div_sub;
        SData/*11:0*/ __PVT__id_csr_addr_o;
        SData/*11:0*/ __PVT__id_exe_csr_addr_o;
        SData/*11:0*/ __PVT__exe_csr_waddr_o;
        SData/*11:0*/ __PVT__exe_csr_raddr_o;
    };
    struct {
        SData/*11:0*/ __PVT__mem_wb_csr_waddr_o;
        VL_OUT(__PVT__rom_addr_o,31,0);
        VL_IN(__PVT__rom_data_i,31,0);
        VL_OUT(__PVT__ram_addr_o,31,0);
        VL_OUT(__PVT__ram_wdata_o,31,0);
        VL_IN(__PVT__ram_rdata_i,31,0);
        IData/*31:0*/ __PVT__pc_wire;
        IData/*31:0*/ __PVT__if_id_inst_addr_o;
        IData/*31:0*/ __PVT__if_id_inst_o;
        IData/*31:0*/ __PVT__id_inst_o;
        IData/*31:0*/ __PVT__id_exe_op1_o;
        IData/*31:0*/ __PVT__id_exe_op2_o;
        IData/*31:0*/ __PVT__id_exe_inst_o;
        IData/*31:0*/ __PVT__id_exe_inst_addr_o;
        IData/*31:0*/ __PVT__exe_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_data_o;
        IData/*31:0*/ __PVT__exe_jump_addr_o;
        IData/*31:0*/ __PVT__exe_csr_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
        IData/*31:0*/ __PVT__exe_mem_mem_addr_o;
        IData/*31:0*/ __PVT__exe_mem_mem_data_o;
        IData/*31:0*/ __PVT__exe_mem_csr_wdata_o;
        IData/*31:0*/ __Vcellout__exe_mem0__csr_waddr_o;
        IData/*31:0*/ __PVT__mem_reg_wdata_o;
        IData/*31:0*/ __PVT__mem_mem_addr_o;
        IData/*31:0*/ __PVT__mem_mem_data_o;
        IData/*31:0*/ __PVT__mem_csr_wdata_o;
        IData/*31:0*/ __Vcellout__mem0__csr_waddr_o;
        IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
        IData/*31:0*/ __PVT__mem_wb_csr_wdata_o;
        IData/*31:0*/ __PVT__csr_file_csr_rdata_o;
        IData/*31:0*/ __PVT__id0__DOT__op1_o_final;
        IData/*31:0*/ __PVT__id0__DOT__op2_o_final;
        IData/*31:0*/ __PVT__exe0__DOT__a_o;
        IData/*31:0*/ __PVT__exe0__DOT__b_o;
        IData/*31:0*/ __PVT__exe0__DOT__div_result_i;
        IData/*31:0*/ __PVT__exe0__DOT__invert_result_div;
        IData/*31:0*/ __PVT__exe0__DOT__csr_rdata;
        IData/*31:0*/ __PVT__exe0__DOT__mul0__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__mul0__DOT__result;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__mul0__DOT__result_tmp;
        IData/*31:0*/ __PVT__exe0__DOT__div0__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__div0__DOT__result;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__div0__DOT__result_tmp;
        IData/*31:0*/ __PVT__csr0__DOT__mstatus;
        IData/*31:0*/ __PVT__csr0__DOT__mie;
        IData/*31:0*/ __PVT__csr0__DOT__mtvec;
        IData/*31:0*/ __PVT__csr0__DOT__mscratch;
        IData/*31:0*/ __PVT__csr0__DOT__mepc;
        IData/*31:0*/ __PVT__csr0__DOT__mcause;
        IData/*31:0*/ __PVT__csr0__DOT__mip;
        IData/*31:0*/ __PVT__csr0__DOT__mtval;
        QData/*63:0*/ __PVT__exe0__DOT__mult_result_i;
        QData/*63:0*/ __PVT__exe0__DOT__invert_result;
        QData/*63:0*/ __PVT__csr0__DOT__mcycle;
        QData/*63:0*/ __PVT__csr0__DOT__minstret;
    };

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top_core_top(Vtest_top__Syms* symsp, const char* v__name);
    ~Vtest_top_core_top();
    VL_UNCOPYABLE(Vtest_top_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
