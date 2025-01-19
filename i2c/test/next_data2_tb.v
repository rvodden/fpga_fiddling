`include "include/i2c.vh"

module next_data2_tb;
    reg        sda;
    reg [15:0] ctr_reg;
    reg [15:0] clock_divisor_reg = 16'hFFFF;
    reg  [8:0] tx_reg = 9'h1FF;
    reg  [8:0] rx_reg = 9'h1FF;
    
    reg        sda_out;
    reg        data_phase;
    reg  [8:0] rx_next;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;
    
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/data_phase_steps.v"
    `include "test/steps/rx_next_steps.v"
    `include "test/steps/sda_out_steps.v"
    `include "test/steps/state_next_steps.v"

    // DUT
    always @(*)
        next_data2(
            sda,
            ctr_reg,
            clock_divisor_reg,
            tx_reg,
            rx_reg,
            sda_out,
            data_phase,
            rx_next,
            state_next,
            ctr_next
        );

    initial begin
        when_ctr_reg_is_at(~clock_divisor_reg);
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_data_phase_should_be(1'b1);
        then_state_next_should_be_unknown();
        then_ctr_next_should_be_unknown();
        then_rx_next_should_be_unknown();
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        sda <= 1'b1;
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_data_phase_should_be(1'b1);
        then_ctr_next_should_be(15'b0);
        then_state_next_should_be("k_data3", k_data3);
        then_rx_next_should_be(9'h1FF);
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        sda <= 1'b0;
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_data_phase_should_be(1'b1);
        then_ctr_next_should_be(15'b0);
        then_state_next_should_be("k_data3", k_data3);
        then_rx_next_should_be(9'h1FE);
        $finish(1);
    end
    
endmodule