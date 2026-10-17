#pragma once

class C_OP_RopePathSnapshotGenerator : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1438, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nCPSnapshot; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCPPnt; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bTraceToSurface; // offset 0x1E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E5[0x3]; // offset 0x1E5
    CParticleCollectionFloatInput m_flTraceLength; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTraceOffset; // offset 0x358, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flTeleportDistance; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flPlacementOffset; // offset 0x638, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionVecInput m_vecTraceDirection; // offset 0x7A8, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleTraceSet_t m_nTraceSet; // offset 0xE58, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nValidCPPnt; // offset 0xE5C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVScale; // offset 0xE60, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flUVOffset; // offset 0xFD0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRadius; // offset 0x1140, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flDensity; // offset 0x12B0, size 0x170, align 8 | MPropertyFriendlyName
    CUtlString m_strLinePointsName; // offset 0x1420, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strEndPointsName; // offset 0x1428, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strLastValidName; // offset 0x1430, size 0x8, align 8 | MPropertyFriendlyName
};
