task automatic next_data4(
    input  [15:0] ctr_reg,
    input  [15:0] clock_divisor_reg,
    input   [8:0] tx_reg,
    input   [3:0] bit_reg,

    output        sda_out,
    output        scl_out,
    output        data_phase,
    output        done_tick_out,
    output  [3:0] bit_next,
    output  [9:0] tx_next,
    output  [3:0] state_next,
    output [15:0] ctr_next
);
    sda_out    = tx_reg[8];
    scl_out    = 1'b0;
    data_phase = 1'b1;

    if(ctr_reg == clock_divisor_reg) begin // if we're quarter way through the SCL cycle
        ctr_next   = 15'b0;
        if(bit_reg == 4'd8) begin // have we finished sending data and acks?
            state_next = k_data_end;
            done_tick_out = 1'b1;
        end
        else begin
            tx_next = {tx_reg[7:0], 1'b0}; // shift the data
            bit_next = bit_reg + 4'b1;
            state_next = k_data1; // send more data
        end
    end
endtask
