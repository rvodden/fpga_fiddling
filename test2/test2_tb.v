`default_nettype none

module tb_i2c_next_idle;
    reg a;
    reg y;
    reg clk;

    reg state_next;    
    // DUT
    always @(*)
        test2.zero_next(a, y);

    initial begin
        #1 a = 0; clk = 0;
        forever begin
            clk = ~clk;
        end

        #5 
        
        
        repeat(5) @(posedge clk);
        rst_n<=1;
        @(posedge clk);
        repeat(2) @(posedge clk);
        $finish(2);
    end

endmodule
`default_nettype wire