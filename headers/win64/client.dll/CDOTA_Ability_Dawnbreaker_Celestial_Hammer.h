#pragma once

class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public C_DOTABaseAbility /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_nProjectileIndex; // offset 0x6A8, size 0x4, align 4
    int32 m_nReturnProjectileID; // offset 0x6AC, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x6B0, size 0xC, align 4
    float32 m_fZCoord; // offset 0x6BC, size 0x4, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x6C0, size 0xC, align 4
    bool m_bFlareDone; // offset 0x6CC, size 0x1, align 1
    bool m_bStartedCatchAnimation; // offset 0x6CD, size 0x1, align 1
    bool m_bIsReturning; // offset 0x6CE, size 0x1, align 1
    char _pad_06CF[0x1]; // offset 0x6CF
    CUtlVector< CHandle< C_BaseEntity > > m_hReturnHits; // offset 0x6D0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hAoEHits; // offset 0x6E8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x700, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x704, size 0x4, align 255
    ParticleIndex_t m_nFXHammerReturnIndex; // offset 0x708, size 0x4, align 255
    ParticleIndex_t m_nFXHammerProjectileIndex; // offset 0x70C, size 0x4, align 255
    ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // offset 0x710, size 0x4, align 255
    CHandle< C_BaseEntity > m_hThinker; // offset 0x714, size 0x4, align 4
    float32 projectile_speed; // offset 0x718, size 0x4, align 4
    float32 projectile_radius; // offset 0x71C, size 0x4, align 4
    float32 hammer_damage; // offset 0x720, size 0x4, align 4
    float32 hammer_aoe_radius; // offset 0x724, size 0x4, align 4
    float32 flare_radius; // offset 0x728, size 0x4, align 4
    float32 fire_trail_health_regen; // offset 0x72C, size 0x4, align 4
    bool bHasStartedBurning; // offset 0x730, size 0x1, align 1
    char _pad_0731[0x3]; // offset 0x731
    float32 flare_debuff_duration; // offset 0x734, size 0x4, align 4
    int32 return_anim_distance_threshold; // offset 0x738, size 0x4, align 4
    float32 range; // offset 0x73C, size 0x4, align 4
    char _pad_0740[0x28]; // offset 0x740
};
