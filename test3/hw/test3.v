`include "include/i2c_m.vh"
`include "../i2c/hw/i2c.v"

module i2c_m(
    input        CLK,
    input        SW0,

    inout        SDA,
    output       SCL,

    output [7:0] LED
);

    localparam k_address          = 7'h27;

    // localparam k_clear_display    = 8'h1;
    // localparam k_return_home      = 8'h2;

    // localparam k_entry_mode       = 8'h4;
    // localparam k_em_increment     = 8'h2;
    // localparam k_em_display_shift = 8'h1;

    localparam k_prog_end         = 5'h3;

    // ROM

    // Phase 1 - try and dedect that the LCD is there.
    reg [10:0] MEM [0:31];

    initial begin
        MEM[00]   = {k_START_CMD, 8'b0               };
        MEM[01]   = {k_WRITE_CMD, {k_address, 1'h0}  };
        // MEM[02]   = {k_WRITE_CMD, 8'hF3 };
        MEM[02]   = {k_STOP_CMD,  8'b0               };
        // MEM[04]   = {k_START_CMD, 8'b0               };
        // MEM[05]   = {k_WRITE_CMD, {k_address, 1'hF0} };
        // MEM[06]   = {k_WRITE_CMD, {k_address, 1'hF3} };
        // MEM[07]   = {k_STOP_CMD,  8'b0               };
        // MEM[08]   = {k_START_CMD, 8'b0               };
        // MEM[09]   = {k_WRITE_CMD, {k_address, 1'hF0} };
        // MEM[10]   = {k_WRITE_CMD, {k_address, 1'hF3} };
        // MEM[11]   = {k_STOP_CMD,  8'b0               };
        // MEM[12]   = {k_START_CMD, 8'b0               };
        // MEM[13]   = {k_WRITE_CMD, {k_address, 1'hF0} };
        // MEM[14]   = {k_WRITE_CMD, {k_address, 1'hF2} };
        // MEM[15]   = {k_STOP_CMD,  8'b0               };
    end

    reg        write,   write_next;
    reg  [7:0] data_in, data_in_next;
    reg  [2:0] cmd,     cmd_next;
    reg  [2:0] ctr,     ctr_next;
    wire       reset;

    assign reset = ~SW0;

    wire       ready;
    /* verilator lint_off UNUSEDSIGNAL */
    wire [7:0] data_out;
    wire       ack;
    /* verilator lint_on UNUSEDSIGNAL */
    wire       done_tick;

    i2c i2c1 (
        .clk(CLK), 
        .reset(reset),
        .write(write),
        .clock_divisor(16'd300),
        .data_in(data_in),
        .cmd(cmd),

        .ready(ready),
        .data_out(data_out),
        .ack(ack),
        .done_tick(done_tick),

        .SDA(SDA),
        .SCL(SCL) 
    );

    // internal registers
    reg [4:0] pc = 0, pc_next;
    reg [2:0] state, state_next;

    // copy state over on clock
    always @(posedge CLK) begin
        if(reset) begin
            state   <= k_wait_for_cmd;
            write   <= 1'b0;
            pc      <= 5'b0;
            data_in <= 8'b0;
            cmd     <= 3'b0;
            ctr     <= 3'b0;
        end else begin
            state   <= state_next;
            write   <= write_next;
            pc      <= pc_next;
            data_in <= data_in_next;
            cmd     <= cmd_next;
            ctr     <= ctr_next;
        end;
    end        
    
    // transition logic
    always @(*) begin
        // by default keep all registers the same
        // but advance the counter
        state_next   = state;
        pc_next      = pc;
        ctr_next     = ctr + 1;

        case(state)
            k_wait_for_cmd: begin 
                if(pc < k_prog_end) begin
                    state_next = k_send_cmd;
                    ctr_next   = 3'b0;
                end
            end
            k_send_cmd: begin
                if(ctr == 3'd4) begin
                    ctr_next  = 3'b0;
                    state_next = k_wait_for_ready;
                end
            end
            k_wait_for_ready: begin
                if(ctr == 3'd4) begin
                    ctr_next  = 3'b0;
                    if (ready) begin
                        state_next = k_wait_for_cmd;
                        pc_next = pc + 1;
                    end
                end
            end
            k_wait_for_done: begin 
                if(ctr == 3'd4) begin
                    ctr_next  = 3'b0;
                    if (done_tick) begin
                        state_next = k_wait_for_cmd;
                        pc_next = pc + 1;
                    end
                end
            end
            default: begin
                state_next = k_wait_for_cmd;
            end
        endcase
    end

    always @(*) begin
        data_in_next = data_in;
        cmd_next     = cmd;
        write_next   = write;
        case(state)
            k_wait_for_cmd: begin
                cmd_next     = MEM[pc][10:8];
                data_in_next = MEM[pc][7:0];
            end

            k_send_cmd: begin
                write_next = 1'b1;
            end
            
            k_wait_for_ready,
            k_wait_for_done: begin
                write_next = 1'b0;
            end

            default: begin end // if state is invalid, do nothing
    endcase
    end

endmodule
