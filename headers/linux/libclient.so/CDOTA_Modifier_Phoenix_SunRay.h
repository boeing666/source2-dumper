#pragma once

class CDOTA_Modifier_Phoenix_SunRay : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 hp_cost_perc_per_second; // offset 0x1AA8, size 0x4, align 4
    int32 beam_range; // offset 0x1AAC, size 0x4, align 4
    int32 base_damage; // offset 0x1AB0, size 0x4, align 4
    int32 base_heal; // offset 0x1AB4, size 0x4, align 4
    float32 tick_interval; // offset 0x1AB8, size 0x4, align 4
    float32 forward_move_speed; // offset 0x1ABC, size 0x4, align 4
    float32 turn_rate_initial; // offset 0x1AC0, size 0x4, align 4
    float32 turn_rate; // offset 0x1AC4, size 0x4, align 4
    float32 radius; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCurrentTime; // offset 0x1ACC, size 0x4, align 4
    float32 m_flAccumulatedSelfDamage; // offset 0x1AD0, size 0x4, align 4
    bool m_bMovingForward; // offset 0x1AD4, size 0x1, align 1
    bool m_bTurningFast; // offset 0x1AD5, size 0x1, align 1
    char _pad_1AD6[0x2]; // offset 0x1AD6
    float32 m_flFacingTarget; // offset 0x1AD8, size 0x4, align 4
    float32 hp_perc_damage; // offset 0x1ADC, size 0x4, align 4
    float32 hp_perc_heal; // offset 0x1AE0, size 0x4, align 4
    float32 blind_duration; // offset 0x1AE4, size 0x4, align 4
    float32 blind_per_second; // offset 0x1AE8, size 0x4, align 4
    int32 focal_point_max_multiplier; // offset 0x1AEC, size 0x4, align 4
    int32 focal_point_start_length_pct; // offset 0x1AF0, size 0x4, align 4
    int32 focal_point_blind_stack_multiplier; // offset 0x1AF4, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1AF8, size 0x4, align 255
    CHandle< C_BaseEntity >[8] m_hVisionThinkers; // offset 0x1AFC, size 0x20, align 4
    CHandle< C_BaseEntity > m_hBeamEnd; // offset 0x1B1C, size 0x4, align 4
    bool m_bCreatedVisionThinkers; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    CHandle< C_BaseEntity > m_hBeamEndSound; // offset 0x1B24, size 0x4, align 4
};
