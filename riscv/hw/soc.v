`include "hw/processor.v"
`include "hw/clockworks.v"

module soc(
    input        CLK,
    input        SW,
    output [7:0] LED
);

    wire [31:0] x1;
    wire        DIV_CLK;

    // output the x1 register to the LEDs so that we can see :-)
    assign LED = x1[7:0];
    
    processor CPU(
        .CLK(CLK),
        .reset(~SW),
        .x1(x1)
    );

    Clockworks #(
`ifndef BENCH
        .SLOW(21)
`endif
    ) div_clk (
        .CLK(CLK),
        .DIV_CLK(DIV_CLK)
    );
    
    initial begin
        //                  f7   rs2   rs1    f3   rd   opcode
        // add x1, x1, x2
        //                add      x2   x1   add   x1   alureg
        CPU.MEM[0] = 32'b0000000_00010_00001_000_00001_0110011;

        // add x1, x1, x2
        //                add      x2   x1   add   x1   alureg
        CPU.MEM[1] = 32'b0000000_00010_00001_000_00001_0110011;

        // add x1, x1, x2
        //                add      x2   x1   add   x1   alureg
        CPU.MEM[2] = 32'b0000000_00010_00001_000_00001_0110011;
    end
endmodule;
