#pragma once

class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 speed_bonus; // offset 0x1A58, size 0x4, align 4
    int32 bonus_damage_per_stack; // offset 0x1A5C, size 0x4, align 4
    float32 stack_interval; // offset 0x1A60, size 0x4, align 4
    float32 linger_duration; // offset 0x1A64, size 0x4, align 4
    int32 max_stacks; // offset 0x1A68, size 0x4, align 4
    bool m_bActive; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    GameTime_t m_flLastActiveTime; // offset 0x1A70, size 0x4, align 255
    char _pad_1A74[0x4]; // offset 0x1A74
};
