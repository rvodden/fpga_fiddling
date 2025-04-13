module i2s_receiver #(
    parameter MAX_SAMPLE_WIDTH = 24 // max is 32 bits
)(
    input  wire                        CLK,          // system clock
    input  wire                        RST,
    input  wire                        I2S_SCK,      // serial clock
    input  wire                        I2S_WS,       // word select (left/right)
    input  wire                        I2S_SD,       // serial data
    output reg  [MAX_SAMPLE_WIDTH-1:0] sample_out,  // output 16-bit sample
    output reg                         sample_valid,
    output reg                         sample_channel  // 0 = left, 1 = right
);

localparam [1:0]
    I2SR_IDLE    = 2'b00,
    I2SR_RECEIVE = 2'b01,
    I2SR_DONE    = 2'b10,
    INVALID      = 2'b11;

reg [1:0] current_state, next_state;
reg [MAX_SAMPLE_WIDTH-1:0] sample_buffer, next_sample_buffer;

reg prev_ws; // previous state of I2S_WS
reg prev_sck; // previous state of I2S_SCK

// Idle task

task handle_idle;
    begin
        if(I2S_WS != prev_ws) begin
            next_state = I2SR_RECEIVE;
        end
    end
endtask

// Receive task

task handle_receive;
    begin
        if (I2S_SCK && !prev_sck) begin // rising edge of SCK
            next_sample_buffer = {sample_buffer[MAX_SAMPLE_WIDTH-2:0], I2S_SD}; // shift in the data
        end
        if (I2S_WS != prev_ws) begin // word select changed
            next_state = I2SR_DONE;
        end
    end
endtask

// Done task

task handle_done;
    begin
        next_state = I2SR_RECEIVE;
    end
endtask

always @(*) begin
    // Default assignments
    next_sample_buffer = sample_buffer;
    next_state = current_state;

    case (current_state)
        I2SR_IDLE,
        INVALID:      handle_idle();
        I2SR_RECEIVE: handle_receive();
        I2SR_DONE:    handle_done();
    endcase
end


// Reset task
task handle_reset;
    begin
        sample_buffer <= 0;

        current_state <= I2SR_IDLE;
        prev_ws <= 0;
        prev_sck <= 0;
    end
endtask

always @(posedge CLK or posedge RST) begin
    if(RST) begin
        handle_reset();
    end else begin
        // Update state
        current_state <= next_state;
        sample_buffer <= next_sample_buffer;

        // Update previous states
        prev_ws <= I2S_WS;
        prev_sck <= I2S_SCK;
    end
end

// output logic
always @(*) begin
    sample_out = sample_buffer;
    sample_valid = 0;
    sample_channel = I2S_WS;
    case (current_state)
        I2SR_IDLE: begin
            sample_out = 0;
            sample_valid = 0;
            sample_channel = 0;
        end
        I2SR_RECEIVE: begin
            sample_valid = 0;
        end
        I2SR_DONE: begin
            sample_valid = 1;
        end
        default: begin // should never happen
            sample_valid = 0;
        end
    endcase
end

endmodule
