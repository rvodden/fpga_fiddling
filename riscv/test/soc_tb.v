`default_nettype none
`timescale 1ns/1ns
`include "hw/soc.v"

module soc_tb();

    reg CLK;
    reg SW = 1'b1;
    wire [7:0] LED;

    soc SOC(
        .LED(LED),
        .CLK(CLK),
        .SW(SW)
    );

    integer i;
    initial begin
        $dumpfile("processor.vcd");
        $dumpvars();
        for(i = 0; i <= 31; i = i + 1) begin
            SOC.CPU.register_bank[i] = 0;
        end
        SOC.CPU.register_bank[2] = 32'd1;
    end
   
    initial begin
        CLK = 0;
        forever begin
        #5 CLK = ~CLK;
        end
    end 

endmodule;
