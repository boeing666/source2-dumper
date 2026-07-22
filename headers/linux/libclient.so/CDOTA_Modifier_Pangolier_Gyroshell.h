#pragma once

class CDOTA_Modifier_Pangolier_Gyroshell : public CDOTA_Modifier_DebuffImmune /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 mp_cost_per_second; // offset 0x1A58, size 0x4, align 4
    float32 tick_interval; // offset 0x1A5C, size 0x4, align 4
    float32 forward_move_speed; // offset 0x1A60, size 0x4, align 4
    float32 move_speed_ramp_up_time; // offset 0x1A64, size 0x4, align 4
    float32 turn_rate_boosted; // offset 0x1A68, size 0x4, align 4
    float32 turn_rate; // offset 0x1A6C, size 0x4, align 4
    float32 hit_radius; // offset 0x1A70, size 0x4, align 4
    float32 knockback_radius; // offset 0x1A74, size 0x4, align 4
    int32 damage_pct; // offset 0x1A78, size 0x4, align 4
    float32 magic_resistance; // offset 0x1A7C, size 0x4, align 4
    bool m_bHitFirstUpdate; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    GameTime_t m_flHitEndTime; // offset 0x1A84, size 0x4, align 255
    float32 hit_recover_time; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_flJumpEndTime; // offset 0x1A8C, size 0x4, align 255
    float32 jump_recover_time; // offset 0x1A90, size 0x4, align 4
    float32 m_flTurnBoostProgress; // offset 0x1A94, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A98, size 0x4, align 4
    int32 m_nInitialMovespeed; // offset 0x1A9C, size 0x4, align 4
    bool m_bIsJumping; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x3]; // offset 0x1AA1
    ParticleIndex_t m_nFXIndex; // offset 0x1AA4, size 0x4, align 255
    CUtlVector< float32 > m_flTurnHistory; // offset 0x1AA8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesHitLastRicochet; // offset 0x1AC0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesCredited; // offset 0x1AD8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHeroesHitCurrentRicochet; // offset 0x1AF0, size 0x18, align 8
};
