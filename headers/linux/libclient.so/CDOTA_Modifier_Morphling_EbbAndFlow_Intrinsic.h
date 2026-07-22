#pragma once

class CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 attack_range_min; // offset 0x1A58, size 0x4, align 4
    float32 attack_range_max; // offset 0x1A5C, size 0x4, align 4
    float32 cast_range_min; // offset 0x1A60, size 0x4, align 4
    float32 cast_range_max; // offset 0x1A64, size 0x4, align 4
    float32 debuff_amp_min; // offset 0x1A68, size 0x4, align 4
    float32 debuff_amp_max; // offset 0x1A6C, size 0x4, align 4
    float32 model_scale_min; // offset 0x1A70, size 0x4, align 4
    float32 model_scale_max; // offset 0x1A74, size 0x4, align 4
    float32 magic_amp_min; // offset 0x1A78, size 0x4, align 4
    float32 magic_amp_max; // offset 0x1A7C, size 0x4, align 4
    float32 attack_range_per_agi; // offset 0x1A80, size 0x4, align 4
    float32 move_speed_per_agi; // offset 0x1A84, size 0x4, align 4
    float32 cast_range_per_str; // offset 0x1A88, size 0x4, align 4
    float32 slow_resist_per_str; // offset 0x1A8C, size 0x4, align 4
};
