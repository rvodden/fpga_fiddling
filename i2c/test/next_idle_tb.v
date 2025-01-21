`include "include/i2c.vh"

module next_idle_tb;
    reg        write;
    reg [15:0] ctr_reg = 16'($random);
    reg [2:0]  cmd;
    
    reg [3:0]  state_next;
    reg [15:0] ctr_next;
    
    `include "hw/next_idle.v"

    // DUT
    always @(*) begin
        // defaults
        ctr_next   = ctr_reg + 1;
        state_next = k_idle;

        next_idle();
    end

    initial begin
        $dumpfile("next_idle_tb.vcd");
        $dumpvars(0);
        test_progress_from_k_idle_given_k_start_command();
        test_stasis_in_k_idle_given_non_k_start_command();
        $finish(1);
    end
    
    task test_progress_from_k_idle_given_k_start_command;
        when_were_given_a_command(k_START_CMD);
        #1
        then_state_next_should_be(k_start1);
        then_ctr_next_should_be(16'b0);
        #1;
    endtask

    task test_stasis_in_k_idle_given_non_k_start_command;
        when_were_given_a_command(k_RESTART_CMD);
        #1
        then_state_next_should_be(k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
        #1

        when_were_given_a_command(k_STOP_CMD);
        #1
        then_state_next_should_be(k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
        
        #1

        when_were_given_a_command(k_READ_CMD);
        #1
        then_state_next_should_be(k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
        
        when_were_given_a_command(k_WRITE_CMD);
        #1
        then_state_next_should_be(k_idle);
        then_ctr_next_should_be(ctr_reg + 1);
    endtask

    `include "test/steps/cmd_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/state_next_steps.v"
    

endmodule
