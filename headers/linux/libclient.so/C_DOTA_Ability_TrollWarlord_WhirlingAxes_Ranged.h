#pragma once

class C_DOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x828, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x834, size 0x4, align 4
    float32 axe_width; // offset 0x838, size 0x4, align 4
    float32 axe_speed; // offset 0x83C, size 0x4, align 4
    float32 axe_range; // offset 0x840, size 0x4, align 4
    float32 axe_spread; // offset 0x844, size 0x4, align 4
    int32 axe_count; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    CUtlVector< CHandle< C_BaseEntity > > m_hHitUnits; // offset 0x850, size 0x18, align 8
};
