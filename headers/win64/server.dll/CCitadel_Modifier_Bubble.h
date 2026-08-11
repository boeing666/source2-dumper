#pragma once

class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xE8]; // offset 0x0
    float32 m_flDampingFactor; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x104]; // offset 0xEC
    ParticleIndex_t m_ParticleIndex; // offset 0x1F0, size 0x4, align 255
    char _pad_01F4[0x4]; // offset 0x1F4
};
