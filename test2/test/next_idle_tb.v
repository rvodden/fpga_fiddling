`include "include/i2c.vh"

module next_idle_tb;
    reg       write;
    reg       cmd;
    
    reg        cmd_out;
    
    // DUT
    always @(*)
        next_idle(
            write,
            ctr_reg,
            cmd,
            ready_out,
            state_next,
            ctr_next
        );

    initial begin
        $dumpfile("next_idle_tb.vcd");
        $dumpvars(0);
        test_progress_from_k_idle_given_k_start_command();
        test_statsis_in_k_idle_given_non_k_start_command();
        $finish(1);
    end
    
    task test_progress_from_k_idle_given_k_start_command;
        when_were_given_a_command("k_START_CMD", k_START_CMD, write, cmd);
        #1
        then_state_next_should_be("k_start1", k_start1);
        then_ctr_next_should_be(16'b0);
        then_ready_out_should_be(1'b1);
        #1;
    endtask

    task test_statsis_in_k_idle_given_non_k_start_command;
        when_were_given_a_command("k_RESTART_CMD", k_RESTART_CMD, write, cmd);
        #1
        then_ready_out_should_be(1'b1);
        then_state_next_should_be("k_idle", k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
        #1

        when_were_given_a_command("k_STOP_CMD", k_STOP_CMD, write, cmd);
        #1
        then_ready_out_should_be(1'b1);
        then_state_next_should_be("k_idle", k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
        
        #1

        when_were_given_a_command("k_READ_CMD", k_READ_CMD, write, cmd);
        #1
        then_ready_out_should_be(1'b1);
        then_state_next_should_be("k_idle", k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
        
        when_were_given_a_command("k_WRITE_CMD", k_WRITE_CMD, write, cmd);
        #1
        then_ready_out_should_be(1'b1);
        then_state_next_should_be("k_idle", k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
    endtask

    `include "test/steps/cmd_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/ready_out_steps.v"
    `include "test/steps/state_next_steps.v"
    

endmodule