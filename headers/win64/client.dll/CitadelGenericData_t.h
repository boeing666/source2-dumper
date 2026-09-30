#pragma once

struct CitadelGenericData_t  // sizeof 0x1628, align 0x8 (client) {MVDataRoot MVDataSingleton MGetKV3ClassDefaults}
{
    CUtlOrderedMap< EDamageFlashType, DamageFlashSettings_t > m_mapDamageFlash; // offset 0x0, size 0x28, align 8
    CUtlOrderedMap< EDamageFlashType, DamageFlashSettings_t > m_mapDamageFlashLowViolence; // offset 0x28, size 0x28, align 8
    GlitchSettings_t m_GlitchSettings; // offset 0x50, size 0x2C, align 4
    char _pad_007C[0x4]; // offset 0x7C
    CUtlOrderedMap< ECurrencyType, CurrencySound_t > m_CurrencyTypeSounds; // offset 0x80, size 0x28, align 8 | MPropertyStartGroup
    DamageReceivedSounds_t m_DamageReceivedSounds; // offset 0xA8, size 0x60, align 8
    HealingReceivedSounds_t m_HealingReceivedSounds; // offset 0x108, size 0x70, align 8
    DamageIndicatorSounds_t m_DamageIndicatorSounds; // offset 0x178, size 0x60, align 8
    CSoundEventName m_strExitCombatSound; // offset 0x1D8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShoppingEffect; // offset 0x1E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillStreakFireParticle; // offset 0x2C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MidbossIndicatorRespawningParticle; // offset 0x3A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MidbossIndicatorSpawnedParticle; // offset 0x488, size 0xE0, align 8
    CUtlVector< MinimapOffsetDesc_t > m_MiniMapOffsets; // offset 0x568, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< MapDistrictDesc_t > m_MapDistrictLocalization; // offset 0x580, size 0x18, align 8
    Color m_OutlineColorFriend; // offset 0x598, size 0x4, align 4 | MPropertyStartGroup MPropertyColorPlusAlpha
    Color m_OutlineColorEnemy; // offset 0x59C, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_OutlineColorEnemyHero; // offset 0x5A0, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_OutlineColorTeam1; // offset 0x5A4, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_OutlineColorTeam2; // offset 0x5A8, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_OutlineColorNeutral; // offset 0x5AC, size 0x4, align 4 | MPropertyColorPlusAlpha
    Color m_OutlineColorHighlight; // offset 0x5B0, size 0x4, align 4 | MPropertyColorPlusAlpha
    float32 m_flOutlineWidthHighlight; // offset 0x5B4, size 0x4, align 4
    LaneDesc_t[8] m_LaneInfo; // offset 0x5B8, size 0x100, align 8 | MPropertyStartGroup
    Color m_ColorFriend; // offset 0x6B8, size 0x4, align 4 | MPropertyStartGroup
    Color m_ColorEnemy; // offset 0x6BC, size 0x4, align 4
    Color m_ColorTeam1; // offset 0x6C0, size 0x4, align 4
    Color m_ColorTeam2; // offset 0x6C4, size 0x4, align 4
    NewPlayerMetrics_t[4] m_NewPlayerMetrics; // offset 0x6C8, size 0xC0, align 8 | MPropertyStartGroup
    int32[6] m_nItemPricePerTier; // offset 0x788, size 0x18, align 4
    int32[6] m_nItemCorruptionPricePerTier; // offset 0x7A0, size 0x18, align 4 | MPropertyDescription
    CUtlVector< CorruptedPenaltyDef_t > m_vecCorruptedPenaltyDefs; // offset 0x7B8, size 0x18, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flNeutralCampRespawnTimerShowDistance; // offset 0x7D0, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertyDescription
    float32 m_flMidBossRespawnTimerShowDistance; // offset 0x7D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flNeutralCampRespawnTimerHeight; // offset 0x7D8, size 0x4, align 4 | MPropertyDescription
    float32 m_flPickupGainedEffectStaggerInterval; // offset 0x7DC, size 0x4, align 4 | MPropertyStartGroup MPropertyStartGroup MPropertyDescription
    float32 m_flPermanentPickupTextDuration; // offset 0x7E0, size 0x4, align 4 | MPropertyDescription
    float32[6] m_flTrooperKillGoldShareFrac; // offset 0x7E4, size 0x18, align 4 | MPropertyStartGroup
    float32[6] m_flHeroKillGoldShareFrac; // offset 0x7FC, size 0x18, align 4
    DOFDesc_t m_DefaultDOF; // offset 0x814, size 0x10, align 4
    char _pad_0824[0x4]; // offset 0x824
    RejuvinatorParams_t m_RejuvParams; // offset 0x828, size 0x60, align 8
    IdolParams_t m_IdolParams; // offset 0x888, size 0x578, align 8
    KothParams_t m_KothParams; // offset 0xE00, size 0x2E8, align 8
    TeleporterParams_t m_TeleporterParams; // offset 0x10E8, size 0x1F0, align 8
    ObjectivesParams_t m_ObjectiveParams; // offset 0x12D8, size 0x30, align 4
    BreakablePowerupLootParams_t m_BreakablePowerupLootParams; // offset 0x1308, size 0x30, align 8
    CUtlVector< BreakableSpawnTimeDesc_t > m_BreakableSpawnTimeDesc; // offset 0x1338, size 0x18, align 8
    CUtlOrderedMap< EStatsType, CUtlString > m_mapStatTypeImages; // offset 0x1350, size 0x28, align 8
    CRemapFloat m_AimSpringStrength; // offset 0x1378, size 0x10, align 255 | MPropertyDescription
    CRemapFloat m_TargetingSpringStrength; // offset 0x1388, size 0x10, align 255 | MPropertyDescription
    CUtlOrderedMap< EAbilityResourceType, HeroAbilityResourceDef_t > m_mapResourceTypes; // offset 0x1398, size 0x28, align 8
    CUtlVector< ShopGroups_t > m_vecWeaponGroups; // offset 0x13C0, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< ShopGroups_t > m_vecArmorGroups; // offset 0x13D8, size 0x18, align 8
    CUtlVector< ShopGroups_t > m_vecSpiritGroups; // offset 0x13F0, size 0x18, align 8
    GameModeStreetBrawl_t m_StreetBrawl; // offset 0x1408, size 0x220, align 8 | MPropertyFlattenIntoParentRow MPropertyStartGroup
};
