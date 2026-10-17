#pragma once

class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AAC, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AB8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1ABC, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1AC0, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1AC1, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1AC2, size 0x1, align 1
    char _pad_1AC3[0x1]; // offset 0x1AC3
    Vector m_vHorizontalVelocity; // offset 0x1AC4, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AD0, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1ADC, size 0x4, align 4
    float32 m_fClampedProjectileSpeed; // offset 0x1AE0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AE4, size 0x4, align 255
    float32 m_fAcceleration; // offset 0x1AE8, size 0x4, align 4
    float32 min_range; // offset 0x1AEC, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1AF0, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1AF4, size 0x4, align 4
    float32 impact_radius; // offset 0x1AF8, size 0x4, align 4
    float32 projectile_vision; // offset 0x1AFC, size 0x4, align 4
    float32 stun_duration; // offset 0x1B00, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1B04, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1B08, size 0x4, align 4
    float32 min_acceleration; // offset 0x1B0C, size 0x4, align 4
    float32 max_acceleration; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
