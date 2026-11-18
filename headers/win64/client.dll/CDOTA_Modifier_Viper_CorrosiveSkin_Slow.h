#pragma once

class CDOTA_Modifier_Viper_CorrosiveSkin_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1AF8, size 0x4, align 4
    float32 damage; // offset 0x1AFC, size 0x4, align 4
    float32 effect_multiplier_distance; // offset 0x1B00, size 0x4, align 4
    float32 effect_multiplier; // offset 0x1B04, size 0x4, align 4
    int32 bonus_status_resistance; // offset 0x1B08, size 0x4, align 4
    int32 nethertoxin_bonus_pct; // offset 0x1B0C, size 0x4, align 4
    bool m_bEffectMultiplied; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
