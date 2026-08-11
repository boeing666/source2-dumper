#pragma once

class CDOTA_Modifier_Spectre_Dispersion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage_reflection_pct; // offset 0x1A78, size 0x4, align 4
    float32 min_radius; // offset 0x1A7C, size 0x4, align 4
    float32 max_radius; // offset 0x1A80, size 0x4, align 4
    int32 activation_bonus_pct; // offset 0x1A84, size 0x4, align 4
    GameTime_t m_flLastDispersionPulseEffectTime; // offset 0x1A88, size 0x4, align 255
    float32 m_fDamageCounter; // offset 0x1A8C, size 0x4, align 4
    float32 m_fLastTime; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
