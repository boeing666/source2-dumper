#pragma once

class CPulseCell_ObservableSwitchState : public CPulseCell_BaseState /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulseObservableExpression< CPulseVariant > m_SwitchValue; // offset 0xD8, size 0x90, align 8 | MPropertyDescription MPropertyFriendlyName
    CPulseObservableSwitchCases m_Cases; // offset 0x168, size 0x78, align 8 | MPulseFGDSkipField
};
