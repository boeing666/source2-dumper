#pragma once

class CDOTA_Modifier_Lich_FrostShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 interval; // offset 0x1AFC, size 0x4, align 4
    int32 damage_reduction; // offset 0x1B00, size 0x4, align 4
    int32 health_regen; // offset 0x1B04, size 0x4, align 4
    float32 bonus_duration_per_hero_killed; // offset 0x1B08, size 0x4, align 4
    float32 bonus_duration_per_creep_killed; // offset 0x1B0C, size 0x4, align 4
};
