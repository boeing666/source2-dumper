#pragma once

class CDOTA_Modifier_Muerta_Ofrenda_Invulnerable : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A58, size 0x4, align 255
    ParticleIndex_t m_nFXIndexAoE; // offset 0x1A5C, size 0x4, align 255
    float32 effect_radius; // offset 0x1A60, size 0x4, align 4
    bool bActive; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
};
