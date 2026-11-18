#pragma once

class CDOTA_Modifier_Pudge_Dismember : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 dismember_damage; // offset 0x1AF8, size 0x4, align 4
    float32 strength_damage; // offset 0x1AFC, size 0x4, align 4
    float32 glutton_strength_stack_duration; // offset 0x1B00, size 0x4, align 4
    int32 gluttony_strength_bonus; // offset 0x1B04, size 0x4, align 4
    int32 m_nTicks; // offset 0x1B08, size 0x4, align 4
    int32 m_nMaxTicks; // offset 0x1B0C, size 0x4, align 4
    float32 m_flTickRate; // offset 0x1B10, size 0x4, align 4
    float32 animation_rate; // offset 0x1B14, size 0x4, align 4
};
