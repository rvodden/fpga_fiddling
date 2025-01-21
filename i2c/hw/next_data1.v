task automatic next_data1(
);
    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        state_next = k_data2;
        ctr_next   = 16'b0;
    end
endtask
