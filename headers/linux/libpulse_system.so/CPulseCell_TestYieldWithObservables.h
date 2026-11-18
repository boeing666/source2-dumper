#pragma once

class CPulseCell_TestYieldWithObservables : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    float32 m_flWatchForFloatValue; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x4]; // offset 0xDC
    CUtlString m_WatchForStringValue; // offset 0xE0, size 0x8, align 8
    CPulse_ResumePoint m_WakeResume; // offset 0xE8, size 0x48, align 255
};
