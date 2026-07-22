#pragma once

class CPulseCell_BaseYieldingInflow : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0xD8, align 0xFF [vtable abstract] (pulse_runtime_lib) {MGetKV3ClassDefaults MCustomFGDMetadata}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CPulse_ResumePoint m_BaseFlow_OnAfterCancel; // offset 0x48, size 0x48, align 255 | MPulseFGDSkipField
    CPulse_ResumePoint m_BaseFlow_WhileActive; // offset 0x90, size 0x48, align 255 | MPulseFGDSkipField
};
