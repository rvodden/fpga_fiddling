pcf_file = ../common/soc.pcf

%.json: hw/%.v
	yosys -p "read_verilog $< ; synth_ice40 -top $(basename $(notdir $@)) -json $@" 

%.asc: %.json
	nextpnr-ice40 --up5k --package sg48 --json $< --pcf $(pcf_file) --asc $@
	
%.bin: %.asc
	icepack $< $@

obj_dir/%_tb: test/%_tb.v hw/%.v
	verilator -Wall --binary --trace -Wall -Wno-UNUSEDSIGNAL -j $< -O3 -o $(notdir $@) -DBENCH

%_tb: test/%_tb.v hw/%.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=12 -s $@ $< -o $@

%_test.v: %.json
	yosys -o $@ $<

%_synth: %_test.v %_tb.v
	iverilog -Wall -g2012 -o $@ -D POST_SYNTHESIS $^ `yosys-config --datdir/ice40/cells_sim.v`

test: obj_dir/i2c_tb obj_dir/next_idle_tb obj_dir/next_start1_tb obj_dir/next_start2_tb \
	obj_dir/next_hold_tb obj_dir/next_data1_tb obj_dir/next_data2_tb obj_dir/next_data3_tb obj_dir/next_data4_tb \
	obj_dir/next_data_end_tb obj_dir/next_restart_tb obj_dir/next_stop1_tb obj_dir/next_stop2_tb 
	./obj_dir/next_idle_tb
	./obj_dir/next_start1_tb
	./obj_dir/next_start2_tb
	./obj_dir/next_hold_tb
	./obj_dir/next_data1_tb
	./obj_dir/next_data2_tb
	./obj_dir/next_data3_tb
	./obj_dir/next_data4_tb
	./obj_dir/next_restart_tb
	./obj_dir/next_stop1_tb
	./obj_dir/next_stop2_tb
	./obj_dir/i2c_tb

prog: soc.bin
	iceprog -S soc.bin

prog_flash: soc.bin
	iceprog soc.bin

clean:
	rm -f *.json *.asc *.bin *_tb *_synth *_test.v *_test *_tb 

.PHONY: clean prog prog_flash test
