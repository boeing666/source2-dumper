#pragma once

class CPulseCell_TestWaitWithCursorState : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x168, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulse_ResumePoint m_WakeResume; // offset 0xD8, size 0x48, align 255
    CPulse_ResumePoint m_WakeFail; // offset 0x120, size 0x48, align 255
};
