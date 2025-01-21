`default_nettype none
`timescale 1ps/1ps
`include "include/test.vh"
    
module test_tb();
    reg        clk;
    reg        reset;
    reg        write;
    reg        cmd;
    
    reg        led;

    test test1 (
        .clk( clk ), 
        .reset(reset),
        .write(write),
        .cmd(cmd),

        .led(led)
    );


    // run the clock
    initial begin
        clk = 0;
        
        forever begin
            #1 clk <= ~clk;
        end
    end

    initial begin
        $dumpfile("test.vcd");
        $dumpvars(0);
        
        // reset the I2C master

        reset <= 1'b0;
        #10;
        reset <= 1'b1;
        #10;
        reset <= 1'b0;
        #10;

        // check that the block is asserting ready
        if(led !== 1'bZ) $error("LED should be high impedance on reset instead it is: %d", led);

        cmd <= k_START_CMD;
        #1
        write <= 1'b1;
        #10
        write <= 1'b0;

        if(led !== 1'b1) $error("LED should be on! its actually: %d", led);

        $finish(1);
    end

endmodule

`default_nettype wire
