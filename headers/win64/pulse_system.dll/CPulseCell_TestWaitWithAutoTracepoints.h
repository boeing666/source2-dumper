#pragma once

class CPulseCell_TestWaitWithAutoTracepoints : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CUtlString m_TracePrefix; // offset 0xD8, size 0x8, align 8
    CPulse_ResumePoint m_WakeResume; // offset 0xE0, size 0x48, align 255
};
