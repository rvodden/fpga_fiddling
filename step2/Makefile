filename = leds
pcf_file = ../common/io.pcf

build:
	yosys -p "synth_ice40 -top SOC -json $(filename).json" $(filename).v
	nextpnr-ice40 --up5k --json $(filename).json --pcf $(pcf_file) --asc $(filename).asc
	icepack $(filename).asc $(filename).bin

verify:
	iverilog -DBENCH -DBOARD_FREQ=10 bench_leds.v leds.v -o leds
	vvp leds

prog: #for sram
	iceprog -S $(filename).bin

prog_flash:
	iceprog $(filename).bin

clean:
	rm -rf $(filename).blif $(filename).asc $(filename).bin