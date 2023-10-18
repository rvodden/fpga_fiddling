// define timescale for simulation
`timescale 1 ns / 10 ps
`include "assert.v"

module add_gate_tb();

    reg [1:0] in = 3;
    wire [2:0] out;

    localparam DURATION = 100;

    and_gate uut (
        .pmod(in),
        .led(out)
    );

    initial begin
      #10
      in[1] = 0;
      `assert(out, 0);
      #10
      in[1] = 1;
      #10
      in[0] = 0;
      #10
      in[0] = 1;
      #10
      in[0] = 0;
      in[1] = 0;
      #10
      in[0] = 1;
      in[1] = 1;
    end

    initial begin
        $dumpfile("and_gate_tb.vcd");
        $dumpvars(0, add_gate_tb);
        #(DURATION)
        $display("Finished.");
        $finish;
    end

endmodule

