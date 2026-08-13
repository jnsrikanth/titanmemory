# Advanced Verilator Makefile for HBM4 Custom Core

VERILATOR = verilator
TOP       = tb_hbm4_custom
RTL_DIR   = rtl
TB_DIR    = tb

SOURCES = \
	$(RTL_DIR)/hbm4_custom_pkg.sv \
	$(RTL_DIR)/priority_router.sv \
	$(RTL_DIR)/micro_flit_engine.sv \
	$(RTL_DIR)/reorder_buffer.sv \
	$(RTL_DIR)/hbm4_custom_top.sv \
	$(TB_DIR)/hbm4_dram_model.sv \
	$(TB_DIR)/tb_hbm4_custom.sv

all: sim

sim:
	$(VERILATOR) --cc --exe --main --build -Wall --trace \
		-Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-VARHIDDEN -Wno-BLKSEQ \
		--top-module $(TOP) \
		$(SOURCES) \
		--timing \
		-o $(TOP)
	./obj_dir/$(TOP)

wave:
	gtkwave wave.vcd &

clean:
	rm -rf obj_dir *.vcd

.PHONY: all sim wave clean
