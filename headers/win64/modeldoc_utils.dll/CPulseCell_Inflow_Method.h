#pragma once

class CPulseCell_Inflow_Method : public CPulseCell_Inflow_BaseEntrypoint /*0x0*/  // sizeof 0xC8, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    PulseSymbol_t m_MethodName; // offset 0x80, size 0x10, align 8
    CUtlString m_Description; // offset 0x90, size 0x8, align 8
    bool m_bIsPublic; // offset 0x98, size 0x1, align 1
    char _pad_0099[0x7]; // offset 0x99
    CPulseValueFullType m_ReturnType; // offset 0xA0, size 0x18, align 8
    CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // offset 0xB8, size 0x10, align 8
};
