// Module: when buttons 1 and 2 are pressed, turn on LED
module and_gate (
    input  [1:0] pmod,
    output [2:0] led
);

    wire [1:0] not_pmod;

    assign not_pmod = ~pmod;
    assign led[1:0] = {2{not_pmod[0]}};

    assign led[2]   = not_pmod[0] & not_pmod[1];
endmodule