task then_cmd_next_should_be(
    input [2:0] value
);
    $write("THen cmd_next should be %d...", value );
    if( cmd_next === value ) $display(" success.");
    else $error("cmd_next is not %b but %b", value, cmd_next);
endtask

task then_cmd_next_should_be_unknown();
    $write("Then cmd_next should be unknown...");
    if ( $isunknown(cmd_next) ) $display(" success.");
    else $error("cmd_next is not unknown, but %b.", cmd_next);
endtask
