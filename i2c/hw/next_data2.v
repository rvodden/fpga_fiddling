task automatic next_data2(
);
    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        state_next = k_data3;
        ctr_next   = 16'b0;
        rx_next = {rx_reg[7:0], SDA}; // shift data in
    end
endtask
