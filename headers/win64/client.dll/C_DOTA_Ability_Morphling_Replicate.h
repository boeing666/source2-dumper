#pragma once

class C_DOTA_Ability_Morphling_Replicate : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6A8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hScepterIllusion; // offset 0x6AC, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x6B0, size 0x1, align 1
    char _pad_06B1[0x7]; // offset 0x6B1
};
