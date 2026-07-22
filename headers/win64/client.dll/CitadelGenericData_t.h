#pragma once

struct CitadelGenericData_t  // sizeof 0x1648, align 0x8 (client) {MVDataRoot MVDataSingleton MGetKV3ClassDefaults}
{
    CUtlOrderedMap< EDamageFlashType, DamageFlashSettings_t > m_mapDamageFlash; // offset 0x0, size 0x28, align 8
    CUtlOrderedMap< EDamageFlashType, DamageFlashSettings_t > m_mapDamageFlashLowViolence; // offset 0x28, size 0x28, align 8
    GlitchSettings_t m_GlitchSettings; // offset 0x50, size 0x2C, align 4
    char _pad_007C[0x4]; // offset 0x7C
    CUtlOrderedMap< ECurrencyType, CurrencySound_t > m_CurrencyTypeSounds; // offset 0x80, size 0x28, align 8 | MPropertyStartGroup
    DamageReceivedSounds_t m_DamageReceivedSounds; // offset 0xA8, size 0x60, align 8
    HealingReceivedSounds_t m_HealingReceivedSounds; // offset 0x108, size 0x60, align 8
    DamageIndicatorSounds_t m_DamageIndicatorSounds; // offset 0x168, size 0x60, align 8
    CSoundEventName m_strExitCombatSound; // offset 0x1C8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShoppingEffect; // offset 0x1D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MinimapZiplinesParticle; // offset 0x2B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillStreakFireParticle; // offset 0x398, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MidbossIndicatorRespawningParticle; // offset 0x478, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MidbossIndicatorSpawnedParticle; // offset 0x558, size 0xE0, align 8
    Color m_MinimapTeamRebelsColor; // offset 0x638, size 0x4, align 1 | MPropertyStartGroup
    Color m_MinimapTeamCombineColor; // offset 0x63C, size 0x4, align 1
    CUtlVector< MinimapOffsetDesc_t > m_MiniMapOffsets; // offset 0x640, size 0x18, align 8
    Color m_OutlineColorFriend; // offset 0x658, size 0x4, align 1 | MPropertyStartGroup MPropertyColorPlusAlpha
    Color m_OutlineColorEnemy; // offset 0x65C, size 0x4, align 1 | MPropertyColorPlusAlpha
    Color m_OutlineColorEnemyHero; // offset 0x660, size 0x4, align 1 | MPropertyColorPlusAlpha
    Color m_OutlineColorTeam1; // offset 0x664, size 0x4, align 1 | MPropertyColorPlusAlpha
    Color m_OutlineColorTeam2; // offset 0x668, size 0x4, align 1 | MPropertyColorPlusAlpha
    Color m_OutlineColorNeutral; // offset 0x66C, size 0x4, align 1 | MPropertyColorPlusAlpha
    LaneDesc_t[7] m_LaneInfo; // offset 0x670, size 0xE0, align 8 | MPropertyStartGroup
    LaneDesc_t m_NoLaneZip; // offset 0x750, size 0x20, align 8
    Color m_enemyZiplineColor; // offset 0x770, size 0x4, align 1
    Color m_enemyObjectivesColor; // offset 0x774, size 0x4, align 1
    NewPlayerMetrics_t[4] m_NewPlayerMetrics; // offset 0x778, size 0xC0, align 8
    int32[6] m_nItemPricePerTier; // offset 0x838, size 0x18, align 4
    float32[6] m_flTrooperKillGoldShareFrac; // offset 0x850, size 0x18, align 4
    float32[6] m_flHeroKillGoldShareFrac; // offset 0x868, size 0x18, align 4
    DOFDesc_t m_DefaultDOF; // offset 0x880, size 0x10, align 4
    RejuvinatorParams_t m_RejuvParams; // offset 0x890, size 0x60, align 8
    IdolParams_t m_IdolParams; // offset 0x8F0, size 0x578, align 8
    KothParams_t m_KothParams; // offset 0xE68, size 0x2E8, align 8
    TeleporterParams_t m_TeleporterParams; // offset 0x1150, size 0x1F0, align 8
    ObjectivesParams_t m_ObjectiveParams; // offset 0x1340, size 0x30, align 4
    CUtlOrderedMap< EStatsType, CUtlString > m_mapStatTypeImages; // offset 0x1370, size 0x28, align 8
    CRemapFloat m_AimSpringStrength; // offset 0x1398, size 0x10, align 255 | MPropertyDescription
    CRemapFloat m_TargetingSpringStrength; // offset 0x13A8, size 0x10, align 255 | MPropertyDescription
    CUtlOrderedMap< EAbilityResourceType, HeroAbilityResourceDef_t > m_mapResourceTypes; // offset 0x13B8, size 0x28, align 8
    CUtlVector< ShopGroups_t > m_vecWeaponGroups; // offset 0x13E0, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< ShopGroups_t > m_vecArmorGroups; // offset 0x13F8, size 0x18, align 8
    CUtlVector< ShopGroups_t > m_vecSpiritGroups; // offset 0x1410, size 0x18, align 8
    GameModeStreetBrawl_t m_StreetBrawl; // offset 0x1428, size 0x220, align 8 | MPropertyStartGroup
};
