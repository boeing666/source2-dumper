#pragma once

class CDOTA_Modifier_Viper_CorrosiveSkin_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    float32 damage; // offset 0x1A7C, size 0x4, align 4
    float32 effect_multiplier_distance; // offset 0x1A80, size 0x4, align 4
    float32 effect_multiplier; // offset 0x1A84, size 0x4, align 4
    int32 bonus_status_resistance; // offset 0x1A88, size 0x4, align 4
    int32 nethertoxin_bonus_pct; // offset 0x1A8C, size 0x4, align 4
    bool m_bEffectMultiplied; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x7]; // offset 0x1A91
};
