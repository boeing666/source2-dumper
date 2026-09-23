#pragma once

class C_OP_CurlNoiseForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x1F88, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E4]; // offset 0x0
    ParticleDirectionNoiseType_t m_nNoiseType; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleVecInput m_vecNoiseFreq; // offset 0x1E8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecNoiseScale; // offset 0x898, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffset; // offset 0xF48, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffsetRate; // offset 0x15F8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flWorleySeed; // offset 0x1CA8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWorleyJitter; // offset 0x1E18, size 0x170, align 8 | MPropertyFriendlyName
};
