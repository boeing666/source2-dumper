#pragma once

struct PulseNodeDynamicOutflows_t  // sizeof 0x18, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t > m_Outflows; // offset 0x0, size 0x18, align 8
};
