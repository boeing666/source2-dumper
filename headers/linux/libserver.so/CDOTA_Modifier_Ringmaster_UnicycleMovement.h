#pragma once

class CDOTA_Modifier_Ringmaster_UnicycleMovement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 max_speed; // offset 0x1AA8, size 0x4, align 4
    float32 acceleration; // offset 0x1AAC, size 0x4, align 4
    float32 turn_rate_min; // offset 0x1AB0, size 0x4, align 4
    float32 turn_rate_max; // offset 0x1AB4, size 0x4, align 4
    float32 impact_radius; // offset 0x1AB8, size 0x4, align 4
    float32 tree_impact_speed_divisor; // offset 0x1ABC, size 0x4, align 4
    float32 knockback_distance; // offset 0x1AC0, size 0x4, align 4
    float32 damage_threshold; // offset 0x1AC4, size 0x4, align 4
    float32 damage_grace_period; // offset 0x1AC8, size 0x4, align 4
    float32 m_flCurrentSpeed; // offset 0x1ACC, size 0x4, align 4
    float32 m_bCrashScheduled; // offset 0x1AD0, size 0x4, align 4
    float32 m_flDesiredYaw; // offset 0x1AD4, size 0x4, align 4
    ParticleIndex_t m_nMaxSpeedFXIndex; // offset 0x1AD8, size 0x4, align 255
    CHandle< CBaseEntity > m_hUnicycle; // offset 0x1ADC, size 0x4, align 4
};
