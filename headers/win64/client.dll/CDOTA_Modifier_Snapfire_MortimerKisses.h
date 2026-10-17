#pragma once

class CDOTA_Modifier_Snapfire_MortimerKisses : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fIntervalPerRocket; // offset 0x1AA8, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1AB0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hBeamEnd; // offset 0x1AB4, size 0x4, align 4
    float32 m_flCurDistance; // offset 0x1AB8, size 0x4, align 4
    VectorWS m_vAimTarget; // offset 0x1ABC, size 0xC, align 4
    float32 m_fLastTurnAmount; // offset 0x1AC8, size 0x4, align 4
    int32 m_nProjectilesLaunched; // offset 0x1ACC, size 0x4, align 4
    bool m_bDestroyOnNextThink; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    int32 m_nProjectilesToLaunch; // offset 0x1AD4, size 0x4, align 4
    bool has_bonus_projectile; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    int32 projectile_count; // offset 0x1ADC, size 0x4, align 4
    float32 projectile_speed; // offset 0x1AE0, size 0x4, align 4
    float32 projectile_width; // offset 0x1AE4, size 0x4, align 4
    float32 projectile_vision; // offset 0x1AE8, size 0x4, align 4
    float32 turn_rate; // offset 0x1AEC, size 0x4, align 4
    float32 min_range; // offset 0x1AF0, size 0x4, align 4
    float32 impact_radius; // offset 0x1AF4, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1AF8, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1AFC, size 0x4, align 4
    float32 delay_after_last_projectile; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
