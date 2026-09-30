#pragma once

class CBaseEventDefinition  // sizeof 0x138, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_unEventStartTime; // offset 0x8, size 0x4, align 4
    uint32 m_unEventEndTime; // offset 0xC, size 0x4, align 4
    uint32 m_unExpirationDate; // offset 0x10, size 0x4, align 4
    bool m_bMustBeOwned; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    uint32 m_unDefaultEventPoints; // offset 0x18, size 0x4, align 4
    uint32 m_unEventPointsPerLevel; // offset 0x1C, size 0x4, align 4
    char _pad_0020[0x118]; // offset 0x20
};
