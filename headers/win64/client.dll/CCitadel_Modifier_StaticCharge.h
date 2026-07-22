#pragma once

class CCitadel_Modifier_StaticCharge : public CCitadelModifier /*0x0*/  // sizeof 0x1D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    ParticleIndex_t m_hRingEffect; // offset 0xC0, size 0x4, align 255
    char _pad_00C4[0x104]; // offset 0xC4
    float32 m_flRadius; // offset 0x1C8, size 0x4, align 4
    char _pad_01CC[0x4]; // offset 0x1CC
};
