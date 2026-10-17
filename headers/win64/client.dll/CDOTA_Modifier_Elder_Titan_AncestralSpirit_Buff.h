#pragma once

class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 move_pct_creeps; // offset 0x1AA8, size 0x4, align 4
    float32 move_pct_heroes; // offset 0x1AAC, size 0x4, align 4
    int32 damage_creeps; // offset 0x1AB0, size 0x4, align 4
    int32 damage_heroes; // offset 0x1AB4, size 0x4, align 4
    float32 armor_creeps; // offset 0x1AB8, size 0x4, align 4
    float32 armor_heroes; // offset 0x1ABC, size 0x4, align 4
    float32 move_pct_cap; // offset 0x1AC0, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1AC4, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1AC8, size 0x4, align 4
    float32 m_fSpeedPercentage; // offset 0x1ACC, size 0x4, align 4
    int32 m_nDamage; // offset 0x1AD0, size 0x4, align 4
    int32 m_nArmor; // offset 0x1AD4, size 0x4, align 4
    bool m_bSpellImmunity; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x7]; // offset 0x1AD9
};
