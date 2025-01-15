pcf_file = ../common/io.pcf

leds.json: leds.v clockworks.v
	yosys -p "synth_ice40 -top SOC -json $@" $<

leds.asc: leds.json
	nextpnr-ice40 --up5k --json $< --pcf $(pcf_file) --asc $@
	
leds.bin: leds.asc
	icepack $< $@

leds_tb:
	iverilog -DBENCH -DBOARD_FREQ=10 leds_tb.v leds.v -o $@

leds_test.v: leds.json
	yosys -o $@ $<

leds_synth: leds_test.v leds_tb.v
	iverilog -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

prog: leds.bin
	iceprog -S leds.bin

prog_flash: leds.bin
	iceprog leds.bin

clean:
	rm -f leds.json leds.asc leds.bin leds led_test.v led_test

.PHONY: clean prog prog_flash