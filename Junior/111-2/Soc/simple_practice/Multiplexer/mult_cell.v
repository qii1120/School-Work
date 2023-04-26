module    mult_cell#(parameter XLEN=32)(
    //pipe line ctrl signal input from top module
    input wire            clk_i,
    input wire            rst_i,
    input wire            flush_i,
    // enable signal and datas from last stage
    input wire            en_i,
    input wire[XLEN-1:0]  a_i,      //被乘數
    input wire[XLEN-1:0]  b_i,      //乘數
    input wire[XLEN*2:0]  acc_i, //上次累加結果
    //output to next stage 
    output reg [XLEN-1:0]    a_o,     //被乘數移位後保存值
    output reg [XLEN-1:0]    b_o, //乘數移位後保存值
    output reg [XLEN*2:0]    acc_o,  //當前累加結果
    output reg               ready_o 
);

    always @(posedge clk_i) begin
        if (rst_i) begin
            ready_o  <= 'b0 ;
            a_o      <= 'b0 ;
            b_o      <= 'b0 ;
            acc_o    <= 'b0 ;
        end 
        else if (flush_i) begin
            ready_o  <= 'b0 ;
            a_o      <= 'b0 ;
            b_o      <= 'b0 ;
            acc_o    <= 'b0 ;
        end
        else if (en_i) begin
            ready_o            <= 1'b1 ;
            a_o                <= a_i << 1 ;
            b_o                <= b_i >> 1 ;
            if (b_i[0]) begin
                acc_o  <= acc_i + {33'b0,a_i} ;
            end
            else begin
                acc_o  <= acc_i ;
            end
        end
        else begin
            ready_o     <= 'b0 ;
            a_o         <= 'b0 ;
            b_o         <= 'b0 ;
            acc_o       <= 'b0 ;
        end
    end
endmodule
