#pragma once

class CDOTA_Modifier_Visage_Lurker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_stacks; // offset 0x1AA8, size 0x4, align 4
    float32 stack_gain_time; // offset 0x1AAC, size 0x4, align 4
    float32 cooldown_speed_per_stack; // offset 0x1AB0, size 0x4, align 4
    float32 linger_duration; // offset 0x1AB4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB8, size 0x4, align 255
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
