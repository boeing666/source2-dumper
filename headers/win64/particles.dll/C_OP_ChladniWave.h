#pragma once

class C_OP_ChladniWave : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1588, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleFloatInput m_flInputMin; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x650, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecWaveLength; // offset 0x7C8, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecHarmonics; // offset 0xEA0, size 0x6D8, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x1578, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nLocalSpaceControlPoint; // offset 0x157C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_b3D; // offset 0x1580, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1581[0x7]; // offset 0x1581
};
