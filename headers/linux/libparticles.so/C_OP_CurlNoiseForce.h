#pragma once

class C_OP_CurlNoiseForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x1EF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    ParticleDirectionNoiseType_t m_nNoiseType; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleVecInput m_vecNoiseFreq; // offset 0x1E0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecNoiseScale; // offset 0x870, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffset; // offset 0xF00, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffsetRate; // offset 0x1590, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flWorleySeed; // offset 0x1C20, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWorleyJitter; // offset 0x1D88, size 0x168, align 8 | MPropertyFriendlyName
};
