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
        then_state_next_should_be("k_start1", k_start1);
        then_ctr_next_should_be(1'b0);
        then_ready_out_should_be(1'b1);
    endtask

    task test_statsis_in_k_idle_given_non_k_start_command;
        when_were_given_a_command("k_RESTART_CMD", k_RESTART_CMD);
        #1
        then_state_next_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
        
        when_were_given_a_command("k_STOP_CMD", k_STOP_CMD);
        #1
        then_state_next_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
        
        when_were_given_a_command("k_READ_CMD", k_READ_CMD);
        #1
        then_state_next_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
        
        when_were_given_a_command("k_WRITE_CMD", k_WRITE_CMD);
        #1
        then_state_next_should_unknown();
        then_ctr_next_should_unknown();
        then_ready_out_should_be(1'b1);
    endtask

    `include "test/steps/cmd_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/ready_out_steps.v"
    `include "test/steps/state_next_steps.v"
    

endmodule