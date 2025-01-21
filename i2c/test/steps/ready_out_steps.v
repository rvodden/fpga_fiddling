task then_ready_out_should_be(
    input value
);
    $write("THen ready_out should be %d...", value );
    if( ready_out === value ) $display(" success.");
    else $error("ready_out is not %b but %b", value, ctr_next);
endtask
