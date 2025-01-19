task automatic next_data1(
    input  [15:0] ctr_reg,
    input  [15:0] clock_divisor_reg,
    input   [8:0] tx_reg,

    output        sda_out,
    output        scl_out,
    output        data_phase,
    output  [3:0] state_next,
    output [15:0] ctr_next
);
    sda_out    = tx_reg[8];
    scl_out    = 1'b0;
    data_phase = 1'b1;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        state_next = k_data2;
        ctr_next   = 15'b0;
    end
endtask
