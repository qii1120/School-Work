module timer #(
    parameter DataWidth    = 32,
    parameter AddressWidth = 32
) (
    input wire              clk_i,
    input wire              rst_i,

    input wire[DataWidth:0]       data_i,
    // input wire[AddressWidth:0]    addr_i,
    input wire req_i,
    input wire we_i,

    output reg[DataWidth:0] data_o,
    output wire             halt_o
);

    reg[DataWidth:0] data;
    always @(*) begin
      if(we_i && req_i) begin
        data = data_i;
      end
    end
    always @(posedge clk_i)
    begin
      if (rst_i)
      begin
        data_o <= 0;
      end
      else
      begin
        data_o <= data_o + 1;
        if(data_o >= data) begin
          halt_o <= 1'b1;
        end
      end
    end
    always @(*)
    begin
      if(halt_o) begin
        data = 0;
      end
    end

endmodule
