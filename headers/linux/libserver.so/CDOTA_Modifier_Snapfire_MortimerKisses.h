#pragma once

class CDOTA_Modifier_Snapfire_MortimerKisses : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fIntervalPerRocket; // offset 0x1AF8, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AFC, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1B00, size 0x4, align 255
    CHandle< CBaseEntity > m_hBeamEnd; // offset 0x1B04, size 0x4, align 4
    float32 m_flCurDistance; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vAimTarget; // offset 0x1B0C, size 0xC, align 4
    float32 m_fLastTurnAmount; // offset 0x1B18, size 0x4, align 4
    int32 m_nProjectilesLaunched; // offset 0x1B1C, size 0x4, align 4
    bool m_bDestroyOnNextThink; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    int32 m_nProjectilesToLaunch; // offset 0x1B24, size 0x4, align 4
    char _pad_1B28[0x14]; // offset 0x1B28
    bool has_bonus_projectile; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
    int32 projectile_count; // offset 0x1B40, size 0x4, align 4
    float32 projectile_speed; // offset 0x1B44, size 0x4, align 4
    float32 projectile_width; // offset 0x1B48, size 0x4, align 4
    float32 projectile_vision; // offset 0x1B4C, size 0x4, align 4
    float32 turn_rate; // offset 0x1B50, size 0x4, align 4
    float32 min_range; // offset 0x1B54, size 0x4, align 4
    float32 impact_radius; // offset 0x1B58, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1B5C, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1B60, size 0x4, align 4
    float32 delay_after_last_projectile; // offset 0x1B64, size 0x4, align 4
};
