   module SOC (
       input  CLK,        
       output [2:0] LEDS
   );

   reg [2:0] count = 0;
   always @(posedge CLK) begin
      count <= count + 1;
   end
   assign LEDS = count;

   endmodule