task automatic next_restart(
    input  [15:0] ctr_reg,
    input  [15:0] dbl_clock_divisor_reg,

    output  [3:0] state_next,
    output [15:0] ctr_next
);
    if(ctr_reg == dbl_clock_divisor_reg) begin // if we're half way through the SCL cycle
        state_next = k_start1;
        ctr_next   = 15'b0;
    end
endtask
