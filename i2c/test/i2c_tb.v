`default_nettype none
`include "include/i2c.vh"
`timescale 1ns/100ps
    
module i2c_tb();
    reg        clk;
    reg        reset;
    reg        write;
    reg [15:0] clock_divisor = 16'd05;
    reg  [7:0] data_in;
    reg  [2:0] cmd;
    
    wire       ready;
    wire [7:0] data_out;
    wire       ack;
    wire       done_tick;

    wire       SDA;
    wire       SCL;

    reg        sda_tb;
    reg        drive_sda;
    reg  [7:0] test_data;
    reg        test_ack;

    pullup(SDA);
    pullup(SCL);

    assign SDA = (drive_sda) ? sda_tb : 1'bz;

    i2c i2c1 (
        .clk( clk ), 
        .reset(reset),
        .write(write),
        .clock_divisor(clock_divisor),
        .data_in(data_in),
        .cmd(cmd),

        .ready(ready),
        .data_out(data_out),
        .ack(ack),
        .done_tick(done_tick),
        
        .SDA(SDA),
        .SCL(SCL)
    );


    // run the clock
    initial begin
        clk = 0;
        
        forever begin
            #1 clk = ~clk;
        end
    end

    initial begin
        $dumpfile("i2c.vcd");
        $dumpvars(0);

        drive_sda = 1'b0;
        
        // reset the I2C master

        reset = 1'b0;
        #10;
        reset = 1'b1;
        #10;
        reset = 1'b0;
        #10;

        /******************
         * Test data write 
         ******************/

        // check that the block is asserting ready

        if(ready != 1'b1) $error("Ready should be 1'b1.");

        data_in = 8'($random());
        cmd = k_START_CMD;
        write = 1'b0;
        #5;
        write = 1'b1;
        #5;
        write = 1'b0;

        wait(~SDA || ~SCL);

        if(SCL == 1'b0) $error("SCL is low - Start condition not encountered");

        wait(ready);

        data_in = 8'($random());
        cmd = k_WRITE_CMD;
        write = 1'b0;
        #5;
        write = 1'b1;
        #5;
        write = 1'b0;

        read_and_ack();
        wait(done_tick);
        if(test_data !== data_in) $error("Did not receive the sent byteo of %b, receieved %b instead", data_in, test_data);
        if(ack !== 1'b0) $error("Master failed to read the acknowledgement sent by the slave.");
               

        #10;
        cmd = k_STOP_CMD;
        #5;
        write = 1'b0;
        #5;
        write = 1'b1;
        #5;
        write = 1'b0;

        /****************
        * Test data read 
        *****************/

        wait(ready);

        test_data = 8'd69;
        cmd = k_START_CMD;
        write = 1'b0;
        #5;
        write = 1'b1;
        #5;
        write = 1'b0;

        wait(~SDA || ~SCL);

        if(SCL == 1'b0) $error("SCL is low - Start condition not encountered");

        wait(ready);

        cmd = k_READ_CMD;
        write = 1'b0;
        #5;
        write = 1'b1;
        #5;
        write = 1'b0;

        $display("%b", test_data);
        write_and_read_ack();
        $display("%b", test_data);
        
        wait(done_tick);
        if(data_out !== test_data) $error("Did not receive the sent byteo of %b, receieved %b instead", test_data, data_out);
        if(test_ack !== 1'b0) $error("Salve erroneously refeieve ack which was never sent by the master.");

        #100;
        $finish(1);
    end

    task read_and_ack();
        integer ii;
        for (ii = 7; ii >= 0; ii = ii - 1) begin
            wait(SCL);
            test_data[ii] = SDA;
            wait(~SCL);
        end
        drive_sda = 1'b1;
        sda_tb = 1'b0;
        wait(SCL);
        wait(~SCL);
        drive_sda = 1'b0;
    endtask

    task write_and_read_ack();
        integer ii;
        drive_sda = 1'b1;
        $display("%b", test_data);
        for (ii = 7; ii >= 0; ii = ii - 1) begin
            wait(~SCL);
            #5;
            sda_tb = test_data[ii];
            $display(test_data[ii]);
            wait(SCL);
        end
        wait(~SCL);
        drive_sda = 1'b0;
        wait(SCL);
        test_ack = SDA; 
        $display("%b",test_data);
    endtask

endmodule


`default_nettype wire
