#pragma once

class CDOTA_Modifier_EmberSpirit_FlameGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 absorb_amount; // offset 0x1AF8, size 0x4, align 4
    int32 damage_per_second; // offset 0x1AFC, size 0x4, align 4
    float32 radius; // offset 0x1B00, size 0x4, align 4
    float32 tick_interval; // offset 0x1B04, size 0x4, align 4
    int32 shield_pct_absorb; // offset 0x1B08, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1B0C, size 0x4, align 4
    float32 m_flShowParticleInterval; // offset 0x1B10, size 0x4, align 4
    bool m_bDestroy; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    float32 linger_duration; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x14]; // offset 0x1B1C
};
