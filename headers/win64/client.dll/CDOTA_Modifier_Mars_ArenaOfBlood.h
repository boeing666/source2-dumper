#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 width; // offset 0x1AFC, size 0x4, align 4
    int32 spear_damage; // offset 0x1B00, size 0x4, align 4
    int32 spear_distance_from_wall; // offset 0x1B04, size 0x4, align 4
    float32 spear_attack_interval; // offset 0x1B08, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x1B]; // offset 0x1B0D
    float32 warrior_fade_min_dist; // offset 0x1B28, size 0x4, align 4
    float32 warrior_fade_max_dist; // offset 0x1B2C, size 0x4, align 4
};
