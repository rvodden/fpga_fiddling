task then_state_next_should_be(
    input    [3:0] stateValue
);
    $write("Then state_next should be %d...", stateValue);
    if ( state_next === stateValue )
        $display(" success.");
    else $error("state_next is not %d, but %d.", stateValue, state_next);
endtask

task then_state_next_should_be_unknown();
    $write("Then state_next should be unknown...");
    if ( $isunknown(state_next) ) $display(" success.");
    else $error("state_next is not unknown, but %d.", state_next);
endtask
