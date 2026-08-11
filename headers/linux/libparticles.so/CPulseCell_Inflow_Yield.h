#pragma once

class CPulseCell_Inflow_Yield : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulse_ResumePoint m_UnyieldResume; // offset 0xD8, size 0x48, align 255
};
