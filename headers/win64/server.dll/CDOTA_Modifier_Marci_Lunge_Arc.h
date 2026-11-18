#pragma once

class CDOTA_Modifier_Marci_Lunge_Arc : public CDOTA_Buff /*0x0*/  // sizeof 0x1B80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AFC, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B08, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B0C, size 0x4, align 4
    bool m_bDamageApplied; // offset 0x1B10, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x1B11, size 0x1, align 1
    char _pad_1B12[0x2]; // offset 0x1B12
    Vector m_vHorizontalVelocity; // offset 0x1B14, size 0xC, align 4
    VectorWS m_vLastKnownTargetPosition; // offset 0x1B20, size 0xC, align 4
    float32 m_flInitialVelocityZ; // offset 0x1B2C, size 0x4, align 4
    float32 m_fClampedProjectileSpeed; // offset 0x1B30, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B34, size 0x4, align 255
    float32 m_fAcceleration; // offset 0x1B38, size 0x4, align 4
    bool m_bTriggeredLandingAnim; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
    int32 m_nMaxJumpDistance; // offset 0x1B40, size 0x4, align 4
    int32 min_jump_distance; // offset 0x1B44, size 0x4, align 4
    int32 max_jump_distance; // offset 0x1B48, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1B4C, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1B50, size 0x4, align 4
    float32 landing_radius; // offset 0x1B54, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B58, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1B5C, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1B60, size 0x4, align 4
    float32 min_acceleration; // offset 0x1B64, size 0x4, align 4
    float32 max_acceleration; // offset 0x1B68, size 0x4, align 4
    float32 impact_damage; // offset 0x1B6C, size 0x4, align 4
    int32 impact_position_offset; // offset 0x1B70, size 0x4, align 4
    int32 ally_impact_damage_pct; // offset 0x1B74, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x1B78, size 0x4, align 4
    CHandle< CBaseEntity > m_hBounceEntity; // offset 0x1B7C, size 0x4, align 4
};
