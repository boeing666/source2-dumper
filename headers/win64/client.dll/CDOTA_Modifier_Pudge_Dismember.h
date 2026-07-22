#pragma once

class CDOTA_Modifier_Pudge_Dismember : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 dismember_damage; // offset 0x1A58, size 0x4, align 4
    float32 strength_damage; // offset 0x1A5C, size 0x4, align 4
    float32 glutton_strength_stack_duration; // offset 0x1A60, size 0x4, align 4
    int32 gluttony_strength_bonus; // offset 0x1A64, size 0x4, align 4
    int32 m_nTicks; // offset 0x1A68, size 0x4, align 4
    int32 m_nMaxTicks; // offset 0x1A6C, size 0x4, align 4
    float32 m_flTickRate; // offset 0x1A70, size 0x4, align 4
    float32 animation_rate; // offset 0x1A74, size 0x4, align 4
};
