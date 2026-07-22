#pragma once

class CDOTA_Ability_Grimstroke_DarkArtistry : public C_DOTABaseAbility /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    Vector m_vCastDir; // offset 0x824, size 0xC, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x830, size 0xC, align 4
    VectorWS m_vStartLoc; // offset 0x83C, size 0xC, align 4
    VectorWS m_vCursorPosition; // offset 0x848, size 0xC, align 4
    Vector m_vVectorCastTargetDirection; // offset 0x854, size 0xC, align 4
    float32 m_fTimeRemaining; // offset 0x860, size 0x4, align 4
    int32 vector_distance_to_start_force_turning; // offset 0x864, size 0x4, align 4
    float32 vector_acceptable_radian_to_snap_velocity; // offset 0x868, size 0x4, align 4
    int32 vector_deg_turn_max; // offset 0x86C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x870, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x874, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x878, size 0x4, align 4
    Vector m_vProjectileDir; // offset 0x87C, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x888, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x88C, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_hTargetsHit; // offset 0x890, size 0x18, align 8
    int32 m_nTargetsHit; // offset 0x8A8, size 0x4, align 4
    int32 m_nTargetHeroesHit; // offset 0x8AC, size 0x4, align 4
    int32 m_nRealHeroesHit; // offset 0x8B0, size 0x4, align 4
    int32 m_nVisibleHeroesHit; // offset 0x8B4, size 0x4, align 4
    float32 m_fDmgMultiplierTalent; // offset 0x8B8, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x8BC, size 0x1, align 1
    char _pad_08BD[0x3]; // offset 0x8BD
    float32 projectile_speed; // offset 0x8C0, size 0x4, align 4
    float32 slow_duration; // offset 0x8C4, size 0x4, align 4
    float32 start_radius; // offset 0x8C8, size 0x4, align 4
    float32 end_radius; // offset 0x8CC, size 0x4, align 4
    float32 damage; // offset 0x8D0, size 0x4, align 4
    float32 bonus_damage_per_hero; // offset 0x8D4, size 0x4, align 4
    float32 bonus_damage_per_creep; // offset 0x8D8, size 0x4, align 4
    float32 vector_deg_turn_divisor; // offset 0x8DC, size 0x4, align 4
    float32 vision_duration; // offset 0x8E0, size 0x4, align 4
    ParticleIndex_t m_nCurvePathPreviewFXIndex; // offset 0x8E4, size 0x4, align 255
    ParticleIndex_t m_nReflectedCurvePathPreviewFXIndex; // offset 0x8E8, size 0x4, align 255
    char _pad_08EC[0x1C]; // offset 0x8EC
};
