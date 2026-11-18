#pragma once

class C_DOTA_BaseNPC : public C_NextBotCombatCharacter /*0x0*/  // sizeof 0x1CD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE70]; // offset 0x0
    bool m_bIsPhantom; // offset 0xE70, size 0x1, align 1
    char _pad_0E71[0x3]; // offset 0xE71
    uint32 m_iUnitType; // offset 0xE74, size 0x4, align 4
    char _pad_0E78[0x10]; // offset 0xE78
    bool m_bSelectionRingVisible; // offset 0xE88, size 0x1, align 1
    char _pad_0E89[0x3]; // offset 0xE89
    int32 m_iCurrentLevel; // offset 0xE8C, size 0x4, align 4
    bool m_bIsAncient; // offset 0xE90, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xE91, size 0x1, align 1
    bool m_bStolenScepter; // offset 0xE92, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xE93, size 0x1, align 1
    bool m_bSelectOnSpawn; // offset 0xE94, size 0x1, align 1
    bool m_bCachedReplicatedMorphlingIllusion; // offset 0xE95, size 0x1, align 1
    bool m_bIgnoreAddSummonedToSelection; // offset 0xE96, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xE97, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xE98, size 0x1, align 1
    bool m_bUseHeroAbilityNumbers; // offset 0xE99, size 0x1, align 1
    bool m_bHasSharedAbilities; // offset 0xE9A, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xE9B, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xE9C, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xE9D, size 0x1, align 1
    char _pad_0E9E[0x2]; // offset 0xE9E
    float32 m_flHealthThinkRegen; // offset 0xEA0, size 0x4, align 4
    char _pad_0EA4[0x4]; // offset 0xEA4
    uint64 m_iIsControllableByPlayer64; // offset 0xEA8, size 0x8, align 8
    int32 m_nHealthBarOffsetOverride; // offset 0xEB0, size 0x4, align 4
    bool m_bCanRespawn; // offset 0xEB4, size 0x1, align 1
    char _pad_0EB5[0x3]; // offset 0xEB5
    int32 m_iAttackRange; // offset 0xEB8, size 0x4, align 4
    bool m_bIsClone; // offset 0xEBC, size 0x1, align 1
    char _pad_0EBD[0x3]; // offset 0xEBD
    Color m_colorGemColor; // offset 0xEC0, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xEC4, size 0x1, align 1
    char _pad_0EC5[0x3]; // offset 0xEC5
    ParticleIndex_t m_nFXDeniableIndex; // offset 0xEC8, size 0x4, align 255
    int32 m_nCustomHealthbarStyle; // offset 0xECC, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xED0, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xED4, size 0x4, align 4
    float32 m_flBaseAttackTime; // offset 0xED8, size 0x4, align 4
    int32 m_iUnitNameIndex; // offset 0xEDC, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0xEE0, size 0x4, align 4
    int32 m_iHealthBarOffset; // offset 0xEE4, size 0x4, align 4
    Color m_iHealthBarHighlightColor; // offset 0xEE8, size 0x4, align 4
    float32 m_flSelectionHitboxScale; // offset 0xEEC, size 0x4, align 4
    float32 m_flMana; // offset 0xEF0, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xEF4, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xEF8, size 0x4, align 4
    int32 m_iBKBChargesUsed; // offset 0xEFC, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xF00, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xF04, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xF08, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xF0C, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xF10, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xF14, size 0x4, align 4
    bool m_bIsIllusion; // offset 0xF18, size 0x1, align 1
    bool m_bHasClientSeenIllusionModifier; // offset 0xF19, size 0x1, align 1
    char _pad_0F1A[0x6]; // offset 0xF1A
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // offset 0xF20, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecAbilitiesClientPrediction; // offset 0xF38, size 0x18, align 8
    int32 m_nLocalAbilityBarSequenceNumber; // offset 0xF50, size 0x4, align 4
    float32 m_flInvisibilityLevel; // offset 0xF54, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xF58, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xF5C, size 0x4, align 4
    float32 m_flRingRadius; // offset 0xF60, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xF64, size 0x4, align 4
    CUtlSymbolLarge m_iszUnitName; // offset 0xF68, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitNameIconOverride; // offset 0xF70, size 0x8, align 8
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xF78, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xF80, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xF88, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xF90, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xF98, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceBackgroundSound; // offset 0xFA0, size 0x8, align 8
    CUtlSymbolLarge m_iszIdleSoundLoop; // offset 0xFA8, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0xFB0, size 0x8, align 8
    CUtlString m_szScaleset; // offset 0xFB8, size 0x8, align 8
    uint8 m_nUnitLabelIndex; // offset 0xFC0, size 0x1, align 1
    char _pad_0FC1[0x7]; // offset 0xFC1
    CUtlString m_strAnimationModifier; // offset 0xFC8, size 0x8, align 8
    CUtlString m_TerrainSpecificFootstepEffect; // offset 0xFD0, size 0x8, align 8
    bool m_bUseCustomTerrainWeatherEffect; // offset 0xFD8, size 0x1, align 1
    bool m_bHasClientSoundReplacement; // offset 0xFD9, size 0x1, align 1
    bool m_bHasClientReplacementParticle; // offset 0xFDA, size 0x1, align 1
    char _pad_0FDB[0x15]; // offset 0xFDB
    bool m_bResourcesLoaded; // offset 0xFF0, size 0x1, align 1
    char _pad_0FF1[0x3]; // offset 0xFF1
    GameTime_t m_flTauntCooldown; // offset 0xFF4, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xFF8, size 0x4, align 255
    DOTA_SHOP_TYPE m_iCurShop; // offset 0xFFC, size 0x4, align 4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x1000, size 0x8, align 8
    int32 m_iDayTimeVisionRange; // offset 0x1008, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0x100C, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x1010, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x1014, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x1018, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0x101C, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0x1020, size 0x4, align 4
    char _pad_1024[0x4]; // offset 0x1024
    CDOTA_ModifierManager m_ModifierManager; // offset 0x1028, size 0x3A0, align 255
    C_DOTA_UnitInventory m_Inventory; // offset 0x13C8, size 0xF0, align 255
    char _pad_14B8[0x8]; // offset 0x14B8
    uint64 m_nUnitState64; // offset 0x14C0, size 0x8, align 8
    char _pad_14C8[0x8]; // offset 0x14C8
    uint64 m_nUnitDebuffState; // offset 0x14D0, size 0x8, align 8
    bool m_bHasInventory; // offset 0x14D8, size 0x1, align 1
    char _pad_14D9[0x3]; // offset 0x14D9
    int32 m_iAcquisitionRange; // offset 0x14DC, size 0x4, align 4
    int32 m_FoWViewID; // offset 0x14E0, size 0x4, align 4
    int32 m_iTeamViewerID; // offset 0x14E4, size 0x4, align 4
    int32 m_iPrevHealthPct; // offset 0x14E8, size 0x4, align 4
    int32 m_iPrevLifeState; // offset 0x14EC, size 0x4, align 4
    int32 m_iPrevTeam; // offset 0x14F0, size 0x4, align 4
    bool m_bLastShardState; // offset 0x14F4, size 0x1, align 1
    bool m_bLastScepterState; // offset 0x14F5, size 0x1, align 1
    bool m_bForceScepterState; // offset 0x14F6, size 0x1, align 1
    bool m_bForceShardState; // offset 0x14F7, size 0x1, align 1
    bool m_bPrevProvidesVision; // offset 0x14F8, size 0x1, align 1
    char _pad_14F9[0x7]; // offset 0x14F9
    uint64 m_nPrevControllableMask; // offset 0x1500, size 0x8, align 8
    char _pad_1508[0x8]; // offset 0x1508
    CountdownTimer m_TagTime; // offset 0x1510, size 0x18, align 8
    CountdownTimer m_ClickedTime; // offset 0x1528, size 0x18, align 8
    GameTime_t[2] m_flIdleRunPoseStartTime; // offset 0x1540, size 0x8, align 4
    float32[2] m_flIdleRunPoseDuration; // offset 0x1548, size 0x8, align 4
    bool m_bAnimationTransitionActive; // offset 0x1550, size 0x1, align 1
    char _pad_1551[0x3]; // offset 0x1551
    int32[2] m_nAnimationTransitionPoseParameters; // offset 0x1554, size 0x8, align 4
    int32[2] m_nAnimationTransitionInjuredPoseParameters; // offset 0x155C, size 0x8, align 4
    int32[2] m_nAnimationTransitionAggressivePoseParameters; // offset 0x1564, size 0x8, align 4
    char _pad_156C[0x4C]; // offset 0x156C
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x15B8, size 0x4, align 255
    int32 m_iAttackCapabilities; // offset 0x15BC, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x15C0, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x15C4, size 0x4, align 4
    PlayerID_t m_nPlayerOwnerID; // offset 0x15C8, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x15CC, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x15D0, size 0x4, align 255
    char _pad_15D4[0x4]; // offset 0x15D4
    CUtlSymbolLarge m_iszMinimapIcon; // offset 0x15D8, size 0x8, align 8
    char _pad_15E0[0x8]; // offset 0x15E0
    float32 m_flMinimapIconSize; // offset 0x15E8, size 0x4, align 4
    bool m_bMinimapDisableTint; // offset 0x15EC, size 0x1, align 1
    bool m_bMinimapDisableRotation; // offset 0x15ED, size 0x1, align 1
    char _pad_15EE[0x2]; // offset 0x15EE
    Color m_colorHeroGlow; // offset 0x15F0, size 0x4, align 4
    int32 m_iNearShopMask; // offset 0x15F4, size 0x4, align 4
    int32 m_nPoseParameterTurn; // offset 0x15F8, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x15FC, size 0x4, align 4
    float32 m_flLean; // offset 0x1600, size 0x4, align 4
    float32 m_flRun; // offset 0x1604, size 0x4, align 4
    int32 m_anglediff; // offset 0x1608, size 0x4, align 4
    bool m_bInfoKeyActive; // offset 0x160C, size 0x1, align 1
    bool m_bNewUpdateAssetModifiersNetworked; // offset 0x160D, size 0x1, align 1
    char _pad_160E[0x2]; // offset 0x160E
    GameTick_t m_nAssetModifiersLastUpdatedTick; // offset 0x1610, size 0x4, align 255
    bool m_bSuppressGlow; // offset 0x1614, size 0x1, align 1
    bool m_bWasSinking; // offset 0x1615, size 0x1, align 1
    char _pad_1616[0x2]; // offset 0x1616
    float32 m_flRangeDisplayDist; // offset 0x1618, size 0x4, align 4
    char _pad_161C[0x1E4]; // offset 0x161C
    CUtlSymbolLarge m_szDefaultIdle; // offset 0x1800, size 0x8, align 8
    CUtlSymbolLarge m_szDefaultRareIdle; // offset 0x1808, size 0x8, align 8
    CountdownTimer m_damagetimer; // offset 0x1810, size 0x18, align 8
    float32 m_fZDelta; // offset 0x1828, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x182C, size 0x4, align 255
    bool m_bBaseStatsChanged; // offset 0x1830, size 0x1, align 1
    bool m_bNeedsSoundEmitterRefresh; // offset 0x1831, size 0x1, align 1
    char _pad_1832[0x2]; // offset 0x1832
    float32 m_flPhysicalArmorValue; // offset 0x1834, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x1838, size 0x4, align 4
    int32 m_nPrevSequenceParity; // offset 0x183C, size 0x4, align 4
    char _pad_1840[0xA0]; // offset 0x1840
    float32 m_flPrevInvisLevel; // offset 0x18E0, size 0x4, align 4
    char _pad_18E4[0x4]; // offset 0x18E4
    CStrongHandle< InfoForResourceTypeCModel > m_nOriginalModelIndex; // offset 0x18E8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientOriginalModelIndex; // offset 0x18F0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientReplacementModelIndex; // offset 0x18F8, size 0x8, align 8
    bool m_bClientReplacementModelNeedsRebuild; // offset 0x1900, size 0x1, align 1
    char _pad_1901[0x3]; // offset 0x1901
    int32 m_nClientReplacementModelReloadCount; // offset 0x1904, size 0x4, align 4
    int8 m_nUnitModelVariant; // offset 0x1908, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1909, size 0x1, align 1
    char _pad_190A[0x2]; // offset 0x190A
    int32 m_iPrevSequence; // offset 0x190C, size 0x4, align 4
    char* m_pLastWeatherEffectName; // offset 0x1910, size 0x8, align 8
    char _pad_1918[0x8]; // offset 0x1918
    CountdownTimer m_VoiceBackgroundSoundTimer; // offset 0x1920, size 0x18, align 8
    bool m_bIsWaitingToSpawn; // offset 0x1938, size 0x1, align 1
    char _pad_1939[0x7]; // offset 0x1939
    int64 m_nTotalDamageTaken; // offset 0x1940, size 0x8, align 8
    float32 m_flManaRegen; // offset 0x1948, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x194C, size 0x4, align 4
    bool m_bIsMoving; // offset 0x1950, size 0x1, align 1
    char _pad_1951[0x3]; // offset 0x1951
    float32 m_fRevealRadius; // offset 0x1954, size 0x4, align 4
    bool m_bCanUseWards; // offset 0x1958, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0x1959, size 0x1, align 1
    char _pad_195A[0x2]; // offset 0x195A
    int32 m_iXPBounty; // offset 0x195C, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x1960, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x1964, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x1968, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x196C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGoalEntity; // offset 0x1970, size 0x4, align 4
    CHandle< C_DOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0x1974, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hClientOverrideMaterial; // offset 0x1978, size 0x8, align 8
    bool m_bCombinerMaterialOverrideListChanged; // offset 0x1980, size 0x1, align 1
    char _pad_1981[0x3]; // offset 0x1981
    int32 m_nBaseModelMeshCount; // offset 0x1984, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0x1988, size 0x18, align 8
    int8 m_nArcanaLevel; // offset 0x19A0, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x19A1, size 0x1, align 1
    char _pad_19A2[0x2]; // offset 0x19A2
    Color m_defaultColorGemColor; // offset 0x19A4, size 0x4, align 4
    char _pad_19A8[0x18]; // offset 0x19A8
    bool m_bHasBuiltWearableSpawnList; // offset 0x19C0, size 0x1, align 1
    bool m_bHasCostume; // offset 0x19C1, size 0x1, align 1
    bool m_bRecreateParticleSystemsOnModifiersChange; // offset 0x19C2, size 0x1, align 1
    bool m_bWasRevealedFromFOWAsDead; // offset 0x19C3, size 0x1, align 1
    GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // offset 0x19C4, size 0x4, align 255
    char _pad_19C8[0x14]; // offset 0x19C8
    float32 m_flAdditionalSinkDelay; // offset 0x19DC, size 0x4, align 4
    char _pad_19E0[0x28]; // offset 0x19E0
    uint32 m_nScepterUpgradeID; // offset 0x1A08, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x1A0C, size 0x4, align 4
    char _pad_1A10[0xE0]; // offset 0x1A10
    int32 m_NetworkActivity; // offset 0x1AF0, size 0x4, align 4
    int32 m_PrevNetworkActivity; // offset 0x1AF4, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1AF8, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    float32 m_flStartSequenceCycle; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1B08, size 0x18, align 8
    CHandle< C_SceneEntity > m_hBackgroundSceneEnt; // offset 0x1B20, size 0x4, align 4
    CHandle< C_SceneEntity > m_hSpeakingSceneEnt; // offset 0x1B24, size 0x4, align 4
    char _pad_1B28[0x10]; // offset 0x1B28
    CUtlVector< CHandle< C_EconWearable > > m_hOldWearables; // offset 0x1B38, size 0x18, align 8
    CUtlVector< CUtlStringToken > m_hOldWearableSkins; // offset 0x1B50, size 0x18, align 8
    char[256] m_CustomHealthLabel; // offset 0x1B68, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1C68, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1C6C, size 0x1, align 1
    char _pad_1C6D[0x3]; // offset 0x1C6D
    item_definition_index_t m_nWearableDefIndex; // offset 0x1C70, size 0x4, align 255
    char _pad_1C74[0x4]; // offset 0x1C74
    Color m_gibTintColor; // offset 0x1C78, size 0x4, align 4
    bool m_bForceMaterialCombine; // offset 0x1C7C, size 0x1, align 1
    bool m_bShouldDrawParticlesWhileHidden; // offset 0x1C7D, size 0x1, align 1
    bool m_bIsClientThinkPending; // offset 0x1C7E, size 0x1, align 1
    bool m_bActivityModifiersDirty; // offset 0x1C7F, size 0x1, align 1
    bool m_bUnitModelVariantChanged; // offset 0x1C80, size 0x1, align 1
    bool m_bWearablesAreTaunting; // offset 0x1C81, size 0x1, align 1
    bool m_bWearablesLoadoutOverride; // offset 0x1C82, size 0x1, align 1
    char _pad_1C83[0x15]; // offset 0x1C83
    bool m_bShowCannotBeDisabledIcon; // offset 0x1C98, size 0x1, align 1
    bool m_bShowOccludedOutline; // offset 0x1C99, size 0x1, align 1
    char _pad_1C9A[0x2]; // offset 0x1C9A
    float32 m_flBuffEffectivenessOverride; // offset 0x1C9C, size 0x4, align 4
    char _pad_1CA0[0x28]; // offset 0x1CA0
    int32 m_nVisionPreviewViewer; // offset 0x1CC8, size 0x4, align 4
    char _pad_1CCC[0x4]; // offset 0x1CCC
};
