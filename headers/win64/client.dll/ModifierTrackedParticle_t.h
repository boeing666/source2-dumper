#pragma once

struct ModifierTrackedParticle_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    ParticleIndex_t m_nParticleIndex; // offset 0x0, size 0x4, align 255
    bool m_bDestroyImmediately; // offset 0x4, size 0x1, align 1
    bool m_bStatusEffect; // offset 0x5, size 0x1, align 1
    bool m_bScreenSpace; // offset 0x6, size 0x1, align 1
    char _pad_0007[0x1]; // offset 0x7
    int16 m_nStatusEffectPriority; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x2]; // offset 0xA
};
