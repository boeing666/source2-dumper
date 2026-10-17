#pragma once

class CDOTA_Modifier_Pangolier_Rollup : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 mp_cost_per_second; // offset 0x1AA8, size 0x4, align 4
    float32 tick_interval; // offset 0x1AAC, size 0x4, align 4
    float32 forward_move_speed; // offset 0x1AB0, size 0x4, align 4
    float32 turn_rate_boosted; // offset 0x1AB4, size 0x4, align 4
    float32 turn_rate; // offset 0x1AB8, size 0x4, align 4
    float32 hit_radius; // offset 0x1ABC, size 0x4, align 4
    float32 knockback_radius; // offset 0x1AC0, size 0x4, align 4
    float32 magic_resistance; // offset 0x1AC4, size 0x4, align 4
    bool m_bHitFirstUpdate; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    GameTime_t m_flHitEndTime; // offset 0x1ACC, size 0x4, align 255
    float32 hit_recover_time; // offset 0x1AD0, size 0x4, align 4
    GameTime_t m_flJumpEndTime; // offset 0x1AD4, size 0x4, align 255
    float32 jump_recover_time; // offset 0x1AD8, size 0x4, align 4
    float32 m_flTurnBoostProgress; // offset 0x1ADC, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AE0, size 0x4, align 4
    GameTime_t m_flLastHeroAttackTime; // offset 0x1AE4, size 0x4, align 255
    bool m_bIsJumping; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x3]; // offset 0x1AE9
    ParticleIndex_t m_nFXIndex; // offset 0x1AEC, size 0x4, align 255
    float32 m_flGyroshellDurationRemaining; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1AF8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1B10, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesCredited; // offset 0x1B28, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1B40, size 0x18, align 8
};
