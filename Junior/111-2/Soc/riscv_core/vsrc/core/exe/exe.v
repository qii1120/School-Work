`include "defines.v"

module exe(
    input wire rst_i,
    input wire clk_i,
    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    //csr
    input wire csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0] csr_addr_i,

    //to csr_file signals
    input wire[`DATA_WIDTH-1:0] csr_rdata_i,
    output reg[`CSR_ADDR_WIDTH-1:0] csr_raddr_o,

    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    
    output reg[`ADDR_WIDTH-1:0] mem_addr_o,
    output reg[`DATA_WIDTH-1:0] mem_data_o,
    output reg mem_we_o,
    output reg[3:0] mem_op_o,

    output reg[`DATA_WIDTH-1:0] csr_wdata_o,
    output reg[`CSR_ADDR_WIDTH-1:0] csr_waddr_o,
    output reg csr_we_o,
    //to pipe_ctrl
    output reg stallreq_o,
    output reg[`ADDR_WIDTH-1:0] jump_addr_o,
    output reg jump_enable_o,

    //from mem
    //for csr data read forward
    input wire                          mem_csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0]     mem_csr_waddr_i,
    input wire[`DATA_WIDTH-1:0]         mem_csr_wdata_i
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];

    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000 || funct7 == 7'b0100000));
    wire isType_m;
    assign isType_m = (opcode == `INST_TYPE_R_M) && (funct7 == 7'b0000001);

    wire[`ADDR_WIDTH-1:0] load_addr_offset;
    wire[`ADDR_WIDTH-1:0] store_addr_offset;
    assign store_addr_offset = {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    assign load_addr_offset = {{20{inst_i[31]}}, inst_i[31:20]};

    wire op1_eq_op2;
    assign op1_eq_op2 = (op1_i == op2_i);

    wire[`ADDR_WIDTH-1:0] pc;
    assign pc = inst_addr_i;

    reg[`DATA_WIDTH-1:0] a_o, b_o, div_result_i;
    reg  mult_req_o, div_req_o, mult_ready_i, div_ready_i, is_div_q_i;
    reg[`DATA_WIDTH*2-1:0] mult_result_i;
    mul#(.XLEN(`DATA_WIDTH)) mul0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .req_i(mult_req_o),
        .a_i(a_o),
        .b_i(b_o),
        .ready_o(mult_ready_i),
        .result_o(mult_result_i)
    );

    div#(.XLEN(`DATA_WIDTH)) div0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .a_i(a_o),
        .b_i(b_o),
        .req_i(div_req_o),
        .is_q_i(is_div_q_i),
        .ready_o(div_ready_i),
        .result_o(div_result_i)
    );

    assign stallreq_o = (mult_req_o & ~mult_ready_i)|(div_req_o & ~div_ready_i);

    wire is_a_neg = op1_i[`DATA_WIDTH-1];
    wire is_b_neg = op2_i[`DATA_WIDTH-1];
    wire signed_adjust = is_a_neg ^ is_b_neg;
    reg[`DATA_WIDTH*2-1:0] invert_result;
    assign invert_result = (mult_req_o)? ~mult_result_i+1 : 64'b0;
    reg[`DATA_WIDTH-1:0] invert_result_div;
    assign invert_result_div = (div_req_o)? ~div_result_i+1 : 32'b0;

    reg[`DATA_WIDTH-1:0] csr_rdata;
    always @(*) begin
        if (csr_addr_i == mem_csr_waddr_i && mem_csr_we_i==`WRITE_ENABLE) begin
            csr_rdata = mem_csr_wdata_i;
        end else begin
            csr_rdata = csr_rdata_i;
        end
    end
    always @(*) begin
        if (rst_i == 1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
            mem_addr_o = `ZERO;
            mem_data_o = `ZERO;
            mem_we_o = `WRITE_DISABLE;
            mem_op_o = `MEM_NOP;
            stallreq_o = 1'b0;
            jump_addr_o = `ZERO;
            jump_enable_o = 1'b0;
            mult_req_o = 1'b0;
        end else begin
            reg_we_o = reg_we_i;
            mem_we_o = `WRITE_DISABLE;
            mem_op_o = `MEM_NOP;
            jump_enable_o = 1'b0;
            mult_req_o = 1'b0;
            is_div_q_i = 1'b0;
            div_req_o = 1'b0;
            csr_we_o = csr_we_i;
            case (opcode)
                `INST_TYPE_I:begin
                    case(funct3)
                        `INST_ORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                        end
                        `INST_ANDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                        end
                        `INST_XORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                        end
                        `INST_ADDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i + op2_i;
                        end
                        `INST_SLTI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = $signed(op1_i) < $signed(op2_i) ? `ONE : `ZERO;
                        end
                        `INST_SLTIU: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i < op2_i ? `ONE : `ZERO;
                        end
                        `INST_SLLI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i<<op2_i;
                        end
                        `INST_SRLAI: begin
                            reg_waddr_o = reg_waddr_i;
                            case (funct7)
                                `INST_SRLI: begin
                                    reg_wdata_o = op1_i>>op2_i;
                                end
                                `INST_SRAI: begin
                                    reg_wdata_o = $signed(op1_i)>>>op2_i;
                                end
                                default: begin
                                    reg_waddr_o = `ZERO_REG;
                                    reg_wdata_o = `ZERO;
                                    reg_we_o = `WRITE_DISABLE;
                                end
                            endcase
                        end
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                            reg_wdata_o = `ZERO;
                            reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
                end
                `INST_TYPE_R_M: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_we_o = `WRITE_ENABLE;
                    if(isType_r==1)begin
                        case(funct3)
                            `INST_OR: begin
                                reg_wdata_o = op1_i | op2_i;
                            end
                            `INST_AND: begin
                                reg_wdata_o = op1_i & op2_i;
                            end
                            `INST_XOR: begin
                                reg_wdata_o = op1_i ^ op2_i;
                            end
                            `INST_SLT: begin
                                reg_wdata_o = ($signed(op1_i) < $signed(op2_i)) ? `ONE : `ZERO;
                            end
                            `INST_SLTU: begin
                                reg_wdata_o = (op1_i < op2_i) ? `ONE : `ZERO;
                            end
                            `INST_SLL: begin
                                reg_wdata_o = op1_i << op2_i[4:0];
                            end
                            `INST_SRL_SRA: begin
                                case(funct7)
                                    `INST_SRL: begin
                                        reg_wdata_o = op1_i >> op2_i[4:0];
                                    end
                                    `INST_SRA: begin
                                        reg_wdata_o = $signed(op1_i)>>>op2_i[4:0];
                                    end
                                    default: begin
                                        reg_waddr_o = `ZERO_REG;
                                        reg_wdata_o = `ZERO;
                                        reg_we_o = `WRITE_DISABLE;
                                    end
                                endcase
                            end
                            `INST_ADD_SUB: begin
                                case(funct7)
                                    `INST_ADD: begin
                                        reg_wdata_o = op1_i + op2_i;
                                    end
                                    `INST_SUB: begin
                                        reg_wdata_o = op1_i - op2_i;
                                    end
                                    default: begin
                                        reg_wdata_o = `ZERO;
                                        reg_we_o = `WRITE_DISABLE;
                                    end
                                endcase
                            end
                            default: begin
                                reg_wdata_o = `ZERO;
                                reg_we_o = `WRITE_DISABLE;
                            end//default
                        endcase
                    end
                    else if(isType_m == 1) begin
                        a_o = `ZERO;
                        b_o = `ZERO;
                        case(funct3)
                            `INST_MUL: begin
                                a_o = op1_i;
                                b_o = op2_i;
                                mult_req_o = 1'b1;
                                reg_wdata_o =  mult_result_i[`DATA_WIDTH-1:0];
                            end
                            `INST_MULH: begin
                                a_o = (is_a_neg)? ~op1_i+1 : op1_i;
                                b_o = (is_b_neg)? ~op2_i+1 : op2_i;
                                mult_req_o = 1'b1;
                                reg_wdata_o = (signed_adjust)? invert_result[`DATA_WIDTH*2-1:`DATA_WIDTH] : mult_result_i[`DATA_WIDTH*2-1:`DATA_WIDTH];
                            end
                            `INST_MULHU: begin
                                a_o = op1_i;
                                b_o = op2_i;
                                mult_req_o = 1'b1;
                                reg_wdata_o = mult_result_i[`DATA_WIDTH*2-1:`DATA_WIDTH];
                            end
                            `INST_MULHSU: begin
                                a_o = (is_a_neg)? ~op1_i+1 : op1_i;
                                b_o = op2_i;
                                mult_req_o = 1'b1;
                                reg_wdata_o = (is_a_neg)? invert_result[`DATA_WIDTH*2-1:`DATA_WIDTH] : mult_result_i[`DATA_WIDTH*2-1:`DATA_WIDTH];
                            end
                            `INST_DIV: begin
                                a_o = (is_a_neg)? ~op1_i+1 : op1_i;
                                b_o = (is_b_neg)? ~op2_i+1 : op2_i;
                                div_req_o = 1'b1;
                                is_div_q_i = 1'b1;
                                reg_wdata_o = (signed_adjust && (op2_i != 32'b0))? invert_result_div : div_result_i;
                            end
                            `INST_DIVU: begin
                                a_o = op1_i;
                                b_o = op2_i;
                                div_req_o = 1'b1;
                                is_div_q_i = 1'b1;
                                reg_wdata_o = div_result_i;
                            end
                            `INST_REM: begin
                                a_o = (is_a_neg)? ~op1_i+1 : op1_i;
                                b_o = (is_b_neg)? ~op2_i+1 : op2_i;
                                div_req_o = 1'b1;
                                is_div_q_i = 1'b0;
                                reg_wdata_o = (is_a_neg)? invert_result_div : div_result_i;
                            end
                            `INST_REMU: begin
                                a_o = op1_i;
                                b_o = op2_i;
                                div_req_o = 1'b1;
                                is_div_q_i = 1'b0;
                                reg_wdata_o = div_result_i;
                            end
                            default: begin
                                reg_wdata_o = `ZERO;
                                reg_we_o = `WRITE_DISABLE;
                            end
                        endcase
                    end
                    else begin
                        reg_waddr_o = `ZERO_REG;
                        reg_wdata_o = `ZERO;
                        reg_we_o = `WRITE_DISABLE;
                    end
                end
                `INST_TYPE_LUI, `INST_TYPE_AUIPC:begin //type u
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = op1_i+op2_i;
                end
                `INST_TYPE_S: begin
                    reg_wdata_o = `ZERO;
                    reg_waddr_o = `ZERO_REG;
                    reg_we_o = `WRITE_DISABLE;
                    mem_addr_o = $signed(op1_i)+$signed(store_addr_offset);
                    mem_data_o = op2_i;
                    mem_we_o = `WRITE_ENABLE;
                    case (funct3)
                        `INST_SB:begin
                            mem_op_o = `SB;
                        end
                        `INST_SH:begin
                            mem_op_o = `SH;
                        end
                        `INST_SW:begin
                            mem_op_o = `SW;
                        end
                        default:begin
                            mem_op_o = `MEM_NOP;
                        end
                    endcase
                end
                `INST_TYPE_L:begin
                    reg_wdata_o = `ZERO;
                    reg_waddr_o = reg_waddr_i;
                    reg_we_o = `WRITE_ENABLE;
                    mem_addr_o = $signed(op1_i)+$signed(load_addr_offset);
                    mem_data_o = `ZERO;
                    mem_we_o = `WRITE_DISABLE;
                    case (funct3)
                        `INST_LB:begin
                            mem_op_o = `LB;
                        end
                        `INST_LH:begin
                            mem_op_o = `LH;
                        end
                        `INST_LW:begin
                            mem_op_o = `LW;
                        end
                        `INST_LBU:begin
                            mem_op_o = `LBU;
                        end
                        `INST_LHU:begin
                            mem_op_o = `LHU;
                        end
                        default:begin
                            mem_op_o = `MEM_NOP;
                        end
                    endcase
                end
                `INST_TYPE_B: begin
                    case(funct3)
                        `INST_BNE: begin
                            jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                            jump_enable_o = (~op1_eq_op2);
                        end
                        `INST_BEQ: begin
                            jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                            jump_enable_o = op1_eq_op2;
                        end
                        `INST_BLT: begin
                            jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                            jump_enable_o = $signed(op1_i) < $signed(op2_i) ? `ONE : `ZERO;
                        end
                        `INST_BGE: begin
                            jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                            jump_enable_o = $signed(op1_i) >= $signed(op2_i) ? `ONE : `ZERO;
                        end
                        `INST_BLTU: begin
                            jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                            jump_enable_o = op1_i < op2_i ? `ONE : `ZERO;
                        end
                        `INST_BGEU: begin
                            jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                            jump_enable_o = op1_i >= op2_i ? `ONE : `ZERO;
                        end
                        default: begin
                            jump_addr_o = `ZERO;
                            jump_enable_o = 1'b0;
                        end
                    endcase
                end
                `INST_TYPE_JAL: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = pc + 4;
                    jump_addr_o = pc + {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:25], inst_i[24:21], 1'b0};
                    jump_enable_o = 1'b1;
                end
                `INST_TYPE_JALR: begin
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = pc + 4;
                    jump_addr_o = op1_i + {{20{inst_i[31]}}, inst_i[31:20]};
                    jump_enable_o = 1'b1;
                end
                `INST_TYPE_SYSTEM: begin
                    case(funct3)
                        `INST_CSRRW, `INST_CSRRWI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = csr_rdata;
                            csr_raddr_o = csr_addr_i;
                            csr_waddr_o = csr_addr_i;
                            csr_wdata_o = op1_i;
                        end
                        `INST_CSRRS, `INST_CSRRSI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = csr_rdata;
                            csr_raddr_o = csr_addr_i;
                            csr_waddr_o = csr_addr_i;
                            csr_wdata_o = op1_i|csr_rdata;
                        end
                        `INST_CSRRC, `INST_CSRRCI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = csr_rdata;
                            csr_raddr_o = csr_addr_i;
                            csr_waddr_o = csr_addr_i;
                            csr_wdata_o = ~op1_i&csr_rdata;
                        end
                        default: begin
                            csr_wdata_o = `ZERO;
                            reg_wdata_o = `ZERO;
                        end
                    endcase
                end
                default:begin
                    reg_waddr_o = `ZERO_REG;
                    reg_wdata_o = `ZERO;
                    reg_we_o = `WRITE_DISABLE;
                    mem_addr_o = `ZERO;
                    mem_data_o = `ZERO;
                    mem_we_o = `WRITE_DISABLE;
                    mem_op_o = `MEM_NOP;
                    stallreq_o = 1'b0;
                    jump_addr_o = `ZERO;
                    jump_enable_o = 1'b0;
                end
            endcase
        end //if
    end //always
    
endmodule
