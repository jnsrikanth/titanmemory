# Actionable Guide: Efabless / SkyWater 130nm Open MPW Shuttle Tapeout

## 1. What is an MPW Shuttle?
A **Multi-Project Wafer (MPW)** shuttle allows dozens of independent chip designs to share the cost of a single silicon manufacturing run. 

Instead of paying $1M–$2M for a dedicated mask set, a shuttle run drops your chip onto a shared 200mm wafer for **$10,000 to $20,000** (or even **$0** via sponsored open research grants from Google / Efabless).

---

## 2. What Do You Receive Back in 3–4 Months?
When the shuttle run completes at the SkyWater foundry in Minnesota, USA:
1. **10 to 50 Packaged Silicon Chips** (QFN-64 or LGA packaging).
2. **Breakout / Evaluation Board** (plug-and-play PCB with socket for your chip).
3. **USB-to-SPI/APB Debug Interface** to connect the physical chip directly to your MacBook or PC.

### What You Can Test on Real Physical Silicon:
- **Preemption Latency:** Measure exact nanosecond response times when preempting background refresh cycles.
- **Power Consumption:** Measure real VDD core (0.9V) and VDDQ (0.4V) power draw under dynamic load.
- **Register Configuration:** Write to the APB registers to tweak priority thresholds and monitor hardware counter status.

---

## 3. Concrete Action Plan for MPW Shuttle Submission

### Step 1: Caravel User Project Integration
Efabless provides a standardized silicon "harness" called **Caravel**. Caravel includes a RISC-V management SoC, power pads, and a 2.92mm × 3.52mm (`~10.27 mm²`) **User Project Area**.

```bash
# Clone the Caravel user project template
git clone https://github.com/efabless/caravel_user_project.git hbm4_shuttle
cd hbm4_shuttle

# Drop your synthesized netlist and OpenLane config inside
cp -r /Users/srikanthjallapuram/Ventures/MyMemory/hbm4_custom/openlane/hbm4_custom_top openlane/
```

### Step 2: Instantiation in `user_project_wrapper.v`
Connect `hbm4_custom_top` I/O ports to the Caravel user logic bus (`la_data_in`, `user_clock2`, `io_in`, `io_out`).

### Step 3: Run Pre-check DRC/LVS Validation
```bash
# Run automated pre-check script provided by Efabless
make precheck
```
This runs KLayout DRC (Design Rule Checking), Magic LVS (Layout vs Schematic), and antenna checks to ensure 100% foundry compliance.

### Step 4: Submit to Shuttle Reservation
Upload your final GDSII design file to the **Efabless Platform** (platform.efabless.com).
- **Manufacturing Timeline:** 12 to 16 weeks from wafer tapeout to packaged chip delivery.
