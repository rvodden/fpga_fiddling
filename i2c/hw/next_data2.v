task automatic next_data2(
    input         sda,
    input  [15:0] ctr_reg,
    input  [15:0] clock_divisor_reg,
    input   [8:0] tx_reg,
    input   [8:0] rx_reg,

    output        sda_out,
    output        data_phase,
    output  [8:0] rx_next,
    output  [3:0] state_next,
    output [15:0] ctr_next
);
    sda_out    = tx_reg[8];
    data_phase = 1'b1;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        state_next = k_data3;
        ctr_next   = 15'b0;
        rx_next = {rx_reg[7:0], sda}; // shift data in
    end
endtask
