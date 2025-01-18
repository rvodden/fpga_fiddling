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

    `include "test/steps/cmd_steps.v"
    `include "test/steps/ready_out_steps.v"
    `include "test/steps/sda_out_steps.v"
    `include "test/steps/scl_out_steps.v"

endmodule