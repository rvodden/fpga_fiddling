task automatic next_idle();
    ready_out = 1'b1;
    if(write && cmd==k_START_CMD) begin
        state_next = k_start1;
        ctr_next = 16'b0;
    end 
endtask
