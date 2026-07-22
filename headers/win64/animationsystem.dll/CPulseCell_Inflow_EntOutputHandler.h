#pragma once

class CPulseCell_Inflow_EntOutputHandler : public CPulseCell_Inflow_BaseEntrypoint /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    PulseSymbol_t m_SourceEntity; // offset 0x80, size 0x10, align 8
    PulseSymbol_t m_SourceOutput; // offset 0x90, size 0x10, align 8
    CPulseValueFullType m_ExpectedParamType; // offset 0xA0, size 0x18, align 8
};
