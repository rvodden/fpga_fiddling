`include "include/i2c.vh"

module next_start1_tb;
    reg [15:0] ctr_reg;
    reg [15:0] dbl_clock_divisor_reg = 16'hFF;
    
    reg        sda_out;
    reg  [3:0] state_next;
    reg [15:0] ctr_next;
    
    
    // DUT
    always @(*)
        next_start1(
            ctr_reg,
            dbl_clock_divisor_reg,
            sda_out,
            state_next,
            ctr_next
        );

    initial begin
        when_ctr_reg_is_at(~dbl_clock_divisor_reg);
        #1
        then_sda_out_should_be(1'b0);
        then_state_next_should_be_unknown();
        then_ctr_next_should_unknown();
        #1
        when_ctr_reg_is_at(dbl_clock_divisor_reg);
        #1
        then_sda_out_should_be(1'b0);
        then_state_next_should_be("k_start2", k_start2);
        then_ctr_next_should_be(15'b0);
        $finish(1);
    end

    task when_ctr_reg_is_at(
        input [15:0] value
    );
        $display("When ctr_reg is at %d", value);
        ctr_reg <= value;
        #1;
    endtask

    task then_sda_out_should_be(
        input value
    );
        $write("THen sda_out should be %d...", value );
        if( sda_out === value ) $display(" success.");
        else $error("sda_out is not %b but %b", value, sda_out);
    endtask;
    
    task then_state_next_should_be(
        input [8*10:0] stateName,
        input    [3:0] stateValue
    );
        $write("Then state_next should be %s...", stateName);
        if ( state_next === stateValue )
            $display(" success.");
        else $error("state_next is not %s(%d), but %d.", stateName, stateValue, state_next);
    endtask

    task then_state_next_should_be_unknown();
        $write("Then state_next should be unknown...");
        if ( $isunknown(state_next) ) $display(" success.");
        else $error("state_next is not unknown, but %b.", state_next);
    endtask

    task then_ctr_next_should_be(
        input [15:0] value
    );
        $write("THen ctr_next should be %d...", value );
        if( ctr_next === value ) $display(" success.");
        else $error("ctr_next is not %b but %b", value, ctr_next);
    endtask
    
    task then_ctr_next_should_unknown();
        $write("Then ctr_next should be unknown...");
        if ( $isunknown(ctr_next) ) $display(" success.");
        else $error("ctr_next is not unknown, but %b.", state_next);
    endtask

endmodule