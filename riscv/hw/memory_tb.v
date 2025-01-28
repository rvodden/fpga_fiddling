`include "memory.v"

module memory_tb(
    input CLK,
    output reg [7:0] LED
);
    reg [31:0]  memory_address;
    reg         memory_read_strobe;
    wire [31:0] memory_read_data;
    reg         state;
    reg [31:0]  pc;

    memory RAM(
        .CLK(CLK),
        .memory_address(memory_address),   
        .memory_read_data(memory_read_data), 
        .memory_read_strobe(memory_read_strobe)
    );

    localparam k_state_fetch = 0;
    localparam k_state_wait  = 1;

    assign memory_address = programme_counter;
    assign memory_read_strobe = (state == k_state_fetch);
    assign LED = memory_read_data[7:0];

    always @(posedge DIV_CLK) begin
        case(state)
            k_state_fetch:
                state <= k_state_wait;
            k_state_wait: begin
                state <= k_state_fetch;
                pc <= pc + 1;
            end
        endcase
    end

    clockworks #(
`ifndef BENCH
        .SLOW(21)
`endif
    ) div_clk (
        .CLK(CLK),
        .DIV_CLK(DIV_CLK)
    );
endmodule

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
