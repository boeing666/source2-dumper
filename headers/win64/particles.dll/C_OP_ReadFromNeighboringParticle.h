#pragma once

class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nIncrement; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleFloatInput m_DistanceCheck; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
};
