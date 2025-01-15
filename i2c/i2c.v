/*
 * This is about as simple as an I2C master can get. 
 * We have some (major) limiations:
 *    * we MUST be the only master on the bus
 *    * we do not support arbitration
 *    * we do not support slave clock stretching
 *
 * Inputs:
 *
 *            clk: the clock
 *          reset: resets all the registers to an initial state - it is asynchronous
 *  clock_divisor: set this to half the number of `clk` cycles in an `SCL` cycle. So
 *                 if you have a 48MHz `clk` and you want a 100KHz `SCL` set this to 480.
 *        data_in: this is the data to be sent during write operations, the LSB is used
 *                 for ack/nack during read operations
 *            cmd: 000: start; 001: restart; 002: stop; 003: read; 004 write;
 *          write: when set the external system asserts that the inputs are in a valid
 *                 state and can be stored in internal registers
 *
 * Outputs:
 *
 *          ready: indicates that the master is in a position to undertake another operation.
 *       data_out: the received data.
 *            ack: indicates that a slave has received the byte.
 *      done_tick: indicates that a data phase (i.e. single byte tx or rx) has completed and
 *                 so the master is ready to send or received another byte.
 *
 * I2C Specification : https://www.nxp.com/docs/en/user-guide/UM10204.pdf
 *
 */

`include "i2c.vh"

task automatic i2c_idle_next(
    input         write,
    input   [3:0] cmd,

    output        ready_out,
    output        state_next,
    output [15:0] ctr_next
);
    ready_out = 1'b1;
    if(write && cmd==k_START_CMD) begin
        state_next = k_start1;
        ctr_next = 15'b0;
    end
endtask

module i2c (
    input        clk, 
    input        reset,
    input [15:0] clock_divisor,
    input [7:0]  data_in,
    input [2:0]  cmd,

    output       ready,
    output [7:0] data_out,
    output       ack,
    output       done_tick,
    
    inout        SDA,
    output       SCL );

/* Parameters */


    // internal registers
    reg  [3:0] state_reg, state_next; // which state we are currently in.
    reg  [2:0] cmd_reg,   cmd_next;   // command we're currently executing
    reg  [8:0] rx_reg,    rx_next;    // buffer for received bits
    reg  [8:0] tx_reg,    tx_next;    // buffer for bits to be transmitted
    reg [15:0] ctr_reg,   ctr_next;   // count the number of clk cycles, when we hit clock_divisor, we reset
    reg  [3:0] bit_reg,   bit_next;   // when in the data_phase, keeps track of which bit in the byte we're on

    reg scl_reg, scl_out;  // registers for the I2C output lines
    reg sca_reg, sca_out; 
    reg receiving;         // when set, the slave is driving the sda line
    reg nack;              // indicates that the master need a slave to resend a byte

    reg        data_phase;            // true if we're sending or receiving data - false if we're in stop, start, restart, idle or hold
    reg [15:0] clock_divisor_reg;     // holds the clock divisor
    reg [16:0] dbl_clock_divisor_reg; // holds double the clock divisor


/* Output Wiring */

    // master always drives clock
    assign SCL = sca_reg ? 1'bZ : 1'b0;

    // if we're receiving set to Z else set to the value of sda_reg
    assign SDA = (receiving || sda_reg) ? 1'bZ : 1'b0;

    assign data_out  = rx_buffer[8:1];
    assign ack       = rx_buffer[0];
    assign done_tick = done_tick_out;
    assign ready     = ready_reg;


/* Input Wiring */
    assign nack = data_in[0]; // used by the master during reveive operations 


/* Internal Wiring */

    // we are receiving when we're in the data phase and the first 8 bits of a read operation or the final bit of a write operation (ack)
    assign receiving = data_phase && ( (cmd_reg == READ_CMD && bit_reg < 8) || (cmd_reg == WRITE_CMD && bit_reg == 8) );

    // update the output registers on clk or reset
    always @(posedge clk or posedge reset) begin
        if(reset) begin
            sda_reg <= 1'b0;
            scl_reg <= 1'b0;
        end else begin
            sda_reg <= sda_out;
            scl_reg <= scL_out;
        end
    end


/* State Machine */

    // registers

    always @(posedge clk or posedge reset)
        if (reset) begin
            state     <= k_idle;
            bit_reg   <=  4'b0;
            cmd_reg   <=  3'b0;
            tx_buffer <=  8'b0;
            rx_buffer <=  8'b0;
            ctr_reg   <= 16'b0;
        end
        else begin
            state     <= state_next;
            bit_reg   <= bit_next;
            cmd_reg   <= cmd_next;
            tx_buffer <= tx_next;
            rx_buffer <= rx_next;
            ctr_reg   <= ctr_next;
        end

    // state transition

    always @(*) begin
        // defaults

        state_next = state_reg;
        ctr_next   = ctr_state + 1;
        bit_next   = bit_reg;
        tx_next    = tx_reg;
        rx_next    = rx_reg;
        cmd_next   = cmd_reg;
        scl_out    = 1'b1;
        sda_out    = 1'b1;
        data_phase = 1'b0;

        // state transitions

        case (state_reg)

            k_idle: i2c_idle_next( 
               write, cmd, ready_out, state_next, ctr_next
            );

            // start contition is defined in section 3.1.4 of the I2C Spec (see intro)

            k_start1: begin
                sda_out = 1'b0;
                if(ctr_reg == dbl_clock_divisor_reg) begin // if we're half way through the SCL cycle
                    state_next = k_start2;
                    ctr_next   = 15'b0;
                end
            end

            k_start2: begin
                sda_out = 1'b0;
                scl_out = 1'b0;
                if(ctr_reg == clock_divisor_reg) begin
                    state_next = k_hold;
                    ctr_next   = 15'b0;
                end
            end

        endcase
    end

endmodule


