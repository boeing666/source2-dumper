#pragma once

class CDOTA_Modifier_Seasonal_Penguin : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fLifetimeGained; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1A7C, size 0xC, align 4
    int32 m_nCurrentSpeed; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_fLastBumpTime; // offset 0x1A8C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1A90, size 0xC, align 4
    CHandle< CBaseEntity > m_hLastHit; // offset 0x1A9C, size 0x4, align 4
    Vector m_vDir; // offset 0x1AA0, size 0xC, align 4
    VectorWS m_vRunEndPos; // offset 0x1AAC, size 0xC, align 4
    bool m_bIsInInitialRun; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    VectorWS m_vJumpEndPos; // offset 0x1ABC, size 0xC, align 4
    bool m_bPlayedVroomSinceLastCrash; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    ParticleIndex_t m_nVroomFX; // offset 0x1ACC, size 0x4, align 255
    GameTime_t m_fLastSpeedStepTime; // offset 0x1AD0, size 0x4, align 255
    GameTime_t m_fLastSpeechTime; // offset 0x1AD4, size 0x4, align 255
    ParticleIndex_t m_nFXStackIndex; // offset 0x1AD8, size 0x4, align 255
    int32 m_nBumpsSinceLastCrash; // offset 0x1ADC, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastBumpingHero; // offset 0x1AE0, size 0x4, align 4
    int32 initial_speed; // offset 0x1AE4, size 0x4, align 4
    int32 max_speed; // offset 0x1AE8, size 0x4, align 4
    int32 speed_step; // offset 0x1AEC, size 0x4, align 4
    float32 speed_step_interval; // offset 0x1AF0, size 0x4, align 4
    float32 bump_delay; // offset 0x1AF4, size 0x4, align 4
    float32 bump_delay_absolute; // offset 0x1AF8, size 0x4, align 4
    int32 bump_collision_radius; // offset 0x1AFC, size 0x4, align 4
    int32 run_distance; // offset 0x1B00, size 0x4, align 4
    int32 jump_distance; // offset 0x1B04, size 0x4, align 4
    int32 speed_after_crash; // offset 0x1B08, size 0x4, align 4
    int32 speed_gain_per_hero_bump; // offset 0x1B0C, size 0x4, align 4
    float32 max_gainable_lifetime; // offset 0x1B10, size 0x4, align 4
    float32 lifetime_gain_per_hero_bump; // offset 0x1B14, size 0x4, align 4
    float32 min_speech_repeat_time; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
