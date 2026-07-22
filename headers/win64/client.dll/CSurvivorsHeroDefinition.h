#pragma once

class CSurvivorsHeroDefinition  // sizeof 0xB8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsHeroID_t m_unHeroID; // offset 0x0, size 0x4, align 255
    HeroID_t m_nDOTAHeroID; // offset 0x4, size 0x4, align 255
    char _pad_0008[0x8]; // offset 0x8
    float32 m_flBaseHealth; // offset 0x10, size 0x4, align 4
    float32 m_flBaseSpeed; // offset 0x14, size 0x4, align 4
    float32 m_flBasePickupRadius; // offset 0x18, size 0x4, align 4
    float32 m_flBaseDashSpeed; // offset 0x1C, size 0x4, align 4
    float32 m_flBaseDashDuration; // offset 0x20, size 0x4, align 4
    float32 m_flBaseDashCooldown; // offset 0x24, size 0x4, align 4
    int32 m_nBaseNumDashes; // offset 0x28, size 0x4, align 4
    float32 m_flMass; // offset 0x2C, size 0x4, align 4
    float32 m_flCollisionRadius; // offset 0x30, size 0x4, align 4
    float32 m_flCollisionHeight; // offset 0x34, size 0x4, align 4
    float32 m_flTriggerCollisionRadiusPadding; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlString m_pszPlayerHitSoundEvent; // offset 0x40, size 0x8, align 8
    CUtlString m_sLocDisplayName; // offset 0x48, size 0x8, align 8
    CUtlVector< item_definition_index_t > m_vecEconItems; // offset 0x50, size 0x18, align 8
    style_index_t m_unStyleIndex; // offset 0x68, size 0x1, align 255
    char _pad_0069[0x7]; // offset 0x69
    CUtlVector< CSurvivorsAttributeValue > m_vecBaseAttributes; // offset 0x70, size 0x18, align 8
    CUtlVector< SurvivorsPowerUpID_t > m_vecStartingPowerUps; // offset 0x88, size 0x18, align 8
    CUtlVector< SurvivorsPowerUpID_t > m_vecInnatePowerUps; // offset 0xA0, size 0x18, align 8
};
