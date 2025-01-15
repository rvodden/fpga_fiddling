module test2(
    input clk;
    input a;

    output y;
);
    parameter kSTATE_ZERO = 1'b0;
    parameter kSTATE_ONE = 1'b1;

    reg state, state_next;

    // registers
    always @(posedge clk) begin
        state <= state_next;
    end

    // transition logic
    always @(*) begin
        state <= kSTATE_ZERO;  
        case(state)
            kSTATE_ZERO: zero_next(a, state_next);
            kSTATE_ONE: one_next(a, state_next);
        endcase
    end
end;

task automatic zero_next(
    input a,
    output, state_next
)
    if(a) state_next <= kSTATE_ONE;
endtask

task automatic one_next(
    input a,
    output, state_next
)
    if(~a_reg) state_next <= kSTATE_ZERO;
endtask