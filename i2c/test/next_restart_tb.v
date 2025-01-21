`include "include/i2c.vh"

module next_restart_tb;
    reg [15:0] ctr_reg;
    reg [15:0] dbl_clock_divisor_reg = 16'hFFFF;
    
    reg  [3:0] state_next;
    reg [15:0] ctr_next;
    
    `include "hw/next_restart.v"
    
    // DUT
    always @(*) begin
        ctr_next = ctr_reg + 1;
        state_next = k_restart;
        next_restart();
    end

    initial begin
        when_ctr_reg_is_at(~dbl_clock_divisor_reg);
        #1
        then_state_next_should_be(k_restart);
        then_ctr_next_should_be(ctr_reg + 1);
        #1
        when_ctr_reg_is_at(dbl_clock_divisor_reg);
        #1
        then_state_next_should_be(k_start1);
        then_ctr_next_should_be(16'b0);
        $finish(1);
    end
    
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/state_next_steps.v"
    
endmodule
