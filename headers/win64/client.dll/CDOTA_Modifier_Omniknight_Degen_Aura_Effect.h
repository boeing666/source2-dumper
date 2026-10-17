#pragma once

class CDOTA_Modifier_Omniknight_Degen_Aura_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 speed_bonus; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_damage_per_stack; // offset 0x1AAC, size 0x4, align 4
    float32 stack_interval; // offset 0x1AB0, size 0x4, align 4
    float32 linger_duration; // offset 0x1AB4, size 0x4, align 4
    int32 max_stacks; // offset 0x1AB8, size 0x4, align 4
    bool m_bActive; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    GameTime_t m_flLastActiveTime; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
