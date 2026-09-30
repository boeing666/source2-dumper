#pragma once

class C_OP_CurlNoiseForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x2048, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    ParticleDirectionNoiseType_t m_nNoiseType; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CPerParticleVecInput m_vecNoiseFreq; // offset 0x1F8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecNoiseScale; // offset 0x8D0, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffset; // offset 0xFA8, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffsetRate; // offset 0x1680, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flWorleySeed; // offset 0x1D58, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWorleyJitter; // offset 0x1ED0, size 0x178, align 8 | MPropertyFriendlyName
};
