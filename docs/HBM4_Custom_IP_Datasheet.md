# Technical Datasheet: Custom HBM4 Base-Logic Die IP Core
**Document Version:** 1.1.0  
**Target Applications:** LLM Inference/Training Accelerators, Quantitative Multi-Agent Systems, High-Density AI Data Centers  
**Lead Architect:** srikanthrao  

---

## 1. Product Overview

The **Custom HBM4 Base-Logic Die IP Core** is a proprietary transaction-layer and interconnect microarchitecture engineered for 3D-stacked High Bandwidth Memory 4 (HBM4) chipsets. Fabricated on advanced logic nodes (TSMC 3nm/4nm-class), this IP replaces standard "passive" base dies with a high-performance **Smart Base Die**.

By extending standard JEDEC JESD270-4 protocols, the core delivers **deterministic ultra-low latency**, **hardware refresh preemption**, and **priority-aware out-of-order execution**, resolving critical memory-wall bottlenecks for data-intensive AI workloads.

---

## 2. Key Technical Specifications

| Parameter | Specification | Industry Standard (JEDEC HBM4) | Differentiation |
| :--- | :--- | :--- | :--- |
| **Interface Width** | 2048-bit wide data bus per stack | 2048-bit wide data bus | Fully JEDEC Compliant Physical PHY |
| **Peak Bandwidth** | 1.64 TB/s (Base) to 2.048+ TB/s (Boost) | 1.64 TB/s | Scalable up to 2.8+ TB/s vendor extended |
| **Critical Read Latency** | **< 2.0 ns** (Hardware Refresh Preempted) | 40 – 100 ns (Stalled by Refresh) | **> 20x Latency Reduction** |
| **Granularity** | 256-Byte Micro-Flit Streaming | Fixed 64/128-Byte Burst | Optimized for LLM KV-Cache Lookups |
| **Reorder Buffer (ROB)** | 128-Entry Priority-Aware OOO Scheduler | FIFO / Round-Robin | Eliminates Head-of-Line Blocking |
| **Refresh Handling** | Hardware Refresh Preemption | Non-Preemptible Periodic Refresh | Guaranteed Sub-Microsecond SLA |
| **Supply Voltage** | 0.90V (Core) / 0.40V (Ultra-Low I/O) | 0.90V / 0.70V | Up to 35% Lower PHY I/O Power |

---

## 3. Key Microarchitectural Innovations

### 3.1 Hardware Refresh Preemption Engine
Standard DRAM refreshes (`tRFC`) cause periodic 40–100ns latency spikes. The core integrates an early-decode priority engine that inspects a custom 4-bit header on Beat 0. When a critical transaction (`prio_lvl >= 12`, `preempt = 1`) arrives, background scrubbing is aborted in **< 2 clock cycles**, providing deterministic access.

### 3.2 Priority-Aware Out-of-Order Reorder Buffer (ROB)
- **128 Outstanding Transactions:** Maintains non-blocking tracking across 64 internal bank groups.
- **Dynamic Priority Reordering:** Evaluates completed DRAM payloads and commits high-priority LLM attention reads ahead of earlier low-priority bulk memory traffic.
- **Starvation Prevention:** Integrated 32-bit aging counter (`age`) ensures fair allocation and prevents lower-priority starvation.

### 3.3 256-Byte Micro-Flit Interconnect
Transmits memory payloads in 256-byte micro-flit bursts over 8 beats (`FLIT_BEATS = 8`). Early address and priority headers fire on Beat 0, allowing DRAM bank pre-activation while remaining payload beats are still in transit over the interposer.

---

## 4. Register Map Summary (APB Sideband)

| Address Offset | Register Name | Access | Description |
| :--- | :--- | :--- | :--- |
| `0x0000` | `DEV_ID_REV` | RO | Device ID (0x48424D34) & Silicon Revision |
| `0x0004` | `CTRL_CFG` | RW | Core Enable, Preemption Master Enable, Micro-Flit Mode |
| `0x0008` | `PRIO_THRESH` | RW | Critical Priority Threshold Level (Default: 12) |
| `0x000C` | `ROB_STATUS` | RO | Current ROB Depth, Active Allocations, Full/Empty Flags |
| `0x0010` | `PREEMPT_CNT` | RO | Hardware Refresh Preemption Event Counter |
| `0x0014` | `DVFS_PSTATE` | RW | Dynamic Voltage & Frequency Scaling State (P0–P3) |

---

## 5. Silicon Integration & PDK Support

- **Production Node:** TSMC N3P / N4P Logic Process (Base Die) + CoWoS-S/L Packaging.
- **Test-Chip Prototype Node:** SkyWater 130nm (`sky130A`) Open PDK (Efabless Caravel Shuttle Compatible).
- **Deliverables Package:** Synthesizable SystemVerilog RTL, Verilator Testbench, OpenLane Config, SDC Constraints, GDSII Layout, and Gate-Level Netlist.
