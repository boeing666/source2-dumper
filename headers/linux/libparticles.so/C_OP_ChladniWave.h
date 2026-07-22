#pragma once

class C_OP_ChladniWave : public CParticleFunctionOperator /*0x0*/  // sizeof 0x14A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CPerParticleFloatInput m_flInputMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecWaveLength; // offset 0x778, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecHarmonics; // offset 0xE08, size 0x690, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1498, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalSpaceControlPoint; // offset 0x149C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_b3D; // offset 0x14A0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_14A1[0x7]; // offset 0x14A1
};
