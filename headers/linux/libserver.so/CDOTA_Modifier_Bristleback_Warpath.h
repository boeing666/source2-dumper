#pragma once

class CDOTA_Modifier_Bristleback_Warpath : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage_per_stack; // offset 0x1AF8, size 0x4, align 4
    float32 move_speed_per_stack; // offset 0x1AFC, size 0x4, align 4
    int32 max_stacks; // offset 0x1B00, size 0x4, align 4
    float32 stack_duration; // offset 0x1B04, size 0x4, align 4
    int32 aspd_per_stack; // offset 0x1B08, size 0x4, align 4
    float32 active_bonus_attack_percent; // offset 0x1B0C, size 0x4, align 4
    float32 active_bonus_movement_percent; // offset 0x1B10, size 0x4, align 4
    GameTime_t m_flMaxStackStartTime; // offset 0x1B14, size 0x4, align 255
    bool m_bSuppressKillEater; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x7]; // offset 0x1B19
};
