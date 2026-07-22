#pragma once

class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_nProjectileIndex; // offset 0x824, size 0x4, align 4
    int32 m_nReturnProjectileID; // offset 0x828, size 0x4, align 4
    VectorWS m_vEndLocation; // offset 0x82C, size 0xC, align 4
    float32 m_fZCoord; // offset 0x838, size 0x4, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x83C, size 0xC, align 4
    bool m_bFlareDone; // offset 0x848, size 0x1, align 1
    bool m_bStartedCatchAnimation; // offset 0x849, size 0x1, align 1
    bool m_bIsReturning; // offset 0x84A, size 0x1, align 1
    char _pad_084B[0x5]; // offset 0x84B
    CUtlVector< CHandle< C_BaseEntity > > m_hReturnHits; // offset 0x850, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hAoEHits; // offset 0x868, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x880, size 0x4, align 255
    ParticleIndex_t m_nFXIndexC; // offset 0x884, size 0x4, align 255
    ParticleIndex_t m_nFXHammerReturnIndex; // offset 0x888, size 0x4, align 255
    ParticleIndex_t m_nFXHammerProjectileIndex; // offset 0x88C, size 0x4, align 255
    ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // offset 0x890, size 0x4, align 255
    CHandle< C_BaseEntity > m_hThinker; // offset 0x894, size 0x4, align 4
    float32 projectile_speed; // offset 0x898, size 0x4, align 4
    float32 projectile_radius; // offset 0x89C, size 0x4, align 4
    float32 hammer_damage; // offset 0x8A0, size 0x4, align 4
    float32 hammer_aoe_radius; // offset 0x8A4, size 0x4, align 4
    float32 flare_radius; // offset 0x8A8, size 0x4, align 4
    float32 fire_trail_health_regen; // offset 0x8AC, size 0x4, align 4
    bool bHasStartedBurning; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x3]; // offset 0x8B1
    float32 flare_debuff_duration; // offset 0x8B4, size 0x4, align 4
    int32 return_anim_distance_threshold; // offset 0x8B8, size 0x4, align 4
    float32 range; // offset 0x8BC, size 0x4, align 4
    char _pad_08C0[0x28]; // offset 0x8C0
};
