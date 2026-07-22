#pragma once

class C_INIT_CreateOnModel : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1398, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x240, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    int32 m_nForceInModel; // offset 0x2A8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bScaleToVolume; // offset 0x2AC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0x2AD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_02AE[0x2]; // offset 0x2AE
    CParticleCollectionFloatInput m_nDesiredHitbox; // offset 0x2B0, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nHitboxValueFromControlPointIndex; // offset 0x420, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0424[0x4]; // offset 0x424
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x428, size 0x6B8, align 8 | MPropertyFriendlyName
    float32 m_flBoneVelocity; // offset 0xAE0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxBoneVelocity; // offset 0xAE4, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xAE8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    char[128] m_HitboxSetName; // offset 0x11A0, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1220, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x1221, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseMesh; // offset 0x1222, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1223[0x5]; // offset 0x1223
    CParticleCollectionFloatInput m_flShellSize; // offset 0x1228, size 0x170, align 8 | MPropertyFriendlyName
};
