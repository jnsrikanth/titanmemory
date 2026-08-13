// HBM4 Custom Base Die IP - Interactive Simulation Logic

document.addEventListener('DOMContentLoaded', () => {
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
        const priority = parseInt(priorityRange.value, 10);
        const preemptionEnabled = preemptToggle.value === '1';
        const isRefreshActive = refreshFreq.value === 'high';

        // Update priority label
        if (priority >= 12) {
            priorityVal.textContent = `${priority} (Critical LLM / High-Pri)`;
            priorityVal.style.color = '#00f2fe';
        } else {
            priorityVal.textContent = `${priority} (Normal / Background Read)`;
            priorityVal.style.color = '#94a3b8';
        }

        // Calculate latency & status
        let latency = 6.0; // Base normal DRAM access latency
        let isPreempted = false;

        if (isRefreshActive) {
            if (priority >= 12 && preemptionEnabled) {
                latency = 1.8; // Zero-stall hardware preempted path
                isPreempted = true;
            } else {
                latency = 65.0; // Stalled by background refresh cycle
                isPreempted = false;
            }
        } else {
            if (priority >= 12 && preemptionEnabled) {
                latency = 1.8; // Low latency path
            } else {
                latency = 6.0;
            }
        }

        // Display results
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
            sigPreempt.className = 'sig-wave preempt-wave active';
        } else if (isRefreshActive) {
            refreshStatus.textContent = 'Stalled by tRFC (65 ns pause)';
            refreshStatus.style.color = '#ef4444';
            sigPreempt.className = 'sig-wave';
        } else {
            refreshStatus.textContent = 'Bank Group Idle';
            refreshStatus.style.color = '#94a3b8';
            sigPreempt.className = 'sig-wave';
        }

        if (priority >= 12) {
            robOrder.textContent = `Priority OOO Commit (Slot #${15 - priority})`;
            robOrder.style.color = '#00f2fe';
        } else {
            robOrder.textContent = 'FIFO Standard Commit';
            robOrder.style.color = '#94a3b8';
        }

        // Pulse waveforms
        sigReqValid.className = 'sig-wave pulse-wave active';
        sigEarlyValid.className = (priority >= 12 && preemptionEnabled) ? 'sig-wave pulse-wave active' : 'sig-wave';
        sigRespValid.className = 'sig-wave resp-wave active';
    }

    priorityRange.addEventListener('input', updateSimulation);
    preemptToggle.addEventListener('change', updateSimulation);
    refreshFreq.addEventListener('change', updateSimulation);
    runSimBtn.addEventListener('click', () => {
        // Trigger visual pulse
        sigReqValid.classList.remove('active');
        sigRespValid.classList.remove('active');
        setTimeout(() => {
            sigReqValid.classList.add('active');
            sigRespValid.classList.add('active');
            updateSimulation();
        }, 50);
    });

    // Initial update
    updateSimulation();
});
