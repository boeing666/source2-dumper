#pragma once

class C_INIT_CreateOnModel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1320, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1D8, size 0x58, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x230, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nForceInModel; // offset 0x290, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScaleToVolume; // offset 0x294, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0x295, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0296[0x2]; // offset 0x296
    CParticleCollectionFloatInput m_nDesiredHitbox; // offset 0x298, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nHitboxValueFromControlPointIndex; // offset 0x400, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0404[0x4]; // offset 0x404
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x408, size 0x690, align 8 | MPropertyFriendlyName
    float32 m_flBoneVelocity; // offset 0xA98, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxBoneVelocity; // offset 0xA9C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xAA0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate MPropertySuppressExpr
    char[128] m_HitboxSetName; // offset 0x1130, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x11B0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x11B1, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseMesh; // offset 0x11B2, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_11B3[0x5]; // offset 0x11B3
    CParticleCollectionFloatInput m_flShellSize; // offset 0x11B8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
