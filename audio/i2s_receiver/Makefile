pcf_file = ../../common/io.pcf

%.json: hw/%.v
	yosys -p "synth_ice40 -top i2c -json $@" $<

%.asc: %.json
	nextpnr-ice40 --up5k --json $< --pcf $(pcf_file) --asc $@
	
%.bin: %.asc
	icepack $< $@

obj_dir/%_tb: test/%_tb.v hw/%.v
	verilator -Wall --binary --trace -Wall -j $^ -O3 -o $(notdir $@)

%_test.v: %.json
	yosys -o $@ $<

%_synth: %_test.v %_tb.v
	iverilog -Wall -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

test: ./obj_dir/i2s_receiver_tb

prog: i2c.bin
	iceprog -S i2c.bin

prog_flash: i2c.bin
	iceprog i2c.bin

clean:
	rm -f *.json *.asc *.bin *_tb *_synth *_test.v *_test *_tb 

.PHONY: clean prog prog_flash test
