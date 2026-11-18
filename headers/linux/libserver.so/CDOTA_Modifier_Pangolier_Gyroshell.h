#pragma once

class CDOTA_Modifier_Pangolier_Gyroshell : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1BA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 mp_cost_per_second; // offset 0x1AF8, size 0x4, align 4
    float32 tick_interval; // offset 0x1AFC, size 0x4, align 4
    float32 forward_move_speed; // offset 0x1B00, size 0x4, align 4
    float32 move_speed_ramp_up_time; // offset 0x1B04, size 0x4, align 4
    float32 turn_rate_boosted; // offset 0x1B08, size 0x4, align 4
    float32 turn_rate; // offset 0x1B0C, size 0x4, align 4
    float32 hit_radius; // offset 0x1B10, size 0x4, align 4
    float32 knockback_radius; // offset 0x1B14, size 0x4, align 4
    int32 damage_pct; // offset 0x1B18, size 0x4, align 4
    float32 magic_resistance; // offset 0x1B1C, size 0x4, align 4
    bool m_bHitFirstUpdate; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    GameTime_t m_flHitEndTime; // offset 0x1B24, size 0x4, align 255
    float32 hit_recover_time; // offset 0x1B28, size 0x4, align 4
    GameTime_t m_flJumpEndTime; // offset 0x1B2C, size 0x4, align 255
    float32 jump_recover_time; // offset 0x1B30, size 0x4, align 4
    float32 m_flTurnBoostProgress; // offset 0x1B34, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1B38, size 0x4, align 4
    int32 m_nInitialMovespeed; // offset 0x1B3C, size 0x4, align 4
    bool m_bIsJumping; // offset 0x1B40, size 0x1, align 1
    char _pad_1B41[0x3]; // offset 0x1B41
    ParticleIndex_t m_nFXIndex; // offset 0x1B44, size 0x4, align 255
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1B48, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1B60, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesCredited; // offset 0x1B78, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1B90, size 0x18, align 8
};
