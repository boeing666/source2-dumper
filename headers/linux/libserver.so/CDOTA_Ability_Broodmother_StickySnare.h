#pragma once

class CDOTA_Ability_Broodmother_StickySnare : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x85C, size 0xC, align 4
    float32 duration; // offset 0x868, size 0x4, align 4
    float32 width; // offset 0x86C, size 0x4, align 4
    bool m_bStolenSnareCheck; // offset 0x870, size 0x1, align 1
    char _pad_0871[0x1F]; // offset 0x871
    CUtlVector< CHandle< CBaseEntity > > m_vecSnares; // offset 0x890, size 0x18, align 8
};
