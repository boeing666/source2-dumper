#pragma once

class CDOTA_Modifier_Magnataur_Empower : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage_pct; // offset 0x1A78, size 0x4, align 4
    float32 cleave_damage_pct; // offset 0x1A7C, size 0x4, align 4
    float32 cleave_starting_width; // offset 0x1A80, size 0x4, align 4
    float32 cleave_ending_width; // offset 0x1A84, size 0x4, align 4
    float32 cleave_distance; // offset 0x1A88, size 0x4, align 4
    float32 self_multiplier; // offset 0x1A8C, size 0x4, align 4
    float32 secondary_cleave_distance; // offset 0x1A90, size 0x4, align 4
    float32 self_multiplier_bonus_stack_duration; // offset 0x1A94, size 0x4, align 4
    int32 self_multiplier_bonus_max_stacks; // offset 0x1A98, size 0x4, align 4
    int32 self_multiplier_bonus_per_stack; // offset 0x1A9C, size 0x4, align 4
};
