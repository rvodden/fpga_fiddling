task then_rx_next_should_be_unknown();
    $write("Then rx_next should be unknown...");
    if ( $isunknown(rx_next) ) $display(" success.");
    else $error("rx_next is not unknown, but %b.", state_next);
endtask
    
task then_rx_next_should_be(
    input [8:0] value
);
    $write("THen rx_next should be %d...", value );
    if( rx_next === value ) $display(" success.");
    else $error("rx_next is not %b but %b", value, rx_next);
endtask
