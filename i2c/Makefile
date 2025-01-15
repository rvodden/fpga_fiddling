pcf_file = ../common/io.pcf

i2c.json: i2c.v
	yosys -p "synth_ice40 -top i2c -json $@" $<

i2c.asc: i2c.json
	nextpnr-ice40 --up5k --json $< --pcf $(pcf_file) --asc $@
	
i2c.bin: i2c.asc
	icepack $< $@

i2c_tb: i2c_tb.v i2c.v
	iverilog -g2012 -DBENCH -DBOARD_FREQ=10 i2c_tb.v i2c.v -o $@

i2c_test.v: i2c.json
	yosys -o $@ $<

i2c_synth: i2c_test.v i2c_tb.v
	iverilog -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

prog: i2c.bin
	iceprog -S i2c.bin

prog_flash: i2c.bin
	iceprog i2c.bin

clean:
	rm -f i2c.json i2c.asc i2c.bin i2c_tb i2c_synth i2c_test.v i2c_test

.PHONY: clean prog prog_flash