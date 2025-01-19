pcf_file = ../common/io.pcf

%.json: hw/%.v
	yosys -p "synth_ice40 -top i2c -json $@" $<

%.asc: %.json
	nextpnr-ice40 --up5k --json $< --pcf $(pcf_file) --asc $@
	
%.bin: %.asc
	icepack $< $@

%_tb: test/%_tb.v hw/%.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s $@ $^ -o $@

%_test.v: %.json
	yosys -o $@ $<

%_synth: %_test.v %_tb.v
	iverilog -Wall -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

test: i2c_tb next_idle_tb next_start1_tb next_start2_tb next_hold_tb next_data1_tb next_data2_tb
	./i2c_tb
	./next_idle_tb
	./next_start1_tb
	./next_start2_tb
	./next_hold_tb
	./next_data1_tb
	./next_data2_tb

prog: i2c.bin
	iceprog -S i2c.bin

prog_flash: i2c.bin
	iceprog i2c.bin

clean:
	rm -f *.json *.asc *.bin *_tb *_synth *_test.v *_test *_tb 

.PHONY: clean prog prog_flash test