#pragma once

class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1498, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    bool m_bUseBones; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceZ; // offset 0x1E9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01EA[0x2]; // offset 0x1EA
    int32 m_nControlPointNumber; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeightCP; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseWaterHeight; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
    CParticleCollectionFloatInput m_flDesiredHeight; // offset 0x1F8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x370, size 0x6D8, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0xA48, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleHitboxBiasType_t m_nBiasType; // offset 0x1120, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1124, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreferMovingBoxes; // offset 0x1125, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1126, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_11A6[0x2]; // offset 0x11A6
    CParticleCollectionFloatInput m_flHitboxVelocityScale; // offset 0x11A8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxBoneVelocity; // offset 0x1320, size 0x178, align 8 | MPropertyFriendlyName
};
