`include "clockworks.v"

module SOC (
      input  CLK,        
      output IOT_51A,
      output IOT_50B  
);
   reg led = 0;
   wire div_clk;

   always @(posedge div_clk) begin
      led <= ~led;
   end

   Clockworks #(21) CW
   (
      .CLK(CLK),
      .DIV_CLK(div_clk)
   );

   assign IOT_50B = led ? 1'bZ : 1'b0;
   assign IOT_51A = led ? 1'b0 : 1'bZ;

endmodule
