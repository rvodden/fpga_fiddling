task when_were_given_a_command(
    input    [2:0] commandValue
);
    $display("When we're given a %d command", commandValue);
    cmd   = commandValue;
    write = 1'b1;
endtask
