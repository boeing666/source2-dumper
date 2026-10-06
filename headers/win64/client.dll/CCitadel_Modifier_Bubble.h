#pragma once

class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flDampingFactor; // offset 0x138, size 0x4, align 4
    char _pad_013C[0x164]; // offset 0x13C
    ParticleIndex_t m_ParticleIndex; // offset 0x2A0, size 0x4, align 255
    char _pad_02A4[0x4]; // offset 0x2A4
};
