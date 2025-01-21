`include "include/i2c.vh"

module next_data2_tb;
    reg        SDA;
    reg [15:0] ctr_reg;
    reg [15:0] clock_divisor_reg = 16'hFFFF;
    reg  [8:0] rx_reg = 9'h1FF;
    
    reg  [8:0] rx_next;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;

    `include "hw/next_data2.v"

    // DUT
    always @(*) begin
        state_next = k_data2;
        ctr_next   = ctr_reg + 1;
        rx_next    = rx_reg;
        next_data2();
    end

    initial begin
        when_ctr_reg_is_at(~clock_divisor_reg);
        #1
        then_state_next_should_be(k_data2);
        then_ctr_next_should_be(ctr_reg + 1);
        then_rx_next_should_be(9'h1FF);
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        SDA = 1'b1;
        #1
        then_ctr_next_should_be(16'b0);
        then_state_next_should_be(k_data3);
        then_rx_next_should_be(9'h1FF);
        #1
        when_ctr_reg_is_at(clock_divisor_reg);
        SDA = 1'b0;
        #1
        then_ctr_next_should_be(16'b0);
        then_state_next_should_be(k_data3);
        then_rx_next_should_be(9'h1FE);
        $finish(1);
    end
    
    `include "test/steps/ctr_next_steps.v"
    `include "test/steps/ctr_reg_steps.v"
    `include "test/steps/rx_next_steps.v"
    `include "test/steps/state_next_steps.v"

endmodule
