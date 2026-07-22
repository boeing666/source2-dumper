#pragma once

class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1438, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bUseBones; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceZ; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x2]; // offset 0x1E2
    int32 m_nControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeightCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseWaterHeight; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01ED[0x3]; // offset 0x1ED
    CParticleCollectionFloatInput m_flDesiredHeight; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x360, size 0x6B8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xA18, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleHitboxBiasType_t m_nBiasType; // offset 0x10D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x10D4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreferMovingBoxes; // offset 0x10D5, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x10D6, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_1156[0x2]; // offset 0x1156
    CParticleCollectionFloatInput m_flHitboxVelocityScale; // offset 0x1158, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxBoneVelocity; // offset 0x12C8, size 0x170, align 8 | MPropertyFriendlyName
};
