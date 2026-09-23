#pragma once

class C_INIT_CreateOnModel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x13F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1E8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x248, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nForceInModel; // offset 0x2B0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScaleToVolume; // offset 0x2B4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0x2B5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02B6[0x2]; // offset 0x2B6
    CParticleCollectionFloatInput m_nDesiredHitbox; // offset 0x2B8, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nHitboxValueFromControlPointIndex; // offset 0x430, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0434[0x4]; // offset 0x434
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x438, size 0x6D8, align 8 | MPropertyFriendlyName
    float32 m_flBoneVelocity; // offset 0xB10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxBoneVelocity; // offset 0xB14, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xB18, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate MPropertySuppressExpr
    char[128] m_HitboxSetName; // offset 0x11F0, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1270, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1271, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseMesh; // offset 0x1272, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1273[0x5]; // offset 0x1273
    CParticleCollectionFloatInput m_flShellSize; // offset 0x1278, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
