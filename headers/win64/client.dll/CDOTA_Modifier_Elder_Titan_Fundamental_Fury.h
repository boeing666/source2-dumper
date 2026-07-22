#pragma once

class CDOTA_Modifier_Elder_Titan_Fundamental_Fury : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 move_pct_creeps; // offset 0x1A58, size 0x4, align 4
    float32 move_pct_heroes; // offset 0x1A5C, size 0x4, align 4
    float32 armor_creeps; // offset 0x1A60, size 0x4, align 4
    float32 armor_heroes; // offset 0x1A64, size 0x4, align 4
    float32 move_pct_cap; // offset 0x1A68, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1A6C, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1A70, size 0x4, align 4
    float32 m_fSpeedPercentage; // offset 0x1A74, size 0x4, align 4
    int32 m_nDamage; // offset 0x1A78, size 0x4, align 4
    int32 m_nArmor; // offset 0x1A7C, size 0x4, align 4
};
