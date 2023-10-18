module counter(
    input   clk,
    input   rst,
    output  reg [7:0] value
)

always @ (posedge clk or posedge rst) begin
    if (rst == 1'b1) begin
        value <= 8'b0;        
    end else begin
        value <= value + 1'b1;
    end
end

endmodule