#pragma once

class CDOTA_Ability_Broodmother_StickySnare : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x580, size 0xC, align 4
    float32 duration; // offset 0x58C, size 0x4, align 4
    float32 width; // offset 0x590, size 0x4, align 4
    bool m_bStolenSnareCheck; // offset 0x594, size 0x1, align 1
    char _pad_0595[0x1B]; // offset 0x595
    CUtlVector< CHandle< CBaseEntity > > m_vecSnares; // offset 0x5B0, size 0x18, align 8
};
