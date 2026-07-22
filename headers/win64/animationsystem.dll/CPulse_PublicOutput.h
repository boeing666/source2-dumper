#pragma once

class CPulse_PublicOutput  // sizeof 0x28, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseSymbol_t m_Name; // offset 0x0, size 0x10, align 8
    CUtlString m_Description; // offset 0x10, size 0x8, align 8
    CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // offset 0x18, size 0x10, align 8
};
