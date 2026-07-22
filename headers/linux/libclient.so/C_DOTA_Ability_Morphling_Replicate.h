#pragma once

class C_DOTA_Ability_Morphling_Replicate : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x824, size 0x4, align 4
    CHandle< C_BaseEntity > m_hScepterIllusion; // offset 0x828, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x82C, size 0x1, align 1
    char _pad_082D[0x3]; // offset 0x82D
};
