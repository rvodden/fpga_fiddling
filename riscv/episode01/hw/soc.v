`include "hw/processor.v"
`include "hw/memory.v"
`include "hw/clockworks.v"

module soc(
    input         CLK,
    input  [2:0]  SW,
    output [7:0]  LED
);

    reg  [31:0] x1;
    wire        DIV_CLK;

    wire [31:0] memory_address;
    wire [31:0] memory_read_data;
    wire        memory_read_strobe;

    // output the x1 register to the LEDs so that we can see :-)
    assign LED[7:0] = x1[7:0];
    
    memory RAM(
        .CLK(DIV_CLK),
        .memory_address(memory_address),   
        .memory_read_data(memory_read_data), 
        .memory_read_strobe(memory_read_strobe)
    );

    processor CPU(
        .CLK(DIV_CLK),
        .reset(~SW[0]),
        .x1(x1),
        .memory_address(memory_address),   
        .memory_read_data(memory_read_data), 
        .memory_read_strobe(memory_read_strobe)
    );

    clockworks #(
`ifndef BENCH
        .SLOW(21)
`endif
    ) div_clk (
        .CLK(CLK),
        .DIV_CLK(DIV_CLK)
    );
    
endmodule
