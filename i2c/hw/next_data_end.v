task automatic next_data_end(
);
    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        ctr_next   = 16'b0;
        state_next = k_hold;
    end else begin
        ctr_next = ctr_reg + 1;
        state_next = k_data_end;
    end
endtask
