#pragma once

class CPulseCell_Timeline : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x140, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CUtlVector< CPulseCell_Timeline::TimelineEvent_t > m_TimelineEvents; // offset 0xD8, size 0x18, align 8
    bool m_bWaitForChildOutflows; // offset 0xF0, size 0x1, align 1
    char _pad_00F1[0x7]; // offset 0xF1
    CPulse_ResumePoint m_OnFinished; // offset 0xF8, size 0x48, align 255
};
