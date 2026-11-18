#pragma once

class CDOTA_Modifier_Spectre_Dispersion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage_reflection_pct; // offset 0x1AF8, size 0x4, align 4
    float32 min_radius; // offset 0x1AFC, size 0x4, align 4
    float32 max_radius; // offset 0x1B00, size 0x4, align 4
    int32 activation_bonus_pct; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_flLastDispersionPulseEffectTime; // offset 0x1B08, size 0x4, align 255
    float32 m_fDamageCounter; // offset 0x1B0C, size 0x4, align 4
    float32 m_fLastTime; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
