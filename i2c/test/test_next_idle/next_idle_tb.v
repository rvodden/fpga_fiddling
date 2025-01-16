`include "include/i2c.vh"

module next_idle_tb;
    reg       write;
    reg [2:0] cmd;
    
    reg        ready_out;
    reg [3:0]  state_next;
    reg [15:0] ctr_next;
    
    
    // DUT
    always @(*)
        next_idle(
            write,
            cmd,
            ready_out,
            state_next,
            ctr_next
        );

    initial begin
        test_progress_from_k_idle_given_k_start_command();
        test_statsis_in_k_idle_given_non_k_start_command();
        $finish(1);
    end
    
    task test_progress_from_k_idle_given_k_start_command;
        when_were_given_a_command("k_START_CMD", k_START_CMD);
        #1
        then_next_state_should_be("k_start1", k_start1);
        then_ctr_next_should_be(1'b0);
        then_ready_out_should_be(1'b1);
    endtask

    task test_statsis_in_k_idle_given_non_k_start_command;
        when_were_given_a_command("k_RESTART_CMD", k_RESTART_CMD);
        #1
        then_next_state_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
        
        when_were_given_a_command("k_STOP_CMD", k_STOP_CMD);
        #1
        then_next_state_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
        
        when_were_given_a_command("k_READ_CMD", k_READ_CMD);
        #1
        then_next_state_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
        
        when_were_given_a_command("k_WRITE_CMD", k_WRITE_CMD);
        #1
        then_next_state_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
    endtask
    
    task when_were_given_a_command(
        input [8*13:0] commandName,
        input    [3:0] commandValue
    );
        $display("When we're given a %s command", commandName);
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
        else $error("state_next is not %s(%b), but %b.", stateName, stateValue, state_next);
    endtask
    
    task then_next_state_should_unknown();
        $write("Then next state should be unknown...");
        if ( $isunknown(state_next) ) $display(" success.");
        else $error("state_next is not unknown, but %b.", state_next);
    endtask

    task then_ctr_next_should_be(
        input [15:0] value
    );
        $write("THen ctr_next should be %d...", value );
        if( ctr_next === value ) $display(" success.");
        else $error("ctr_next is not %b but %b", value, ctr_next);
    endtask
    
    task then_ctr_next_should_unknown();
        $write("Then ctr_next should be unknown...");
        if ( $isunknown(ctr_next) ) $display(" success.");
        else $error("ctr_next is not unknown, but %b.", state_next);
    endtask
    
    task then_ready_out_should_be(
        input value
    );
        $write("Then ready_out should be %d...", value );
        if( ready_out === value ) $display(" success.");
        else $error("ready_out is not %b but %b", value, ctr_next);
    endtask

endmodule