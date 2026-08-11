#pragma once

class CPulseCell_FireCursors : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0xF8, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlVector< CPulse_OutflowConnection > m_Outflows; // offset 0x48, size 0x18, align 8
    bool m_bWaitForChildOutflows; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x7]; // offset 0x61
    CPulse_ResumePoint m_OnFinished; // offset 0x68, size 0x48, align 255
    CPulse_ResumePoint m_OnCanceled; // offset 0xB0, size 0x48, align 255
};
