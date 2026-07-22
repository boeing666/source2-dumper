#pragma once

class CPulseCell_TestYieldWithObservables : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    float32 m_flWatchForFloatValue; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x4]; // offset 0xDC
    CPulseObservableExpression< float32 > m_LiveFloatValue; // offset 0xE0, size 0x78, align 8
    CUtlString m_WatchForStringValue; // offset 0x158, size 0x8, align 8
    CPulseObservableExpression< CUtlString > m_LiveStringValue; // offset 0x160, size 0x78, align 8
    CPulse_ResumePoint m_WakeResume; // offset 0x1D8, size 0x48, align 255
};
