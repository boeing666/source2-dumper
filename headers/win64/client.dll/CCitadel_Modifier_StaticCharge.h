#pragma once

class CCitadel_Modifier_StaticCharge : public CCitadelModifier /*0x0*/  // sizeof 0x408, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0x138, size 0x4, align 255
    char _pad_013C[0x2C4]; // offset 0x13C
    float32 m_flRadius; // offset 0x400, size 0x4, align 4
    char _pad_0404[0x4]; // offset 0x404
};
