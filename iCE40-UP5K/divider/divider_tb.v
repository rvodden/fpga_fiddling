module clock_divider_tb();

    wire out;

    reg clk = 0;
    reg rst = 0;


    localparam DURATION = 10000;

    always begin
        #41.667
        clk = ~clk;
    end

endmodule