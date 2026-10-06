#pragma once

class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced /*0x0*/  // sizeof 0x2D0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x160]; // offset 0x0
    float32 m_flDampingFactor; // offset 0x160, size 0x4, align 4
    char _pad_0164[0x164]; // offset 0x164
    ParticleIndex_t m_ParticleIndex; // offset 0x2C8, size 0x4, align 255
    char _pad_02CC[0x4]; // offset 0x2CC
};
