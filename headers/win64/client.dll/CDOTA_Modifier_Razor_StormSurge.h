#pragma once

class CDOTA_Modifier_Razor_StormSurge : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 self_movement_speed_pct; // offset 0x1AF8, size 0x4, align 4
    int32 strike_pct_chance; // offset 0x1AFC, size 0x4, align 4
    float32 strike_damage; // offset 0x1B00, size 0x4, align 4
    int32 strike_move_slow_pct; // offset 0x1B04, size 0x4, align 4
    float32 strike_search_radius; // offset 0x1B08, size 0x4, align 4
    int32 strike_target_count; // offset 0x1B0C, size 0x4, align 4
    float32 strike_slow_duration; // offset 0x1B10, size 0x4, align 4
    float32 strike_internal_cd; // offset 0x1B14, size 0x4, align 4
    float32 strike_cd_reduction_during_storm; // offset 0x1B18, size 0x4, align 4
    int32 eye_of_the_storm_chance_multiplier; // offset 0x1B1C, size 0x4, align 4
};
