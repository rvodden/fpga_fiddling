`include "include/i2c.vh"

module next_data3_tb;
    reg [15:0] ctr_reg;
    reg [15:0] clock_divisor_reg = 16'hFFFF;
    reg  [8:8] tx_reg = 1'h1;
    
    reg        sda_out;
    reg        data_phase;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;

    `include "hw/next_data3.v"

    // DUT
    always @(*) begin
        state_next = k_data3;
        ctr_next   = ctr_reg + 1;
        next_data3();
    end

    initial begin
        when_ctr_reg_is_at(~clock_divisor_reg);
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_data_phase_should_be(1'b1);
        then_state_next_should_be_unknown();
        then_ctr_next_should_be_unknown();
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_data_phase_should_be(1'b1);
        then_state_next_should_be(k_data4);
        then_ctr_next_should_be(16'b0);
        $finish(1);
    end
    
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/data_phase_steps.v"
    `include "test/steps/sda_out_steps.v"
    `include "test/steps/state_next_steps.v"

    
endmodule
