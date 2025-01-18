`include "clockworks.v"

module SOC (
      input  CLK,        
      output [0:7] LED
);

   reg [7:0] MEM [0:13];
   reg [3:0] pc = 0;
   reg [7:0] led = 0;
   wire div_clk;

   initial begin
       MEM[0]  = 8'b00000001;
       MEM[1]  = 8'b00000010;
       MEM[2]  = 8'b00000100;
       MEM[3]  = 8'b00001000;
       MEM[4]  = 8'b00010000;
       MEM[5]  = 8'b00100000;
       MEM[6]  = 8'b01000000;
       MEM[7]  = 8'b10000000;
       MEM[8]  = 8'b01000000;
       MEM[9]  = 8'b00100000;
       MEM[10] = 8'b00010000;
       MEM[11] = 8'b00001000;
       MEM[12] = 8'b00000100;
       MEM[13] = 8'b00000010;
   end

   always @(posedge div_clk) begin
      led <= MEM[pc];
      pc <= pc == 4'd13 ? 5'b0 : pc + 1;
   end

   Clockworks #(19) CW
   (
      .CLK(CLK),
      .DIV_CLK(div_clk)
   );

   assign LED = led;
 
endmodule
