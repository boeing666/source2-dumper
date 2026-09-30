#pragma once

class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced /*0x0*/  // sizeof 0x2C8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    float32 m_flDampingFactor; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x164]; // offset 0x15C
    ParticleIndex_t m_ParticleIndex; // offset 0x2C0, size 0x4, align 255
    char _pad_02C4[0x4]; // offset 0x2C4
};
