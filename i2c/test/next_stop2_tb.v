`include "include/i2c.vh"

module next_stop2_tb;
    reg [15:0] ctr_reg;
    reg [15:0] dbl_clock_divisor_reg = 16'hFFFF;
    
    reg  [3:0] state_next;
    
    `include "hw/next_stop2.v"
    
    // DUT
    always @(*)
        next_stop2();

    initial begin
        when_ctr_reg_is_at(~dbl_clock_divisor_reg);
        #1
        then_state_next_should_be(k_stop2);
        #1
        when_ctr_reg_is_at(dbl_clock_divisor_reg);
        #1
        then_state_next_should_be(k_idle);
        $finish(1);
    end
    
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/state_next_steps.v"
    
endmodule
