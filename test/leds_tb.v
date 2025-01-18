module bench();
   reg CLK;
   wire [7:0] LED;

   SOC uut(
     .CLK(CLK),
     .LED(LED)
   );

   reg [7:0] prev_leds;

   initial begin
      CLK = 1'b0;
      forever begin
	      #1 CLK = ~CLK;
         prev_leds <= LED;
         if (prev_leds != LED) $display("LEDS: %b", LED);
      end
   end
endmodule  