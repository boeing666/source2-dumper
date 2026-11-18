#pragma once

class CDOTA_Modifier_Hoodwink_Caltrops : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 effect_radius; // offset 0x1AF8, size 0x4, align 4
    int32 caltrops_damage; // offset 0x1AFC, size 0x4, align 4
    int32 activation_radius; // offset 0x1B00, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B04, size 0x4, align 4
    float32 activation_delay; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B0C, size 0x4, align 255
};
