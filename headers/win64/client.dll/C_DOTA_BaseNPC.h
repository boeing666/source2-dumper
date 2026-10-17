#pragma once

class C_DOTA_BaseNPC : public C_NextBotCombatCharacter /*0x0*/  // sizeof 0x1AB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC80]; // offset 0x0
    bool m_bIsPhantom; // offset 0xC80, size 0x1, align 1
    char _pad_0C81[0x3]; // offset 0xC81
    uint32 m_iUnitType; // offset 0xC84, size 0x4, align 4
    char _pad_0C88[0x10]; // offset 0xC88
    bool m_bSelectionRingVisible; // offset 0xC98, size 0x1, align 1
    char _pad_0C99[0x3]; // offset 0xC99
    int32 m_iCurrentLevel; // offset 0xC9C, size 0x4, align 4
    bool m_bIsAncient; // offset 0xCA0, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xCA1, size 0x1, align 1
    bool m_bStolenScepter; // offset 0xCA2, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xCA3, size 0x1, align 1
    bool m_bSelectOnSpawn; // offset 0xCA4, size 0x1, align 1
    bool m_bCachedReplicatedMorphlingIllusion; // offset 0xCA5, size 0x1, align 1
    bool m_bIgnoreAddSummonedToSelection; // offset 0xCA6, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xCA7, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xCA8, size 0x1, align 1
    bool m_bUseHeroAbilityNumbers; // offset 0xCA9, size 0x1, align 1
    bool m_bHasSharedAbilities; // offset 0xCAA, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xCAB, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xCAC, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xCAD, size 0x1, align 1
    char _pad_0CAE[0x2]; // offset 0xCAE
    float32 m_flHealthThinkRegen; // offset 0xCB0, size 0x4, align 4
    char _pad_0CB4[0x4]; // offset 0xCB4
    uint64 m_iIsControllableByPlayer64; // offset 0xCB8, size 0x8, align 8
    int32 m_nHealthBarOffsetOverride; // offset 0xCC0, size 0x4, align 4
    bool m_bCanRespawn; // offset 0xCC4, size 0x1, align 1
    char _pad_0CC5[0x3]; // offset 0xCC5
    int32 m_iAttackRange; // offset 0xCC8, size 0x4, align 4
    bool m_bIsClone; // offset 0xCCC, size 0x1, align 1
    char _pad_0CCD[0x3]; // offset 0xCCD
    Color m_colorGemColor; // offset 0xCD0, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xCD4, size 0x1, align 1
    char _pad_0CD5[0x3]; // offset 0xCD5
    ParticleIndex_t m_nFXDeniableIndex; // offset 0xCD8, size 0x4, align 255
    int32 m_nCustomHealthbarStyle; // offset 0xCDC, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xCE0, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xCE4, size 0x4, align 4
    float32 m_flBaseAttackTime; // offset 0xCE8, size 0x4, align 4
    int32 m_iUnitNameIndex; // offset 0xCEC, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0xCF0, size 0x4, align 4
    int32 m_iHealthBarOffset; // offset 0xCF4, size 0x4, align 4
    Color m_iHealthBarHighlightColor; // offset 0xCF8, size 0x4, align 4
    float32 m_flMana; // offset 0xCFC, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xD00, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xD04, size 0x4, align 4
    int32 m_iBKBChargesUsed; // offset 0xD08, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xD0C, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xD10, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xD14, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xD18, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xD1C, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xD20, size 0x4, align 4
    bool m_bIsIllusion; // offset 0xD24, size 0x1, align 1
    bool m_bHasClientSeenIllusionModifier; // offset 0xD25, size 0x1, align 1
    char _pad_0D26[0x2]; // offset 0xD26
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecAbilities; // offset 0xD28, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecAbilitiesClientPrediction; // offset 0xD40, size 0x18, align 8
    int32 m_nLocalAbilityBarSequenceNumber; // offset 0xD58, size 0x4, align 4
    float32 m_flInvisibilityLevel; // offset 0xD5C, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xD60, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xD64, size 0x4, align 4
    float32 m_flRingRadius; // offset 0xD68, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xD6C, size 0x4, align 4
    CUtlSymbolLarge m_iszUnitName; // offset 0xD70, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitNameIconOverride; // offset 0xD78, size 0x8, align 8
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xD80, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xD88, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xD90, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xD98, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xDA0, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceBackgroundSound; // offset 0xDA8, size 0x8, align 8
    CUtlSymbolLarge m_iszIdleSoundLoop; // offset 0xDB0, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0xDB8, size 0x8, align 8
    CUtlString m_szScaleset; // offset 0xDC0, size 0x8, align 8
    uint8 m_nUnitLabelIndex; // offset 0xDC8, size 0x1, align 1
    char _pad_0DC9[0x7]; // offset 0xDC9
    CUtlString m_strAnimationModifier; // offset 0xDD0, size 0x8, align 8
    CUtlString m_TerrainSpecificFootstepEffect; // offset 0xDD8, size 0x8, align 8
    bool m_bUseCustomTerrainWeatherEffect; // offset 0xDE0, size 0x1, align 1
    bool m_bHasClientSoundReplacement; // offset 0xDE1, size 0x1, align 1
    bool m_bHasClientReplacementParticle; // offset 0xDE2, size 0x1, align 1
    char _pad_0DE3[0x15]; // offset 0xDE3
    bool m_bResourcesLoaded; // offset 0xDF8, size 0x1, align 1
    char _pad_0DF9[0x3]; // offset 0xDF9
    GameTime_t m_flTauntCooldown; // offset 0xDFC, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xE00, size 0x4, align 255
    DOTA_SHOP_TYPE m_iCurShop; // offset 0xE04, size 0x4, align 4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0xE08, size 0x8, align 8
    int32 m_iDayTimeVisionRange; // offset 0xE10, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xE14, size 0x4, align 4
    int32 m_iDamageMin; // offset 0xE18, size 0x4, align 4
    int32 m_iDamageMax; // offset 0xE1C, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0xE20, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xE24, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xE28, size 0x4, align 4
    char _pad_0E2C[0x4]; // offset 0xE2C
    CDOTA_ModifierManager m_ModifierManager; // offset 0xE30, size 0x390, align 255
    C_DOTA_UnitInventory m_Inventory; // offset 0x11C0, size 0xF0, align 255
    char _pad_12B0[0x8]; // offset 0x12B0
    uint64 m_nUnitState64; // offset 0x12B8, size 0x8, align 8
    char _pad_12C0[0x8]; // offset 0x12C0
    uint64 m_nUnitDebuffState; // offset 0x12C8, size 0x8, align 8
    bool m_bHasInventory; // offset 0x12D0, size 0x1, align 1
    char _pad_12D1[0x3]; // offset 0x12D1
    int32 m_iAcquisitionRange; // offset 0x12D4, size 0x4, align 4
    int32 m_FoWViewID; // offset 0x12D8, size 0x4, align 4
    int32 m_iTeamViewerID; // offset 0x12DC, size 0x4, align 4
    int32 m_iPrevHealthPct; // offset 0x12E0, size 0x4, align 4
    int32 m_iPrevLifeState; // offset 0x12E4, size 0x4, align 4
    int32 m_iPrevTeam; // offset 0x12E8, size 0x4, align 4
    bool m_bLastShardState; // offset 0x12EC, size 0x1, align 1
    bool m_bLastScepterState; // offset 0x12ED, size 0x1, align 1
    bool m_bForceScepterState; // offset 0x12EE, size 0x1, align 1
    bool m_bForceShardState; // offset 0x12EF, size 0x1, align 1
    bool m_bPrevProvidesVision; // offset 0x12F0, size 0x1, align 1
    char _pad_12F1[0x7]; // offset 0x12F1
    uint64 m_nPrevControllableMask; // offset 0x12F8, size 0x8, align 8
    char _pad_1300[0x8]; // offset 0x1300
    CountdownTimer m_TagTime; // offset 0x1308, size 0x18, align 8
    CountdownTimer m_ClickedTime; // offset 0x1320, size 0x18, align 8
    GameTime_t[2] m_flIdleRunPoseStartTime; // offset 0x1338, size 0x8, align 4
    float32[2] m_flIdleRunPoseDuration; // offset 0x1340, size 0x8, align 4
    bool m_bAnimationTransitionActive; // offset 0x1348, size 0x1, align 1
    char _pad_1349[0x3]; // offset 0x1349
    int32[2] m_nAnimationTransitionPoseParameters; // offset 0x134C, size 0x8, align 4
    int32[2] m_nAnimationTransitionInjuredPoseParameters; // offset 0x1354, size 0x8, align 4
    int32[2] m_nAnimationTransitionAggressivePoseParameters; // offset 0x135C, size 0x8, align 4
    char _pad_1364[0x4C]; // offset 0x1364
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x13B0, size 0x4, align 255
    int32 m_iAttackCapabilities; // offset 0x13B4, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x13B8, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x13BC, size 0x4, align 4
    PlayerID_t m_nPlayerOwnerID; // offset 0x13C0, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x13C4, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x13C8, size 0x4, align 255
    char _pad_13CC[0x4]; // offset 0x13CC
    CUtlSymbolLarge m_iszMinimapIcon; // offset 0x13D0, size 0x8, align 8
    char _pad_13D8[0x8]; // offset 0x13D8
    float32 m_flMinimapIconSize; // offset 0x13E0, size 0x4, align 4
    bool m_bMinimapDisableTint; // offset 0x13E4, size 0x1, align 1
    bool m_bMinimapDisableRotation; // offset 0x13E5, size 0x1, align 1
    char _pad_13E6[0x2]; // offset 0x13E6
    Color m_colorHeroGlow; // offset 0x13E8, size 0x4, align 4
    int32 m_iNearShopMask; // offset 0x13EC, size 0x4, align 4
    int32 m_nPoseParameterTurn; // offset 0x13F0, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x13F4, size 0x4, align 4
    float32 m_flLean; // offset 0x13F8, size 0x4, align 4
    float32 m_flRun; // offset 0x13FC, size 0x4, align 4
    int32 m_anglediff; // offset 0x1400, size 0x4, align 4
    bool m_bInfoKeyActive; // offset 0x1404, size 0x1, align 1
    bool m_bNewUpdateAssetModifiersNetworked; // offset 0x1405, size 0x1, align 1
    char _pad_1406[0x2]; // offset 0x1406
    GameTick_t m_nAssetModifiersLastUpdatedTick; // offset 0x1408, size 0x4, align 255
    bool m_bSuppressGlow; // offset 0x140C, size 0x1, align 1
    bool m_bWasSinking; // offset 0x140D, size 0x1, align 1
    char _pad_140E[0x2]; // offset 0x140E
    float32 m_flRangeDisplayDist; // offset 0x1410, size 0x4, align 4
    char _pad_1414[0x1E4]; // offset 0x1414
    CUtlSymbolLarge m_szDefaultIdle; // offset 0x15F8, size 0x8, align 8
    CUtlSymbolLarge m_szDefaultRareIdle; // offset 0x1600, size 0x8, align 8
    CountdownTimer m_damagetimer; // offset 0x1608, size 0x18, align 8
    float32 m_fZDelta; // offset 0x1620, size 0x4, align 4
    GameTime_t m_flDeathTime; // offset 0x1624, size 0x4, align 255
    bool m_bBaseStatsChanged; // offset 0x1628, size 0x1, align 1
    bool m_bNeedsSoundEmitterRefresh; // offset 0x1629, size 0x1, align 1
    char _pad_162A[0x2]; // offset 0x162A
    float32 m_flPhysicalArmorValue; // offset 0x162C, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x1630, size 0x4, align 4
    int32 m_nPrevSequenceParity; // offset 0x1634, size 0x4, align 4
    char _pad_1638[0xA0]; // offset 0x1638
    float32 m_flPrevInvisLevel; // offset 0x16D8, size 0x4, align 4
    char _pad_16DC[0x4]; // offset 0x16DC
    CStrongHandle< InfoForResourceTypeCModel > m_nOriginalModelIndex; // offset 0x16E0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientOriginalModelIndex; // offset 0x16E8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCModel > m_nClientReplacementModelIndex; // offset 0x16F0, size 0x8, align 8
    bool m_bClientReplacementModelNeedsRebuild; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x3]; // offset 0x16F9
    int32 m_nClientReplacementModelReloadCount; // offset 0x16FC, size 0x4, align 4
    int8 m_nUnitModelVariant; // offset 0x1700, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1701, size 0x1, align 1
    char _pad_1702[0x2]; // offset 0x1702
    int32 m_iPrevSequence; // offset 0x1704, size 0x4, align 4
    char* m_pLastWeatherEffectName; // offset 0x1708, size 0x8, align 8
    char _pad_1710[0x8]; // offset 0x1710
    CountdownTimer m_VoiceBackgroundSoundTimer; // offset 0x1718, size 0x18, align 8
    bool m_bIsWaitingToSpawn; // offset 0x1730, size 0x1, align 1
    char _pad_1731[0x7]; // offset 0x1731
    int64 m_nTotalDamageTaken; // offset 0x1738, size 0x8, align 8
    float32 m_flManaRegen; // offset 0x1740, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0x1744, size 0x4, align 4
    bool m_bIsMoving; // offset 0x1748, size 0x1, align 1
    char _pad_1749[0x3]; // offset 0x1749
    float32 m_fRevealRadius; // offset 0x174C, size 0x4, align 4
    bool m_bCanUseWards; // offset 0x1750, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0x1751, size 0x1, align 1
    char _pad_1752[0x2]; // offset 0x1752
    int32 m_iXPBounty; // offset 0x1754, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x1758, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x175C, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x1760, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x1764, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGoalEntity; // offset 0x1768, size 0x4, align 4
    CHandle< C_DOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0x176C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hClientOverrideMaterial; // offset 0x1770, size 0x8, align 8
    bool m_bCombinerMaterialOverrideListChanged; // offset 0x1778, size 0x1, align 1
    char _pad_1779[0x3]; // offset 0x1779
    int32 m_nBaseModelMeshCount; // offset 0x177C, size 0x4, align 4
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > > m_combinerMaterialOverrideList; // offset 0x1780, size 0x18, align 8
    int8 m_nArcanaLevel; // offset 0x1798, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1799, size 0x1, align 1
    char _pad_179A[0x2]; // offset 0x179A
    Color m_defaultColorGemColor; // offset 0x179C, size 0x4, align 4
    char _pad_17A0[0x18]; // offset 0x17A0
    bool m_bHasBuiltWearableSpawnList; // offset 0x17B8, size 0x1, align 1
    bool m_bHasCostume; // offset 0x17B9, size 0x1, align 1
    bool m_bRecreateParticleSystemsOnModifiersChange; // offset 0x17BA, size 0x1, align 1
    bool m_bWasRevealedFromFOWAsDead; // offset 0x17BB, size 0x1, align 1
    GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // offset 0x17BC, size 0x4, align 255
    char _pad_17C0[0x14]; // offset 0x17C0
    float32 m_flAdditionalSinkDelay; // offset 0x17D4, size 0x4, align 4
    char _pad_17D8[0x28]; // offset 0x17D8
    uint32 m_nScepterUpgradeID; // offset 0x1800, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x1804, size 0x4, align 4
    char _pad_1808[0xE0]; // offset 0x1808
    int32 m_NetworkActivity; // offset 0x18E8, size 0x4, align 4
    int32 m_PrevNetworkActivity; // offset 0x18EC, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x18F0, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x18F4, size 0x1, align 1
    char _pad_18F5[0x3]; // offset 0x18F5
    float32 m_flStartSequenceCycle; // offset 0x18F8, size 0x4, align 4
    char _pad_18FC[0x4]; // offset 0x18FC
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1900, size 0x18, align 8
    CHandle< C_SceneEntity > m_hBackgroundSceneEnt; // offset 0x1918, size 0x4, align 4
    CHandle< C_SceneEntity > m_hSpeakingSceneEnt; // offset 0x191C, size 0x4, align 4
    char _pad_1920[0x10]; // offset 0x1920
    CUtlVector< CHandle< C_EconWearable > > m_hOldWearables; // offset 0x1930, size 0x18, align 8
    CUtlVector< CUtlStringToken > m_hOldWearableSkins; // offset 0x1948, size 0x18, align 8
    char[256] m_CustomHealthLabel; // offset 0x1960, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1A60, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    item_definition_index_t m_nWearableDefIndex; // offset 0x1A68, size 0x4, align 255
    char _pad_1A6C[0x4]; // offset 0x1A6C
    Color m_gibTintColor; // offset 0x1A70, size 0x4, align 4
    bool m_bForceMaterialCombine; // offset 0x1A74, size 0x1, align 1
    bool m_bShouldDrawParticlesWhileHidden; // offset 0x1A75, size 0x1, align 1
    bool m_bIsClientThinkPending; // offset 0x1A76, size 0x1, align 1
    bool m_bActivityModifiersDirty; // offset 0x1A77, size 0x1, align 1
    bool m_bUnitModelVariantChanged; // offset 0x1A78, size 0x1, align 1
    bool m_bWearablesAreTaunting; // offset 0x1A79, size 0x1, align 1
    bool m_bWearablesLoadoutOverride; // offset 0x1A7A, size 0x1, align 1
    char _pad_1A7B[0x15]; // offset 0x1A7B
    bool m_bShowCannotBeDisabledIcon; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x1F]; // offset 0x1A91
    int32 m_nVisionPreviewViewer; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
