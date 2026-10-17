#pragma once

class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool self_spotlight; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    float32 radius; // offset 0x1AAC, size 0x4, align 4
    float32 initial_speed; // offset 0x1AB0, size 0x4, align 4
    float32 sweep_speed; // offset 0x1AB4, size 0x4, align 4
    float32 sweep_radius; // offset 0x1AB8, size 0x4, align 4
    float32 linger_duration; // offset 0x1ABC, size 0x4, align 4
    int32 spotlight_index; // offset 0x1AC0, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x1AC4, size 0xC, align 4
    VectorWS m_vTargetLocation; // offset 0x1AD0, size 0xC, align 4
    float32 m_flTargetReachedTime; // offset 0x1ADC, size 0x4, align 4
};
