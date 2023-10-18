// define timescale for simulation
`timescale 1 ns / 10 ps
`include "assert.v"

module full_adder_tb();

    reg a = 0;
    reg b = 0;
    reg c = 0;

    wire s;
    wire c_out;
    
    localparam DURATION = 200;

    full_adder uut (
        .a(a),
        .b(b),
        .c(c),
        .s(s),
        .c_out(c_out)
    );

    initial begin
        // 0 0 0
        a = 0;
        b = 0;
        c = 0;
        #10
        `assert(s, 0);
        `assert(c_out, 0);
        #10

        // 0 0 1
        a = 0;
        b = 0;
        c = 1;
        #10
        `assert(s, 1);
        `assert(c_out, 0);
        #10

        // 0 1 0
        a = 0;
        b = 1;
        c = 0;
        #10
        `assert(s, 1);
        `assert(c_out, 0);
        #10
        
        // 1 0 0
        a = 1;
        b = 0;
        c = 0;
        #10
        `assert(s, 1);
        `assert(c_out, 0);
        #10

        // 0 1 1
        a = 0;
        b = 1;
        c = 1;
        #10
        `assert(s, 0);
        `assert(c_out, 1);
        #10

        // 1 0 1
        a = 1;
        b = 0;
        c = 1;
        #10
        `assert(s, 0);
        `assert(c_out, 1);
        #10

        // 1 1 0
        a = 1;
        b = 1;
        c = 0;
        #10
        `assert(s, 0);
        `assert(c_out, 1);
        #10

        // 1 1 1
        a = 1;
        b = 1;
        c = 1;
        #10
        `assert(s, 1);
        `assert(c_out, 1);

    end

    initial begin
        $dumpfile("full_adder_tb.vcd");
        $dumpvars(0, full_adder_tb);
        #(DURATION)
        $display("Finished.");
        $finish;
    end

endmodule

