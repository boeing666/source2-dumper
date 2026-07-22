#pragma once

class CDOTA_Modifier_Razor_StormSurge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 self_movement_speed_pct; // offset 0x1A58, size 0x4, align 4
    int32 strike_pct_chance; // offset 0x1A5C, size 0x4, align 4
    float32 strike_damage; // offset 0x1A60, size 0x4, align 4
    int32 strike_move_slow_pct; // offset 0x1A64, size 0x4, align 4
    float32 strike_search_radius; // offset 0x1A68, size 0x4, align 4
    int32 strike_target_count; // offset 0x1A6C, size 0x4, align 4
    float32 strike_slow_duration; // offset 0x1A70, size 0x4, align 4
    float32 strike_internal_cd; // offset 0x1A74, size 0x4, align 4
    float32 strike_cd_reduction_during_storm; // offset 0x1A78, size 0x4, align 4
    int32 eye_of_the_storm_chance_multiplier; // offset 0x1A7C, size 0x4, align 4
};
