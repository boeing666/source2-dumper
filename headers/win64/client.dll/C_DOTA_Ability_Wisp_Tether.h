#pragma once

class C_DOTA_Ability_Wisp_Tether : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6A8, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x6AC, size 0xC, align 4
    bool m_bProjectileActive; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x3]; // offset 0x6B9
    int32 latch_distance; // offset 0x6BC, size 0x4, align 4
    int32 m_iProjectileIndex; // offset 0x6C0, size 0x4, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
};
