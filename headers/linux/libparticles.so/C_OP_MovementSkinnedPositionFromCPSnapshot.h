#pragma once

class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nSnapshotControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D9[0x3]; // offset 0x1D9
    int32 m_nRandomSeed; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    SnapshotIndexType_t m_nIndexType; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flReadIndex; // offset 0x1E8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flIncrement; // offset 0x350, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_nFullLoopIncrement; // offset 0x4B8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // offset 0x620, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flInterpolation; // offset 0x788, size 0x168, align 8 | MPropertyFriendlyName
};
