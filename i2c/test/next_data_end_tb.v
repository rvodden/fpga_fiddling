`include "include/i2c.vh"

module next_data_end_tb;
    reg [15:0] ctr_reg;
    reg [15:0] clock_divisor_reg = 16'hFFFF;
    
    reg        sda_out;
    reg        scl_out;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;

    `include "hw/next_data1.v"

    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/sda_out_steps.v"
    `include "test/steps/scl_out_steps.v"
    `include "test/steps/state_next_steps.v"

    // DUT
    always @(*)
        next_data_end(
            ctr_reg,
            clock_divisor_reg,
            sda_out,
            scl_out,
            state_next,
            ctr_next
        );

    initial begin
        when_ctr_reg_is_at(~clock_divisor_reg);
        #1
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be_unknown();
        then_ctr_next_should_be_unknown();
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        #1
        then_sda_out_should_be(1'b0);
        then_scl_out_should_be(1'b0);
        then_state_next_should_be("k_hold", k_hold);
        then_ctr_next_should_be(15'b0);
        $finish(1);
    end
    
endmodule