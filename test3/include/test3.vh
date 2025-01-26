`ifndef _i2c_vh
`define _i2c_vh

// commands
localparam 
        k_START_CMD   = 1'd0, // Send a start condition
        k_STOP_CMD    = 1'd1; // Send a reset condition

// states
localparam
        k_idle     = 1'd0,  // default state, waiting for the start command
        k_start    = 1'd1;  // first half of the start condition

`endif  // _i2c_vh