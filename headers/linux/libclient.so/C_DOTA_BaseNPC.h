#pragma once

class C_DOTA_BaseNPC : public C_NextBotCombatCharacter /*0x0*/  // sizeof 0x1C40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE08]; // offset 0x0
    bool m_bIsPhantom; // offset 0xE08, size 0x1, align 1
    char _pad_0E09[0x3]; // offset 0xE09
    uint32 m_iUnitType; // offset 0xE0C, size 0x4, align 4
    char _pad_0E10[0x10]; // offset 0xE10
    bool m_bSelectionRingVisible; // offset 0xE20, size 0x1, align 1
    char _pad_0E21[0x3]; // offset 0xE21
    int32 m_iCurrentLevel; // offset 0xE24, size 0x4, align 4
    bool m_bIsAncient; // offset 0xE28, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xE29, size 0x1, align 1
    bool m_bStolenScepter; // offset 0xE2A, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xE2B, size 0x1, align 1
    bool m_bSelectOnSpawn; // offset 0xE2C, size 0x1, align 1
    bool m_bCachedReplicatedMorphlingIllusion; // offset 0xE2D, size 0x1, align 1
    bool m_bIgnoreAddSummonedToSelection; // offset 0xE2E, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xE2F, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xE30, size 0x1, align 1
    bool m_bUseHeroAbilityNumbers; // offset 0xE31, size 0x1, align 1
    bool m_bHasSharedAbilities; // offset 0xE32, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xE33, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xE34, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xE35, size 0x1, align 1
    char _pad_0E36[0x2]; // offset 0xE36
    float32 m_flHealthThinkRegen; // offset 0xE38, size 0x4, align 4
    char _pad_0E3C[0x4]; // offset 0xE3C
    uint64 m_iIsControllableByPlayer64; // offset 0xE40, size 0x8, align 8
    int32 m_nHealthBarOffsetOverride; // offset 0xE48, size 0x4, align 4
    bool m_bCanRespawn; // offset 0xE4C, size 0x1, align 1
    char _pad_0E4D[0x3]; // offset 0xE4D
    int32 m_iAttackRange; // offset 0xE50, size 0x4, align 4
    bool m_bIsClone; // offset 0xE54, size 0x1, align 1
    char _pad_0E55[0x3]; // offset 0xE55
    Color m_colorGemColor; // offset 0xE58, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xE5C, size 0x1, align 1
    char _pad_0E5D[0x3]; // offset 0xE5D
    ParticleIndex_t m_nFXDeniableIndex; // offset 0xE60, size 0x4, align 255
    int32 m_nCustomHealthbarStyle; // offset 0xE64, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xE68, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xE6C, size 0x4, align 4
    float32 m_flBaseAttackTime; // offset 0xE70, size 0x4, align 4
    int32 m_iUnitNameIndex; // offset 0xE74, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0xE78, size 0x4, align 4
    int32 m_iHealthBarOffset; // offset 0xE7C, size 0x4, align 4
    Color m_iHealthBarHighlightColor; // offset 0xE80, size 0x4, align 4
    float32 m_flMana; // offset 0xE84, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xE88, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xE8C, size 0x4, align 4
    int32 m_iBKBChargesUsed; // offset 0xE90, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xE94, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xE98, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xE9C, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xEA0, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xEA4, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xEA8, size 0x4, align 4
    bool m_bIsIllusion; // offset 0xEAC, size 0x1, align 1
    bool m_bHasClientSeenIllusionModifier; // offset 0xEAD, size 0x1, align 1
    char _pad_0EAE[0x2]; // offset 0xEAE
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // offset 0xEB0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecAbilitiesClientPrediction; // offset 0xEC8, size 0x18, align 8
    int32 m_nLocalAbilityBarSequenceNumber; // offset 0xEE0, size 0x4, align 4
    float32 m_flInvisibilityLevel; // offset 0xEE4, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xEE8, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xEEC, size 0x4, align 4
    float32 m_flRingRadius; // offset 0xEF0, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xEF4, size 0x4, align 4
    CUtlSymbolLarge m_iszUnitName; // offset 0xEF8, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitNameIconOverride; // offset 0xF00, size 0x8, align 8
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xF08, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xF10, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xF18, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xF20, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xF28, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceBackgroundSound; // offset 0xF30, size 0x8, align 8
    CUtlSymbolLarge m_iszIdleSoundLoop; // offset 0xF38, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0xF40, size 0x8, align 8
    CUtlString m_szScaleset; // offset 0xF48, size 0x8, align 8
    uint8 m_nUnitLabelIndex; // offset 0xF50, size 0x1, align 1
    char _pad_0F51[0x7]; // offset 0xF51
    CUtlString m_strAnimationModifier; // offset 0xF58, size 0x8, align 8
    CUtlString m_TerrainSpecificFootstepEffect; // offset 0xF60, size 0x8, align 8
    bool m_bUseCustomTerrainWeatherEffect; // offset 0xF68, size 0x1, align 1
    bool m_bHasClientSoundReplacement; // offset 0xF69, size 0x1, align 1
    bool m_bHasClientReplacementParticle; // offset 0xF6A, size 0x1, align 1
    char _pad_0F6B[0x15]; // offset 0xF6B
    bool m_bResourcesLoaded; // offset 0xF80, size 0x1, align 1
    char _pad_0F81[0x3]; // offset 0xF81
    GameTime_t m_flTauntCooldown; // offset 0xF84, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xF88, size 0x4, align 255
    DOTA_SHOP_TYPE m_iCurShop; // offset 0xF8C, size 0x4, align 4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0xF90, size 0x8, align 8
    int32 m_iDayTimeVisionRange; // offset 0xF98, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xF9C, size 0x4, align 4
    int32 m_iDamageMin; // offset 0xFA0, size 0x4, align 4
    int32 m_iDamageMax; // offset 0xFA4, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0xFA8, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xFAC, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xFB0, size 0x4, align 4
    char _pad_0FB4[0x4]; // offset 0xFB4
    CDOTA_ModifierManager m_ModifierManager; // offset 0xFB8, size 0x390, align 255
    C_DOTA_UnitInventory m_Inventory; // offset 0x1348, size 0xF0, align 255
    char _pad_1438[0x8]; // offset 0x1438
    uint64 m_nUnitState64; // offset 0x1440, size 0x8, align 8
    char _pad_1448[0x8]; // offset 0x1448
    uint64 m_nUnitDebuffState; // offset 0x1450, size 0x8, align 8
    bool m_bHasInventory; // offset 0x1458, size 0x1, align 1
    char _pad_1459[0x3]; // offset 0x1459
    int32 m_iAcquisitionRange; // offset 0x145C, size 0x4, align 4
    int32 m_FoWViewID; // offset 0x1460, size 0x4, align 4
    int32 m_iTeamViewerID; // offset 0x1464, size 0x4, align 4
    int32 m_iPrevHealthPct; // offset 0x1468, size 0x4, align 4
    int32 m_iPrevLifeState; // offset 0x146C, size 0x4, align 4
    int32 m_iPrevTeam; // offset 0x1470, size 0x4, align 4
    bool m_bLastShardState; // offset 0x1474, size 0x1, align 1
    bool m_bLastScepterState; // offset 0x1475, size 0x1, align 1
    bool m_bForceScepterState; // offset 0x1476, size 0x1, align 1
    bool m_bForceShardState; // offset 0x1477, size 0x1, align 1
    bool m_bPrevProvidesVision; // offset 0x1478, size 0x1, align 1
    char _pad_1479[0x7]; // offset 0x1479
    uint64 m_nPrevControllableMask; // offset 0x1480, size 0x8, align 8
    char _pad_1488[0x8]; // offset 0x1488
    CountdownTimer m_TagTime; // offset 0x1490, size 0x18, align 8
    CountdownTimer m_ClickedTime; // offset 0x14A8, size 0x18, align 8
    GameTime_t[2] m_flIdleRunPoseStartTime; // offset 0x14C0, size 0x8, align 4
    float32[2] m_flIdleRunPoseDuration; // offset 0x14C8, size 0x8, align 4
    bool m_bAnimationTransitionActive; // offset 0x14D0, size 0x1, align 1
    char _pad_14D1[0x3]; // offset 0x14D1
    int32[2] m_nAnimationTransitionPoseParameters; // offset 0x14D4, size 0x8, align 4
    int32[2] m_nAnimationTransitionInjuredPoseParameters; // offset 0x14DC, size 0x8, align 4
    int32[2] m_nAnimationTransitionAggressivePoseParameters; // offset 0x14E4, size 0x8, align 4
    char _pad_14EC[0x4C]; // offset 0x14EC
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x1538, size 0x4, align 255
    int32 m_iAttackCapabilities; // offset 0x153C, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x1540, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x1544, size 0x4, align 4
    PlayerID_t m_nPlayerOwnerID; // offset 0x1548, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x154C, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x1550, size 0x4, align 255
    char _pad_1554[0x4]; // offset 0x1554
    CUtlSymbolLarge m_iszMinimapIcon; // offset 0x1558, size 0x8, align 8
    char _pad_1560[0x8]; // offset 0x1560
    float32 m_flMinimapIconSize; // offset 0x1568, size 0x4, align 4
    bool m_bMinimapDisableTint; // offset 0x156C, size 0x1, align 1
    bool m_bMinimapDisableRotation; // offset 0x156D, size 0x1, align 1
    char _pad_156E[0x2]; // offset 0x156E
    Color m_colorHeroGlow; // offset 0x1570, size 0x4, align 4
    int32 m_iNearShopMask; // offset 0x1574, size 0x4, align 4
    int32 m_nPoseParameterTurn; // offset 0x1578, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x157C, size 0x4, align 4
    float32 m_flLean; // offset 0x1580, size 0x4, align 4
    float32 m_flRun; // offset 0x1584, size 0x4, align 4
    int32 m_anglediff; // offset 0x1588, size 0x4, align 4
    bool m_bInfoKeyActive; // offset 0x158C, size 0x1, align 1
    bool m_bNewUpdateAssetModifiersNetworked; // offset 0x158D, size 0x1, align 1
    char _pad_158E[0x2]; // offset 0x158E
    GameTick_t m_nAssetModifiersLastUpdatedTick; // offset 0x1590, size 0x4, align 255
    bool m_bSuppressGlow; // offset 0x1594, size 0x1, align 1
    bool m_bWasSinking; // offset 0x1595, size 0x1, align 1
    char _pad_1596[0x2]; // offset 0x1596
    float32 m_flRangeDisplayDist; // offset 0x1598, size 0x4, align 4
    char _pad_159C[0x1E4]; // offset 0x159C
    CUtlSymbolLarge m_szDefaultIdle; // offset 0x1780, size 0x8, align 8
    CUtlSymbolLarge m_szDefaultRareIdle; // offset 0x1788, size 0x8, align 8
    CountdownTimer m_damagetimer; // offset 0x1790, size 0x18, align 8
    float32 m_fZDelta; // offset 0x17A8, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x17AC, size 0x4, align 255
    bool m_bBaseStatsChanged; // offset 0x17B0, size 0x1, align 1
    bool m_bNeedsSoundEmitterRefresh; // offset 0x17B1, size 0x1, align 1
    char _pad_17B2[0x2]; // offset 0x17B2
    float32 m_flPhysicalArmorValue; // offset 0x17B4, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x17B8, size 0x4, align 4
    int32 m_nPrevSequenceParity; // offset 0x17BC, size 0x4, align 4
    char _pad_17C0[0xA0]; // offset 0x17C0
    float32 m_flPrevInvisLevel; // offset 0x1860, size 0x4, align 4
    char _pad_1864[0x4]; // offset 0x1864
    CStrongHandle< InfoForResourceTypeCModel > m_nOriginalModelIndex; // offset 0x1868, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientOriginalModelIndex; // offset 0x1870, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientReplacementModelIndex; // offset 0x1878, size 0x8, align 8
    bool m_bClientReplacementModelNeedsRebuild; // offset 0x1880, size 0x1, align 1
    char _pad_1881[0x3]; // offset 0x1881
    int32 m_nClientReplacementModelReloadCount; // offset 0x1884, size 0x4, align 4
    int8 m_nUnitModelVariant; // offset 0x1888, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1889, size 0x1, align 1
    char _pad_188A[0x2]; // offset 0x188A
    int32 m_iPrevSequence; // offset 0x188C, size 0x4, align 4
    char* m_pLastWeatherEffectName; // offset 0x1890, size 0x8, align 8
    char _pad_1898[0x8]; // offset 0x1898
    CountdownTimer m_VoiceBackgroundSoundTimer; // offset 0x18A0, size 0x18, align 8
    bool m_bIsWaitingToSpawn; // offset 0x18B8, size 0x1, align 1
    char _pad_18B9[0x7]; // offset 0x18B9
    int64 m_nTotalDamageTaken; // offset 0x18C0, size 0x8, align 8
    float32 m_flManaRegen; // offset 0x18C8, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x18CC, size 0x4, align 4
    bool m_bIsMoving; // offset 0x18D0, size 0x1, align 1
    char _pad_18D1[0x3]; // offset 0x18D1
    float32 m_fRevealRadius; // offset 0x18D4, size 0x4, align 4
    bool m_bCanUseWards; // offset 0x18D8, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0x18D9, size 0x1, align 1
    char _pad_18DA[0x2]; // offset 0x18DA
    int32 m_iXPBounty; // offset 0x18DC, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x18E0, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x18E4, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x18E8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x18EC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGoalEntity; // offset 0x18F0, size 0x4, align 4
    CHandle< C_DOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0x18F4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hClientOverrideMaterial; // offset 0x18F8, size 0x8, align 8
    bool m_bCombinerMaterialOverrideListChanged; // offset 0x1900, size 0x1, align 1
    char _pad_1901[0x3]; // offset 0x1901
    int32 m_nBaseModelMeshCount; // offset 0x1904, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0x1908, size 0x18, align 8
    int8 m_nArcanaLevel; // offset 0x1920, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1921, size 0x1, align 1
    char _pad_1922[0x2]; // offset 0x1922
    Color m_defaultColorGemColor; // offset 0x1924, size 0x4, align 4
    char _pad_1928[0x18]; // offset 0x1928
    bool m_bHasBuiltWearableSpawnList; // offset 0x1940, size 0x1, align 1
    bool m_bHasCostume; // offset 0x1941, size 0x1, align 1
    bool m_bRecreateParticleSystemsOnModifiersChange; // offset 0x1942, size 0x1, align 1
    bool m_bWasRevealedFromFOWAsDead; // offset 0x1943, size 0x1, align 1
    GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // offset 0x1944, size 0x4, align 255
    char _pad_1948[0x14]; // offset 0x1948
    float32 m_flAdditionalSinkDelay; // offset 0x195C, size 0x4, align 4
    char _pad_1960[0x28]; // offset 0x1960
    uint32 m_nScepterUpgradeID; // offset 0x1988, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x198C, size 0x4, align 4
    char _pad_1990[0xE0]; // offset 0x1990
    int32 m_NetworkActivity; // offset 0x1A70, size 0x4, align 4
    int32 m_PrevNetworkActivity; // offset 0x1A74, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1A78, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    float32 m_flStartSequenceCycle; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1A88, size 0x18, align 8
    CHandle< C_SceneEntity > m_hBackgroundSceneEnt; // offset 0x1AA0, size 0x4, align 4
    CHandle< C_SceneEntity > m_hSpeakingSceneEnt; // offset 0x1AA4, size 0x4, align 4
    char _pad_1AA8[0x10]; // offset 0x1AA8
    CUtlVector< CHandle< C_EconWearable > > m_hOldWearables; // offset 0x1AB8, size 0x18, align 8
    CUtlVector< CUtlStringToken > m_hOldWearableSkins; // offset 0x1AD0, size 0x18, align 8
    char[256] m_CustomHealthLabel; // offset 0x1AE8, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1BE8, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1BEC, size 0x1, align 1
    char _pad_1BED[0x3]; // offset 0x1BED
    item_definition_index_t m_nWearableDefIndex; // offset 0x1BF0, size 0x4, align 255
    char _pad_1BF4[0x4]; // offset 0x1BF4
    Color m_gibTintColor; // offset 0x1BF8, size 0x4, align 4
    bool m_bForceMaterialCombine; // offset 0x1BFC, size 0x1, align 1
    bool m_bShouldDrawParticlesWhileHidden; // offset 0x1BFD, size 0x1, align 1
    bool m_bIsClientThinkPending; // offset 0x1BFE, size 0x1, align 1
    bool m_bActivityModifiersDirty; // offset 0x1BFF, size 0x1, align 1
    bool m_bUnitModelVariantChanged; // offset 0x1C00, size 0x1, align 1
    bool m_bWearablesAreTaunting; // offset 0x1C01, size 0x1, align 1
    bool m_bWearablesLoadoutOverride; // offset 0x1C02, size 0x1, align 1
    char _pad_1C03[0x15]; // offset 0x1C03
    bool m_bShowCannotBeDisabledIcon; // offset 0x1C18, size 0x1, align 1
    char _pad_1C19[0x1F]; // offset 0x1C19
    int32 m_nVisionPreviewViewer; // offset 0x1C38, size 0x4, align 4
    char _pad_1C3C[0x4]; // offset 0x1C3C
};
