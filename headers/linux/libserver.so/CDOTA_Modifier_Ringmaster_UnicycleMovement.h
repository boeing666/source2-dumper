#pragma once

class CDOTA_Modifier_Ringmaster_UnicycleMovement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 max_speed; // offset 0x1A78, size 0x4, align 4
    float32 acceleration; // offset 0x1A7C, size 0x4, align 4
    float32 turn_rate_min; // offset 0x1A80, size 0x4, align 4
    float32 turn_rate_max; // offset 0x1A84, size 0x4, align 4
    float32 impact_radius; // offset 0x1A88, size 0x4, align 4
    float32 tree_impact_speed_divisor; // offset 0x1A8C, size 0x4, align 4
    float32 knockback_distance; // offset 0x1A90, size 0x4, align 4
    float32 damage_threshold; // offset 0x1A94, size 0x4, align 4
    float32 damage_grace_period; // offset 0x1A98, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0x1A9C, size 0x4, align 4
    float32 m_bCrashScheduled; // offset 0x1AA0, size 0x4, align 4
    float32 m_flDesiredYaw; // offset 0x1AA4, size 0x4, align 4
    ParticleIndex_t m_nMaxSpeedFXIndex; // offset 0x1AA8, size 0x4, align 255
    CHandle< CBaseEntity > m_hUnicycle; // offset 0x1AAC, size 0x4, align 4
};
