pcf_file = ../common/io.pcf

i2c.json: i2c.v
	yosys -p "synth_ice40 -top i2c -json $@" $<

i2c.asc: i2c.json
	nextpnr-ice40 --up5k --json $< --pcf $(pcf_file) --asc $@
	
i2c.bin: i2c.asc
	icepack $< $@

i2c_tb: test/i2c_tb.v hw/i2c.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s i2c_tb $^ -o $@

next_idle_tb: test/test_next_idle/next_idle_tb.v hw/next_idle/next_idle.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s $@ $^ -o $@

next_start1_tb: test/test_next_start1/next_start1_tb.v hw/next_start1/next_start1.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s $@ $^ -o $@

next_start2_tb: test/test_next_start2/next_start2_tb.v hw/next_start2/next_start2.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s $@ $^ -o $@

next_hold_tb: test/test_next_hold/next_hold_tb.v hw/next_hold/next_hold.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s $@ $^ -o $@

i2c_test.v: i2c.json
	yosys -o $@ $<

i2c_synth: i2c_test.v i2c_tb.v
	iverilog -Wall -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

prog: i2c.bin
	iceprog -S i2c.bin

prog_flash: i2c.bin
	iceprog i2c.bin

clean:
	rm -f i2c.json i2c.asc i2c.bin i2c_tb i2c_synth i2c_test.v i2c_test i2c_next_idle_tb 

.PHONY: clean prog prog_flash