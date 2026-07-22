#pragma once

class CDOTA_Modifier_EmberSpirit_FlameGuard : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 absorb_amount; // offset 0x1A58, size 0x4, align 4
    int32 damage_per_second; // offset 0x1A5C, size 0x4, align 4
    float32 radius; // offset 0x1A60, size 0x4, align 4
    float32 tick_interval; // offset 0x1A64, size 0x4, align 4
    int32 shield_pct_absorb; // offset 0x1A68, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1A6C, size 0x4, align 4
    float32 m_flShowParticleInterval; // offset 0x1A70, size 0x4, align 4
    bool m_bDestroy; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    float32 linger_duration; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x14]; // offset 0x1A7C
};
