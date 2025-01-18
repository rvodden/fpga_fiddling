`include "include/i2c.vh"

task automatic next_hold(
    input         write,
    input   [2:0] cmd,
    input   [7:0] data_in,
    input         nack,

    output        ready_out,
    output        sda_out,
    output        scl_out,
    output        bit_next,
    output  [8:0] tx_next,
    output  [2:0] cmd_next,
    output  [3:0] state_next,
    output [15:0] ctr_next
);
    ready_out = 1'b1;
    sda_out   = 1'b0;
    scl_out   = 1'b0;

    if(write) begin
        cmd_next = cmd;
        ctr_next = 16'b0;
        case(cmd)
            k_RESTART_CMD, k_START_CMD:
                state_next = k_restart;
            k_STOP_CMD:
                state_next = k_stop1;
            k_READ_CMD, k_WRITE_CMD: begin
                bit_next = 1'b0;
                state_next = k_data1;
                tx_next = {data_in, nack};            
            end
        endcase
    end

endtask
