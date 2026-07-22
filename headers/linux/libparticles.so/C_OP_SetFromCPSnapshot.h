#pragma once

class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D4[0x4]; // offset 0x1D4
    CUtlString m_strSnapshotSubset; // offset 0x1D8, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleAttributeIndex_t m_nAttributeToRead; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nAttributeToWrite; // offset 0x1E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nLocalSpaceCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x1ED, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EE[0x2]; // offset 0x1EE
    int32 m_nRandomSeed; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // offset 0x1F8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nSnapShotIncrement; // offset 0x360, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x4C8, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bSubSample; // offset 0x630, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPrev; // offset 0x631, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0632[0x6]; // offset 0x632
};
