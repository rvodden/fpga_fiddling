`default_nettype none
`timescale 1ns/1ps
`include "hw/i2c_m.v"
`include "test/clock_gen.v"

module i2c_m_tb();

    wire CLK;
    wire SDA;
    /* verilator lint_off SYNCASYNCNET */
    wire SCL;
    /* verilator lint_on SYNCASYNCNET */

    reg SW0;

    reg  enable;
    integer i = 0;
   
    pullup(SDA);
    pullup(SCL);

    reg drive_sda = 1'b0;
    reg sda_out   = 1'b0;

    assign SDA = drive_sda ? sda_out : 1'bZ;

    i2c_m i2c_m1 (
        .CLK(CLK),
        .SDA(SDA),
        .SCL(SCL),
        .SW0(SW0)
    );

    reg start_condition = 1'b0;
    /* verilator lint_off UNUSEDSIGNAL */
    reg stop_condition = 1'b0;
    /* verilator lint_on UNUSEDSIGNAL */

    always @(SDA) begin
        $display("SDA: %b, at %g", SDA, $realtime);
        if(SCL & SDA) begin // rising edge so stop condition
            start_condition <= 1'b0;
            stop_condition  <= 1'b1;
            $display("DEBUG i2c_slave; stop condition detected at %0t", $realtime);
        end else if (SCL & ~SDA) begin// falling edge so start condition
            stop_condition  <= 1'b0;
            start_condition <= 1'b1;
            $display("DEBUG i2c_slave; start condition detected at %0t", $realtime);
        end
    end
        
    reg [7:0] test_data;
    always @(posedge(SCL)) begin
        if(start_condition) begin
            if (i < 8) begin
                /* verilator lint_off SYNCASYNCNET */
                test_data[7 - i] <= SDA;
                /* verilator lint_on SYNCASYNCNET */
                i <= i + 1;
            end
            if (i == 7) begin
                wait(~SCL);
                drive_sda <= 1'b1;
                sda_out   <= 1'b0;
                wait(SCL);
                wait(~SCL);
                drive_sda <= 1'b0;
            end
        end
    end

    integer j;
    initial begin
        $dumpfile("i2c.vcd");
        $dumpvars(0);
        #500;
        #50
        enable = 1'b0;
        #50
        SW0    = 1'b0;
        enable = 1'b1;
        #50
        SW0    = 1'b1;

        wait(i == 8);

        $display("Received address is %h. r/w: %b", test_data[7:1], test_data[0]);

        for(j = 0; j < 3; j = j + 1) begin
            wait(stop_condition);
            stop_condition = 0;
        end
        #50000
        
        $finish();
    end

    clock_gen #(
        .FREQ(10000)
    ) cg (
        .enable(enable),
        .clk(CLK)
    );
endmodule
