#pragma once

class CDOTA_Modifier_Magnataur_Empower : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage_pct; // offset 0x1AA8, size 0x4, align 4
    float32 cleave_damage_pct; // offset 0x1AAC, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1AB0, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1AB4, size 0x4, align 4
    float32 cleave_distance; // offset 0x1AB8, size 0x4, align 4
    float32 self_multiplier; // offset 0x1ABC, size 0x4, align 4
    float32 secondary_cleave_distance; // offset 0x1AC0, size 0x4, align 4
    float32 self_multiplier_bonus_stack_duration; // offset 0x1AC4, size 0x4, align 4
    int32 self_multiplier_bonus_max_stacks; // offset 0x1AC8, size 0x4, align 4
    int32 self_multiplier_bonus_per_stack; // offset 0x1ACC, size 0x4, align 4
};
