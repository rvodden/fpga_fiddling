task automatic next_data4(
);
    sda_out    = tx_reg[8];
    scl_out    = 1'b0;
    data_phase = 1'b1;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        ctr_next = 16'b0;
        if(bit_reg == 4'd8) begin // have we finished sending data and acks?
            state_next    = k_data_end;
            tx_next       = tx_reg;
            bit_next      = 4'b0;
            done_tick_out = 1'b1;
            ctr_next      = 16'b0;
        end else begin
            tx_next       = {tx_reg[7:0], 1'b0};
            bit_next      = bit_reg + 1;
            state_next    = k_data1;
        end
    end
endtask
