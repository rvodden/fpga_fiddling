`include "include/i2c.vh"

module next_data4_tb;
    reg [15:0] ctr_reg;
    reg [15:0] clock_divisor_reg = 16'hFFFF;
    reg  [8:0] tx_reg = 9'h1FF;
    reg  [3:0] bit_reg;
    
    reg  [3:0] bit_next;
    reg  [8:0] tx_next;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;

    `include "hw/next_data4.v"

    // DUT
    always @(*) begin
        state_next    = k_data4;
        ctr_next      = ctr_reg + 1;
        tx_next       = tx_reg;
        bit_next      = bit_reg;
        next_data4();
    end

    initial begin
        when_ctr_reg_is_at(~clock_divisor_reg);
        #1
        then_state_next_should_be(k_data4);
        then_ctr_next_should_be(ctr_reg + 1);
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        bit_reg = 4'd8; // tx finished
        #1
        then_ctr_next_should_be(16'b0);
        then_tx_next_should_be(tx_reg);
        then_bit_next_should_be(4'd0);
        then_state_next_should_be(k_data_end);
        #1
        bit_reg = 4'd1; // tx not finished
        #1
        then_ctr_next_should_be(16'b0);
        then_tx_next_should_be(9'h1FE);
        then_bit_next_should_be(4'd2);
        then_state_next_should_be(k_data1);
        $finish(1);
    end
    
    `include "test/steps/bit_next_steps.v"
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/state_next_steps.v"
    `include "test/steps/tx_next_steps.v"

    
endmodule
