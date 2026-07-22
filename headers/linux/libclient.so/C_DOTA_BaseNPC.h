#pragma once

class C_DOTA_BaseNPC : public C_NextBotCombatCharacter /*0x0*/  // sizeof 0x1B38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD18]; // offset 0x0
    bool m_bIsPhantom; // offset 0xD18, size 0x1, align 1
    char _pad_0D19[0x3]; // offset 0xD19
    uint32 m_iUnitType; // offset 0xD1C, size 0x4, align 4
    char _pad_0D20[0x10]; // offset 0xD20
    bool m_bSelectionRingVisible; // offset 0xD30, size 0x1, align 1
    char _pad_0D31[0x3]; // offset 0xD31
    int32 m_iCurrentLevel; // offset 0xD34, size 0x4, align 4
    bool m_bIsAncient; // offset 0xD38, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xD39, size 0x1, align 1
    bool m_bStolenScepter; // offset 0xD3A, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xD3B, size 0x1, align 1
    bool m_bSelectOnSpawn; // offset 0xD3C, size 0x1, align 1
    bool m_bCachedReplicatedMorphlingIllusion; // offset 0xD3D, size 0x1, align 1
    bool m_bIgnoreAddSummonedToSelection; // offset 0xD3E, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xD3F, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xD40, size 0x1, align 1
    bool m_bUseHeroAbilityNumbers; // offset 0xD41, size 0x1, align 1
    bool m_bHasSharedAbilities; // offset 0xD42, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xD43, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xD44, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xD45, size 0x1, align 1
    char _pad_0D46[0x2]; // offset 0xD46
    float32 m_flHealthThinkRegen; // offset 0xD48, size 0x4, align 4
    char _pad_0D4C[0x4]; // offset 0xD4C
    uint64 m_iIsControllableByPlayer64; // offset 0xD50, size 0x8, align 8
    int32 m_nHealthBarOffsetOverride; // offset 0xD58, size 0x4, align 4
    bool m_bCanRespawn; // offset 0xD5C, size 0x1, align 1
    char _pad_0D5D[0x3]; // offset 0xD5D
    int32 m_iAttackRange; // offset 0xD60, size 0x4, align 4
    bool m_bIsClone; // offset 0xD64, size 0x1, align 1
    Color m_colorGemColor; // offset 0xD65, size 0x4, align 1
    bool m_bHasColorGem; // offset 0xD69, size 0x1, align 1
    char _pad_0D6A[0x2]; // offset 0xD6A
    ParticleIndex_t m_nFXDeniableIndex; // offset 0xD6C, size 0x4, align 255
    int32 m_nCustomHealthbarStyle; // offset 0xD70, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xD74, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xD78, size 0x4, align 4
    float32 m_flBaseAttackTime; // offset 0xD7C, size 0x4, align 4
    int32 m_iUnitNameIndex; // offset 0xD80, size 0x4, align 4
    int32 m_iHealthBarOffset; // offset 0xD84, size 0x4, align 4
    Color m_iHealthBarHighlightColor; // offset 0xD88, size 0x4, align 1
    float32 m_flMana; // offset 0xD8C, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xD90, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xD94, size 0x4, align 4
    int32 m_iBKBChargesUsed; // offset 0xD98, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xD9C, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xDA0, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xDA4, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xDA8, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xDAC, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xDB0, size 0x4, align 4
    bool m_bIsIllusion; // offset 0xDB4, size 0x1, align 1
    bool m_bHasClientSeenIllusionModifier; // offset 0xDB5, size 0x1, align 1
    char _pad_0DB6[0x2]; // offset 0xDB6
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // offset 0xDB8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecAbilitiesClientPrediction; // offset 0xDD0, size 0x18, align 8
    int32 m_nLocalAbilityBarSequenceNumber; // offset 0xDE8, size 0x4, align 4
    float32 m_flInvisibilityLevel; // offset 0xDEC, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xDF0, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xDF4, size 0x4, align 4
    float32 m_flRingRadius; // offset 0xDF8, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xDFC, size 0x4, align 4
    CUtlSymbolLarge m_iszUnitName; // offset 0xE00, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitNameIconOverride; // offset 0xE08, size 0x8, align 8
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xE10, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xE18, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xE20, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xE28, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xE30, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceBackgroundSound; // offset 0xE38, size 0x8, align 8
    CUtlSymbolLarge m_iszIdleSoundLoop; // offset 0xE40, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0xE48, size 0x8, align 8
    CUtlString m_szScaleset; // offset 0xE50, size 0x8, align 8
    uint8 m_nUnitLabelIndex; // offset 0xE58, size 0x1, align 1
    char _pad_0E59[0x7]; // offset 0xE59
    CUtlString m_strAnimationModifier; // offset 0xE60, size 0x8, align 8
    CUtlString m_TerrainSpecificFootstepEffect; // offset 0xE68, size 0x8, align 8
    bool m_bUseCustomTerrainWeatherEffect; // offset 0xE70, size 0x1, align 1
    bool m_bHasClientSoundReplacement; // offset 0xE71, size 0x1, align 1
    bool m_bHasClientReplacementParticle; // offset 0xE72, size 0x1, align 1
    char _pad_0E73[0x15]; // offset 0xE73
    bool m_bResourcesLoaded; // offset 0xE88, size 0x1, align 1
    char _pad_0E89[0x3]; // offset 0xE89
    GameTime_t m_flTauntCooldown; // offset 0xE8C, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xE90, size 0x4, align 255
    DOTA_SHOP_TYPE m_iCurShop; // offset 0xE94, size 0x4, align 4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0xE98, size 0x8, align 8
    int32 m_iDayTimeVisionRange; // offset 0xEA0, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xEA4, size 0x4, align 4
    int32 m_iDamageMin; // offset 0xEA8, size 0x4, align 4
    int32 m_iDamageMax; // offset 0xEAC, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0xEB0, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xEB4, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xEB8, size 0x4, align 4
    char _pad_0EBC[0x4]; // offset 0xEBC
    CDOTA_ModifierManager m_ModifierManager; // offset 0xEC0, size 0x388, align 255
    C_DOTA_UnitInventory m_Inventory; // offset 0x1248, size 0xF0, align 255
    char _pad_1338[0x8]; // offset 0x1338
    uint64 m_nUnitState64; // offset 0x1340, size 0x8, align 8
    char _pad_1348[0x8]; // offset 0x1348
    uint64 m_nUnitDebuffState; // offset 0x1350, size 0x8, align 8
    bool m_bHasInventory; // offset 0x1358, size 0x1, align 1
    char _pad_1359[0x3]; // offset 0x1359
    int32 m_iAcquisitionRange; // offset 0x135C, size 0x4, align 4
    int32 m_FoWViewID; // offset 0x1360, size 0x4, align 4
    int32 m_iTeamViewerID; // offset 0x1364, size 0x4, align 4
    int32 m_iPrevHealthPct; // offset 0x1368, size 0x4, align 4
    int32 m_iPrevLifeState; // offset 0x136C, size 0x4, align 4
    int32 m_iPrevTeam; // offset 0x1370, size 0x4, align 4
    bool m_bLastShardState; // offset 0x1374, size 0x1, align 1
    bool m_bLastScepterState; // offset 0x1375, size 0x1, align 1
    bool m_bForceScepterState; // offset 0x1376, size 0x1, align 1
    bool m_bForceShardState; // offset 0x1377, size 0x1, align 1
    bool m_bPrevProvidesVision; // offset 0x1378, size 0x1, align 1
    char _pad_1379[0x7]; // offset 0x1379
    uint64 m_nPrevControllableMask; // offset 0x1380, size 0x8, align 8
    char _pad_1388[0x8]; // offset 0x1388
    CountdownTimer m_TagTime; // offset 0x1390, size 0x18, align 8
    CountdownTimer m_ClickedTime; // offset 0x13A8, size 0x18, align 8
    GameTime_t[2] m_flIdleRunPoseStartTime; // offset 0x13C0, size 0x8, align 4
    float32[2] m_flIdleRunPoseDuration; // offset 0x13C8, size 0x8, align 4
    bool m_bAnimationTransitionActive; // offset 0x13D0, size 0x1, align 1
    char _pad_13D1[0x3]; // offset 0x13D1
    int32[2] m_nAnimationTransitionPoseParameters; // offset 0x13D4, size 0x8, align 4
    int32[2] m_nAnimationTransitionInjuredPoseParameters; // offset 0x13DC, size 0x8, align 4
    int32[2] m_nAnimationTransitionAggressivePoseParameters; // offset 0x13E4, size 0x8, align 4
    char _pad_13EC[0x4C]; // offset 0x13EC
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x1438, size 0x4, align 255
    int32 m_iAttackCapabilities; // offset 0x143C, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x1440, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x1444, size 0x4, align 4
    PlayerID_t m_nPlayerOwnerID; // offset 0x1448, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x144C, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x1450, size 0x4, align 255
    char _pad_1454[0x4]; // offset 0x1454
    CUtlSymbolLarge m_iszMinimapIcon; // offset 0x1458, size 0x8, align 8
    char _pad_1460[0x8]; // offset 0x1460
    float32 m_flMinimapIconSize; // offset 0x1468, size 0x4, align 4
    bool m_bMinimapDisableTint; // offset 0x146C, size 0x1, align 1
    bool m_bMinimapDisableRotation; // offset 0x146D, size 0x1, align 1
    Color m_colorHeroGlow; // offset 0x146E, size 0x4, align 1
    char _pad_1472[0x2]; // offset 0x1472
    int32 m_iNearShopMask; // offset 0x1474, size 0x4, align 4
    int32 m_nPoseParameterTurn; // offset 0x1478, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x147C, size 0x4, align 4
    float32 m_flLean; // offset 0x1480, size 0x4, align 4
    float32 m_flRun; // offset 0x1484, size 0x4, align 4
    int32 m_anglediff; // offset 0x1488, size 0x4, align 4
    bool m_bInfoKeyActive; // offset 0x148C, size 0x1, align 1
    bool m_bNewUpdateAssetModifiersNetworked; // offset 0x148D, size 0x1, align 1
    char _pad_148E[0x2]; // offset 0x148E
    GameTick_t m_nAssetModifiersLastUpdatedTick; // offset 0x1490, size 0x4, align 255
    bool m_bSuppressGlow; // offset 0x1494, size 0x1, align 1
    bool m_bWasSinking; // offset 0x1495, size 0x1, align 1
    char _pad_1496[0x2]; // offset 0x1496
    float32 m_flRangeDisplayDist; // offset 0x1498, size 0x4, align 4
    char _pad_149C[0x1E4]; // offset 0x149C
    CUtlSymbolLarge m_szDefaultIdle; // offset 0x1680, size 0x8, align 8
    CUtlSymbolLarge m_szDefaultRareIdle; // offset 0x1688, size 0x8, align 8
    CountdownTimer m_damagetimer; // offset 0x1690, size 0x18, align 8
    float32 m_fZDelta; // offset 0x16A8, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x16AC, size 0x4, align 255
    bool m_bBaseStatsChanged; // offset 0x16B0, size 0x1, align 1
    bool m_bNeedsSoundEmitterRefresh; // offset 0x16B1, size 0x1, align 1
    char _pad_16B2[0x2]; // offset 0x16B2
    float32 m_flPhysicalArmorValue; // offset 0x16B4, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x16B8, size 0x4, align 4
    int32 m_nPrevSequenceParity; // offset 0x16BC, size 0x4, align 4
    char _pad_16C0[0xA0]; // offset 0x16C0
    float32 m_flPrevInvisLevel; // offset 0x1760, size 0x4, align 4
    char _pad_1764[0x4]; // offset 0x1764
    CStrongHandle< InfoForResourceTypeCModel > m_nOriginalModelIndex; // offset 0x1768, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientOriginalModelIndex; // offset 0x1770, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientReplacementModelIndex; // offset 0x1778, size 0x8, align 8
    bool m_bClientReplacementModelNeedsRebuild; // offset 0x1780, size 0x1, align 1
    char _pad_1781[0x3]; // offset 0x1781
    int32 m_nClientReplacementModelReloadCount; // offset 0x1784, size 0x4, align 4
    int8 m_nUnitModelVariant; // offset 0x1788, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1789, size 0x1, align 1
    char _pad_178A[0x2]; // offset 0x178A
    int32 m_iPrevSequence; // offset 0x178C, size 0x4, align 4
    char* m_pLastWeatherEffectName; // offset 0x1790, size 0x8, align 8
    char _pad_1798[0x8]; // offset 0x1798
    CountdownTimer m_VoiceBackgroundSoundTimer; // offset 0x17A0, size 0x18, align 8
    bool m_bIsWaitingToSpawn; // offset 0x17B8, size 0x1, align 1
    char _pad_17B9[0x7]; // offset 0x17B9
    int64 m_nTotalDamageTaken; // offset 0x17C0, size 0x8, align 8
    float32 m_flManaRegen; // offset 0x17C8, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x17CC, size 0x4, align 4
    bool m_bIsMoving; // offset 0x17D0, size 0x1, align 1
    char _pad_17D1[0x3]; // offset 0x17D1
    float32 m_fRevealRadius; // offset 0x17D4, size 0x4, align 4
    bool m_bCanUseWards; // offset 0x17D8, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0x17D9, size 0x1, align 1
    char _pad_17DA[0x2]; // offset 0x17DA
    int32 m_iXPBounty; // offset 0x17DC, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x17E0, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x17E4, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x17E8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x17EC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGoalEntity; // offset 0x17F0, size 0x4, align 4
    CHandle< C_DOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0x17F4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hClientOverrideMaterial; // offset 0x17F8, size 0x8, align 8
    bool m_bCombinerMaterialOverrideListChanged; // offset 0x1800, size 0x1, align 1
    char _pad_1801[0x3]; // offset 0x1801
    int32 m_nBaseModelMeshCount; // offset 0x1804, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0x1808, size 0x18, align 8
    int8 m_nArcanaLevel; // offset 0x1820, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1821, size 0x1, align 1
    Color m_defaultColorGemColor; // offset 0x1822, size 0x4, align 1
    char _pad_1826[0x1A]; // offset 0x1826
    bool m_bHasBuiltWearableSpawnList; // offset 0x1840, size 0x1, align 1
    bool m_bHasCostume; // offset 0x1841, size 0x1, align 1
    bool m_bRecreateParticleSystemsOnModifiersChange; // offset 0x1842, size 0x1, align 1
    bool m_bWasRevealedFromFOWAsDead; // offset 0x1843, size 0x1, align 1
    GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // offset 0x1844, size 0x4, align 255
    char _pad_1848[0x14]; // offset 0x1848
    float32 m_flAdditionalSinkDelay; // offset 0x185C, size 0x4, align 4
    char _pad_1860[0x28]; // offset 0x1860
    uint32 m_nScepterUpgradeID; // offset 0x1888, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x188C, size 0x4, align 4
    char _pad_1890[0xE0]; // offset 0x1890
    int32 m_NetworkActivity; // offset 0x1970, size 0x4, align 4
    int32 m_PrevNetworkActivity; // offset 0x1974, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1978, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x197C, size 0x1, align 1
    char _pad_197D[0x3]; // offset 0x197D
    float32 m_flStartSequenceCycle; // offset 0x1980, size 0x4, align 4
    char _pad_1984[0x4]; // offset 0x1984
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1988, size 0x18, align 8
    CHandle< C_SceneEntity > m_hBackgroundSceneEnt; // offset 0x19A0, size 0x4, align 4
    CHandle< C_SceneEntity > m_hSpeakingSceneEnt; // offset 0x19A4, size 0x4, align 4
    char _pad_19A8[0x10]; // offset 0x19A8
    CUtlVector< CHandle< C_EconWearable > > m_hOldWearables; // offset 0x19B8, size 0x18, align 8
    CUtlVector< CUtlStringToken > m_hOldWearableSkins; // offset 0x19D0, size 0x18, align 8
    char[256] m_CustomHealthLabel; // offset 0x19E8, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1AE8, size 0x4, align 1
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1AEC, size 0x1, align 1
    char _pad_1AED[0x3]; // offset 0x1AED
    item_definition_index_t m_nWearableDefIndex; // offset 0x1AF0, size 0x4, align 255
    char _pad_1AF4[0x1]; // offset 0x1AF4
    Color m_gibTintColor; // offset 0x1AF5, size 0x4, align 1
    bool m_bForceMaterialCombine; // offset 0x1AF9, size 0x1, align 1
    bool m_bShouldDrawParticlesWhileHidden; // offset 0x1AFA, size 0x1, align 1
    bool m_bIsClientThinkPending; // offset 0x1AFB, size 0x1, align 1
    bool m_bActivityModifiersDirty; // offset 0x1AFC, size 0x1, align 1
    bool m_bUnitModelVariantChanged; // offset 0x1AFD, size 0x1, align 1
    bool m_bWearablesAreTaunting; // offset 0x1AFE, size 0x1, align 1
    bool m_bWearablesLoadoutOverride; // offset 0x1AFF, size 0x1, align 1
    char _pad_1B00[0x10]; // offset 0x1B00
    bool m_bShowCannotBeDisabledIcon; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x1F]; // offset 0x1B11
    int32 m_nVisionPreviewViewer; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
