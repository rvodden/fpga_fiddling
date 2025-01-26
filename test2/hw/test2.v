`include "include/test.vh"

module test2 (
    input CLK,
    input SW0,
    input SW1,
    input SW2,
    input SW3,
    output SDA,
    output SCL,
    output [3:0] LED
);

    reg [4:0] CTR;
    reg sda;
    reg scl;

    always @(posedge(CLK)) begin
        CTR <= CTR + 1;
        if(CTR == 0) begin
            sda <= ~sda;
            scl <= ~scl;
        end
    end

    assign SDA = sda;
    assign SCL = scl;
    assign LED = { SW3, SW2, SW1, SW0 };

endmodule


