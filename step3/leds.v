`include "clockworks.v"

module SOC (
      input  CLK,        
      output [4:0] LED
);

   reg [4:0] MEM [0:12];
   reg [4:0] pc = 0;
   reg [4:0] led = 0;
   wire div_clk;

   initial begin
       MEM[0]   = 5'b00000;
       MEM[1]   = 5'b00001;
       MEM[2]   = 5'b00010;
       MEM[3]   = 5'b00100;
       MEM[4]   = 5'b01000;
       MEM[5]   = 5'b10000;
       MEM[6]   = 5'b00000;
       MEM[7]   = 5'b10000;
       MEM[8]   = 5'b01000;
       MEM[9]   = 5'b00100;
       MEM[10]  = 5'b00010;
       MEM[11]  = 5'b00001;
   end

   always @(posedge div_clk) begin
      led <= MEM[pc];
      pc <= pc == 20 ? 5'b0 : pc + 1;
   end

   Clockworks #(21) CW
   (
      .CLK(CLK),
      .DIV_CLK(div_clk)
   );

   assign LED = led;

endmodule

