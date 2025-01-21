task automatic next_stop1(
);
    sda_out = 1'b0;
    if(ctr_reg == dbl_clock_divisor_reg) begin // if we're half way through the SCL cycle
        state_next = k_stop2;
        ctr_next   = 16'b0;
    end else begin
        state_next = k_stop1;
        ctr_next   = ctr_reg + 1;
    end
endtask
