#pragma once

class C_OP_RopePathSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPPnt; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bTraceToSurface; // offset 0x1F0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F1[0x7]; // offset 0x1F1
    CParticleCollectionFloatInput m_flTraceLength; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTraceOffset; // offset 0x370, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTeleportDistance; // offset 0x4E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flPlacementOffset; // offset 0x660, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionVecInput m_vecTraceDirection; // offset 0x7D8, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleTraceSet_t m_nTraceSet; // offset 0xEB0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nValidCPPnt; // offset 0xEB4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVScale; // offset 0xEB8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVOffset; // offset 0x1030, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x11A8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDensity; // offset 0x1320, size 0x178, align 8 | MPropertyFriendlyName
    CUtlString m_strLinePointsName; // offset 0x1498, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strEndPointsName; // offset 0x14A0, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strLastValidName; // offset 0x14A8, size 0x8, align 8 | MPropertyFriendlyName
};
