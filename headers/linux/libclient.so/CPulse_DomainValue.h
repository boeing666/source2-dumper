#pragma once

class CPulse_DomainValue  // sizeof 0x30, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    PulseDomainValueType_t m_nType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CGlobalSymbolCaseSensitive m_Value; // offset 0x8, size 0x8, align 8
    CPulseValueFullType m_RequiredRuntimeType; // offset 0x10, size 0x18, align 8
    char _pad_0028[0x8]; // offset 0x28
};
