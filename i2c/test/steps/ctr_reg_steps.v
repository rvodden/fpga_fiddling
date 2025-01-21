task when_ctr_reg_is_at(
    input [15:0] value
);
    $display("When ctr_reg is at %d", value);
    ctr_reg = value;
    #1;
endtask
