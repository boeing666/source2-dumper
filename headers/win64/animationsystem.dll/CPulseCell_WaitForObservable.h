#pragma once

class CPulseCell_WaitForObservable : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x198, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPulseEditorHeaderIcon MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulseObservableExpression< bool > m_Condition; // offset 0xD8, size 0x78, align 8 | MPropertyDescription MPropertyFriendlyName
    CPulse_ResumePoint m_OnTrue; // offset 0x150, size 0x48, align 255
};
