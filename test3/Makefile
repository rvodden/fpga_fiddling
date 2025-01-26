PCF_FILE = ../common/i2c.pcf

MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
CURRENT_DIR := $(notdir $(patsubst %/,%,$(dir $(MKFILE_PATH))))

%.json: hw/%.v
	yosys -p "synth_ice40 -top $(basename $(notdir $@)) -json $@" $<

%.asc: %.json
	nextpnr-ice40 --up5k --json $< --pcf $(PCF_FILE) --asc $@
	
%.bin: %.asc
	icepack $< $@

%_tb: test/%_tb.v hw/%.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=10 -s $@ $^ -o $@

%_test.v: %.json
	yosys -o $@ $<

%_synth: %_test.v %_tb.v
	iverilog -Wall -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

prog: $(CURRENT_DIR).bin
	iceprog -S $<

prog_flash: $(CURRENT_DIR).bin
	iceprog $<

clean:
	rm -f *.json *.asc *.bin *_tb *_synth *_test.v *_test *_tb 

.PHONY: clean prog prog_flash test
