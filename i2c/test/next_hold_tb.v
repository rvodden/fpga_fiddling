`include "include/i2c.vh"

module next_hold_tb;
    reg        write;
    reg  [2:0] cmd;
    reg  [7:0] data_in = 8'($random());
    reg        nack    = 1'($random());
    reg  [2:0] cmd_reg = 3'($random());

    reg        ready_out;
    reg        sda_out;
    reg        scl_out;
    reg  [3:0] bit_next;
    reg  [8:0] tx_next;
    reg  [2:0] cmd_next;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;

    `include "hw/next_hold.v"
        
    // DUT
    always @(*) begin
        cmd_next   = cmd_reg;
        ctr_next   = 16'($random());
        state_next = k_hold;
        bit_next   = 4'hF;
        tx_next    = 9'b0;

        next_hold();
    end

    initial begin
        when_were_given_a_command(k_RESTART_CMD);
        #1;
        then_cmd_next_should_be(k_RESTART_CMD);
        then_ready_out_should_be(1'b1);
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be(k_restart);
        then_bit_next_should_be(4'hF);
        then_tx_next_should_be(9'b0);
        #1;
        
        when_were_given_a_command(k_START_CMD);
        #1;
        then_cmd_next_should_be(k_START_CMD);
        then_ready_out_should_be(1'b1);
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be(k_restart);
        then_bit_next_should_be(4'hF);
        then_tx_next_should_be(9'b0);
        #1

        when_were_given_a_command(k_STOP_CMD);
        #1;
        then_cmd_next_should_be(k_STOP_CMD);
        then_ready_out_should_be(1'b1);
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be(k_stop1);
        then_bit_next_should_be(4'hF);
        then_tx_next_should_be(9'b0);
        #1;
        
        when_were_given_a_command(k_READ_CMD);
        #1;
        then_cmd_next_should_be(k_READ_CMD);
        then_ready_out_should_be(1'b1);
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be(k_data1);
        then_bit_next_should_be(4'b0);
        then_tx_next_should_be({data_in, nack});
        #1;
        
        when_were_given_a_command(k_WRITE_CMD);
        #1;
        then_cmd_next_should_be(k_WRITE_CMD);
        then_ready_out_should_be(1'b1);
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be(k_data1);
        then_bit_next_should_be(4'b0);
        then_tx_next_should_be({data_in, nack});
        #1;

        $finish(1);
    end

    `include "test/steps/cmd_steps.v"
    `include "test/steps/cmd_next_steps.v"
    `include "test/steps/ready_out_steps.v"
    `include "test/steps/sda_out_steps.v"
    `include "test/steps/scl_out_steps.v"
    `include "test/steps/bit_next_steps.v"
    `include "test/steps/state_next_steps.v"
    `include "test/steps/tx_next_steps.v"

endmodule
