task then_data_phase_should_be(
    input    [3:0] value
);
    $write("Then data_phase should be %b...", value);
    if ( data_phase === value )
        $display(" success.");
    else $error("data_phase is not %b, but %b.", value, data_phase);
endtask

task then_data_phase_should_be_unknown();
    $write("Then data_phase should be unknown...");
    if ( $isunknown(data_phase) ) $display(" success.");
    else $error("data_phase is not unknown, but %b.", data_phase);
endtask
