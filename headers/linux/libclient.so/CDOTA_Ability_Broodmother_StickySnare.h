#pragma once

class CDOTA_Ability_Broodmother_StickySnare : public C_DOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x824, size 0xC, align 4
    float32 duration; // offset 0x830, size 0x4, align 4
    float32 width; // offset 0x834, size 0x4, align 4
    bool m_bStolenSnareCheck; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x1F]; // offset 0x839
    CUtlVector< CHandle< C_BaseEntity > > m_vecSnares; // offset 0x858, size 0x18, align 8
};
