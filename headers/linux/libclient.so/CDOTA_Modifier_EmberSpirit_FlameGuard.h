#pragma once

class CDOTA_Modifier_EmberSpirit_FlameGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 absorb_amount; // offset 0x1AA8, size 0x4, align 4
    int32 damage_per_second; // offset 0x1AAC, size 0x4, align 4
    float32 radius; // offset 0x1AB0, size 0x4, align 4
    float32 tick_interval; // offset 0x1AB4, size 0x4, align 4
    int32 shield_pct_absorb; // offset 0x1AB8, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1ABC, size 0x4, align 4
    float32 m_flShowParticleInterval; // offset 0x1AC0, size 0x4, align 4
    bool m_bDestroy; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    float32 linger_duration; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x14]; // offset 0x1ACC
};
