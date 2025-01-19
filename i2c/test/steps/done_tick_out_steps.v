task then_done_tick_out_should_be_unknown();
    $write("Then done_tick_out should be unknown...");
    if ( $isunknown(done_tick_out) ) $display(" success.");
    else $error("done_tick_out is not unknown, but %b.", state_next);
endtask
    
task then_done_tick_out_should_be(
    input [15:0] value
);
    $write("THen done_tick_out should be %d...", value );
    if( done_tick_out === value ) $display(" success.");
    else $error("done_tick_out is not %b but %b", value, done_tick_out);
endtask