#pragma once

class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nProjectileID; // offset 0x1A78, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A7C, size 0x4, align 4
    int32 travel_speed_pct; // offset 0x1A80, size 0x4, align 4
    int32 m_nMaxRange; // offset 0x1A84, size 0x4, align 4
    VectorWS m_vStartPoint; // offset 0x1A88, size 0xC, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x1A94, size 0xC, align 4
    VectorWS m_vEndPointShard; // offset 0x1AA0, size 0xC, align 4
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1AAC, size 0x4, align 255
    float32 flare_radius; // offset 0x1AB0, size 0x4, align 4
    bool bHasStartedBurning; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    float32 flare_debuff_duration; // offset 0x1AB8, size 0x4, align 4
    float32 fire_trail_health_regen; // offset 0x1ABC, size 0x4, align 4
};
