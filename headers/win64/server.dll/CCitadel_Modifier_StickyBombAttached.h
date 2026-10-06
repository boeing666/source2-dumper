#pragma once

class CCitadel_Modifier_StickyBombAttached : public CCitadelModifier /*0x0*/  // sizeof 0x418, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    ParticleIndex_t m_nParticleIndex; // offset 0x150, size 0x4, align 255
    ParticleIndex_t m_nAllyParticleIndex; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x2C0]; // offset 0x158
};
