#pragma once

class CDOTA_Modifier_Ringmaster_UnicycleMovement : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 max_speed; // offset 0x1AF8, size 0x4, align 4
    float32 acceleration; // offset 0x1AFC, size 0x4, align 4
    float32 turn_rate_min; // offset 0x1B00, size 0x4, align 4
    float32 turn_rate_max; // offset 0x1B04, size 0x4, align 4
    float32 impact_radius; // offset 0x1B08, size 0x4, align 4
    float32 tree_impact_speed_divisor; // offset 0x1B0C, size 0x4, align 4
    float32 knockback_distance; // offset 0x1B10, size 0x4, align 4
    float32 damage_threshold; // offset 0x1B14, size 0x4, align 4
    float32 damage_grace_period; // offset 0x1B18, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0x1B1C, size 0x4, align 4
    float32 m_bCrashScheduled; // offset 0x1B20, size 0x4, align 4
    float32 m_flDesiredYaw; // offset 0x1B24, size 0x4, align 4
    ParticleIndex_t m_nMaxSpeedFXIndex; // offset 0x1B28, size 0x4, align 255
    CHandle< CBaseEntity > m_hUnicycle; // offset 0x1B2C, size 0x4, align 4
};
