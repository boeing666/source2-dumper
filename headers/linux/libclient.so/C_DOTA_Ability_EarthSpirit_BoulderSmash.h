#pragma once

class C_DOTA_Ability_EarthSpirit_BoulderSmash : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 speed; // offset 0x824, size 0x4, align 4
    float32 rock_damage; // offset 0x828, size 0x4, align 4
    float32 creep_multiplier; // offset 0x82C, size 0x4, align 4
    float32 radius; // offset 0x830, size 0x4, align 4
    float32 rock_search_aoe; // offset 0x834, size 0x4, align 4
    float32 unit_distance; // offset 0x838, size 0x4, align 4
    float32 rock_distance; // offset 0x83C, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x840, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCursorTarget; // offset 0x844, size 0x4, align 4
    bool m_bUsedStone; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x3]; // offset 0x849
    CHandle< C_BaseEntity > m_hTarget; // offset 0x84C, size 0x4, align 4
    bool m_bTargetStone; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x7]; // offset 0x851
};
