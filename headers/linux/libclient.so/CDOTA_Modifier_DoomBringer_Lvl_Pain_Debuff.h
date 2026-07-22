#pragma once

class CDOTA_Modifier_DoomBringer_Lvl_Pain_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 attack_damage; // offset 0x1A58, size 0x4, align 4
    float32 spread_radius; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_damage_pct_base; // offset 0x1A60, size 0x4, align 4
    float32 bonus_at_level_pct; // offset 0x1A64, size 0x4, align 4
    int32 level_multiplier; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
