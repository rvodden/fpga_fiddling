`ifndef _i2c_vh
`define _i2c_vh

// commands
localparam 
        k_START_CMD   = 3'd0, // Send a start condition
        k_RESTART_CMD = 3'd1, // Send a stop condition
        k_STOP_CMD    = 3'd2, // Send a reset condition
        k_READ_CMD    = 3'd3, // Read a byte
        k_WRITE_CMD   = 3'd4; // Write a byte

    // states
localparam
        k_idle     = 4'd0,  // default state, waiting for the start command
        k_start1   = 4'd1,  // first half of the start condition
        k_start2   = 4'd2,  // 2nd half of the start condition
        k_hold     = 4'd3,  // holding state for command subsequent to start command - we control the bus now
        k_restart  = 4'd4,  // sends a restart condition
        k_stop1    = 4'd5,  // first half of a stop condition
        k_stop2    = 4'd6,  // second half of a stop condition
        k_data1    = 4'd7,  // four stages of a bit send or receive
        k_data2    = 4'd8,  
        k_data3    = 4'd9,
        k_data4    = 4'd10,
        k_data_end = 4'd11; // finished sending or receiving a bit

`endif  // _i2c_vh