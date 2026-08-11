#pragma once

class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public CDOTABaseAbility /*0x0*/  // sizeof 0x640, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nProjectileIndex; // offset 0x580, size 0x4, align 4
    int32 m_nReturnProjectileID; // offset 0x584, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x588, size 0xC, align 4
    float32 m_fZCoord; // offset 0x594, size 0x4, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x598, size 0xC, align 4
    bool m_bFlareDone; // offset 0x5A4, size 0x1, align 1
    bool m_bStartedCatchAnimation; // offset 0x5A5, size 0x1, align 1
    bool m_bIsReturning; // offset 0x5A6, size 0x1, align 1
    char _pad_05A7[0x1]; // offset 0x5A7
    CUtlVector< CHandle< CBaseEntity > > m_hReturnHits; // offset 0x5A8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hAoEHits; // offset 0x5C0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x5D8, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x5DC, size 0x4, align 255
    ParticleIndex_t m_nFXHammerReturnIndex; // offset 0x5E0, size 0x4, align 255
    ParticleIndex_t m_nFXHammerProjectileIndex; // offset 0x5E4, size 0x4, align 255
    ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // offset 0x5E8, size 0x4, align 255
    CHandle< CBaseEntity > m_hThinker; // offset 0x5EC, size 0x4, align 4
    float32 projectile_speed; // offset 0x5F0, size 0x4, align 4
    float32 projectile_radius; // offset 0x5F4, size 0x4, align 4
    float32 hammer_damage; // offset 0x5F8, size 0x4, align 4
    float32 hammer_aoe_radius; // offset 0x5FC, size 0x4, align 4
    float32 flare_radius; // offset 0x600, size 0x4, align 4
    float32 fire_trail_health_regen; // offset 0x604, size 0x4, align 4
    bool bHasStartedBurning; // offset 0x608, size 0x1, align 1
    char _pad_0609[0x3]; // offset 0x609
    float32 flare_debuff_duration; // offset 0x60C, size 0x4, align 4
    int32 return_anim_distance_threshold; // offset 0x610, size 0x4, align 4
    float32 range; // offset 0x614, size 0x4, align 4
    char _pad_0618[0x28]; // offset 0x618
};
