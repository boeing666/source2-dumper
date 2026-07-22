#pragma once

class C_OP_CurlNoiseForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x1FB0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    ParticleDirectionNoiseType_t m_nNoiseType; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleVecInput m_vecNoiseFreq; // offset 0x1F0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecNoiseScale; // offset 0x8A8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffset; // offset 0xF60, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffsetRate; // offset 0x1618, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flWorleySeed; // offset 0x1CD0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flWorleyJitter; // offset 0x1E40, size 0x170, align 8 | MPropertyFriendlyName
};
