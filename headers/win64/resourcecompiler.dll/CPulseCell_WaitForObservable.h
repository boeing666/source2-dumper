#pragma once

class CPulseCell_WaitForObservable : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPulseEditorHeaderIcon MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseObservableBoolExpression_t m_Condition; // offset 0x48, size 0x78, align 8 | MPropertyDescription
    CPulse_ResumePoint m_OnTrue; // offset 0xC0, size 0x48, align 255
};
