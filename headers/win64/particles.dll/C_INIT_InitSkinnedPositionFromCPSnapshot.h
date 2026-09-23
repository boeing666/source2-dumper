#pragma once

class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x398, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nSnapshotControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_01F1[0x3]; // offset 0x1F1
    int32 m_nRandomSeed; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bRigid; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1F9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIgnoreDt; // offset 0x1FA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FB[0x1]; // offset 0x1FB
    float32 m_flMinNormalVelocity; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxNormalVelocity; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    SnapshotIndexType_t m_nIndexType; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flReadIndex; // offset 0x208, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flIncrement; // offset 0x380, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nFullLoopIncrement; // offset 0x384, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nSnapShotStartPoint; // offset 0x388, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flBoneVelocity; // offset 0x38C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBoneVelocityMax; // offset 0x390, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bCopyColor; // offset 0x394, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCopyAlpha; // offset 0x395, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x396, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0397[0x1]; // offset 0x397
};
