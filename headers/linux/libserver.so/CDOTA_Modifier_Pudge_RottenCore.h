#pragma once

class CDOTA_Modifier_Pudge_RottenCore : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 attack_damage_per_stack; // offset 0x1AA8, size 0x4, align 4
    int32 max_total_stacks; // offset 0x1AAC, size 0x4, align 4
    float32 rot_tick; // offset 0x1AB0, size 0x4, align 4
    int32 stacks_decrement_per_rot_off_tick; // offset 0x1AB4, size 0x4, align 4
    int32 m_nRotOffTicksToDecrement; // offset 0x1AB8, size 0x4, align 4
    int32 m_nAccumulatedRotOffTicks; // offset 0x1ABC, size 0x4, align 4
};
