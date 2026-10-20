#pragma once

class CCitadel_Modifier_StickyBombAttached : public CCitadelModifier /*0x0*/  // sizeof 0x420, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    ParticleIndex_t m_nParticleIndex; // offset 0x158, size 0x4, align 255
    ParticleIndex_t m_nAllyParticleIndex; // offset 0x15C, size 0x4, align 255
    char _pad_0160[0x2C0]; // offset 0x160
};
