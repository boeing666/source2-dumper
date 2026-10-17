#pragma once

class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nProjectileID; // offset 0x1AA8, size 0x4, align 4
    int32 projectile_speed; // offset 0x1AAC, size 0x4, align 4
    int32 travel_speed_pct; // offset 0x1AB0, size 0x4, align 4
    int32 m_nMaxRange; // offset 0x1AB4, size 0x4, align 4
    VectorWS m_vStartPoint; // offset 0x1AB8, size 0xC, align 4
    VectorWS m_vLastTrailThinkerLocation; // offset 0x1AC4, size 0xC, align 4
    VectorWS m_vEndPointShard; // offset 0x1AD0, size 0xC, align 4
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1ADC, size 0x4, align 255
    float32 flare_radius; // offset 0x1AE0, size 0x4, align 4
    bool bHasStartedBurning; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
    float32 flare_debuff_duration; // offset 0x1AE8, size 0x4, align 4
    float32 fire_trail_health_regen; // offset 0x1AEC, size 0x4, align 4
};
