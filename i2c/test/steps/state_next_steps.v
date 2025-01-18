task then_state_next_should_be(
    input [8*10:0] stateName,
    input    [3:0] stateValue
);
    $write("Then next state should be %s...", stateName);
    if ( state_next === stateValue )
        $display(" success.");
    else $error("state_next is not %s(%b), but %b.", stateName, stateValue, state_next);
endtask

task then_state_next_should_be_unknown();
    $write("Then next state should be unknown...");
    if ( $isunknown(state_next) ) $display(" success.");
    else $error("state_next is not unknown, but %b.", state_next);
endtask
