#pragma once

class CDOTA_Modifier_Seasonal_Penguin : public CDOTA_Buff /*0x0*/  // sizeof 0x1BA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fLifetimeGained; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1AFC, size 0xC, align 4
    int32 m_nCurrentSpeed; // offset 0x1B08, size 0x4, align 4
    GameTime_t m_fLastBumpTime; // offset 0x1B0C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x1B10, size 0xC, align 4
    CHandle< CBaseEntity > m_hLastHit; // offset 0x1B1C, size 0x4, align 4
    Vector m_vDir; // offset 0x1B20, size 0xC, align 4
    VectorWS m_vRunEndPos; // offset 0x1B2C, size 0xC, align 4
    bool m_bIsInInitialRun; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x3]; // offset 0x1B39
    VectorWS m_vJumpEndPos; // offset 0x1B3C, size 0xC, align 4
    bool m_bPlayedVroomSinceLastCrash; // offset 0x1B48, size 0x1, align 1
    char _pad_1B49[0x3]; // offset 0x1B49
    ParticleIndex_t m_nVroomFX; // offset 0x1B4C, size 0x4, align 255
    GameTime_t m_fLastSpeedStepTime; // offset 0x1B50, size 0x4, align 255
    GameTime_t m_fLastSpeechTime; // offset 0x1B54, size 0x4, align 255
    ParticleIndex_t m_nFXStackIndex; // offset 0x1B58, size 0x4, align 255
    int32 m_nBumpsSinceLastCrash; // offset 0x1B5C, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastBumpingHero; // offset 0x1B60, size 0x4, align 4
    int32 initial_speed; // offset 0x1B64, size 0x4, align 4
    int32 max_speed; // offset 0x1B68, size 0x4, align 4
    int32 speed_step; // offset 0x1B6C, size 0x4, align 4
    float32 speed_step_interval; // offset 0x1B70, size 0x4, align 4
    float32 bump_delay; // offset 0x1B74, size 0x4, align 4
    float32 bump_delay_absolute; // offset 0x1B78, size 0x4, align 4
    int32 bump_collision_radius; // offset 0x1B7C, size 0x4, align 4
    int32 run_distance; // offset 0x1B80, size 0x4, align 4
    int32 jump_distance; // offset 0x1B84, size 0x4, align 4
    int32 speed_after_crash; // offset 0x1B88, size 0x4, align 4
    int32 speed_gain_per_hero_bump; // offset 0x1B8C, size 0x4, align 4
    float32 max_gainable_lifetime; // offset 0x1B90, size 0x4, align 4
    float32 lifetime_gain_per_hero_bump; // offset 0x1B94, size 0x4, align 4
    float32 min_speech_repeat_time; // offset 0x1B98, size 0x4, align 4
    char _pad_1B9C[0x4]; // offset 0x1B9C
};
