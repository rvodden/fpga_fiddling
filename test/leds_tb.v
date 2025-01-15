module bench();
   reg CLK;
   wire IOT_50B;
   wire IOT_51A;

   SOC uut(
     .CLK(CLK),
     .IOT_50B(IOT_50B),
     .IOT_51A(IOT_51A)
   );

   wire [1:0] LEDS;
   assign LEDS = {IOT_50B, IOT_51A};

   reg [1:0] prev_leds;

   initial begin
      CLK = 1'b0;
      forever begin
	      #1 CLK = ~CLK;
         prev_leds <= LEDS;
         if (prev_leds != LEDS) $display("LEDS: %b", LEDS);
      end
   end
endmodule  