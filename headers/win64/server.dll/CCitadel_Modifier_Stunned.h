#pragma once

class CCitadel_Modifier_Stunned : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bEnabled; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    ParticleIndex_t m_nParticleIndex; // offset 0x154, size 0x4, align 255
};
