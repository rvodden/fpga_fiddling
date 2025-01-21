task then_sda_out_should_be(
    input value
);
    $write("THen sda_out should be %d...", value );
    if( sda_out === value ) $display(" success.");
    else $error("sda_out is not %b but %b", value, sda_out);
endtask;
