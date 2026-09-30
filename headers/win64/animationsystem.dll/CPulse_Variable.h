#pragma once

class CPulse_Variable  // sizeof 0x60, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseSymbol_t m_Name; // offset 0x0, size 0x10, align 8
    CUtlString m_Description; // offset 0x10, size 0x8, align 8
    CPulseValueFullType m_Type; // offset 0x18, size 0x18, align 8
    KeyValues3 m_DefaultValue; // offset 0x30, size 0x10, align 8
    char _pad_0040[0x4]; // offset 0x40
    PulseVariableKeysSource_t m_nKeysSource; // offset 0x44, size 0x4, align 4
    bool m_bIsPublicBlackboardVariable; // offset 0x48, size 0x1, align 1
    bool m_bIsObservable; // offset 0x49, size 0x1, align 1
    char _pad_004A[0x2]; // offset 0x4A
    PulseDocNodeID_t m_nEditorNodeID; // offset 0x4C, size 0x4, align 255
    KeyValues3 m_Metadata; // offset 0x50, size 0x10, align 8
};
