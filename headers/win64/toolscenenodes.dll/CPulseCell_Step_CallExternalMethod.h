#pragma once

class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x150, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    PulseSymbol_t m_MethodName; // offset 0xD8, size 0x10, align 8
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardIndex; // offset 0xE8, size 0x2, align 255
    char _pad_00EA[0x6]; // offset 0xEA
    CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // offset 0xF0, size 0x10, align 8
    PulseMethodCallMode_t m_nAsyncCallMode; // offset 0x100, size 0x4, align 4
    char _pad_0104[0x4]; // offset 0x104
    CPulse_ResumePoint m_OnFinished; // offset 0x108, size 0x48, align 255
};
