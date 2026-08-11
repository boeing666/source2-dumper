#pragma once

class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public CDOTABaseAbility /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_nProjectileIndex; // offset 0x85C, size 0x4, align 4
    int32 m_nReturnProjectileID; // offset 0x860, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x864, size 0xC, align 4
    float32 m_fZCoord; // offset 0x870, size 0x4, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x874, size 0xC, align 4
    bool m_bFlareDone; // offset 0x880, size 0x1, align 1
    bool m_bStartedCatchAnimation; // offset 0x881, size 0x1, align 1
    bool m_bIsReturning; // offset 0x882, size 0x1, align 1
    char _pad_0883[0x5]; // offset 0x883
    CUtlVector< CHandle< CBaseEntity > > m_hReturnHits; // offset 0x888, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAoEHits; // offset 0x8A0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x8B8, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x8BC, size 0x4, align 255
    ParticleIndex_t m_nFXHammerReturnIndex; // offset 0x8C0, size 0x4, align 255
    ParticleIndex_t m_nFXHammerProjectileIndex; // offset 0x8C4, size 0x4, align 255
    ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // offset 0x8C8, size 0x4, align 255
    CHandle< CBaseEntity > m_hThinker; // offset 0x8CC, size 0x4, align 4
    float32 projectile_speed; // offset 0x8D0, size 0x4, align 4
    float32 projectile_radius; // offset 0x8D4, size 0x4, align 4
    float32 hammer_damage; // offset 0x8D8, size 0x4, align 4
    float32 hammer_aoe_radius; // offset 0x8DC, size 0x4, align 4
    float32 flare_radius; // offset 0x8E0, size 0x4, align 4
    float32 fire_trail_health_regen; // offset 0x8E4, size 0x4, align 4
    bool bHasStartedBurning; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x3]; // offset 0x8E9
    float32 flare_debuff_duration; // offset 0x8EC, size 0x4, align 4
    int32 return_anim_distance_threshold; // offset 0x8F0, size 0x4, align 4
    float32 range; // offset 0x8F4, size 0x4, align 4
    char _pad_08F8[0x28]; // offset 0x8F8
};
