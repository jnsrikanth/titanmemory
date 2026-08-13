# Synopsys Design Constraints (SDC) for HBM4 Custom Core
# Target PDK: SkyWater 130nm (sky130A)

set clk_name clk
set clk_period 10.0
set clk_port [get_ports $clk_name]

# Create Clock
create_clock -name $clk_name -period $clk_period $clk_port
set_clock_uncertainty 0.25 [get_clocks $clk_name]
set_clock_transition 0.15 [get_clocks $clk_name]

# Input / Output Delays
set_input_delay -clock $clk_name 2.0 [all_inputs]
set_input_delay -clock $clk_name 0.0 $clk_port

set_output_delay -clock $clk_name 2.0 [all_outputs]

# Driving Cell & Load
set_driving_cell -lib_cell sky130_fd_sc_hd__inv_2 [all_inputs]
set_load 0.035 [all_outputs]

# Timing Derivatives
set_max_fanout 10 [current_design]
set_max_transition 1.5 [current_design]
