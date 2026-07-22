#pragma once

class CDOTA_BuffParticle  // sizeof 0xC, align 0xFF [trivial_dtor] (client)
{
public:
    ParticleIndex_t m_iIndex; // offset 0x0, size 0x4, align 255
    int32 m_iPriority; // offset 0x4, size 0x4, align 4
    bool m_bDestroyImmediatly; // offset 0x8, size 0x1, align 1
    bool m_bStatusEffect; // offset 0x9, size 0x1, align 1
    bool m_bHeroEffect; // offset 0xA, size 0x1, align 1
    bool m_bOverheadEffectOffset; // offset 0xB, size 0x1, align 1
};
