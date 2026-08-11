#pragma once

class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A7C, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1A88, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A8C, size 0x4, align 4
    bool m_bHorizontalMotionInterrupted; // offset 0x1A90, size 0x1, align 1
    bool m_bDamageApplied; // offset 0x1A91, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1A92, size 0x1, align 1
    char _pad_1A93[0x1]; // offset 0x1A93
    Vector m_vHorizontalVelocity; // offset 0x1A94, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1AA0, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1AAC, size 0x4, align 4
    float32 m_fClampedProjectileSpeed; // offset 0x1AB0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    float32 m_fAcceleration; // offset 0x1AB8, size 0x4, align 4
    float32 min_range; // offset 0x1ABC, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1AC0, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1AC4, size 0x4, align 4
    float32 impact_radius; // offset 0x1AC8, size 0x4, align 4
    float32 projectile_vision; // offset 0x1ACC, size 0x4, align 4
    float32 stun_duration; // offset 0x1AD0, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1AD4, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1AD8, size 0x4, align 4
    float32 min_acceleration; // offset 0x1ADC, size 0x4, align 4
    float32 max_acceleration; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
