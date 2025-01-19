`include "include/i2c.vh"

module next_data4_tb;
    reg [15:0] ctr_reg;
    reg [15:0] clock_divisor_reg = 16'hFFFF;
    reg  [8:0] tx_reg = 9'h1FF;
    reg  [3:0] bit_reg;
    
    reg        sda_out;
    reg        scl_out;
    reg        data_phase;
    reg        done_tick_out;
    reg  [3:0] bit_next;
    reg  [9:0] tx_next;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;

    `include "test/steps/bit_next_steps.v"
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/data_phase_steps.v"
    `include "test/steps/done_tick_out_steps.v"
    `include "test/steps/sda_out_steps.v"
    `include "test/steps/scl_out_steps.v"
    `include "test/steps/state_next_steps.v"
    `include "test/steps/tx_next_steps.v"

    // DUT
    always @(*)
        next_data4(
            ctr_reg,
            clock_divisor_reg,
            tx_reg,
            bit_reg,

            sda_out,
            scl_out,
            data_phase,
            done_tick_out,
            bit_next,
            tx_next,
            state_next,
            ctr_next
        );

    initial begin
        when_ctr_reg_is_at(~clock_divisor_reg);
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_scl_out_should_be(1'b0);
        then_data_phase_should_be(1'b1);
        then_state_next_should_be_unknown();
        then_ctr_next_should_be_unknown();
        then_done_tick_out_should_be_unknown();
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        bit_reg <= 4'd8; // tx finished
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_scl_out_should_be(1'b0);
        then_data_phase_should_be(1'b1);
        then_ctr_next_should_be(15'b0);
        then_done_tick_out_should_be(1'b1);
        then_tx_next_should_be_unknown();
        then_bit_next_should_be_unknown();
        then_state_next_should_be("k_data_end", k_data_end);
        #1
        bit_reg <= 4'd1; // tx not finished
        #1
        then_sda_out_should_be(tx_reg[8]);
        then_scl_out_should_be(1'b0);
        then_data_phase_should_be(1'b1);
        then_ctr_next_should_be(15'b0);
        then_done_tick_out_should_be_unknown;
        then_tx_next_should_be(9'h1FE);
        then_bit_next_should_be(4'd2);
        then_state_next_should_be("k_data1", k_data1);
        $finish(1);
    end
    
endmodule