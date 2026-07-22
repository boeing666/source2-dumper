#pragma once

class CSurvivorsPowerUpDefinition  // sizeof 0x6A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    SurvivorsPowerUpID_t m_unPowerUpID; // offset 0x8, size 0x4, align 255
    int32 m_nMaxLevel; // offset 0xC, size 0x4, align 4
    CUtlVector< SurvivorsAttributeType_t > m_vecTooltipAttributes; // offset 0x10, size 0x18, align 8
    CUtlVector< SurvivorsAttributeType_t > m_vecScepterTooltipAttributes; // offset 0x28, size 0x18, align 8
    CUtlVector< CSurvivorsAttributeValue > m_vecBaseAttributes; // offset 0x40, size 0x18, align 8
    CUtlVector< SurvivorsPowerUpID_t > m_vecRecipeItems; // offset 0x58, size 0x18, align 8
    bool m_bIsPassive; // offset 0x70, size 0x1, align 1
    bool m_bIsInnate; // offset 0x71, size 0x1, align 1
    bool m_bIsGold; // offset 0x72, size 0x1, align 1
    bool m_bRollable; // offset 0x73, size 0x1, align 1
    bool m_bIsShardUpgradeable; // offset 0x74, size 0x1, align 1
    bool m_bIsScepterUpgradeable; // offset 0x75, size 0x1, align 1
    char _pad_0076[0x2]; // offset 0x76
    CPanoramaImageName m_sImage; // offset 0x78, size 0x10, align 8
    char _pad_0088[0x8]; // offset 0x88
    CUtlString m_sSource; // offset 0x90, size 0x8, align 8
    CPanoramaImageName m_sHeroImage; // offset 0x98, size 0x10, align 8
    CUtlString m_sLocAbilityName; // offset 0xA8, size 0x8, align 8
    CUtlString m_sLocAbilityDesc; // offset 0xB0, size 0x8, align 8
    CUtlString m_sLocShardAbilityDesc; // offset 0xB8, size 0x8, align 8
    CUtlString m_sLocScepterAbilityDesc; // offset 0xC0, size 0x8, align 8
    CUtlString m_sLocHeroName; // offset 0xC8, size 0x8, align 8
    CUtlVector< CSurvivorsUpgradeDefinition > m_vecMinorUpgradeChoices; // offset 0xD0, size 0x18, align 8
    CUtlVector< CSurvivorsUpgradeDefinition > m_vecAuthoredUpgradeChoices; // offset 0xE8, size 0x18, align 8
    CSurvivorsUpgradeDefinition m_scepterUpgradeDefinition; // offset 0x100, size 0x40, align 8
    bool m_bModifierParticleUsesOverheadOffset; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x7]; // offset 0x141
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sModifierParticle; // offset 0x148, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sStunParticle; // offset 0x228, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sVulnerableParticle; // offset 0x308, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFreezeParticle; // offset 0x3E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sHitStatusEffectParticle; // offset 0x4C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sWarmupEffectParticle; // offset 0x5A8, size 0xE0, align 8
    Vector m_vWarmupEffectColor; // offset 0x688, size 0xC, align 4
    float32 m_flWarmupEffectTime; // offset 0x694, size 0x4, align 4
    float32 m_flSpawnPickupOnKillPercent; // offset 0x698, size 0x4, align 4
    SurvivorsPickupID_t m_unSpawnPickupOnKillID; // offset 0x69C, size 0x4, align 255
};
