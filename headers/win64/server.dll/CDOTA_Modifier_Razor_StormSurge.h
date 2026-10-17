#pragma once

class CDOTA_Modifier_Razor_StormSurge : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 self_movement_speed_pct; // offset 0x1AA8, size 0x4, align 4
    int32 strike_pct_chance; // offset 0x1AAC, size 0x4, align 4
    float32 strike_damage; // offset 0x1AB0, size 0x4, align 4
    int32 strike_move_slow_pct; // offset 0x1AB4, size 0x4, align 4
    float32 strike_search_radius; // offset 0x1AB8, size 0x4, align 4
    int32 strike_target_count; // offset 0x1ABC, size 0x4, align 4
    float32 strike_slow_duration; // offset 0x1AC0, size 0x4, align 4
    float32 strike_internal_cd; // offset 0x1AC4, size 0x4, align 4
    float32 strike_cd_reduction_during_storm; // offset 0x1AC8, size 0x4, align 4
    int32 eye_of_the_storm_chance_multiplier; // offset 0x1ACC, size 0x4, align 4
    GameTime_t m_flNextShardProcTime; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
