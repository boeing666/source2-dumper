#pragma once

class CCitadel_Modifier_StickyBombAttached : public CCitadelModifier /*0x0*/  // sizeof 0x2E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    ParticleIndex_t m_nParticleIndex; // offset 0xD8, size 0x4, align 255
    ParticleIndex_t m_nAllyParticleIndex; // offset 0xDC, size 0x4, align 255
    char _pad_00E0[0x200]; // offset 0xE0
};
