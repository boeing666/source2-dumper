#pragma once

struct CPulseCell_Timeline::TimelineEvent_t  // sizeof 0x50, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    float32 m_flTimeFromPrevious; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CPulse_OutflowConnection m_EventOutflow; // offset 0x8, size 0x48, align 255
};
