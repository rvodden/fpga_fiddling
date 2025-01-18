`include "include/i2c.vh"

module next_hold_tb;
    reg        write;
    reg  [2:0] cmd;
    reg  [7:0] data_in;
    reg        nack;

    reg        ready_out;
    reg        sda_out;
    reg        scl_out;
    reg        bin_next;
    reg        tx_next;
    reg  [2:0] cmd_next;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;
        
    // DUT
    always @(*)
        next_hold(
            write,
            cmd,
            data_in,
            nack,
            ready_out,
            sda_out,
            scl_out,
            bin_next,
            tx_next,
            cmd_next,
            state_next,
            ctr_next
        );

    initial begin
        when_were_given_a_command("k_RESTART_CMD", k_RESTART_CMD);
        #1;
        then_ready_out_should_be(1'b1);
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        #1;

        $finish(1);
    end

    task when_were_given_a_command(
        input [8*13:0] commandName,
        input    [3:0] commandValue
    );
        $display("When we're given a %s command", commandName);
        cmd <= commandValue;
        write <= 1'b1;
    endtask

    task then_ready_out_should_be(
        input [15:0] value
    );
        $write("THen ready_out should be %d...", value );
        if( ready_out === value ) $display(" success.");
        else $error("ready_out is not %b but %b", value, ctr_next);
    endtask
    
    task then_ctr_next_should_be(
        input [15:0] value
    );
        $write("THen ctr_next should be %d...", value );
        if( ctr_next === value ) $display(" success.");
        else $error("ctr_next is not %b but %b", value, ctr_next);
    endtask
    
    task then_sda_out_should_be(
        input value
    );
        $write("THen sda_out should be %d...", value );
        if( sda_out === value ) $display(" success.");
        else $error("sda_out is not %b but %b", value, sda_out);
    endtask;

    task then_scl_out_should_be(
        input value
    );
        $write("THen scl_out should be %d...", value );
        if( scl_out === value ) $display(" success.");
        else $error("scl_out is not %b but %b", value, scl_out);
    endtask;

endmodule