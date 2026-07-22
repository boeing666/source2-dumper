#pragma once

class CPulse_OutputConnection  // sizeof 0x40, align 0x8 [trivial_dtor] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseSymbol_t m_SourceOutput; // offset 0x0, size 0x10, align 8
    PulseSymbol_t m_TargetEntity; // offset 0x10, size 0x10, align 8
    PulseSymbol_t m_TargetInput; // offset 0x20, size 0x10, align 8
    PulseSymbol_t m_Param; // offset 0x30, size 0x10, align 8
};
