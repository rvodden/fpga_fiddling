task automatic next_data1(
);
    sda_out    = tx_reg[8];
    scl_out    = 1'b0;
    data_phase = 1'b1;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        state_next = k_data2;
        ctr_next   = 16'b0;
    end
endtask
