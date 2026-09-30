#pragma once

class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nSnapshotControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x3]; // offset 0x1E9
    int32 m_nRandomSeed; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x1F1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F2[0x2]; // offset 0x1F2
    SnapshotIndexType_t m_nIndexType; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flReadIndex; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flIncrement; // offset 0x370, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_nFullLoopIncrement; // offset 0x4E8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // offset 0x660, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flInterpolation; // offset 0x7D8, size 0x178, align 8 | MPropertyFriendlyName
};
