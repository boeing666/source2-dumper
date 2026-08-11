#pragma once

class CDOTA_Ability_Grimstroke_DarkArtistry : public CDOTABaseAbility /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    Vector m_vCastDir; // offset 0x580, size 0xC, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x58C, size 0xC, align 4
    VectorWS m_vStartLoc; // offset 0x598, size 0xC, align 4
    VectorWS m_vCursorPosition; // offset 0x5A4, size 0xC, align 4
    Vector m_vVectorCastTargetDirection; // offset 0x5B0, size 0xC, align 4
    float32 m_fTimeRemaining; // offset 0x5BC, size 0x4, align 4
    int32 vector_distance_to_start_force_turning; // offset 0x5C0, size 0x4, align 4
    float32 vector_acceptable_radian_to_snap_velocity; // offset 0x5C4, size 0x4, align 4
    int32 vector_deg_turn_max; // offset 0x5C8, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x5CC, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x5D0, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x5D4, size 0x4, align 4
    Vector m_vProjectileDir; // offset 0x5D8, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x5E4, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x5E8, size 0x4, align 255
    char _pad_05EC[0x4]; // offset 0x5EC
    CUtlVector< CHandle< CBaseEntity > > m_hTargetsHit; // offset 0x5F0, size 0x18, align 8
    int32 m_nTargetsHit; // offset 0x608, size 0x4, align 4
    int32 m_nTargetHeroesHit; // offset 0x60C, size 0x4, align 4
    int32 m_nRealHeroesHit; // offset 0x610, size 0x4, align 4
    int32 m_nVisibleHeroesHit; // offset 0x614, size 0x4, align 4
    float32 m_fDmgMultiplierTalent; // offset 0x618, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x61C, size 0x1, align 1
    char _pad_061D[0x17]; // offset 0x61D
    float32 projectile_speed; // offset 0x634, size 0x4, align 4
    float32 slow_duration; // offset 0x638, size 0x4, align 4
    float32 start_radius; // offset 0x63C, size 0x4, align 4
    float32 end_radius; // offset 0x640, size 0x4, align 4
    float32 damage; // offset 0x644, size 0x4, align 4
    float32 bonus_damage_per_hero; // offset 0x648, size 0x4, align 4
    float32 bonus_damage_per_creep; // offset 0x64C, size 0x4, align 4
    float32 vector_deg_turn_divisor; // offset 0x650, size 0x4, align 4
    float32 vision_duration; // offset 0x654, size 0x4, align 4
    char _pad_0658[0x18]; // offset 0x658
};
