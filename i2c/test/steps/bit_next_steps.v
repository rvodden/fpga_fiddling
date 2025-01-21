task then_bit_next_should_be_unknown();
    $write("Then bit_next should be unknown...");
    if ( $isunknown(bit_next) ) $display(" success.");
    else $error("bit_next is not unknown, but %b.", state_next);
endtask
    
task then_bit_next_should_be(
    input [3:0] value
);
    $write("THen bit_next should be %d...", value );
    if( bit_next === value ) $display(" success.");
    else $error("bit_next is not %b but %b", value, bit_next);
endtask
