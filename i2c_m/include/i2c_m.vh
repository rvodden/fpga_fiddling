`ifndef _i2c_m_vh
`define _i2c_m_vh

/* verilator lint_off UNUSEDPARAM */

// state
localparam 
    k_wait_for_cmd   = 3'd0, // doing nothing
    k_send_cmd       = 3'd1,
    k_wait_for_ready = 3'd2,
    k_wait_for_done  = 3'd3,
    k_delay          = 3'd4;

localparam
    k_DELAY_CMD = 3'd5; // Write a byte
/* verilator lint_on UNUSEDPARAM */

`endif  // _i2c_m_vh

