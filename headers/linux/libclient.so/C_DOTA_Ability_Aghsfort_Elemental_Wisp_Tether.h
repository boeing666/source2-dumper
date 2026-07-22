#pragma once

class C_DOTA_Ability_Aghsfort_Elemental_Wisp_Tether : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x824, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x828, size 0xC, align 4
    bool m_bProjectileActive; // offset 0x834, size 0x1, align 1
    char _pad_0835[0x3]; // offset 0x835
    int32 latch_distance; // offset 0x838, size 0x4, align 4
    int32 m_iProjectileIndex; // offset 0x83C, size 0x4, align 4
};
