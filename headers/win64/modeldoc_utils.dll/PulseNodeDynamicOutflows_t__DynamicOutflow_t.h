#pragma once

struct PulseNodeDynamicOutflows_t::DynamicOutflow_t  // sizeof 0x50, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_OutflowID; // offset 0x0, size 0x8, align 8
    CPulse_OutflowConnection m_Connection; // offset 0x8, size 0x48, align 255 | MFgdFromSchemaCompletelySkipField
};
