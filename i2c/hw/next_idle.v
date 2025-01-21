task automatic next_idle();
    if(write && cmd==k_START_CMD) begin
        state_next = k_start1;
        ctr_next = 16'b0;
    end 
endtask
