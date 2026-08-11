#pragma once

class CDOTA_Modifier_Phoenix_SunRay : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 hp_cost_perc_per_second; // offset 0x1A78, size 0x4, align 4
    int32 beam_range; // offset 0x1A7C, size 0x4, align 4
    int32 base_damage; // offset 0x1A80, size 0x4, align 4
    int32 base_heal; // offset 0x1A84, size 0x4, align 4
    float32 tick_interval; // offset 0x1A88, size 0x4, align 4
    float32 forward_move_speed; // offset 0x1A8C, size 0x4, align 4
    float32 turn_rate_initial; // offset 0x1A90, size 0x4, align 4
    float32 turn_rate; // offset 0x1A94, size 0x4, align 4
    float32 radius; // offset 0x1A98, size 0x4, align 4
    float32 m_flCurrentTime; // offset 0x1A9C, size 0x4, align 4
    float32 m_flAccumulatedSelfDamage; // offset 0x1AA0, size 0x4, align 4
    bool m_bMovingForward; // offset 0x1AA4, size 0x1, align 1
    bool m_bTurningFast; // offset 0x1AA5, size 0x1, align 1
    char _pad_1AA6[0x2]; // offset 0x1AA6
    float32 m_flFacingTarget; // offset 0x1AA8, size 0x4, align 4
    float32 hp_perc_damage; // offset 0x1AAC, size 0x4, align 4
    float32 hp_perc_heal; // offset 0x1AB0, size 0x4, align 4
    float32 blind_duration; // offset 0x1AB4, size 0x4, align 4
    float32 blind_per_second; // offset 0x1AB8, size 0x4, align 4
    int32 focal_point_max_multiplier; // offset 0x1ABC, size 0x4, align 4
    int32 focal_point_start_length_pct; // offset 0x1AC0, size 0x4, align 4
    int32 focal_point_blind_stack_multiplier; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1AC8, size 0x4, align 255
    CHandle< CBaseEntity >[8] m_hVisionThinkers; // offset 0x1ACC, size 0x20, align 4
    CHandle< CBaseEntity > m_hBeamEnd; // offset 0x1AEC, size 0x4, align 4
    bool m_bCreatedVisionThinkers; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x3]; // offset 0x1AF1
    CHandle< CBaseEntity > m_hBeamEndSound; // offset 0x1AF4, size 0x4, align 4
};
