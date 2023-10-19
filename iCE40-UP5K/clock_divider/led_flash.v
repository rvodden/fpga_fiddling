module led_flash(
    input clk,
    output led_blue,
    output led_green,
    output led_red
);

wire slow_clock;
reg [2:0] output_bus = 2'b0;

assign led_blue = output_bus[0];
assign led_green = output_bus[1];
assign led_red = output_bus[2];

ClockDivider cd (
    .clk_12MHz(clk),
    .clk_1Hz(slow_clock)
);

always @(posedge slow_clock) begin
    output_bus = output_bus + 1;
end

endmodule