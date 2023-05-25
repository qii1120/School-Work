`include "defines.v"

module id_exe(
    input wire rst_i,
    input wire clk_i,

    //from ctrl
    input wire[5:0] stall_i,
    input wire flush_jump_i,
    input wire flush_int_i,

    // from id
    input wire[`RDATA_WIDTH-1:0] op1_i,
    input wire[`RDATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,

    //to exe
    output reg[`RDATA_WIDTH-1:0] op1_o,
    output reg[`RDATA_WIDTH-1:0] op2_o,
    output reg reg_we_o,
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg[`DATA_WIDTH-1:0] inst_o,
    //to id
    output reg inst_is_load_o,
    output reg[`RADDR_WIDTH-1:0] rd_o,

    output reg[`ADDR_WIDTH-1:0] inst_addr_o,

    //signal for csr
    input wire csr_we_i,
    input wire[`CSR_ADDR_WIDTH-1:0] csr_addr_i,

    output reg csr_we_o,
    output reg[`CSR_ADDR_WIDTH-1:0] csr_addr_o,

    //for exception
    input wire[`DATA_WIDTH-1:0] exception_i,
    output reg[`DATA_WIDTH-1:0] exception_o
);


    //for exception
    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            exception_o <= `ZERO;
        end else if(flush_jump_i | flush_int_i) begin
            exception_o <= `ZERO;
        end else if(stall_i[2] == `STOP && stall_i[3] == `STOP) begin
            exception_o <= exception_o;
        end else if(stall_i[2] == `STOP && stall_i[3] == `NOSTOP) begin
            exception_o <= `ZERO;
        end else begin
            exception_o <= exception_i;
        end
    end

    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            csr_we_o <= `WRITE_DISABLE;
            csr_addr_o <= {12'b0};
        end else begin
            csr_we_o <= csr_we_i;
            csr_addr_o <= csr_addr_i;
        end 
    end 
    always @(posedge clk_i) begin
        if (rst_i == 1) begin
            inst_o   <=  `NOP;
            op1_o     <= `ZERO;
            op2_o     <= `ZERO;
            reg_we_o  <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
            inst_is_load_o <= 1'b0;
            rd_o <= `ZERO_REG;
            inst_addr_o <= `ZERO;
        end else if(stall_i[2] == `STOP && stall_i[3] == `STOP) begin
            inst_o   <=  inst_o;
            op1_o     <= op1_o;
            op2_o     <= op2_o;
            reg_we_o  <= reg_we_o;
            reg_waddr_o <= reg_waddr_o;
            inst_is_load_o <= inst_is_load_o;
            rd_o <= rd_o;
            inst_addr_o <= inst_addr_i;
        end else if(stall_i[2] == `STOP && stall_i[3] == `NOSTOP) begin
            inst_o   <=  `NOP;
            op1_o     <= `ZERO;
            op2_o     <= `ZERO;
            reg_we_o  <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
            inst_is_load_o <= 1'b0;
            rd_o <= `ZERO_REG;
            inst_addr_o <= `ZERO;
        end else if(flush_jump_i == 1'b1 || flush_int_i) begin
            inst_o   <=  `NOP;
            op1_o     <= `ZERO;
            op2_o     <= `ZERO;
            reg_we_o  <= `WRITE_DISABLE;
            reg_waddr_o <= `ZERO_REG;
            inst_is_load_o <= 1'b0;
            rd_o <= `ZERO_REG;
            inst_addr_o <= `ZERO;
        end else begin
            inst_o <= inst_i;
            op1_o <= op1_i;
            op2_o <= op2_i;
            reg_we_o <= reg_we_i;
            reg_waddr_o <= reg_waddr_i;
            inst_is_load_o <= (inst_i[6:0] == `INST_TYPE_L);
            rd_o <= inst_i[11:7];
            inst_addr_o <= inst_addr_i;
        end//if
    end //always
endmodule
