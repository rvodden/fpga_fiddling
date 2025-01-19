task automatic next_data_end(
    input  [15:0] ctr_reg,
    input  [15:0] clock_divisor_reg,

    output        sda_out,
    output        scl_out,
    output  [3:0] state_next,
    output [15:0] ctr_next
);
    sda_out    = 1'b0;
    scl_out    = 1'b0;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        ctr_next   = 15'b0;
        state_next = k_hold;
    end
endtask
