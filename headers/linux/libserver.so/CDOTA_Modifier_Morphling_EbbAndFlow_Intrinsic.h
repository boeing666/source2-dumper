#pragma once

class CDOTA_Modifier_Morphling_EbbAndFlow_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 attack_range_min; // offset 0x1AF8, size 0x4, align 4
    float32 attack_range_max; // offset 0x1AFC, size 0x4, align 4
    float32 cast_range_min; // offset 0x1B00, size 0x4, align 4
    float32 cast_range_max; // offset 0x1B04, size 0x4, align 4
    float32 debuff_amp_min; // offset 0x1B08, size 0x4, align 4
    float32 debuff_amp_max; // offset 0x1B0C, size 0x4, align 4
    float32 model_scale_min; // offset 0x1B10, size 0x4, align 4
    float32 model_scale_max; // offset 0x1B14, size 0x4, align 4
    float32 magic_amp_min; // offset 0x1B18, size 0x4, align 4
    float32 magic_amp_max; // offset 0x1B1C, size 0x4, align 4
    float32 attack_range_per_agi; // offset 0x1B20, size 0x4, align 4
    float32 move_speed_per_agi; // offset 0x1B24, size 0x4, align 4
    float32 cast_range_per_str; // offset 0x1B28, size 0x4, align 4
    float32 slow_resist_per_str; // offset 0x1B2C, size 0x4, align 4
};
