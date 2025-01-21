/*
 * This is about as simple as an I2C master can get. 
 * We have some (major) limitations:
 *    * we MUST be the only master on the bus
 *    * we do not support arbitration
 *    * we do not support slave clock stretching
 *
 * Inputs:
 *
 *            clk: the clock
 *          reset: resets all the registers to an initial state - it is asynchronous
 *          write: when set the external system asserts that the inputs are in a valid
 *                 state and can be stored in internal registers
 *  clock_divisor: set this to half the number of clk cycles in an SCL cycle. So
 *                 if you have a 48MHz clk and you want a 100KHz SCL set this to 480.
 *        data_in: this is the data to be sent during write operations, the LSB is used
 *                 for ack/nack during read operations
 *            cmd: 000: start; 001: restart; 002: stop; 003: read; 004 write;
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

`include "include/i2c.vh"

module i2c (
    input        clk, 
    input        reset,
    input        write,
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
    reg sda_reg, sda_out; 
    reg receiving;         // when set, the slave is driving the sda line
    reg nack;              // indicates that the master needs a slave to resend a byte
    reg ready_out;         // indicates that the master is ready to recceive a new command
    reg done_tick_out;     // indicates that the master has completed tx or rx of a byte

    reg        data_phase;            // true if we're sending or receiving data - false if we're in stop, start, restart, idle or hold
    
    // internal wires
    wire [15:0] clock_divisor_reg;     // holds the clock divisor
    wire [15:0] dbl_clock_divisor_reg; // holds double the clock divisor


/* Output Wiring */

    // master always drives clock
    assign SCL = scl_reg ? 1'bZ : 1'b0;

    // if we're receiving set to Z else set to the value of sda_reg
    assign SDA = (receiving || sda_reg) ? 1'bZ : 1'b0;

    assign data_out  = rx_reg[8:1];
    assign ack       = rx_reg[0];
    assign done_tick = done_tick_out;
    assign ready     = ready_out;


/* Input Wiring */
    assign nack = data_in[0]; // used by the master during reveive operations 

/* Internal Wiring */

    // we are receiving when we're in the data phase and the first 8 bits of a read operation or the final bit of a write operation (ack)
    assign receiving = data_phase && ( (cmd_reg == k_READ_CMD && bit_reg < 8) || (cmd_reg == k_WRITE_CMD && bit_reg == 8) );

    // update the output registers on clk or reset
    always @(posedge clk or posedge reset) begin
        if(reset) begin
            scl_reg <= 1'b1;
            sda_reg <= 1'b1;
        end else begin
            scl_reg <= scl_out;
            sda_reg <= sda_out;
        end
    end

    assign clock_divisor_reg = clock_divisor;
    assign dbl_clock_divisor_reg = { clock_divisor[14:0] , 1'b0 };

/* State Machine */

    // includes
    `include "hw/next_idle.v"
    `include "hw/next_start1.v"
    `include "hw/next_start2.v"
    `include "hw/next_hold.v"
    `include "hw/next_data1.v"
    `include "hw/next_data2.v"
    `include "hw/next_data3.v"
    `include "hw/next_data4.v"
    `include "hw/next_data_end.v"
    `include "hw/next_stop1.v"
    `include "hw/next_stop2.v"
    `include "hw/next_restart.v"

    // registers

    always @(posedge clk or posedge reset)
        if (reset) begin
            state_reg <= k_idle;
            bit_reg   <=  4'b0;
            cmd_reg   <=  3'b0;
            tx_reg    <=  9'b0;
            rx_reg    <=  9'b0;
            ctr_reg   <= 16'b0;
        end
        else begin
            state_reg <= state_next;
            bit_reg   <= bit_next;
            cmd_reg   <= cmd_next;
            tx_reg    <= tx_next;
            rx_reg    <= rx_next;
            ctr_reg   <= ctr_next;
        end

    // state transition

    always @(*) begin
        // defaults

        state_next    = state_reg;
        ctr_next      = ctr_reg + 1;
        bit_next      = bit_reg;
        tx_next       = tx_reg;
        rx_next       = rx_reg;
        cmd_next      = cmd_reg;
        done_tick_out = 1'b0;
        ready_out     = 1'b0;
        scl_out       = 1'b1;
        sda_out       = 1'b1;
        data_phase    = 1'b0;

        // state transitions

        case (state_reg)

            k_idle: next_idle();

            // start contition is defined in section 3.1.4 of the I2C Spec (see intro)

            k_start1: next_start1(
            );
            
            k_start2: next_start2(
            );

            k_hold: next_hold(
            );

            k_data1: next_data1(
            );

            k_data2: next_data2(
            );
            
            k_data3: next_data3(
            );
            
            k_data4: next_data4(
            );

            k_data_end: next_data_end(
            );
            
            k_restart: next_restart(
            );

            k_stop1: next_stop1(
            );

            k_stop2: next_stop2(
            );

            default: next_stop2(
            ); // if we get an invalid command, give up and start again.
        endcase
    end


    // output wiring
    
endmodule


