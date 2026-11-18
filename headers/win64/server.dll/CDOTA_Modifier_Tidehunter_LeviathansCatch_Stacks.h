#pragma once

class CDOTA_Modifier_Tidehunter_LeviathansCatch_Stacks : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 fish_strength_gain; // offset 0x1AF8, size 0x4, align 4
    float32 fish_model_scale; // offset 0x1AFC, size 0x4, align 4
    int32 fish_attack_range; // offset 0x1B00, size 0x4, align 4
    int32 fish_damage_block; // offset 0x1B04, size 0x4, align 4
    int32 fish_health_bonus; // offset 0x1B08, size 0x4, align 4
    int32 m_iDamageTaken; // offset 0x1B0C, size 0x4, align 4
    int32 damage_cleanse; // offset 0x1B10, size 0x4, align 4
    float32 damage_reset_interval; // offset 0x1B14, size 0x4, align 4
};
