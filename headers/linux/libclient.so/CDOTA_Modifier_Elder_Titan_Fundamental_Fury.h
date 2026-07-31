#pragma once

class CDOTA_Modifier_Elder_Titan_Fundamental_Fury : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 move_pct_creeps; // offset 0x1A78, size 0x4, align 4
    float32 move_pct_heroes; // offset 0x1A7C, size 0x4, align 4
    float32 armor_creeps; // offset 0x1A80, size 0x4, align 4
    float32 armor_heroes; // offset 0x1A84, size 0x4, align 4
    float32 move_pct_cap; // offset 0x1A88, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1A8C, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1A90, size 0x4, align 4
    float32 m_fSpeedPercentage; // offset 0x1A94, size 0x4, align 4
    int32 m_nDamage; // offset 0x1A98, size 0x4, align 4
    int32 m_nArmor; // offset 0x1A9C, size 0x4, align 4
};
