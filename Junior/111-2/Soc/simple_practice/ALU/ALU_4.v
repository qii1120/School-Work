module ALU_4 (input [3:0]a, input [3:0] b, input c_in, input [1:0]sel, output [3:0]result, output c_out);
    wire out_0, out_1, out_2;
    ALU_1 op1(a[0], b[0], c_in, sel, result[0], out_0);
    ALU_1 op2(a[1], b[1], out_0, sel, result[1], out_1);
    ALU_1 op3(a[2], b[2], out_1, sel, result[2], out_2);
    ALU_1 op4(a[3], b[3], out_2, sel, result[3], c_out);
endmodule