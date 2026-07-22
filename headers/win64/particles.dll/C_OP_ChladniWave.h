#pragma once

class C_OP_ChladniWave : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1520, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInputMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecWaveLength; // offset 0x7A0, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecHarmonics; // offset 0xE58, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1510, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalSpaceControlPoint; // offset 0x1514, size 0x4, align 4 | MPropertyFriendlyName
    bool m_b3D; // offset 0x1518, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1519[0x7]; // offset 0x1519
};
