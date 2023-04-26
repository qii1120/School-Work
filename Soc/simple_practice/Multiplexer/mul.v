module mul#(parameter XLEN = 32)
(
    input wire              clk_i,
    input wire              rst_i,
    input wire[XLEN-1 : 0]  a_i, //被乘數
    input wire[XLEN-1 : 0]  b_i, //乘數
    input wire              req_i,
    output reg             ready_o,
    output reg[XLEN-1 : 0]  result_o
);


wire is_a_zero, is_b_zero;

assign is_a_zero = ~(|a_i); //~| nor
assign is_b_zero = ~(|b_i);

wire [XLEN-1 : 0] op_a, op_b;

assign op_a = a_i;
assign op_b = b_i;

wire              is_calc_done;
reg  [XLEN-1 : 0] reg32;
reg  [XLEN*2 : 0] result;       // 65-bit, 1 extra bit
reg  [ 5 : 0]     cnt;

// For the slow shift-add binary multiplier.
assign is_calc_done = ~|cnt;

// wire [XLEN-1 : 0] mull, mulh;

// assign mull = result[31 : 0];
// assign mulh = result[63 : 32];

// ================================================================================
// Finite State Machine
//
localparam           S_IDLE        = 3'b000;
localparam           S_CALC        = 3'b001;
localparam           S_DONE        = 3'b011;
reg [2 : 0] S, S_nxt;

always @(posedge clk_i)
begin
    if (rst_i | ~req_i)
        S <= S_IDLE;
    else
        S <= S_nxt;
end

always @(*)
begin
    case (S)
        S_IDLE:
            S_nxt = (is_a_zero | is_b_zero)? S_DONE : S_CALC;
        S_CALC:
            S_nxt = (is_calc_done)? S_DONE : S_CALC;
        S_DONE:
            S_nxt = S_IDLE;
        default:
            S_nxt = S_IDLE;
    endcase
end

// ================================================================================
// Computation
//
wire mul_add = result[0];

wire [32 : 0] adder_opa, adder_opb;
assign adder_opa = { 1'b0, reg32};
assign adder_opb = { 1'b0, result[63: 32]};

wire [32 : 0] adder_tmp = adder_opa + adder_opb;
wire [63 : 0] result_tmp = {adder_tmp, result[31: 1]};

always @(posedge clk_i)
begin
    if (S == S_IDLE && req_i==1'b1)
    begin
      if (is_a_zero | is_b_zero)
      begin
          result <= 65'b0;
      end
      else
      begin
          cnt <= 'd31;
          reg32 <= op_a;
          result <= {1'b0, 32'b0, op_b};  // ext_bit | product
      end
    end
    else if (S == S_CALC)
    begin
        cnt <= cnt - 'd1;
        // slow multiplier: shift right
        result <= (mul_add)? {1'b0, result_tmp[63 : 0]} : {1'b0, result[64 : 1]};
    end
    // else if (S == S_SIGN_ADJUST)
    //         result <= (signed_adjust)? -result : result;
end

// ================================================================================
// Output signals
//
always @(posedge clk_i)
begin
    if (S == S_DONE) begin
        result_o <=  result[31:0];
        ready_o <= 1'b1;
    end else begin
        result_o <= result_o;
        ready_o <= 1'b0;
    end
end

endmodule
