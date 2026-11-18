#pragma once

class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 move_pct_creeps; // offset 0x1AF8, size 0x4, align 4
    float32 move_pct_heroes; // offset 0x1AFC, size 0x4, align 4
    int32 damage_creeps; // offset 0x1B00, size 0x4, align 4
    int32 damage_heroes; // offset 0x1B04, size 0x4, align 4
    float32 armor_creeps; // offset 0x1B08, size 0x4, align 4
    float32 armor_heroes; // offset 0x1B0C, size 0x4, align 4
    float32 move_pct_cap; // offset 0x1B10, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1B14, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1B18, size 0x4, align 4
    float32 m_fSpeedPercentage; // offset 0x1B1C, size 0x4, align 4
    int32 m_nDamage; // offset 0x1B20, size 0x4, align 4
    int32 m_nArmor; // offset 0x1B24, size 0x4, align 4
    bool m_bSpellImmunity; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x7]; // offset 0x1B29
};
