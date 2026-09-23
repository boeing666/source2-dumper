#pragma once

class C_INIT_CreateOnModel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1378, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1E0, size 0x58, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x238, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nForceInModel; // offset 0x298, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScaleToVolume; // offset 0x29C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0x29D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_029E[0x2]; // offset 0x29E
    CParticleCollectionFloatInput m_nDesiredHitbox; // offset 0x2A0, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nHitboxValueFromControlPointIndex; // offset 0x410, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0414[0x4]; // offset 0x414
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x418, size 0x6B0, align 8 | MPropertyFriendlyName
    float32 m_flBoneVelocity; // offset 0xAC8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxBoneVelocity; // offset 0xACC, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xAD0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate MPropertySuppressExpr
    char[128] m_HitboxSetName; // offset 0x1180, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1200, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1201, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bUseMesh; // offset 0x1202, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1203[0x5]; // offset 0x1203
    CParticleCollectionFloatInput m_flShellSize; // offset 0x1208, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
};
