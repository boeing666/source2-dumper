#pragma once

class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1428, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    bool m_bUseBones; // offset 0x1DC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceZ; // offset 0x1DD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01DE[0x2]; // offset 0x1DE
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeightCP; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseWaterHeight; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x7]; // offset 0x1E9
    CParticleCollectionFloatInput m_flDesiredHeight; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x360, size 0x6B0, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xA10, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleHitboxBiasType_t m_nBiasType; // offset 0x10C0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x10C4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreferMovingBoxes; // offset 0x10C5, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x10C6, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_1146[0x2]; // offset 0x1146
    CParticleCollectionFloatInput m_flHitboxVelocityScale; // offset 0x1148, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxBoneVelocity; // offset 0x12B8, size 0x170, align 8 | MPropertyFriendlyName
};
