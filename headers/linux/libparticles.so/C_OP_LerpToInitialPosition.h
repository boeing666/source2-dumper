#pragma once

class C_OP_LerpToInitialPosition : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D4[0x4]; // offset 0x1D4
    CPerParticleFloatInput m_flInterpolation; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nCacheField; // offset 0x340, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0344[0x4]; // offset 0x344
    CParticleCollectionFloatInput m_flScale; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x4B0, size 0x690, align 8 | MPropertyFriendlyName
};
