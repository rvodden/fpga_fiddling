task automatic next_restart();
    if(ctr_reg == dbl_clock_divisor_reg) begin // if we're half way through the SCL cycle
        state_next = k_start1;
        ctr_next   = 16'b0;
    end
endtask
