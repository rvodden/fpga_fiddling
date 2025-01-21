task then_scl_out_should_be(
    input value
);
    $write("THen scl_out should be %d...", value );
    if( scl_out === value ) $display(" success.");
    else $error("scl_out is not %b but %b", value, scl_out);
endtask;
