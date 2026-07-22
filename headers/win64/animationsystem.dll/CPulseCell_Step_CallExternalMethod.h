#pragma once

class CPulseCell_Step_CallExternalMethod : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0xC8, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseSymbol_t m_MethodName; // offset 0x48, size 0x10, align 8
    PulseSymbol_t m_GameBlackboard; // offset 0x58, size 0x10, align 8
    CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // offset 0x68, size 0x10, align 8
    PulseMethodCallMode_t m_nAsyncCallMode; // offset 0x78, size 0x4, align 4
    char _pad_007C[0x4]; // offset 0x7C
    CPulse_ResumePoint m_OnFinished; // offset 0x80, size 0x48, align 255
};
