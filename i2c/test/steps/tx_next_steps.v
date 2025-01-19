task then_tx_next_should_be_unknown();
    $write("Then tx_next should be unknown...");
    if ( $isunknown(tx_next) ) $display(" success.");
    else $error("tx_next is not unknown, but %b.", state_next);
endtask
    
task then_tx_next_should_be(
    input [15:0] value
);
    $write("THen tx_next should be %d...", value );
    if( tx_next === value ) $display(" success.");
    else $error("tx_next is not %b but %b", value, tx_next);
endtask