#pragma once

class CDOTA_Modifier_Pudge_RottenCore : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 attack_damage_per_stack; // offset 0x1A58, size 0x4, align 4
    int32 max_total_stacks; // offset 0x1A5C, size 0x4, align 4
    float32 rot_tick; // offset 0x1A60, size 0x4, align 4
    int32 stacks_decrement_per_rot_off_tick; // offset 0x1A64, size 0x4, align 4
    int32 m_nRotOffTicksToDecrement; // offset 0x1A68, size 0x4, align 4
    int32 m_nAccumulatedRotOffTicks; // offset 0x1A6C, size 0x4, align 4
};
