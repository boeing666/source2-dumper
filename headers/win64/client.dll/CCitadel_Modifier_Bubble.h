#pragma once

class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced /*0x0*/  // sizeof 0x2A0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    float32 m_flDampingFactor; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x164]; // offset 0x134
    ParticleIndex_t m_ParticleIndex; // offset 0x298, size 0x4, align 255
    char _pad_029C[0x4]; // offset 0x29C
};
