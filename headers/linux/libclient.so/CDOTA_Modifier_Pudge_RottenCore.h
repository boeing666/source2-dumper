#pragma once

class CDOTA_Modifier_Pudge_RottenCore : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 attack_damage_per_stack; // offset 0x1A78, size 0x4, align 4
    int32 max_total_stacks; // offset 0x1A7C, size 0x4, align 4
    float32 rot_tick; // offset 0x1A80, size 0x4, align 4
    int32 stacks_decrement_per_rot_off_tick; // offset 0x1A84, size 0x4, align 4
    int32 m_nRotOffTicksToDecrement; // offset 0x1A88, size 0x4, align 4
    int32 m_nAccumulatedRotOffTicks; // offset 0x1A8C, size 0x4, align 4
};
