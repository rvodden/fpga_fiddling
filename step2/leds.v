`include "clockworks.v"

module SOC (
      input  CLK,        
      output [2:0] LEDS
);

   reg div_clk;

   reg [2:0] count = 0;
   always @(posedge div_clk) begin
      count <= count + 1;
   end

   Clockworks #(21) CW
   (
      .CLK(CLK),
      .DIV_CLK(div_clk)
   );

   assign LEDS = count;

endmodule

