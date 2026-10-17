#pragma once

class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPStartPnt; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPEndPnt; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSegments; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOffset; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOffsetDecay; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x638, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVScale; // offset 0x7A8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVOffset; // offset 0x918, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSplitRate; // offset 0xA88, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecursionSplitScale; // offset 0xBF8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bScaleBranchDistance; // offset 0xD68, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0D69[0x7]; // offset 0xD69
    CParticleCollectionFloatInput m_flBranchDistanceScale; // offset 0xD70, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScaleBranchOffset; // offset 0xEE0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EE1[0x7]; // offset 0xEE1
    CParticleCollectionFloatInput m_flBranchOffsetScale; // offset 0xEE8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBranchTwist; // offset 0x1058, size 0x170, align 8 | MPropertyFriendlyName
    ParticleLightnintBranchBehavior_t m_nBranchBehavior; // offset 0x11C8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_11CC[0x4]; // offset 0x11CC
    CParticleCollectionFloatInput m_flRadiusStart; // offset 0x11D0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadiusEnd; // offset 0x1340, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDedicatedPool; // offset 0x14B0, size 0x170, align 8 | MPropertyFriendlyName
};
