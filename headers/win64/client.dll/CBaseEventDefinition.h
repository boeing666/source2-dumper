#pragma once

class CBaseEventDefinition  // sizeof 0x18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bMustBeOwned; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    uint32 m_unDefaultEventPoints; // offset 0xC, size 0x4, align 4
    uint32 m_unEventPointsPerLevel; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
