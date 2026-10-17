#pragma once

class CDOTA_Modifier_Lich_FrostShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 interval; // offset 0x1AAC, size 0x4, align 4
    int32 damage_reduction; // offset 0x1AB0, size 0x4, align 4
    int32 health_regen; // offset 0x1AB4, size 0x4, align 4
    float32 bonus_duration_per_hero_killed; // offset 0x1AB8, size 0x4, align 4
    float32 bonus_duration_per_creep_killed; // offset 0x1ABC, size 0x4, align 4
};
