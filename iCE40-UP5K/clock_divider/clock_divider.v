module ClockDivider(
    input wire clk_12MHz,
    output reg clk_1Hz
);

reg [23:0] counter;
wire toggle;

always @(posedge clk_12MHz) begin
    if (counter == 24'd5999999) // Divide by 12,000,000
        counter <= 0;
    else
        counter <= counter + 1'b1;
end

assign toggle = (counter == 24'd5999999);

always @(posedge toggle) begin
    clk_1Hz <= ~clk_1Hz;
end

endmodule