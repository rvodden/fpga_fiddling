task when_were_given_a_command(
    input [8*13:0] commandName,
    input    [3:0] commandValue
);
    $display("When we're given a %s command", commandName);
    cmd <= commandValue;
    write <= 1'b1;
endtask