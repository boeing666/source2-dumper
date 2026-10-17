#pragma once

class CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 attack_range_min; // offset 0x1AA8, size 0x4, align 4
    float32 attack_range_max; // offset 0x1AAC, size 0x4, align 4
    float32 cast_range_min; // offset 0x1AB0, size 0x4, align 4
    float32 cast_range_max; // offset 0x1AB4, size 0x4, align 4
    float32 debuff_amp_min; // offset 0x1AB8, size 0x4, align 4
    float32 debuff_amp_max; // offset 0x1ABC, size 0x4, align 4
    float32 model_scale_min; // offset 0x1AC0, size 0x4, align 4
    float32 model_scale_max; // offset 0x1AC4, size 0x4, align 4
    float32 magic_amp_min; // offset 0x1AC8, size 0x4, align 4
    float32 magic_amp_max; // offset 0x1ACC, size 0x4, align 4
    float32 attack_range_per_agi; // offset 0x1AD0, size 0x4, align 4
    float32 move_speed_per_agi; // offset 0x1AD4, size 0x4, align 4
    float32 cast_range_per_str; // offset 0x1AD8, size 0x4, align 4
    float32 slow_resist_per_str; // offset 0x1ADC, size 0x4, align 4
};
