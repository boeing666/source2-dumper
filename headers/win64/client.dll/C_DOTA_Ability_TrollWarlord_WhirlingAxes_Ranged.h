#pragma once

class C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x6A8, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x6B4, size 0x4, align 4
    float32 axe_width; // offset 0x6B8, size 0x4, align 4
    float32 axe_speed; // offset 0x6BC, size 0x4, align 4
    float32 axe_range; // offset 0x6C0, size 0x4, align 4
    float32 axe_spread; // offset 0x6C4, size 0x4, align 4
    int32 axe_count; // offset 0x6C8, size 0x4, align 4
    char _pad_06CC[0x4]; // offset 0x6CC
    CUtlVector< CHandle< C_BaseEntity > > m_hHitUnits; // offset 0x6D0, size 0x18, align 8
};
