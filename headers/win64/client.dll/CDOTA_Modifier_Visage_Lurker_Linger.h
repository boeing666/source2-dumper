#pragma once

class CDOTA_Modifier_Visage_Lurker_Linger : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 cooldown_speed_per_stack; // offset 0x1A78, size 0x4, align 4
    int32 max_stacks; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
