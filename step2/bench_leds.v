module bench();
   reg CLK;
   wire [2:0] LEDS;

   SOC uut(
     .CLK(CLK),
     .LEDS(LEDS)
   );

   reg[2:0] prev_LEDS = 0;
   initial begin
      CLK = 0;
      forever begin
	      #1 CLK = ~CLK;
	      if(LEDS != prev_LEDS) begin
	         $display("LEDS = %b",LEDS);
	      end
	      prev_LEDS <= LEDS;
      end
   end
endmodule  