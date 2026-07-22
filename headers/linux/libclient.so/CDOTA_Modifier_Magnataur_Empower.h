#pragma once

class CDOTA_Modifier_Magnataur_Empower : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage_pct; // offset 0x1A58, size 0x4, align 4
    float32 cleave_damage_pct; // offset 0x1A5C, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1A60, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A64, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A68, size 0x4, align 4
    float32 self_multiplier; // offset 0x1A6C, size 0x4, align 4
    float32 secondary_cleave_distance; // offset 0x1A70, size 0x4, align 4
    float32 self_multiplier_bonus_stack_duration; // offset 0x1A74, size 0x4, align 4
    int32 self_multiplier_bonus_max_stacks; // offset 0x1A78, size 0x4, align 4
    int32 self_multiplier_bonus_per_stack; // offset 0x1A7C, size 0x4, align 4
};
