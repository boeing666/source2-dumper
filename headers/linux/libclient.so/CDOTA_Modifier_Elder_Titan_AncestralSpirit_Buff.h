#pragma once

class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 move_pct_creeps; // offset 0x1A58, size 0x4, align 4
    float32 move_pct_heroes; // offset 0x1A5C, size 0x4, align 4
    int32 damage_creeps; // offset 0x1A60, size 0x4, align 4
    int32 damage_heroes; // offset 0x1A64, size 0x4, align 4
    float32 armor_creeps; // offset 0x1A68, size 0x4, align 4
    float32 armor_heroes; // offset 0x1A6C, size 0x4, align 4
    float32 move_pct_cap; // offset 0x1A70, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1A74, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1A78, size 0x4, align 4
    float32 m_fSpeedPercentage; // offset 0x1A7C, size 0x4, align 4
    int32 m_nDamage; // offset 0x1A80, size 0x4, align 4
    int32 m_nArmor; // offset 0x1A84, size 0x4, align 4
    bool m_bSpellImmunity; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
