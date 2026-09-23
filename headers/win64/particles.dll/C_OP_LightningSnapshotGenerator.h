#pragma once

class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPStartPnt; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPEndPnt; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
    CParticleCollectionFloatInput m_flSegments; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOffset; // offset 0x370, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOffsetDecay; // offset 0x4E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecalcRate; // offset 0x660, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVScale; // offset 0x7D8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVOffset; // offset 0x950, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flSplitRate; // offset 0xAC8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRecursionSplitScale; // offset 0xC40, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bScaleBranchDistance; // offset 0xDB8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0DB9[0x7]; // offset 0xDB9
    CParticleCollectionFloatInput m_flBranchDistanceScale; // offset 0xDC0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScaleBranchOffset; // offset 0xF38, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F39[0x7]; // offset 0xF39
    CParticleCollectionFloatInput m_flBranchOffsetScale; // offset 0xF40, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBranchTwist; // offset 0x10B8, size 0x178, align 8 | MPropertyFriendlyName
    ParticleLightnintBranchBehavior_t m_nBranchBehavior; // offset 0x1230, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_1234[0x4]; // offset 0x1234
    CParticleCollectionFloatInput m_flRadiusStart; // offset 0x1238, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadiusEnd; // offset 0x13B0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDedicatedPool; // offset 0x1528, size 0x178, align 8 | MPropertyFriendlyName
};
