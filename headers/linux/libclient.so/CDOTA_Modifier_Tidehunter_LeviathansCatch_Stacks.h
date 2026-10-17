#pragma once

class CDOTA_Modifier_Tidehunter_LeviathansCatch_Stacks : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 fish_strength_gain; // offset 0x1AA8, size 0x4, align 4
    float32 fish_model_scale; // offset 0x1AAC, size 0x4, align 4
    int32 fish_attack_range; // offset 0x1AB0, size 0x4, align 4
    int32 fish_damage_block; // offset 0x1AB4, size 0x4, align 4
    int32 fish_health_bonus; // offset 0x1AB8, size 0x4, align 4
    int32 m_iDamageTaken; // offset 0x1ABC, size 0x4, align 4
    int32 damage_cleanse; // offset 0x1AC0, size 0x4, align 4
    float32 damage_reset_interval; // offset 0x1AC4, size 0x4, align 4
};
