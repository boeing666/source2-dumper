#pragma once

class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nSnapshotControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPointNumber; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bRandom; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x3]; // offset 0x1E1
    int32 m_nRandomSeed; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bSetRadius; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x2]; // offset 0x1EA
    SnapshotIndexType_t m_nIndexType; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flReadIndex; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flIncrement; // offset 0x360, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_nFullLoopIncrement; // offset 0x4D0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_nSnapShotStartPoint; // offset 0x640, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flInterpolation; // offset 0x7B0, size 0x170, align 8 | MPropertyFriendlyName
};
