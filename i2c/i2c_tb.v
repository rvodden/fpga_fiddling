`default_nettype none
`include "i2c.vh"
    
module tb_i2c_next_idle;
    reg       write;
    reg [3:0] cmd;
    reg       clk;
    
    reg        ready_out;
    reg        state_next;
    reg [15:0] ctr_next;
    
    
    // DUT
    always @(*)
        i2c_idle_next(
            write,
            cmd,
            ready_out,
            state_next,
            ctr_next
        );


    localparam CLK_PERIOD = 10;
    always #(CLK_PERIOD/2) clk <= ~clk;

    task when_were_given_a_command(
        input [8*13:0] commandName,
        input    [3:0] commandValue
    );
        $display("When we're given a %s", commandName);
        cmd <= commandValue;
        write <= 1'b1;
    endtask
    
    task then_next_state_should_be(
        input [8*10:0] stateName,
        input    [3:0] stateValue
    );
        $write("Then next state should be %s...", stateName);
        if ( state_next === stateValue )
            $display(" success.");
        else $error("next_state is not %s(%d), but %d.", stateName, stateValue, state_next);
    endtask

    task test_progress_from_k_idle_given_k_start_command;
        #10
        when_were_given_a_command("k_START_CMD", k_START_CMD);
        #10
        then_next_state_should_be("k_start1", k_start1);
    endtask

    task test_statsis_in_k_idle_given_non_k_start_command;
        #10
        when_were_given_a_command("k_RESTART_CMD", k_RESTART_CMD);
        #10
        then_next_state_should_be("k_idle", k_idle);
        #10
        when_were_given_a_command("k_STOP_CMD", k_STOP_CMD);
        #10
        then_next_state_should_be("k_idle", k_idle);
        #10
        when_were_given_a_command("k_READ_CMD", k_READ_CMD);
        #10
        then_next_state_should_be("k_idle", k_idle);
        #10
        when_were_given_a_command("k_WRITE_CMD", k_WRITE_CMD);
        #10
        then_next_state_should_be("k_idle", k_idle);
    endtask

    initial begin
        clk=1'b0; 
        test_progress_from_k_idle_given_k_start_command();
        test_statsis_in_k_idle_given_non_k_start_command();
        $finish(1);
    end

endmodule

`default_nettype wire
