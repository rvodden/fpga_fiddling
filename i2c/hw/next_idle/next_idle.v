task automatic next_idle(
    input         write,
    input   [2:0] cmd,

    output        ready_out,
    output  [3:0] state_next,
    output [15:0] ctr_next
);
    ready_out = 1'b1;
    if(write && cmd==k_START_CMD) begin
        state_next = k_start1;
        ctr_next = 15'b0;
    end
endtask
