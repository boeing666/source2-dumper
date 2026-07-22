#pragma once

class CSurvivorsPickupDefinition  // sizeof 0x2F8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsPickupID_t m_unPickupID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_sPowerUpName; // offset 0x8, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticleEffect; // offset 0x10, size 0xE0, align 8
    int32 m_nModelIndex; // offset 0xF0, size 0x4, align 4
    char _pad_00F4[0x4]; // offset 0xF4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDirectionalHelperParticle; // offset 0xF8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sOnPickupOverheadEffect; // offset 0x1D8, size 0xE0, align 8
    int32 m_nHealAmount; // offset 0x2B8, size 0x4, align 4
    int32 m_nGoldAmount; // offset 0x2BC, size 0x4, align 4
    bool m_bRewardsTreasure; // offset 0x2C0, size 0x1, align 1
    char _pad_02C1[0x3]; // offset 0x2C1
    int32 m_nTreasureVariant; // offset 0x2C4, size 0x4, align 4
    bool m_bShowInMinimap; // offset 0x2C8, size 0x1, align 1
    char _pad_02C9[0x7]; // offset 0x2C9
    CUtlString m_sMinimapIconSnippet; // offset 0x2D0, size 0x8, align 8
    bool m_bCanSpawnWithVelocity; // offset 0x2D8, size 0x1, align 1
    char _pad_02D9[0x3]; // offset 0x2D9
    float32 m_flMaxSpawnVelocity; // offset 0x2DC, size 0x4, align 4
    CUtlString m_sDropSoundEvent; // offset 0x2E0, size 0x8, align 8
    char _pad_02E8[0x10]; // offset 0x2E8
};
