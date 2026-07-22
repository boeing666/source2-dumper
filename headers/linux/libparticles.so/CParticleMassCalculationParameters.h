#pragma once

class CParticleMassCalculationParameters  // sizeof 0x440, align 0x8 (particles) {MGetKV3ClassDefaults}
{
public:
    ParticleMassMode_t m_nMassMode; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0004[0x4]; // offset 0x4
    CPerParticleFloatInput m_flRadius; // offset 0x8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNominalRadius; // offset 0x170, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flScale; // offset 0x2D8, size 0x168, align 8 | MPropertyFriendlyName
};
