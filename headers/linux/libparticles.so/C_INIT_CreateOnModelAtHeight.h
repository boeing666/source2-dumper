#pragma once

class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x13C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    bool m_bUseBones; // offset 0x1D4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bForceZ; // offset 0x1D5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D6[0x2]; // offset 0x1D6
    int32 m_nControlPointNumber; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nHeightCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseWaterHeight; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x7]; // offset 0x1E1
    CParticleCollectionFloatInput m_flDesiredHeight; // offset 0x1E8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecHitBoxScale; // offset 0x350, size 0x690, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecDirectionBias; // offset 0x9E0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleHitboxBiasType_t m_nBiasType; // offset 0x1070, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x1074, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreferMovingBoxes; // offset 0x1075, size 0x1, align 1 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x1076, size 0x80, align 1 | MPropertyFriendlyName
    char _pad_10F6[0x2]; // offset 0x10F6
    CParticleCollectionFloatInput m_flHitboxVelocityScale; // offset 0x10F8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxBoneVelocity; // offset 0x1260, size 0x168, align 8 | MPropertyFriendlyName
};
