module clockworks 
(
   input  CLK,       // clock pin of the board
   output DIV_CLK    // (optionally divided) clock for the design.
);

   parameter SLOW=0;

   reg [SLOW:0] slow_CLK = 0;
   always @(posedge CLK) begin
      slow_CLK <= slow_CLK + 1;
   end
   assign DIV_CLK = slow_CLK[SLOW];

endmodule
