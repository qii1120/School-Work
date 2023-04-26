module ALU_1 (input a, input b, input c_in, input [1:0]sel, output result, c_out);
    wire out_0, out_1, out_2;
    assign out_0 = a & b;
    assign out_1 = a | b;
    fulladder add(a, b, c_in, out_2, c_out);
    mux_case mux(out_0, out_1, out_2, sel, result);
endmodule
