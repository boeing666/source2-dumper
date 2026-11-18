#pragma once

class CDOTA_Modifier_Magnataur_Empower : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage_pct; // offset 0x1AF8, size 0x4, align 4
    float32 cleave_damage_pct; // offset 0x1AFC, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1B00, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1B04, size 0x4, align 4
    float32 cleave_distance; // offset 0x1B08, size 0x4, align 4
    float32 self_multiplier; // offset 0x1B0C, size 0x4, align 4
    float32 secondary_cleave_distance; // offset 0x1B10, size 0x4, align 4
    float32 self_multiplier_bonus_stack_duration; // offset 0x1B14, size 0x4, align 4
    int32 self_multiplier_bonus_max_stacks; // offset 0x1B18, size 0x4, align 4
    int32 self_multiplier_bonus_per_stack; // offset 0x1B1C, size 0x4, align 4
};
