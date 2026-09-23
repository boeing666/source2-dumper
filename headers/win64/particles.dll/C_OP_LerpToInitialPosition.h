#pragma once

class C_OP_LerpToInitialPosition : public CParticleFunctionOperator /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleFloatInput m_flInterpolation; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nCacheField; // offset 0x360, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0364[0x4]; // offset 0x364
    CParticleCollectionFloatInput m_flScale; // offset 0x368, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x4E0, size 0x6D8, align 8 | MPropertyFriendlyName
};
