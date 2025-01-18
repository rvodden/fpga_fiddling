task then_ctr_next_should_unknown();
    $write("Then ctr_next should be unknown...");
    if ( $isunknown(ctr_next) ) $display(" success.");
    else $error("ctr_next is not unknown, but %b.", state_next);
endtask
    
task then_ctr_next_should_be(
    input [15:0] value
);
    $write("THen ctr_next should be %d...", value );
    if( ctr_next === value ) $display(" success.");
    else $error("ctr_next is not %b but %b", value, ctr_next);
endtask