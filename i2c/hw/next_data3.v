task automatic next_data3(
);
    sda_out    = tx_reg[8];
    data_phase = 1'b1;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        state_next = k_data4;
        ctr_next   = 16'b0;
    end else begin
    end
endtask
