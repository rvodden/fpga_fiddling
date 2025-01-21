`include "include/i2c.vh"

task automatic next_hold(
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
                bit_next = 4'b0;
                state_next = k_data1;
                tx_next = {data_in, nack};
            end
            default:  begin // catch invalid commands and restart;
                state_next = k_start1;
                tx_next    = 9'b0;
                bit_next   = 4'b0;
            end
        endcase
    end else begin
        state_next = k_hold;
    end

endtask
