task automatic next_stop2(
);
    if(ctr_reg == dbl_clock_divisor_reg) // if we're half way through the SCL cycle
        state_next = k_idle;
    else state_next = k_stop2;
endtask
