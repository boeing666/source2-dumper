#pragma once

class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x378, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nSnapshotControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_01DD[0x3]; // offset 0x1DD
    int32 m_nRandomSeed; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRigid; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1E5, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIgnoreDt; // offset 0x1E6, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E7[0x1]; // offset 0x1E7
    float32 m_flMinNormalVelocity; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxNormalVelocity; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    SnapshotIndexType_t m_nIndexType; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CPerParticleFloatInput m_flReadIndex; // offset 0x1F8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flIncrement; // offset 0x360, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nFullLoopIncrement; // offset 0x364, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nSnapShotStartPoint; // offset 0x368, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flBoneVelocity; // offset 0x36C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBoneVelocityMax; // offset 0x370, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bCopyColor; // offset 0x374, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCopyAlpha; // offset 0x375, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x376, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0377[0x1]; // offset 0x377
};
