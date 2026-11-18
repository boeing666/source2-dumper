#pragma once

class CDOTA_Modifier_Visage_Lurker_Linger : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 cooldown_speed_per_stack; // offset 0x1AF8, size 0x4, align 4
    int32 max_stacks; // offset 0x1AFC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B00, size 0x4, align 255
    char _pad_1B04[0x4]; // offset 0x1B04
};
