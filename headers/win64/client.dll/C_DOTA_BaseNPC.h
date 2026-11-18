#pragma once

class C_DOTA_BaseNPC : public C_NextBotCombatCharacter /*0x0*/  // sizeof 0x1B40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE0]; // offset 0x0
    bool m_bIsPhantom; // offset 0xCE0, size 0x1, align 1
    char _pad_0CE1[0x3]; // offset 0xCE1
    uint32 m_iUnitType; // offset 0xCE4, size 0x4, align 4
    char _pad_0CE8[0x10]; // offset 0xCE8
    bool m_bSelectionRingVisible; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x3]; // offset 0xCF9
    int32 m_iCurrentLevel; // offset 0xCFC, size 0x4, align 4
    bool m_bIsAncient; // offset 0xD00, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xD01, size 0x1, align 1
    bool m_bStolenScepter; // offset 0xD02, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xD03, size 0x1, align 1
    bool m_bSelectOnSpawn; // offset 0xD04, size 0x1, align 1
    bool m_bCachedReplicatedMorphlingIllusion; // offset 0xD05, size 0x1, align 1
    bool m_bIgnoreAddSummonedToSelection; // offset 0xD06, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xD07, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xD08, size 0x1, align 1
    bool m_bUseHeroAbilityNumbers; // offset 0xD09, size 0x1, align 1
    bool m_bHasSharedAbilities; // offset 0xD0A, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xD0B, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xD0C, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xD0D, size 0x1, align 1
    char _pad_0D0E[0x2]; // offset 0xD0E
    float32 m_flHealthThinkRegen; // offset 0xD10, size 0x4, align 4
    char _pad_0D14[0x4]; // offset 0xD14
    uint64 m_iIsControllableByPlayer64; // offset 0xD18, size 0x8, align 8
    int32 m_nHealthBarOffsetOverride; // offset 0xD20, size 0x4, align 4
    bool m_bCanRespawn; // offset 0xD24, size 0x1, align 1
    char _pad_0D25[0x3]; // offset 0xD25
    int32 m_iAttackRange; // offset 0xD28, size 0x4, align 4
    bool m_bIsClone; // offset 0xD2C, size 0x1, align 1
    char _pad_0D2D[0x3]; // offset 0xD2D
    Color m_colorGemColor; // offset 0xD30, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xD34, size 0x1, align 1
    char _pad_0D35[0x3]; // offset 0xD35
    ParticleIndex_t m_nFXDeniableIndex; // offset 0xD38, size 0x4, align 255
    int32 m_nCustomHealthbarStyle; // offset 0xD3C, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xD40, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xD44, size 0x4, align 4
    float32 m_flBaseAttackTime; // offset 0xD48, size 0x4, align 4
    int32 m_iUnitNameIndex; // offset 0xD4C, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0xD50, size 0x4, align 4
    int32 m_iHealthBarOffset; // offset 0xD54, size 0x4, align 4
    Color m_iHealthBarHighlightColor; // offset 0xD58, size 0x4, align 4
    float32 m_flSelectionHitboxScale; // offset 0xD5C, size 0x4, align 4
    float32 m_flMana; // offset 0xD60, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xD64, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xD68, size 0x4, align 4
    int32 m_iBKBChargesUsed; // offset 0xD6C, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xD70, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xD74, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xD78, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xD7C, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xD80, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xD84, size 0x4, align 4
    bool m_bIsIllusion; // offset 0xD88, size 0x1, align 1
    bool m_bHasClientSeenIllusionModifier; // offset 0xD89, size 0x1, align 1
    char _pad_0D8A[0x6]; // offset 0xD8A
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // offset 0xD90, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecAbilitiesClientPrediction; // offset 0xDA8, size 0x18, align 8
    int32 m_nLocalAbilityBarSequenceNumber; // offset 0xDC0, size 0x4, align 4
    float32 m_flInvisibilityLevel; // offset 0xDC4, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xDC8, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xDCC, size 0x4, align 4
    float32 m_flRingRadius; // offset 0xDD0, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xDD4, size 0x4, align 4
    CUtlSymbolLarge m_iszUnitName; // offset 0xDD8, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitNameIconOverride; // offset 0xDE0, size 0x8, align 8
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xDE8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xDF0, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xDF8, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xE00, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xE08, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceBackgroundSound; // offset 0xE10, size 0x8, align 8
    CUtlSymbolLarge m_iszIdleSoundLoop; // offset 0xE18, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0xE20, size 0x8, align 8
    CUtlString m_szScaleset; // offset 0xE28, size 0x8, align 8
    uint8 m_nUnitLabelIndex; // offset 0xE30, size 0x1, align 1
    char _pad_0E31[0x7]; // offset 0xE31
    CUtlString m_strAnimationModifier; // offset 0xE38, size 0x8, align 8
    CUtlString m_TerrainSpecificFootstepEffect; // offset 0xE40, size 0x8, align 8
    bool m_bUseCustomTerrainWeatherEffect; // offset 0xE48, size 0x1, align 1
    bool m_bHasClientSoundReplacement; // offset 0xE49, size 0x1, align 1
    bool m_bHasClientReplacementParticle; // offset 0xE4A, size 0x1, align 1
    char _pad_0E4B[0x15]; // offset 0xE4B
    bool m_bResourcesLoaded; // offset 0xE60, size 0x1, align 1
    char _pad_0E61[0x3]; // offset 0xE61
    GameTime_t m_flTauntCooldown; // offset 0xE64, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xE68, size 0x4, align 255
    DOTA_SHOP_TYPE m_iCurShop; // offset 0xE6C, size 0x4, align 4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0xE70, size 0x8, align 8
    int32 m_iDayTimeVisionRange; // offset 0xE78, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xE7C, size 0x4, align 4
    int32 m_iDamageMin; // offset 0xE80, size 0x4, align 4
    int32 m_iDamageMax; // offset 0xE84, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0xE88, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xE8C, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xE90, size 0x4, align 4
    char _pad_0E94[0x4]; // offset 0xE94
    CDOTA_ModifierManager m_ModifierManager; // offset 0xE98, size 0x3A0, align 255
    C_DOTA_UnitInventory m_Inventory; // offset 0x1238, size 0xF0, align 255
    char _pad_1328[0x8]; // offset 0x1328
    uint64 m_nUnitState64; // offset 0x1330, size 0x8, align 8
    char _pad_1338[0x8]; // offset 0x1338
    uint64 m_nUnitDebuffState; // offset 0x1340, size 0x8, align 8
    bool m_bHasInventory; // offset 0x1348, size 0x1, align 1
    char _pad_1349[0x3]; // offset 0x1349
    int32 m_iAcquisitionRange; // offset 0x134C, size 0x4, align 4
    int32 m_FoWViewID; // offset 0x1350, size 0x4, align 4
    int32 m_iTeamViewerID; // offset 0x1354, size 0x4, align 4
    int32 m_iPrevHealthPct; // offset 0x1358, size 0x4, align 4
    int32 m_iPrevLifeState; // offset 0x135C, size 0x4, align 4
    int32 m_iPrevTeam; // offset 0x1360, size 0x4, align 4
    bool m_bLastShardState; // offset 0x1364, size 0x1, align 1
    bool m_bLastScepterState; // offset 0x1365, size 0x1, align 1
    bool m_bForceScepterState; // offset 0x1366, size 0x1, align 1
    bool m_bForceShardState; // offset 0x1367, size 0x1, align 1
    bool m_bPrevProvidesVision; // offset 0x1368, size 0x1, align 1
    char _pad_1369[0x7]; // offset 0x1369
    uint64 m_nPrevControllableMask; // offset 0x1370, size 0x8, align 8
    char _pad_1378[0x8]; // offset 0x1378
    CountdownTimer m_TagTime; // offset 0x1380, size 0x18, align 8
    CountdownTimer m_ClickedTime; // offset 0x1398, size 0x18, align 8
    GameTime_t[2] m_flIdleRunPoseStartTime; // offset 0x13B0, size 0x8, align 4
    float32[2] m_flIdleRunPoseDuration; // offset 0x13B8, size 0x8, align 4
    bool m_bAnimationTransitionActive; // offset 0x13C0, size 0x1, align 1
    char _pad_13C1[0x3]; // offset 0x13C1
    int32[2] m_nAnimationTransitionPoseParameters; // offset 0x13C4, size 0x8, align 4
    int32[2] m_nAnimationTransitionInjuredPoseParameters; // offset 0x13CC, size 0x8, align 4
    int32[2] m_nAnimationTransitionAggressivePoseParameters; // offset 0x13D4, size 0x8, align 4
    char _pad_13DC[0x4C]; // offset 0x13DC
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x1428, size 0x4, align 255
    int32 m_iAttackCapabilities; // offset 0x142C, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x1430, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x1434, size 0x4, align 4
    PlayerID_t m_nPlayerOwnerID; // offset 0x1438, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x143C, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x1440, size 0x4, align 255
    char _pad_1444[0x4]; // offset 0x1444
    CUtlSymbolLarge m_iszMinimapIcon; // offset 0x1448, size 0x8, align 8
    char _pad_1450[0x8]; // offset 0x1450
    float32 m_flMinimapIconSize; // offset 0x1458, size 0x4, align 4
    bool m_bMinimapDisableTint; // offset 0x145C, size 0x1, align 1
    bool m_bMinimapDisableRotation; // offset 0x145D, size 0x1, align 1
    char _pad_145E[0x2]; // offset 0x145E
    Color m_colorHeroGlow; // offset 0x1460, size 0x4, align 4
    int32 m_iNearShopMask; // offset 0x1464, size 0x4, align 4
    int32 m_nPoseParameterTurn; // offset 0x1468, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x146C, size 0x4, align 4
    float32 m_flLean; // offset 0x1470, size 0x4, align 4
    float32 m_flRun; // offset 0x1474, size 0x4, align 4
    int32 m_anglediff; // offset 0x1478, size 0x4, align 4
    bool m_bInfoKeyActive; // offset 0x147C, size 0x1, align 1
    bool m_bNewUpdateAssetModifiersNetworked; // offset 0x147D, size 0x1, align 1
    char _pad_147E[0x2]; // offset 0x147E
    GameTick_t m_nAssetModifiersLastUpdatedTick; // offset 0x1480, size 0x4, align 255
    bool m_bSuppressGlow; // offset 0x1484, size 0x1, align 1
    bool m_bWasSinking; // offset 0x1485, size 0x1, align 1
    char _pad_1486[0x2]; // offset 0x1486
    float32 m_flRangeDisplayDist; // offset 0x1488, size 0x4, align 4
    char _pad_148C[0x1E4]; // offset 0x148C
    CUtlSymbolLarge m_szDefaultIdle; // offset 0x1670, size 0x8, align 8
    CUtlSymbolLarge m_szDefaultRareIdle; // offset 0x1678, size 0x8, align 8
    CountdownTimer m_damagetimer; // offset 0x1680, size 0x18, align 8
    float32 m_fZDelta; // offset 0x1698, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x169C, size 0x4, align 255
    bool m_bBaseStatsChanged; // offset 0x16A0, size 0x1, align 1
    bool m_bNeedsSoundEmitterRefresh; // offset 0x16A1, size 0x1, align 1
    char _pad_16A2[0x2]; // offset 0x16A2
    float32 m_flPhysicalArmorValue; // offset 0x16A4, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x16A8, size 0x4, align 4
    int32 m_nPrevSequenceParity; // offset 0x16AC, size 0x4, align 4
    char _pad_16B0[0xA0]; // offset 0x16B0
    float32 m_flPrevInvisLevel; // offset 0x1750, size 0x4, align 4
    char _pad_1754[0x4]; // offset 0x1754
    CStrongHandle< InfoForResourceTypeCModel > m_nOriginalModelIndex; // offset 0x1758, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientOriginalModelIndex; // offset 0x1760, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientReplacementModelIndex; // offset 0x1768, size 0x8, align 8
    bool m_bClientReplacementModelNeedsRebuild; // offset 0x1770, size 0x1, align 1
    char _pad_1771[0x3]; // offset 0x1771
    int32 m_nClientReplacementModelReloadCount; // offset 0x1774, size 0x4, align 4
    int8 m_nUnitModelVariant; // offset 0x1778, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1779, size 0x1, align 1
    char _pad_177A[0x2]; // offset 0x177A
    int32 m_iPrevSequence; // offset 0x177C, size 0x4, align 4
    char* m_pLastWeatherEffectName; // offset 0x1780, size 0x8, align 8
    char _pad_1788[0x8]; // offset 0x1788
    CountdownTimer m_VoiceBackgroundSoundTimer; // offset 0x1790, size 0x18, align 8
    bool m_bIsWaitingToSpawn; // offset 0x17A8, size 0x1, align 1
    char _pad_17A9[0x7]; // offset 0x17A9
    int64 m_nTotalDamageTaken; // offset 0x17B0, size 0x8, align 8
    float32 m_flManaRegen; // offset 0x17B8, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x17BC, size 0x4, align 4
    bool m_bIsMoving; // offset 0x17C0, size 0x1, align 1
    char _pad_17C1[0x3]; // offset 0x17C1
    float32 m_fRevealRadius; // offset 0x17C4, size 0x4, align 4
    bool m_bCanUseWards; // offset 0x17C8, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0x17C9, size 0x1, align 1
    char _pad_17CA[0x2]; // offset 0x17CA
    int32 m_iXPBounty; // offset 0x17CC, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x17D0, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x17D4, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x17D8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x17DC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGoalEntity; // offset 0x17E0, size 0x4, align 4
    CHandle< C_DOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0x17E4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hClientOverrideMaterial; // offset 0x17E8, size 0x8, align 8
    bool m_bCombinerMaterialOverrideListChanged; // offset 0x17F0, size 0x1, align 1
    char _pad_17F1[0x3]; // offset 0x17F1
    int32 m_nBaseModelMeshCount; // offset 0x17F4, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0x17F8, size 0x18, align 8
    int8 m_nArcanaLevel; // offset 0x1810, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1811, size 0x1, align 1
    char _pad_1812[0x2]; // offset 0x1812
    Color m_defaultColorGemColor; // offset 0x1814, size 0x4, align 4
    char _pad_1818[0x18]; // offset 0x1818
    bool m_bHasBuiltWearableSpawnList; // offset 0x1830, size 0x1, align 1
    bool m_bHasCostume; // offset 0x1831, size 0x1, align 1
    bool m_bRecreateParticleSystemsOnModifiersChange; // offset 0x1832, size 0x1, align 1
    bool m_bWasRevealedFromFOWAsDead; // offset 0x1833, size 0x1, align 1
    GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // offset 0x1834, size 0x4, align 255
    char _pad_1838[0x14]; // offset 0x1838
    float32 m_flAdditionalSinkDelay; // offset 0x184C, size 0x4, align 4
    char _pad_1850[0x28]; // offset 0x1850
    uint32 m_nScepterUpgradeID; // offset 0x1878, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x187C, size 0x4, align 4
    char _pad_1880[0xE0]; // offset 0x1880
    int32 m_NetworkActivity; // offset 0x1960, size 0x4, align 4
    int32 m_PrevNetworkActivity; // offset 0x1964, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1968, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x196C, size 0x1, align 1
    char _pad_196D[0x3]; // offset 0x196D
    float32 m_flStartSequenceCycle; // offset 0x1970, size 0x4, align 4
    char _pad_1974[0x4]; // offset 0x1974
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1978, size 0x18, align 8
    CHandle< C_SceneEntity > m_hBackgroundSceneEnt; // offset 0x1990, size 0x4, align 4
    CHandle< C_SceneEntity > m_hSpeakingSceneEnt; // offset 0x1994, size 0x4, align 4
    char _pad_1998[0x10]; // offset 0x1998
    CUtlVector< CHandle< C_EconWearable > > m_hOldWearables; // offset 0x19A8, size 0x18, align 8
    CUtlVector< CUtlStringToken > m_hOldWearableSkins; // offset 0x19C0, size 0x18, align 8
    char[256] m_CustomHealthLabel; // offset 0x19D8, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1AD8, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1ADC, size 0x1, align 1
    char _pad_1ADD[0x3]; // offset 0x1ADD
    item_definition_index_t m_nWearableDefIndex; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x4]; // offset 0x1AE4
    Color m_gibTintColor; // offset 0x1AE8, size 0x4, align 4
    bool m_bForceMaterialCombine; // offset 0x1AEC, size 0x1, align 1
    bool m_bShouldDrawParticlesWhileHidden; // offset 0x1AED, size 0x1, align 1
    bool m_bIsClientThinkPending; // offset 0x1AEE, size 0x1, align 1
    bool m_bActivityModifiersDirty; // offset 0x1AEF, size 0x1, align 1
    bool m_bUnitModelVariantChanged; // offset 0x1AF0, size 0x1, align 1
    bool m_bWearablesAreTaunting; // offset 0x1AF1, size 0x1, align 1
    bool m_bWearablesLoadoutOverride; // offset 0x1AF2, size 0x1, align 1
    char _pad_1AF3[0x15]; // offset 0x1AF3
    bool m_bShowCannotBeDisabledIcon; // offset 0x1B08, size 0x1, align 1
    bool m_bShowOccludedOutline; // offset 0x1B09, size 0x1, align 1
    char _pad_1B0A[0x2]; // offset 0x1B0A
    float32 m_flBuffEffectivenessOverride; // offset 0x1B0C, size 0x4, align 4
    char _pad_1B10[0x28]; // offset 0x1B10
    int32 m_nVisionPreviewViewer; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
