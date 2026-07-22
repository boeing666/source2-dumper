#pragma once

class CDOTA_Ability_Grimstroke_DarkArtistry : public C_DOTABaseAbility /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    Vector m_vCastDir; // offset 0x6A8, size 0xC, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x6B4, size 0xC, align 4
    VectorWS m_vStartLoc; // offset 0x6C0, size 0xC, align 4
    VectorWS m_vCursorPosition; // offset 0x6CC, size 0xC, align 4
    Vector m_vVectorCastTargetDirection; // offset 0x6D8, size 0xC, align 4
    float32 m_fTimeRemaining; // offset 0x6E4, size 0x4, align 4
    int32 vector_distance_to_start_force_turning; // offset 0x6E8, size 0x4, align 4
    float32 vector_acceptable_radian_to_snap_velocity; // offset 0x6EC, size 0x4, align 4
    int32 vector_deg_turn_max; // offset 0x6F0, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x6F4, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x6F8, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x6FC, size 0x4, align 4
    Vector m_vProjectileDir; // offset 0x700, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x70C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x710, size 0x4, align 255
    char _pad_0714[0x4]; // offset 0x714
    CUtlVector< CHandle< C_BaseEntity > > m_hTargetsHit; // offset 0x718, size 0x18, align 8
    int32 m_nTargetsHit; // offset 0x730, size 0x4, align 4
    int32 m_nTargetHeroesHit; // offset 0x734, size 0x4, align 4
    int32 m_nRealHeroesHit; // offset 0x738, size 0x4, align 4
    int32 m_nVisibleHeroesHit; // offset 0x73C, size 0x4, align 4
    float32 m_fDmgMultiplierTalent; // offset 0x740, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x744, size 0x1, align 1
    char _pad_0745[0x3]; // offset 0x745
    float32 projectile_speed; // offset 0x748, size 0x4, align 4
    float32 slow_duration; // offset 0x74C, size 0x4, align 4
    float32 start_radius; // offset 0x750, size 0x4, align 4
    float32 end_radius; // offset 0x754, size 0x4, align 4
    float32 damage; // offset 0x758, size 0x4, align 4
    float32 bonus_damage_per_hero; // offset 0x75C, size 0x4, align 4
    float32 bonus_damage_per_creep; // offset 0x760, size 0x4, align 4
    float32 vector_deg_turn_divisor; // offset 0x764, size 0x4, align 4
    float32 vision_duration; // offset 0x768, size 0x4, align 4
    ParticleIndex_t m_nCurvePathPreviewFXIndex; // offset 0x76C, size 0x4, align 255
    ParticleIndex_t m_nReflectedCurvePathPreviewFXIndex; // offset 0x770, size 0x4, align 255
    char _pad_0774[0x1C]; // offset 0x774
};
