#pragma once

class C_DOTA_BaseNPC : public C_NextBotCombatCharacter /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB90]; // offset 0x0
    bool m_bIsPhantom; // offset 0xB90, size 0x1, align 1
    char _pad_0B91[0x3]; // offset 0xB91
    uint32 m_iUnitType; // offset 0xB94, size 0x4, align 4
    char _pad_0B98[0x10]; // offset 0xB98
    bool m_bSelectionRingVisible; // offset 0xBA8, size 0x1, align 1
    char _pad_0BA9[0x3]; // offset 0xBA9
    int32 m_iCurrentLevel; // offset 0xBAC, size 0x4, align 4
    bool m_bIsAncient; // offset 0xBB0, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xBB1, size 0x1, align 1
    bool m_bStolenScepter; // offset 0xBB2, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xBB3, size 0x1, align 1
    bool m_bSelectOnSpawn; // offset 0xBB4, size 0x1, align 1
    bool m_bCachedReplicatedMorphlingIllusion; // offset 0xBB5, size 0x1, align 1
    bool m_bIgnoreAddSummonedToSelection; // offset 0xBB6, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xBB7, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xBB8, size 0x1, align 1
    bool m_bUseHeroAbilityNumbers; // offset 0xBB9, size 0x1, align 1
    bool m_bHasSharedAbilities; // offset 0xBBA, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xBBB, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xBBC, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xBBD, size 0x1, align 1
    char _pad_0BBE[0x2]; // offset 0xBBE
    float32 m_flHealthThinkRegen; // offset 0xBC0, size 0x4, align 4
    char _pad_0BC4[0x4]; // offset 0xBC4
    uint64 m_iIsControllableByPlayer64; // offset 0xBC8, size 0x8, align 8
    int32 m_nHealthBarOffsetOverride; // offset 0xBD0, size 0x4, align 4
    bool m_bCanRespawn; // offset 0xBD4, size 0x1, align 1
    char _pad_0BD5[0x3]; // offset 0xBD5
    int32 m_iAttackRange; // offset 0xBD8, size 0x4, align 4
    bool m_bIsClone; // offset 0xBDC, size 0x1, align 1
    Color m_colorGemColor; // offset 0xBDD, size 0x4, align 1
    bool m_bHasColorGem; // offset 0xBE1, size 0x1, align 1
    char _pad_0BE2[0x2]; // offset 0xBE2
    ParticleIndex_t m_nFXDeniableIndex; // offset 0xBE4, size 0x4, align 255
    int32 m_nCustomHealthbarStyle; // offset 0xBE8, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xBEC, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xBF0, size 0x4, align 4
    float32 m_flBaseAttackTime; // offset 0xBF4, size 0x4, align 4
    int32 m_iUnitNameIndex; // offset 0xBF8, size 0x4, align 4
    int32 m_iHealthBarOffset; // offset 0xBFC, size 0x4, align 4
    Color m_iHealthBarHighlightColor; // offset 0xC00, size 0x4, align 1
    float32 m_flMana; // offset 0xC04, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xC08, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xC0C, size 0x4, align 4
    int32 m_iBKBChargesUsed; // offset 0xC10, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xC14, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xC18, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xC1C, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xC20, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xC24, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xC28, size 0x4, align 4
    bool m_bIsIllusion; // offset 0xC2C, size 0x1, align 1
    bool m_bHasClientSeenIllusionModifier; // offset 0xC2D, size 0x1, align 1
    char _pad_0C2E[0x2]; // offset 0xC2E
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // offset 0xC30, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecAbilitiesClientPrediction; // offset 0xC48, size 0x18, align 8
    int32 m_nLocalAbilityBarSequenceNumber; // offset 0xC60, size 0x4, align 4
    float32 m_flInvisibilityLevel; // offset 0xC64, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xC68, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xC6C, size 0x4, align 4
    float32 m_flRingRadius; // offset 0xC70, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xC74, size 0x4, align 4
    CUtlSymbolLarge m_iszUnitName; // offset 0xC78, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitNameIconOverride; // offset 0xC80, size 0x8, align 8
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xC88, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xC90, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xC98, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xCA0, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xCA8, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceBackgroundSound; // offset 0xCB0, size 0x8, align 8
    CUtlSymbolLarge m_iszIdleSoundLoop; // offset 0xCB8, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0xCC0, size 0x8, align 8
    CUtlString m_szScaleset; // offset 0xCC8, size 0x8, align 8
    uint8 m_nUnitLabelIndex; // offset 0xCD0, size 0x1, align 1
    char _pad_0CD1[0x7]; // offset 0xCD1
    CUtlString m_strAnimationModifier; // offset 0xCD8, size 0x8, align 8
    CUtlString m_TerrainSpecificFootstepEffect; // offset 0xCE0, size 0x8, align 8
    bool m_bUseCustomTerrainWeatherEffect; // offset 0xCE8, size 0x1, align 1
    bool m_bHasClientSoundReplacement; // offset 0xCE9, size 0x1, align 1
    bool m_bHasClientReplacementParticle; // offset 0xCEA, size 0x1, align 1
    char _pad_0CEB[0x15]; // offset 0xCEB
    bool m_bResourcesLoaded; // offset 0xD00, size 0x1, align 1
    char _pad_0D01[0x3]; // offset 0xD01
    GameTime_t m_flTauntCooldown; // offset 0xD04, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xD08, size 0x4, align 255
    DOTA_SHOP_TYPE m_iCurShop; // offset 0xD0C, size 0x4, align 4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0xD10, size 0x8, align 8
    int32 m_iDayTimeVisionRange; // offset 0xD18, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xD1C, size 0x4, align 4
    int32 m_iDamageMin; // offset 0xD20, size 0x4, align 4
    int32 m_iDamageMax; // offset 0xD24, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0xD28, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xD2C, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xD30, size 0x4, align 4
    char _pad_0D34[0x4]; // offset 0xD34
    CDOTA_ModifierManager m_ModifierManager; // offset 0xD38, size 0x390, align 255
    C_DOTA_UnitInventory m_Inventory; // offset 0x10C8, size 0xF0, align 255
    char _pad_11B8[0x8]; // offset 0x11B8
    uint64 m_nUnitState64; // offset 0x11C0, size 0x8, align 8
    char _pad_11C8[0x8]; // offset 0x11C8
    uint64 m_nUnitDebuffState; // offset 0x11D0, size 0x8, align 8
    bool m_bHasInventory; // offset 0x11D8, size 0x1, align 1
    char _pad_11D9[0x3]; // offset 0x11D9
    int32 m_iAcquisitionRange; // offset 0x11DC, size 0x4, align 4
    int32 m_FoWViewID; // offset 0x11E0, size 0x4, align 4
    int32 m_iTeamViewerID; // offset 0x11E4, size 0x4, align 4
    int32 m_iPrevHealthPct; // offset 0x11E8, size 0x4, align 4
    int32 m_iPrevLifeState; // offset 0x11EC, size 0x4, align 4
    int32 m_iPrevTeam; // offset 0x11F0, size 0x4, align 4
    bool m_bLastShardState; // offset 0x11F4, size 0x1, align 1
    bool m_bLastScepterState; // offset 0x11F5, size 0x1, align 1
    bool m_bForceScepterState; // offset 0x11F6, size 0x1, align 1
    bool m_bForceShardState; // offset 0x11F7, size 0x1, align 1
    bool m_bPrevProvidesVision; // offset 0x11F8, size 0x1, align 1
    char _pad_11F9[0x7]; // offset 0x11F9
    uint64 m_nPrevControllableMask; // offset 0x1200, size 0x8, align 8
    char _pad_1208[0x8]; // offset 0x1208
    CountdownTimer m_TagTime; // offset 0x1210, size 0x18, align 8
    CountdownTimer m_ClickedTime; // offset 0x1228, size 0x18, align 8
    GameTime_t[2] m_flIdleRunPoseStartTime; // offset 0x1240, size 0x8, align 4
    float32[2] m_flIdleRunPoseDuration; // offset 0x1248, size 0x8, align 4
    bool m_bAnimationTransitionActive; // offset 0x1250, size 0x1, align 1
    char _pad_1251[0x3]; // offset 0x1251
    int32[2] m_nAnimationTransitionPoseParameters; // offset 0x1254, size 0x8, align 4
    int32[2] m_nAnimationTransitionInjuredPoseParameters; // offset 0x125C, size 0x8, align 4
    int32[2] m_nAnimationTransitionAggressivePoseParameters; // offset 0x1264, size 0x8, align 4
    char _pad_126C[0x4C]; // offset 0x126C
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x12B8, size 0x4, align 255
    int32 m_iAttackCapabilities; // offset 0x12BC, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x12C0, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x12C4, size 0x4, align 4
    PlayerID_t m_nPlayerOwnerID; // offset 0x12C8, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x12CC, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x12D0, size 0x4, align 255
    char _pad_12D4[0x4]; // offset 0x12D4
    CUtlSymbolLarge m_iszMinimapIcon; // offset 0x12D8, size 0x8, align 8
    char _pad_12E0[0x8]; // offset 0x12E0
    float32 m_flMinimapIconSize; // offset 0x12E8, size 0x4, align 4
    bool m_bMinimapDisableTint; // offset 0x12EC, size 0x1, align 1
    bool m_bMinimapDisableRotation; // offset 0x12ED, size 0x1, align 1
    Color m_colorHeroGlow; // offset 0x12EE, size 0x4, align 1
    char _pad_12F2[0x2]; // offset 0x12F2
    int32 m_iNearShopMask; // offset 0x12F4, size 0x4, align 4
    int32 m_nPoseParameterTurn; // offset 0x12F8, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x12FC, size 0x4, align 4
    float32 m_flLean; // offset 0x1300, size 0x4, align 4
    float32 m_flRun; // offset 0x1304, size 0x4, align 4
    int32 m_anglediff; // offset 0x1308, size 0x4, align 4
    bool m_bInfoKeyActive; // offset 0x130C, size 0x1, align 1
    bool m_bNewUpdateAssetModifiersNetworked; // offset 0x130D, size 0x1, align 1
    char _pad_130E[0x2]; // offset 0x130E
    GameTick_t m_nAssetModifiersLastUpdatedTick; // offset 0x1310, size 0x4, align 255
    bool m_bSuppressGlow; // offset 0x1314, size 0x1, align 1
    bool m_bWasSinking; // offset 0x1315, size 0x1, align 1
    char _pad_1316[0x2]; // offset 0x1316
    float32 m_flRangeDisplayDist; // offset 0x1318, size 0x4, align 4
    char _pad_131C[0x1E4]; // offset 0x131C
    CUtlSymbolLarge m_szDefaultIdle; // offset 0x1500, size 0x8, align 8
    CUtlSymbolLarge m_szDefaultRareIdle; // offset 0x1508, size 0x8, align 8
    CountdownTimer m_damagetimer; // offset 0x1510, size 0x18, align 8
    float32 m_fZDelta; // offset 0x1528, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x152C, size 0x4, align 255
    bool m_bBaseStatsChanged; // offset 0x1530, size 0x1, align 1
    bool m_bNeedsSoundEmitterRefresh; // offset 0x1531, size 0x1, align 1
    char _pad_1532[0x2]; // offset 0x1532
    float32 m_flPhysicalArmorValue; // offset 0x1534, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x1538, size 0x4, align 4
    int32 m_nPrevSequenceParity; // offset 0x153C, size 0x4, align 4
    char _pad_1540[0xA0]; // offset 0x1540
    float32 m_flPrevInvisLevel; // offset 0x15E0, size 0x4, align 4
    char _pad_15E4[0x4]; // offset 0x15E4
    CStrongHandle< InfoForResourceTypeCModel > m_nOriginalModelIndex; // offset 0x15E8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientOriginalModelIndex; // offset 0x15F0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientReplacementModelIndex; // offset 0x15F8, size 0x8, align 8
    bool m_bClientReplacementModelNeedsRebuild; // offset 0x1600, size 0x1, align 1
    char _pad_1601[0x3]; // offset 0x1601
    int32 m_nClientReplacementModelReloadCount; // offset 0x1604, size 0x4, align 4
    int8 m_nUnitModelVariant; // offset 0x1608, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1609, size 0x1, align 1
    char _pad_160A[0x2]; // offset 0x160A
    int32 m_iPrevSequence; // offset 0x160C, size 0x4, align 4
    char* m_pLastWeatherEffectName; // offset 0x1610, size 0x8, align 8
    char _pad_1618[0x8]; // offset 0x1618
    CountdownTimer m_VoiceBackgroundSoundTimer; // offset 0x1620, size 0x18, align 8
    bool m_bIsWaitingToSpawn; // offset 0x1638, size 0x1, align 1
    char _pad_1639[0x7]; // offset 0x1639
    int64 m_nTotalDamageTaken; // offset 0x1640, size 0x8, align 8
    float32 m_flManaRegen; // offset 0x1648, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x164C, size 0x4, align 4
    bool m_bIsMoving; // offset 0x1650, size 0x1, align 1
    char _pad_1651[0x3]; // offset 0x1651
    float32 m_fRevealRadius; // offset 0x1654, size 0x4, align 4
    bool m_bCanUseWards; // offset 0x1658, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0x1659, size 0x1, align 1
    char _pad_165A[0x2]; // offset 0x165A
    int32 m_iXPBounty; // offset 0x165C, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x1660, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x1664, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x1668, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x166C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGoalEntity; // offset 0x1670, size 0x4, align 4
    CHandle< C_DOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0x1674, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hClientOverrideMaterial; // offset 0x1678, size 0x8, align 8
    bool m_bCombinerMaterialOverrideListChanged; // offset 0x1680, size 0x1, align 1
    char _pad_1681[0x3]; // offset 0x1681
    int32 m_nBaseModelMeshCount; // offset 0x1684, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0x1688, size 0x18, align 8
    int8 m_nArcanaLevel; // offset 0x16A0, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x16A1, size 0x1, align 1
    Color m_defaultColorGemColor; // offset 0x16A2, size 0x4, align 1
    char _pad_16A6[0x1A]; // offset 0x16A6
    bool m_bHasBuiltWearableSpawnList; // offset 0x16C0, size 0x1, align 1
    bool m_bHasCostume; // offset 0x16C1, size 0x1, align 1
    bool m_bRecreateParticleSystemsOnModifiersChange; // offset 0x16C2, size 0x1, align 1
    bool m_bWasRevealedFromFOWAsDead; // offset 0x16C3, size 0x1, align 1
    GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // offset 0x16C4, size 0x4, align 255
    char _pad_16C8[0x14]; // offset 0x16C8
    float32 m_flAdditionalSinkDelay; // offset 0x16DC, size 0x4, align 4
    char _pad_16E0[0x28]; // offset 0x16E0
    uint32 m_nScepterUpgradeID; // offset 0x1708, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x170C, size 0x4, align 4
    char _pad_1710[0xE0]; // offset 0x1710
    int32 m_NetworkActivity; // offset 0x17F0, size 0x4, align 4
    int32 m_PrevNetworkActivity; // offset 0x17F4, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x17F8, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x17FC, size 0x1, align 1
    char _pad_17FD[0x3]; // offset 0x17FD
    float32 m_flStartSequenceCycle; // offset 0x1800, size 0x4, align 4
    char _pad_1804[0x4]; // offset 0x1804
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1808, size 0x18, align 8
    CHandle< C_SceneEntity > m_hBackgroundSceneEnt; // offset 0x1820, size 0x4, align 4
    CHandle< C_SceneEntity > m_hSpeakingSceneEnt; // offset 0x1824, size 0x4, align 4
    char _pad_1828[0x10]; // offset 0x1828
    CUtlVector< CHandle< C_EconWearable > > m_hOldWearables; // offset 0x1838, size 0x18, align 8
    CUtlVector< CUtlStringToken > m_hOldWearableSkins; // offset 0x1850, size 0x18, align 8
    char[256] m_CustomHealthLabel; // offset 0x1868, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1968, size 0x4, align 1
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x196C, size 0x1, align 1
    char _pad_196D[0x3]; // offset 0x196D
    item_definition_index_t m_nWearableDefIndex; // offset 0x1970, size 0x4, align 255
    char _pad_1974[0x1]; // offset 0x1974
    Color m_gibTintColor; // offset 0x1975, size 0x4, align 1
    bool m_bForceMaterialCombine; // offset 0x1979, size 0x1, align 1
    bool m_bShouldDrawParticlesWhileHidden; // offset 0x197A, size 0x1, align 1
    bool m_bIsClientThinkPending; // offset 0x197B, size 0x1, align 1
    bool m_bActivityModifiersDirty; // offset 0x197C, size 0x1, align 1
    bool m_bUnitModelVariantChanged; // offset 0x197D, size 0x1, align 1
    bool m_bWearablesAreTaunting; // offset 0x197E, size 0x1, align 1
    bool m_bWearablesLoadoutOverride; // offset 0x197F, size 0x1, align 1
    char _pad_1980[0x10]; // offset 0x1980
    bool m_bShowCannotBeDisabledIcon; // offset 0x1990, size 0x1, align 1
    char _pad_1991[0x1F]; // offset 0x1991
    int32 m_nVisionPreviewViewer; // offset 0x19B0, size 0x4, align 4
    char _pad_19B4[0x4]; // offset 0x19B4
};
