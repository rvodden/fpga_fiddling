`include "include/test.vh"

module test (
    input clk, 
    input reset,
    input write,
    input cmd,

    output led
);

/* Internal Registers */

    reg  state_reg, state_next; // which state we are currently in.
    reg  cmd_reg,   cmd_next;   // command we're currently executing

    reg  led_out, led_next;     // indicated that the LED should be on.


/* Output Wiring */

    // master always drives clock
    assign led = led_out ? 1'bZ : 1'b0;

/* State Machine */

    // registers

    always @(posedge clk or posedge reset)
        if (reset) begin
            state_reg <= k_idle;
            cmd_reg   <= 1'b0;
            led_out   <= 1'b0;
            led_next  <= 1'b0;
        end
        else begin
            state_reg <= state_next;
            cmd_reg   <= cmd_next;
            led_out   <= led_next;
        end

    // state transition

    task automatic next_idle(
        input  write,
        input  cmd,

        output state_next,
        output led_next
    );
        if(write && cmd==k_START_CMD) begin
            state_next = k_start;
            led_next = 1'b1;
        end 
        else begin
            state_next = k_idle;
        end
    endtask

    task automatic next_start(
        input  write,
        input  cmd,

        output state_next,
        output led_next
    );
        if(write && cmd==k_STOP_CMD) begin
            state_next = k_idle;
            led_next = 1'b0;
        end 
        else begin
            state_next = k_start;
        end
    endtask

    always @(*) begin

        // defaults
        state_next    = state_reg;
        cmd_next      = cmd_reg;
        led_next      = led_out;

        // state transitions
        case (state_reg)
            k_idle: next_idle( 
                write, cmd, state_next, led_next
            );

            k_start: next_start(
                write, cmd, state_next, led_next
            );
        endcase;
    end

endmodule


