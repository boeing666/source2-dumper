#pragma once

class CDOTA_Modifier_EmberSpirit_FlameGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 absorb_amount; // offset 0x1A78, size 0x4, align 4
    int32 damage_per_second; // offset 0x1A7C, size 0x4, align 4
    float32 radius; // offset 0x1A80, size 0x4, align 4
    float32 tick_interval; // offset 0x1A84, size 0x4, align 4
    int32 shield_pct_absorb; // offset 0x1A88, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1A8C, size 0x4, align 4
    float32 m_flShowParticleInterval; // offset 0x1A90, size 0x4, align 4
    bool m_bDestroy; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    float32 linger_duration; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x14]; // offset 0x1A9C
};
