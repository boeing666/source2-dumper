#pragma once

class C_OP_LerpToInitialPosition : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInterpolation; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nCacheField; // offset 0x350, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0354[0x4]; // offset 0x354
    CParticleCollectionFloatInput m_flScale; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecScale; // offset 0x4C8, size 0x6B8, align 8 | MPropertyFriendlyName
};
