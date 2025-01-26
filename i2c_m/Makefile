pcf_file = ../common/i2c.pcf

%.json: hw/%.v
	yosys -p "read_verilog -I../i2c $< ; synth_ice40 -top i2c_m -json $@" 

%.asc: %.json
	nextpnr-ice40 --up5k --package sg48 --json $< --pcf $(pcf_file) --asc $@
	
%.bin: %.asc
	icepack $< $@

obj_dir/%_tb: test/%_tb.v hw/%.v
	verilator -Wall --binary --trace -Wall -I../i2c -j $< -O3 -o $(notdir $@)

%_tb: test/%_tb.v hw/%.v
	iverilog -Wall -g2012 -DBENCH -DBOARD_FREQ=12 -I../i2c -s $@ $< -o $@

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

prog: i2c.bin
	iceprog -S i2c_m.bin

prog_flash: i2c_m.bin
	iceprog i2c_m.bin

clean:
	rm -f *.json *.asc *.bin *_tb *_synth *_test.v *_test *_tb 

.PHONY: clean prog prog_flash test
