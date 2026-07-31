#pragma once

class CDOTA_BaseNPC : public NextBotCombatCharacter /*0x0*/  // sizeof 0x1B88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    bool m_bPledgedOfrenda; // offset 0xBF0, size 0x1, align 1
    char _pad_0BF1[0x3]; // offset 0xBF1
    uint32 m_iUnitType; // offset 0xBF4, size 0x4, align 4
    Color m_colorGemColor; // offset 0xBF8, size 0x4, align 1
    bool m_bHasColorGem; // offset 0xBFC, size 0x1, align 1
    bool m_bSelectionRingVisible; // offset 0xBFD, size 0x1, align 1
    char _pad_0BFE[0xA]; // offset 0xBFE
    CUtlSymbolLarge m_iszBaseClass; // offset 0xC08, size 0x8, align 8
    int32 m_iStartingMaxHealth; // offset 0xC10, size 0x4, align 4
    int32 m_iStartingMaxMana; // offset 0xC14, size 0x4, align 4
    int32 m_iStartingMana; // offset 0xC18, size 0x4, align 4
    int32 m_iCurrentLevel; // offset 0xC1C, size 0x4, align 4
    float32 m_flMana; // offset 0xC20, size 0x4, align 4
    float32 m_flBaseMaxMana; // offset 0xC24, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xC28, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xC2C, size 0x4, align 4
    float32 m_flBaseMaxHealth; // offset 0xC30, size 0x4, align 4
    float32 m_flHealthThinkRegen; // offset 0xC34, size 0x4, align 4
    int32 m_nHealthBarOffsetOverride; // offset 0xC38, size 0x4, align 4
    int32 m_nHealthBarOffset; // offset 0xC3C, size 0x4, align 4
    bool m_bIsPhantom; // offset 0xC40, size 0x1, align 1
    bool m_bIsAncient; // offset 0xC41, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xC42, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xC43, size 0x1, align 1
    bool m_bAutoAttacksByDefault; // offset 0xC44, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xC45, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xC46, size 0x1, align 1
    bool m_bCanRespawn; // offset 0xC47, size 0x1, align 1
    bool m_bIsClone; // offset 0xC48, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xC49, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xC4A, size 0x1, align 1
    bool m_bIsPlayingSingleForcedActivity; // offset 0xC4B, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xC4C, size 0x1, align 1
    char _pad_0C4D[0x3]; // offset 0xC4D
    int32 m_iBKBChargesUsed; // offset 0xC50, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xC54, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xC58, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xC5C, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xC60, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xC64, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xC68, size 0x4, align 4
    bool m_bIsMoving; // offset 0xC6C, size 0x1, align 1
    char _pad_0C6D[0x1BB]; // offset 0xC6D
    float32 m_flChannelMultiplier; // offset 0xE28, size 0x4, align 4
    bool m_bCanUseWards; // offset 0xE2C, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0xE2D, size 0x1, align 1
    char _pad_0E2E[0x2]; // offset 0xE2E
    PlayerID_t m_iLastAbilityPlayer; // offset 0xE30, size 0x4, align 255
    bool m_bIsPhantomBlocker; // offset 0xE34, size 0x1, align 1
    bool m_bBlocksCreepSpawn; // offset 0xE35, size 0x1, align 1
    bool m_bCanSellItems; // offset 0xE36, size 0x1, align 1
    char _pad_0E37[0x1]; // offset 0xE37
    CHandle< CDOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0xE38, size 0x4, align 4
    bool m_bTrackDamageTaken; // offset 0xE3C, size 0x1, align 1
    char _pad_0E3D[0x3]; // offset 0xE3D
    GameTick_t m_nNextRegenThink; // offset 0xE40, size 0x4, align 255
    GameTick_t m_nNextModifierThink; // offset 0xE44, size 0x4, align 255
    GameTick_t m_nNextModelScaleThink; // offset 0xE48, size 0x4, align 255
    GameTick_t m_nNextUnitThink; // offset 0xE4C, size 0x4, align 255
    float32 m_flManaRegen; // offset 0xE50, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0xE54, size 0x4, align 4
    int64 m_nTotalDamageTaken; // offset 0xE58, size 0x8, align 8
    float32 m_flHealthRegenCounter; // offset 0xE60, size 0x4, align 4
    float32 m_flManaRegenCounter; // offset 0xE64, size 0x4, align 4
    float32 m_flAccumulatedHeal; // offset 0xE68, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xE6C, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xE70, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xE74, size 0x4, align 4
    int32 m_iAttackRange; // offset 0xE78, size 0x4, align 4
    int32 m_iAttackRangeBuffer; // offset 0xE7C, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xE80, size 0x4, align 4
    float32 m_flTurnRate; // offset 0xE84, size 0x4, align 4
    int32 m_iHasAggressiveStance; // offset 0xE88, size 0x4, align 4
    bool m_bInAggressiveStance; // offset 0xE8C, size 0x1, align 1
    bool m_bInInjuredAggressiveStance; // offset 0xE8D, size 0x1, align 1
    char _pad_0E8E[0x2]; // offset 0xE8E
    float32 m_flFollowRange; // offset 0xE90, size 0x4, align 4
    int32 m_iAcquisitionRange; // offset 0xE94, size 0x4, align 4
    float32 m_flAttackAnimationPoint; // offset 0xE98, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xE9C, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xEA0, size 0x4, align 4
    GameTime_t m_flTauntCooldown; // offset 0xEA4, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xEA8, size 0x4, align 255
    float32 m_fRevealRadius; // offset 0xEAC, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xEB0, size 0x4, align 4
    ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // offset 0xEB4, size 0x4, align 4
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xEB8, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xEC0, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xEC8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xED0, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xED8, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimationModifier; // offset 0xEE0, size 0x8, align 8
    char _pad_0EE8[0x8]; // offset 0xEE8
    float32 m_flBaseAttackTime; // offset 0xEF0, size 0x4, align 4
    int32 m_iDayTimeVisionRange; // offset 0xEF4, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xEF8, size 0x4, align 4
    float32 m_fBotAttackDesire; // offset 0xEFC, size 0x4, align 4
    int32 m_iUnitRelationshipClass; // offset 0xF00, size 0x4, align 4
    float32 m_flPhysicalArmorValue; // offset 0xF04, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0xF08, size 0x4, align 4
    int32 m_iTeamName; // offset 0xF0C, size 0x4, align 4
    int32 m_iAttackCapabilities; // offset 0xF10, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0xF14, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0xF18, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0xF1C, size 0x4, align 4
    int32 m_iXPBounty; // offset 0xF20, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0xF24, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0xF28, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0xF2C, size 0x4, align 4
    PlayerID_t m_nFarmClaimPlayerID; // offset 0xF30, size 0x4, align 255
    PlayerID_t m_nPlayerOwnerID; // offset 0xF34, size 0x4, align 255
    CUtlSymbolLarge[40] m_iszAbilityList; // offset 0xF38, size 0x140, align 8
    int32 m_iAttackDamageType; // offset 0x1078, size 0x4, align 4
    bool m_bIsIdle; // offset 0x107C, size 0x1, align 1
    bool m_bHold; // offset 0x107D, size 0x1, align 1
    bool m_bWasKilledPassively; // offset 0x107E, size 0x1, align 1
    char _pad_107F[0x1]; // offset 0x107F
    CountdownTimer m_AngerTimer; // offset 0x1080, size 0x18, align 8
    CountdownTimer m_AlertTimer; // offset 0x1098, size 0x18, align 8
    CHandle< CBaseEntity > m_hAngerTarget; // offset 0x10B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hAlertTarget; // offset 0x10B4, size 0x4, align 4
    CHandle< CBaseEntity > m_hForceAttackTarget; // offset 0x10B8, size 0x4, align 4
    bool m_bAllowAllyForceAttack; // offset 0x10BC, size 0x1, align 1
    char _pad_10BD[0x3]; // offset 0x10BD
    VectorWS m_vTargetLastKnownPosition; // offset 0x10C0, size 0xC, align 4
    char _pad_10CC[0x1C]; // offset 0x10CC
    GameTime_t m_flLastDamageTime; // offset 0x10E8, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x10EC, size 0x4, align 255
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x10F0, size 0x4, align 255
    GameTime_t m_flLastTeleportTime; // offset 0x10F4, size 0x4, align 255
    uint64 m_nUnitState64; // offset 0x10F8, size 0x8, align 8
    GameTime_t[15] m_vLastVisibilityChange; // offset 0x1100, size 0x3C, align 4
    char _pad_113C[0x24]; // offset 0x113C
    bool m_bFirstSpawn; // offset 0x1160, size 0x1, align 1
    char _pad_1161[0x3]; // offset 0x1161
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x1164, size 0x4, align 4
    CHandle< CBaseEntity > m_hAggroTarget; // offset 0x1168, size 0x4, align 4
    CHandle< CBaseEntity > m_hCommandAttackTarget; // offset 0x116C, size 0x4, align 4
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x1170, size 0x8, align 8
    int8 m_nUnitModelVariant; // offset 0x1178, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1179, size 0x1, align 1
    bool m_bPseudoQueueOrders; // offset 0x117A, size 0x1, align 1
    bool m_bCastLocked; // offset 0x117B, size 0x1, align 1
    char _pad_117C[0x1C]; // offset 0x117C
    GameTime_t m_flAttackRegulator; // offset 0x1198, size 0x4, align 255
    float32 m_flTimeDisparityTolerance; // offset 0x119C, size 0x4, align 4
    GameTime_t m_fAttackPhaseEndTime; // offset 0x11A0, size 0x4, align 255
    GameTime_t m_flPositionUpdateTime; // offset 0x11A4, size 0x4, align 255
    VectorWS m_vLastPositionSent; // offset 0x11A8, size 0xC, align 4
    int32 m_iTaggedAsVisibleByTeam; // offset 0x11B4, size 0x4, align 4
    uint64 m_iIsControllableByPlayer64; // offset 0x11B8, size 0x8, align 8
    PlayerID_t m_nControllingPlayerID; // offset 0x11C0, size 0x4, align 255
    bool m_bControllableByAllPlayers; // offset 0x11C4, size 0x1, align 1
    bool m_bRunAIWhenControllableByPlayer; // offset 0x11C5, size 0x1, align 1
    char _pad_11C6[0x2]; // offset 0x11C6
    CUtlSymbolLarge m_iszUnitToAbilityMapping; // offset 0x11C8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecAbilities; // offset 0x11D0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_associatedEmptyAbilities; // offset 0x11E8, size 0x18, align 8
    CHandle< CBaseEntity > m_hActiveAbility; // offset 0x1200, size 0x4, align 4
    VectorWS m_vCursorLocation; // offset 0x1204, size 0xC, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x1210, size 0x4, align 4
    CHandle< CBaseEntity > m_hOriginalCursorTarget; // offset 0x1214, size 0x4, align 4
    bool m_bCursorTargetingNothing; // offset 0x1218, size 0x1, align 1
    char _pad_1219[0x7]; // offset 0x1219
    CDOTA_ModifierManager m_ModifierManager; // offset 0x1220, size 0x390, align 255
    char _pad_15B0[0x8]; // offset 0x15B0
    float32 m_flInvisibilityLevel; // offset 0x15B8, size 0x4, align 4
    char _pad_15BC[0x4]; // offset 0x15BC
    CUtlSymbolLarge m_iszMapUnitName; // offset 0x15C0, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitName; // offset 0x15C8, size 0x8, align 8
    int32 m_iUnitNameIndex; // offset 0x15D0, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x15D4, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x15D8, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x15DC, size 0x4, align 4
    bool m_bIsWaitingToSpawn; // offset 0x15E0, size 0x1, align 1
    char _pad_15E1[0x3]; // offset 0x15E1
    int32 m_iLeashType; // offset 0x15E4, size 0x4, align 4
    int32 m_iAggroType; // offset 0x15E8, size 0x4, align 4
    bool m_bCreepIgnoreAggro; // offset 0x15EC, size 0x1, align 1
    bool m_bCreepFirstWave; // offset 0x15ED, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x15EE, size 0x1, align 1
    uint8 m_nUnitLabelIndex; // offset 0x15EF, size 0x1, align 1
    CUtlString m_szScaleset; // offset 0x15F0, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0x15F8, size 0x8, align 8
    CUtlString m_strAnimationModifier; // offset 0x1600, size 0x8, align 8
    char _pad_1608[0x8]; // offset 0x1608
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1610, size 0x4, align 4
    char _pad_1614[0x4]; // offset 0x1614
    CLocomotionBase* m_locomotor; // offset 0x1618, size 0x8, align 8
    INextBotBody* m_body; // offset 0x1620, size 0x8, align 8
    bool m_bNeverMoveToClearSpace; // offset 0x1628, size 0x1, align 1
    char _pad_1629[0x3]; // offset 0x1629
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x162C, size 0x4, align 4
    bool m_bMustReachEachGoalEntity; // offset 0x1630, size 0x1, align 1
    char _pad_1631[0x3]; // offset 0x1631
    VectorWS m_vInitialGoalPosition; // offset 0x1634, size 0xC, align 4
    char _pad_1640[0x18]; // offset 0x1640
    CUnitOrders m_CurrentQueuedOrder; // offset 0x1658, size 0x40, align 255
    char _pad_1698[0x18]; // offset 0x1698
    CDOTA_UnitInventory m_Inventory; // offset 0x16B0, size 0xF8, align 255
    CHandle< CBaseEntity > m_hItemToDrop; // offset 0x17A8, size 0x4, align 4
    DOTA_SHOP_TYPE m_iCurShop; // offset 0x17AC, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastNearShop; // offset 0x17B0, size 0x4, align 4
    char _pad_17B4[0x4]; // offset 0x17B4
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x17B8, size 0x8, align 8
    bool m_bHasInventory; // offset 0x17C0, size 0x1, align 1
    char _pad_17C1[0x3]; // offset 0x17C1
    float32 m_flBaselineModelScale; // offset 0x17C4, size 0x4, align 4
    float32 m_fModelScaleMultiplier; // offset 0x17C8, size 0x4, align 4
    float32 m_fModelScaleMultiplierChangeStart; // offset 0x17CC, size 0x4, align 4
    GameTime_t m_fModelScaleMultiplierChangeTime; // offset 0x17D0, size 0x4, align 255
    float32 m_flPreviousModelScale; // offset 0x17D4, size 0x4, align 4
    float32 m_fMaxModelScaleMultiplier; // offset 0x17D8, size 0x4, align 4
    bool m_bIsCamped; // offset 0x17DC, size 0x1, align 1
    bool m_bIsReturningHome; // offset 0x17DD, size 0x1, align 1
    bool m_bIgnoreHome; // offset 0x17DE, size 0x1, align 1
    bool m_bWantsToFlee; // offset 0x17DF, size 0x1, align 1
    bool m_bWakesNeutrals; // offset 0x17E0, size 0x1, align 1
    bool m_bNeutralIgnore; // offset 0x17E1, size 0x1, align 1
    bool m_bIdleAcquire; // offset 0x17E2, size 0x1, align 1
    bool m_bIdleAcquireForceSet; // offset 0x17E3, size 0x1, align 1
    bool m_bCanFollowUnseenUnits; // offset 0x17E4, size 0x1, align 1
    bool m_bExpired; // offset 0x17E5, size 0x1, align 1
    char _pad_17E6[0x2]; // offset 0x17E6
    VectorWS m_vCurrentMovementOrderDestination; // offset 0x17E8, size 0xC, align 4
    VectorWS m_vPreviousMovementOrderDestination; // offset 0x17F4, size 0xC, align 4
    VectorWS m_vResumePreviousMovementRequestLocation; // offset 0x1800, size 0xC, align 4
    bool m_bCurrentOrderIsMovement; // offset 0x180C, size 0x1, align 1
    bool m_bPreviousOrderIsMovement; // offset 0x180D, size 0x1, align 1
    bool m_bResumePreviousMovement; // offset 0x180E, size 0x1, align 1
    bool m_bIsPatrolling; // offset 0x180F, size 0x1, align 1
    GameTime_t m_flCreationTime; // offset 0x1810, size 0x4, align 255
    bool m_bTargetMovedOutOfRange; // offset 0x1814, size 0x1, align 1
    bool m_bChaseTargetMoves; // offset 0x1815, size 0x1, align 1
    char _pad_1816[0x2]; // offset 0x1816
    float32 m_flChaseDistance; // offset 0x1818, size 0x4, align 4
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x181C, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1820, size 0x18, align 8
    bool m_bActivityModifiersDirty; // offset 0x1838, size 0x1, align 1
    char _pad_1839[0x7]; // offset 0x1839
    CUtlVector< CUtlSymbol > m_ActivityModifiersFromScript; // offset 0x1840, size 0x18, align 8
    GameTime_t m_flBlinkDaggerTime; // offset 0x1858, size 0x4, align 255
    float32 m_flAdditionalBattleMusicWeight; // offset 0x185C, size 0x4, align 4
    bool m_bStolenScepter; // offset 0x1860, size 0x1, align 1
    bool m_bHasScepterCached; // offset 0x1861, size 0x1, align 1
    bool m_bHasShardCached; // offset 0x1862, size 0x1, align 1
    bool m_bHasForbiddenTomeCached; // offset 0x1863, size 0x1, align 1
    char _pad_1864[0x4]; // offset 0x1864
    CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // offset 0x1868, size 0x20, align 255
    char _pad_1888[0x20]; // offset 0x1888
    GameTime_t m_flCritBashFailUntil; // offset 0x18A8, size 0x4, align 255
    float32 m_flAttackTimeLostToLastTick; // offset 0x18AC, size 0x4, align 4
    float32 m_flAttackTimeAtLastTick; // offset 0x18B0, size 0x4, align 4
    float32 m_flCompanionDistance; // offset 0x18B4, size 0x4, align 4
    bool m_bIsPartyCompanion; // offset 0x18B8, size 0x1, align 1
    bool m_bCanPartyCompanionAttack; // offset 0x18B9, size 0x1, align 1
    char _pad_18BA[0x2]; // offset 0x18BA
    CHandle< CBaseEntity > m_CompanionEntity; // offset 0x18BC, size 0x4, align 4
    bool m_bFacePlayer; // offset 0x18C0, size 0x1, align 1
    char _pad_18C1[0x3]; // offset 0x18C1
    GameTime_t m_flLastIdleChangeTime; // offset 0x18C4, size 0x4, align 255
    bool m_bUseNeutralCreepBehavior; // offset 0x18C8, size 0x1, align 1
    char _pad_18C9[0x27]; // offset 0x18C9
    bool m_bHasBuiltWearableSpawnList; // offset 0x18F0, size 0x1, align 1
    char _pad_18F1[0x3]; // offset 0x18F1
    GameTick_t[15] m_nFoWFadeStartTime; // offset 0x18F4, size 0x3C, align 4
    int32 m_nFOWVisibilityRadius; // offset 0x1930, size 0x4, align 4
    VectorWS m_vFOWOriginOverride; // offset 0x1934, size 0xC, align 4
    int32 m_iTeamViewerID; // offset 0x1940, size 0x4, align 4
    int32 m_nAttackHeightBonus; // offset 0x1944, size 0x4, align 4
    uint32 m_nScepterUpgradeID; // offset 0x1948, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x194C, size 0x4, align 4
    CUtlString m_strLastKillerAbility; // offset 0x1950, size 0x8, align 8
    int32 m_anglediff; // offset 0x1958, size 0x4, align 4
    int32 m_NetworkActivity; // offset 0x195C, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1960, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x1964, size 0x1, align 1
    char _pad_1965[0x3]; // offset 0x1965
    float32 m_flStartSequenceCycle; // offset 0x1968, size 0x4, align 4
    bool m_bMidLoading; // offset 0x196C, size 0x1, align 1
    char _pad_196D[0x3]; // offset 0x196D
    CHandle< CDOTA_ScriptedSpawner > m_hTutorialSpawner; // offset 0x1970, size 0x4, align 4
    char _pad_1974[0x4]; // offset 0x1974
    CountdownTimer m_AngerCooldownTimer; // offset 0x1978, size 0x18, align 8
    int32 m_iProjectileMoveSpeed; // offset 0x1990, size 0x4, align 4
    char _pad_1994[0x4]; // offset 0x1994
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0x1998, size 0x8, align 8
    int32 m_nPoseParameterTurn; // offset 0x19A0, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x19A4, size 0x4, align 4
    float32 m_flLean; // offset 0x19A8, size 0x4, align 4
    float32 m_flRun; // offset 0x19AC, size 0x4, align 4
    char[256] m_CustomHealthLabel; // offset 0x19B0, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1AB0, size 0x4, align 1
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    item_definition_index_t m_nWearableDefIndex; // offset 0x1AB8, size 0x4, align 255
    int8 m_nArcanaLevel; // offset 0x1ABC, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1ABD, size 0x1, align 1
    Color m_defaultColorGemColor; // offset 0x1ABE, size 0x4, align 1
    bool m_bDisableDamageDisplay; // offset 0x1AC2, size 0x1, align 1
    char _pad_1AC3[0x1]; // offset 0x1AC3
    Color m_gibTintColor; // offset 0x1AC4, size 0x4, align 1
    float32 m_flPathfindingSearchDepthScale; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
    CUtlVector< int32 > m_ActivitiesStarted; // offset 0x1AD0, size 0x18, align 8
    CHandle< CBaseEntity > m_hIllusionOriginal; // offset 0x1AE8, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDirectionalRangedFakeTarget; // offset 0x1AEC, size 0x4, align 4
    char _pad_1AF0[0x28]; // offset 0x1AF0
    bool m_bShouldComputeRemainingPathLength; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    float32 m_flRemainingPathLength; // offset 0x1B1C, size 0x4, align 4
    char _pad_1B20[0x28]; // offset 0x1B20
    CUtlVector< CHandle< CBaseEntity > > m_AbilitiesPendingDelete; // offset 0x1B48, size 0x18, align 8
    float32 m_flPrevHealthThinkRegen; // offset 0x1B60, size 0x4, align 4
    GameTime_t m_prevRegenChangeTime; // offset 0x1B64, size 0x4, align 255
    float32 m_flAccumulatedHealthRegenSinceLastLogged; // offset 0x1B68, size 0x4, align 4
    char _pad_1B6C[0x1C]; // offset 0x1B6C
};
