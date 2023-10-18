module full_adder(
    input       a,
    input       b,
    input       c,

    output      s,
    output      c_out
);

wire a_xor_b;
assign a_xor_b = a ^ b;
assign s = a_xor_b ^ c;

wire a_xor_b_and_c;
assign a_xor_b_and_c = a_xor_b & c;
wire a_and_b;
assign a_and_b = a & b;
assign c_out = a_and_b | a_xor_b_and_c;

endmodule
