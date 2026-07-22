#pragma once

class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x15A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPStartPnt; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPEndPnt; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSegments; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOffset; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOffsetDecay; // offset 0x4B0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x618, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVScale; // offset 0x780, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVOffset; // offset 0x8E8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSplitRate; // offset 0xA50, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecursionSplitScale; // offset 0xBB8, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bScaleBranchDistance; // offset 0xD20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0D21[0x7]; // offset 0xD21
    CParticleCollectionFloatInput m_flBranchDistanceScale; // offset 0xD28, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScaleBranchOffset; // offset 0xE90, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0E91[0x7]; // offset 0xE91
    CParticleCollectionFloatInput m_flBranchOffsetScale; // offset 0xE98, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBranchTwist; // offset 0x1000, size 0x168, align 8 | MPropertyFriendlyName
    ParticleLightnintBranchBehavior_t m_nBranchBehavior; // offset 0x1168, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_116C[0x4]; // offset 0x116C
    CParticleCollectionFloatInput m_flRadiusStart; // offset 0x1170, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadiusEnd; // offset 0x12D8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDedicatedPool; // offset 0x1440, size 0x168, align 8 | MPropertyFriendlyName
};
