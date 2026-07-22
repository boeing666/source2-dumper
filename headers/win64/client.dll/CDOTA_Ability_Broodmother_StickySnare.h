#pragma once

class CDOTA_Ability_Broodmother_StickySnare : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x6A8, size 0xC, align 4
    float32 duration; // offset 0x6B4, size 0x4, align 4
    float32 width; // offset 0x6B8, size 0x4, align 4
    bool m_bStolenSnareCheck; // offset 0x6BC, size 0x1, align 1
    char _pad_06BD[0x1B]; // offset 0x6BD
    CUtlVector< CHandle< C_BaseEntity > > m_vecSnares; // offset 0x6D8, size 0x18, align 8
};
