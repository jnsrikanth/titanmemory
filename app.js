// HBM4 Custom Base Die IP - Interactive Simulation & Architecture Diagram Handler

document.addEventListener('DOMContentLoaded', () => {
    // 1. Simulation Logic
    const priorityRange = document.getElementById('priorityRange');
    const priorityVal = document.getElementById('priorityVal');
    const preemptToggle = document.getElementById('preemptToggle');
    const refreshFreq = document.getElementById('refreshFreq');
    const runSimBtn = document.getElementById('runSimBtn');

    const latencyResult = document.getElementById('latencyResult');
    const refreshStatus = document.getElementById('refreshStatus');
    const robOrder = document.getElementById('robOrder');

    const sigReqValid = document.getElementById('sigReqValid');
    const sigEarlyValid = document.getElementById('sigEarlyValid');
    const sigPreempt = document.getElementById('sigPreempt');
    const sigRespValid = document.getElementById('sigRespValid');

    function updateSimulation() {
        if (!priorityRange) return;
        const priority = parseInt(priorityRange.value, 10);
        const preemptionEnabled = preemptToggle.value === '1';
        const isRefreshActive = refreshFreq.value === 'high';

        if (priority >= 12) {
            priorityVal.textContent = `${priority} (Critical LLM Read)`;
            priorityVal.style.color = '#00f2fe';
        } else {
            priorityVal.textContent = `${priority} (Normal Bulk Read)`;
            priorityVal.style.color = '#94a3b8';
        }

        let latency = 6.0;
        let isPreempted = false;

        if (isRefreshActive) {
            if (priority >= 12 && preemptionEnabled) {
                latency = 1.8;
                isPreempted = true;
            } else {
                latency = 65.0;
                isPreempted = false;
            }
        } else {
            if (priority >= 12 && preemptionEnabled) {
                latency = 1.8;
            } else {
                latency = 6.0;
            }
        }

        latencyResult.textContent = `${latency.toFixed(1)} ns`;
        if (latency <= 2.0) {
            latencyResult.className = 'm-val highlight-green';
        } else if (latency > 20.0) {
            latencyResult.className = 'm-val';
            latencyResult.style.color = '#ef4444';
        } else {
            latencyResult.className = 'm-val highlight-cyan';
        }

        if (isPreempted) {
            refreshStatus.textContent = 'Preempted in < 2 ns (Active Abort)';
            refreshStatus.style.color = '#10b981';
            if (sigPreempt) sigPreempt.className = 'sig-wave preempt-wave active';
        } else if (isRefreshActive) {
            refreshStatus.textContent = 'Stalled by tRFC (65 ns pause)';
            refreshStatus.style.color = '#ef4444';
            if (sigPreempt) sigPreempt.className = 'sig-wave';
        } else {
            refreshStatus.textContent = 'Bank Group Idle';
            refreshStatus.style.color = '#94a3b8';
            if (sigPreempt) sigPreempt.className = 'sig-wave';
        }

        if (priority >= 12) {
            robOrder.textContent = `Priority OOO Commit (Slot #${15 - priority})`;
            robOrder.style.color = '#00f2fe';
        } else {
            robOrder.textContent = 'FIFO Standard Commit';
            robOrder.style.color = '#94a3b8';
        }

        if (sigReqValid) sigReqValid.className = 'sig-wave pulse-wave active';
        if (sigEarlyValid) sigEarlyValid.className = (priority >= 12 && preemptionEnabled) ? 'sig-wave pulse-wave active' : 'sig-wave';
        if (sigRespValid) sigRespValid.className = 'sig-wave resp-wave active';
    }

    if (priorityRange) {
        priorityRange.addEventListener('input', updateSimulation);
        preemptToggle.addEventListener('change', updateSimulation);
        refreshFreq.addEventListener('change', updateSimulation);
        runSimBtn.addEventListener('click', () => {
            sigReqValid.classList.remove('active');
            sigRespValid.classList.remove('active');
            setTimeout(() => {
                sigReqValid.classList.add('active');
                sigRespValid.classList.add('active');
                updateSimulation();
            }, 50);
        });
        updateSimulation();
    }

    // 2. Interactive SVG Architecture Layer Inspector
    const layerGroups = document.querySelectorAll('.svg-layer-group');
    const infoTitle = document.getElementById('infoTitle');
    const infoDesc = document.getElementById('infoDesc');
    const infoSpecs = document.getElementById('infoSpecs');

    const layerData = {
        dram: {
            title: "16-Hi DRAM Core Stack",
            desc: "16 stacked 3D DRAM dies interconnected via Through-Silicon Vias (TSVs). Organized into 64 Bank Groups providing massive raw memory storage.",
            specs: [
                { key: "Stack Configuration", val: "16-Hi / 12-Hi 3D DRAM" },
                { key: "Bank Architecture", val: "64 Independent Bank Groups" },
                { key: "Interconnect", val: "Vertical TSV Pillar Array" },
                { key: "Bus Interface", val: "Pseudo-Channel 256-bit wide" }
            ]
        },
        basedie: {
            title: "Muon Custom Base Logic Die (3nm TSMC / Sky130)",
            desc: "The active intelligence layer at the bottom of the HBM4 stack. Implements hardware refresh preemption (< 2ns), Beat-0 micro-flit early decoding, and a 128-entry priority reorder buffer.",
            specs: [
                { key: "Preemption Overhead", val: "< 1.8 ns (< 2 cycles)" },
                { key: "ROB Capacity", val: "128 Outstanding Entries" },
                { key: "Sideband Controller", val: "APB Control & Status Bus" },
                { key: "PHY VDDQ Domain", val: "0.40 V Ultra-Low Voltage" }
            ]
        },
        interposer: {
            title: "2.5D Silicon Interposer Substrate",
            desc: "High-density passive silicon substrate providing 2048 high-speed signal traces linking the Muon Base Die directly to the host AI accelerator chip.",
            specs: [
                { key: "Data Bus Width", val: "2048-bit Parallel Bus" },
                { key: "Trace Density", val: "Sub-Micron Copper Micro-Bumps" },
                { key: "Packaging Type", val: "CoWoS-S / CoWoS-L Compatible" },
                { key: "Peak Throughput", val: "2.048+ TB/s Bandwidth" }
            ]
        },
        hostasic: {
            title: "Host AI Accelerator / GPU (LLM Engine)",
            desc: "High-performance AI ASIC, GPU, or TPU running LLM attention passes, KV-cache retrievals, and quantitative trading models.",
            specs: [
                { key: "Workload Focus", val: "LLM Inference & Training" },
                { key: "Transaction Mode", val: "Priority Header Tagging" },
                { key: "Target Latency SLA", val: "Deterministic Sub-Microsecond" },
                { key: "Host Interface", val: "HBM4 Host PHY Controller" }
            ]
        }
    };

    layerGroups.forEach(group => {
        group.addEventListener('click', () => {
            layerGroups.forEach(g => g.classList.remove('active-target'));
            group.classList.add('active-target');

            const layerKey = group.getAttribute('data-layer');
            const data = layerData[layerKey];

            if (data && infoTitle) {
                infoTitle.textContent = data.title;
                infoDesc.textContent = data.desc;
                infoSpecs.innerHTML = data.specs.map(s => `
                    <div class="spec-mini">
                        <span class="s-key">${s.key}</span>
                        <span class="s-val">${s.val}</span>
                    </div>
                `).join('');
            }
        });
    });
});
