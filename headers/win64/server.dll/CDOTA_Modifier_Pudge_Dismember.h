#pragma once

class CDOTA_Modifier_Pudge_Dismember : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 dismember_damage; // offset 0x1AA8, size 0x4, align 4
    float32 strength_damage; // offset 0x1AAC, size 0x4, align 4
    float32 glutton_strength_stack_duration; // offset 0x1AB0, size 0x4, align 4
    int32 gluttony_strength_bonus; // offset 0x1AB4, size 0x4, align 4
    int32 m_nTicks; // offset 0x1AB8, size 0x4, align 4
    int32 m_nMaxTicks; // offset 0x1ABC, size 0x4, align 4
    float32 m_flTickRate; // offset 0x1AC0, size 0x4, align 4
    float32 animation_rate; // offset 0x1AC4, size 0x4, align 4
};
