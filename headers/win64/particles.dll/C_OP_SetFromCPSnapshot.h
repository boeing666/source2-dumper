#pragma once

class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CUtlString m_strSnapshotSubset; // offset 0x1E8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAttributeToRead; // offset 0x1F0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nAttributeToWrite; // offset 0x1F4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nLocalSpaceCP; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1FC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x1FD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FE[0x2]; // offset 0x1FE
    int32 m_nRandomSeed; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0204[0x4]; // offset 0x204
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // offset 0x208, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nSnapShotIncrement; // offset 0x380, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x4F8, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bSubSample; // offset 0x670, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPrev; // offset 0x671, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0672[0x6]; // offset 0x672
};
