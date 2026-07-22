#pragma once

class CDOTA_BaseNPC : public NextBotCombatCharacter /*0x0*/  // sizeof 0x18A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x918]; // offset 0x0
    bool m_bPledgedOfrenda; // offset 0x918, size 0x1, align 1
    char _pad_0919[0x3]; // offset 0x919
    uint32 m_iUnitType; // offset 0x91C, size 0x4, align 4
    Color m_colorGemColor; // offset 0x920, size 0x4, align 1
    bool m_bHasColorGem; // offset 0x924, size 0x1, align 1
    bool m_bSelectionRingVisible; // offset 0x925, size 0x1, align 1
    char _pad_0926[0xA]; // offset 0x926
    CUtlSymbolLarge m_iszBaseClass; // offset 0x930, size 0x8, align 8
    int32 m_iStartingMaxHealth; // offset 0x938, size 0x4, align 4
    int32 m_iStartingMaxMana; // offset 0x93C, size 0x4, align 4
    int32 m_iStartingMana; // offset 0x940, size 0x4, align 4
    int32 m_iCurrentLevel; // offset 0x944, size 0x4, align 4
    float32 m_flMana; // offset 0x948, size 0x4, align 4
    float32 m_flBaseMaxMana; // offset 0x94C, size 0x4, align 4
    float32 m_flMaxMana; // offset 0x950, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0x954, size 0x4, align 4
    float32 m_flBaseMaxHealth; // offset 0x958, size 0x4, align 4
    float32 m_flHealthThinkRegen; // offset 0x95C, size 0x4, align 4
    int32 m_nHealthBarOffsetOverride; // offset 0x960, size 0x4, align 4
    int32 m_nHealthBarOffset; // offset 0x964, size 0x4, align 4
    bool m_bIsPhantom; // offset 0x968, size 0x1, align 1
    bool m_bIsAncient; // offset 0x969, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0x96A, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0x96B, size 0x1, align 1
    bool m_bAutoAttacksByDefault; // offset 0x96C, size 0x1, align 1
    bool m_bIsSummoned; // offset 0x96D, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0x96E, size 0x1, align 1
    bool m_bCanRespawn; // offset 0x96F, size 0x1, align 1
    bool m_bIsClone; // offset 0x970, size 0x1, align 1
    bool m_bConsideredHero; // offset 0x971, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0x972, size 0x1, align 1
    bool m_bIsPlayingSingleForcedActivity; // offset 0x973, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0x974, size 0x1, align 1
    char _pad_0975[0x3]; // offset 0x975
    int32 m_iBKBChargesUsed; // offset 0x978, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0x97C, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0x980, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0x984, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0x988, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0x98C, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0x990, size 0x4, align 4
    bool m_bIsMoving; // offset 0x994, size 0x1, align 1
    char _pad_0995[0x1BB]; // offset 0x995
    float32 m_flChannelMultiplier; // offset 0xB50, size 0x4, align 4
    bool m_bCanUseWards; // offset 0xB54, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0xB55, size 0x1, align 1
    char _pad_0B56[0x2]; // offset 0xB56
    PlayerID_t m_iLastAbilityPlayer; // offset 0xB58, size 0x4, align 255
    bool m_bIsPhantomBlocker; // offset 0xB5C, size 0x1, align 1
    bool m_bBlocksCreepSpawn; // offset 0xB5D, size 0x1, align 1
    bool m_bCanSellItems; // offset 0xB5E, size 0x1, align 1
    char _pad_0B5F[0x1]; // offset 0xB5F
    CHandle< CDOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0xB60, size 0x4, align 4
    bool m_bTrackDamageTaken; // offset 0xB64, size 0x1, align 1
    char _pad_0B65[0x3]; // offset 0xB65
    GameTick_t m_nNextRegenThink; // offset 0xB68, size 0x4, align 255
    GameTick_t m_nNextModifierThink; // offset 0xB6C, size 0x4, align 255
    GameTick_t m_nNextModelScaleThink; // offset 0xB70, size 0x4, align 255
    GameTick_t m_nNextUnitThink; // offset 0xB74, size 0x4, align 255
    float32 m_flManaRegen; // offset 0xB78, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0xB7C, size 0x4, align 4
    int64 m_nTotalDamageTaken; // offset 0xB80, size 0x8, align 8
    float32 m_flHealthRegenCounter; // offset 0xB88, size 0x4, align 4
    float32 m_flManaRegenCounter; // offset 0xB8C, size 0x4, align 4
    float32 m_flAccumulatedHeal; // offset 0xB90, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xB94, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xB98, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xB9C, size 0x4, align 4
    int32 m_iAttackRange; // offset 0xBA0, size 0x4, align 4
    int32 m_iAttackRangeBuffer; // offset 0xBA4, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xBA8, size 0x4, align 4
    float32 m_flTurnRate; // offset 0xBAC, size 0x4, align 4
    int32 m_iHasAggressiveStance; // offset 0xBB0, size 0x4, align 4
    bool m_bInAggressiveStance; // offset 0xBB4, size 0x1, align 1
    bool m_bInInjuredAggressiveStance; // offset 0xBB5, size 0x1, align 1
    char _pad_0BB6[0x2]; // offset 0xBB6
    float32 m_flFollowRange; // offset 0xBB8, size 0x4, align 4
    int32 m_iAcquisitionRange; // offset 0xBBC, size 0x4, align 4
    float32 m_flAttackAnimationPoint; // offset 0xBC0, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xBC4, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xBC8, size 0x4, align 4
    GameTime_t m_flTauntCooldown; // offset 0xBCC, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xBD0, size 0x4, align 255
    float32 m_fRevealRadius; // offset 0xBD4, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xBD8, size 0x4, align 4
    ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // offset 0xBDC, size 0x4, align 4
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xBE0, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xBE8, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xBF0, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xBF8, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xC00, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimationModifier; // offset 0xC08, size 0x8, align 8
    char _pad_0C10[0x8]; // offset 0xC10
    float32 m_flBaseAttackTime; // offset 0xC18, size 0x4, align 4
    int32 m_iDayTimeVisionRange; // offset 0xC1C, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xC20, size 0x4, align 4
    float32 m_fBotAttackDesire; // offset 0xC24, size 0x4, align 4
    int32 m_iUnitRelationshipClass; // offset 0xC28, size 0x4, align 4
    float32 m_flPhysicalArmorValue; // offset 0xC2C, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0xC30, size 0x4, align 4
    int32 m_iTeamName; // offset 0xC34, size 0x4, align 4
    int32 m_iAttackCapabilities; // offset 0xC38, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0xC3C, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0xC40, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0xC44, size 0x4, align 4
    int32 m_iXPBounty; // offset 0xC48, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0xC4C, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0xC50, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0xC54, size 0x4, align 4
    PlayerID_t m_nFarmClaimPlayerID; // offset 0xC58, size 0x4, align 255
    PlayerID_t m_nPlayerOwnerID; // offset 0xC5C, size 0x4, align 255
    CUtlSymbolLarge[40] m_iszAbilityList; // offset 0xC60, size 0x140, align 8
    int32 m_iAttackDamageType; // offset 0xDA0, size 0x4, align 4
    bool m_bIsIdle; // offset 0xDA4, size 0x1, align 1
    bool m_bHold; // offset 0xDA5, size 0x1, align 1
    bool m_bWasKilledPassively; // offset 0xDA6, size 0x1, align 1
    char _pad_0DA7[0x1]; // offset 0xDA7
    CountdownTimer m_AngerTimer; // offset 0xDA8, size 0x18, align 8
    CountdownTimer m_AlertTimer; // offset 0xDC0, size 0x18, align 8
    CHandle< CBaseEntity > m_hAngerTarget; // offset 0xDD8, size 0x4, align 4
    CHandle< CBaseEntity > m_hAlertTarget; // offset 0xDDC, size 0x4, align 4
    CHandle< CBaseEntity > m_hForceAttackTarget; // offset 0xDE0, size 0x4, align 4
    bool m_bAllowAllyForceAttack; // offset 0xDE4, size 0x1, align 1
    char _pad_0DE5[0x3]; // offset 0xDE5
    VectorWS m_vTargetLastKnownPosition; // offset 0xDE8, size 0xC, align 4
    char _pad_0DF4[0x1C]; // offset 0xDF4
    GameTime_t m_flLastDamageTime; // offset 0xE10, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0xE14, size 0x4, align 255
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0xE18, size 0x4, align 255
    GameTime_t m_flLastTeleportTime; // offset 0xE1C, size 0x4, align 255
    uint64 m_nUnitState64; // offset 0xE20, size 0x8, align 8
    GameTime_t[15] m_vLastVisibilityChange; // offset 0xE28, size 0x3C, align 4
    char _pad_0E64[0x1C]; // offset 0xE64
    bool m_bFirstSpawn; // offset 0xE80, size 0x1, align 1
    char _pad_0E81[0x3]; // offset 0xE81
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0xE84, size 0x4, align 4
    CHandle< CBaseEntity > m_hAggroTarget; // offset 0xE88, size 0x4, align 4
    CHandle< CBaseEntity > m_hCommandAttackTarget; // offset 0xE8C, size 0x4, align 4
    CUtlSymbolLarge m_iszOriginalModel; // offset 0xE90, size 0x8, align 8
    int8 m_nUnitModelVariant; // offset 0xE98, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0xE99, size 0x1, align 1
    bool m_bPseudoQueueOrders; // offset 0xE9A, size 0x1, align 1
    bool m_bCastLocked; // offset 0xE9B, size 0x1, align 1
    char _pad_0E9C[0x1C]; // offset 0xE9C
    GameTime_t m_flAttackRegulator; // offset 0xEB8, size 0x4, align 255
    float32 m_flTimeDisparityTolerance; // offset 0xEBC, size 0x4, align 4
    GameTime_t m_fAttackPhaseEndTime; // offset 0xEC0, size 0x4, align 255
    GameTime_t m_flPositionUpdateTime; // offset 0xEC4, size 0x4, align 255
    VectorWS m_vLastPositionSent; // offset 0xEC8, size 0xC, align 4
    int32 m_iTaggedAsVisibleByTeam; // offset 0xED4, size 0x4, align 4
    uint64 m_iIsControllableByPlayer64; // offset 0xED8, size 0x8, align 8
    PlayerID_t m_nControllingPlayerID; // offset 0xEE0, size 0x4, align 255
    bool m_bControllableByAllPlayers; // offset 0xEE4, size 0x1, align 1
    bool m_bRunAIWhenControllableByPlayer; // offset 0xEE5, size 0x1, align 1
    char _pad_0EE6[0x2]; // offset 0xEE6
    CUtlSymbolLarge m_iszUnitToAbilityMapping; // offset 0xEE8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecAbilities; // offset 0xEF0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_associatedEmptyAbilities; // offset 0xF08, size 0x18, align 8
    CHandle< CBaseEntity > m_hActiveAbility; // offset 0xF20, size 0x4, align 4
    VectorWS m_vCursorLocation; // offset 0xF24, size 0xC, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0xF30, size 0x4, align 4
    CHandle< CBaseEntity > m_hOriginalCursorTarget; // offset 0xF34, size 0x4, align 4
    bool m_bCursorTargetingNothing; // offset 0xF38, size 0x1, align 1
    char _pad_0F39[0x7]; // offset 0xF39
    CDOTA_ModifierManager m_ModifierManager; // offset 0xF40, size 0x388, align 255
    char _pad_12C8[0x8]; // offset 0x12C8
    float32 m_flInvisibilityLevel; // offset 0x12D0, size 0x4, align 4
    char _pad_12D4[0x4]; // offset 0x12D4
    CUtlSymbolLarge m_iszMapUnitName; // offset 0x12D8, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitName; // offset 0x12E0, size 0x8, align 8
    int32 m_iUnitNameIndex; // offset 0x12E8, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x12EC, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x12F0, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x12F4, size 0x4, align 4
    bool m_bIsWaitingToSpawn; // offset 0x12F8, size 0x1, align 1
    char _pad_12F9[0x3]; // offset 0x12F9
    int32 m_iLeashType; // offset 0x12FC, size 0x4, align 4
    int32 m_iAggroType; // offset 0x1300, size 0x4, align 4
    bool m_bCreepIgnoreAggro; // offset 0x1304, size 0x1, align 1
    bool m_bCreepFirstWave; // offset 0x1305, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x1306, size 0x1, align 1
    uint8 m_nUnitLabelIndex; // offset 0x1307, size 0x1, align 1
    CUtlString m_szScaleset; // offset 0x1308, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0x1310, size 0x8, align 8
    CUtlString m_strAnimationModifier; // offset 0x1318, size 0x8, align 8
    char _pad_1320[0x8]; // offset 0x1320
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1328, size 0x4, align 4
    char _pad_132C[0x4]; // offset 0x132C
    CLocomotionBase* m_locomotor; // offset 0x1330, size 0x8, align 8
    INextBotBody* m_body; // offset 0x1338, size 0x8, align 8
    bool m_bNeverMoveToClearSpace; // offset 0x1340, size 0x1, align 1
    char _pad_1341[0x3]; // offset 0x1341
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x1344, size 0x4, align 4
    bool m_bMustReachEachGoalEntity; // offset 0x1348, size 0x1, align 1
    char _pad_1349[0x3]; // offset 0x1349
    VectorWS m_vInitialGoalPosition; // offset 0x134C, size 0xC, align 4
    char _pad_1358[0x18]; // offset 0x1358
    CUnitOrders m_CurrentQueuedOrder; // offset 0x1370, size 0x40, align 255
    char _pad_13B0[0x18]; // offset 0x13B0
    CDOTA_UnitInventory m_Inventory; // offset 0x13C8, size 0xF8, align 255
    CHandle< CBaseEntity > m_hItemToDrop; // offset 0x14C0, size 0x4, align 4
    DOTA_SHOP_TYPE m_iCurShop; // offset 0x14C4, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastNearShop; // offset 0x14C8, size 0x4, align 4
    char _pad_14CC[0x4]; // offset 0x14CC
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x14D0, size 0x8, align 8
    bool m_bHasInventory; // offset 0x14D8, size 0x1, align 1
    char _pad_14D9[0x3]; // offset 0x14D9
    float32 m_flBaselineModelScale; // offset 0x14DC, size 0x4, align 4
    float32 m_fModelScaleMultiplier; // offset 0x14E0, size 0x4, align 4
    float32 m_fModelScaleMultiplierChangeStart; // offset 0x14E4, size 0x4, align 4
    GameTime_t m_fModelScaleMultiplierChangeTime; // offset 0x14E8, size 0x4, align 255
    float32 m_flPreviousModelScale; // offset 0x14EC, size 0x4, align 4
    float32 m_fMaxModelScaleMultiplier; // offset 0x14F0, size 0x4, align 4
    bool m_bIsCamped; // offset 0x14F4, size 0x1, align 1
    bool m_bIsReturningHome; // offset 0x14F5, size 0x1, align 1
    bool m_bIgnoreHome; // offset 0x14F6, size 0x1, align 1
    bool m_bWantsToFlee; // offset 0x14F7, size 0x1, align 1
    bool m_bWakesNeutrals; // offset 0x14F8, size 0x1, align 1
    bool m_bNeutralIgnore; // offset 0x14F9, size 0x1, align 1
    bool m_bIdleAcquire; // offset 0x14FA, size 0x1, align 1
    bool m_bIdleAcquireForceSet; // offset 0x14FB, size 0x1, align 1
    bool m_bCanFollowUnseenUnits; // offset 0x14FC, size 0x1, align 1
    bool m_bExpired; // offset 0x14FD, size 0x1, align 1
    char _pad_14FE[0x2]; // offset 0x14FE
    VectorWS m_vCurrentMovementOrderDestination; // offset 0x1500, size 0xC, align 4
    VectorWS m_vPreviousMovementOrderDestination; // offset 0x150C, size 0xC, align 4
    VectorWS m_vResumePreviousMovementRequestLocation; // offset 0x1518, size 0xC, align 4
    bool m_bCurrentOrderIsMovement; // offset 0x1524, size 0x1, align 1
    bool m_bPreviousOrderIsMovement; // offset 0x1525, size 0x1, align 1
    bool m_bResumePreviousMovement; // offset 0x1526, size 0x1, align 1
    bool m_bIsPatrolling; // offset 0x1527, size 0x1, align 1
    GameTime_t m_flCreationTime; // offset 0x1528, size 0x4, align 255
    bool m_bTargetMovedOutOfRange; // offset 0x152C, size 0x1, align 1
    bool m_bChaseTargetMoves; // offset 0x152D, size 0x1, align 1
    char _pad_152E[0x2]; // offset 0x152E
    float32 m_flChaseDistance; // offset 0x1530, size 0x4, align 4
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x1534, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1538, size 0x18, align 8
    bool m_bActivityModifiersDirty; // offset 0x1550, size 0x1, align 1
    char _pad_1551[0x7]; // offset 0x1551
    CUtlVector< CUtlSymbol > m_ActivityModifiersFromScript; // offset 0x1558, size 0x18, align 8
    GameTime_t m_flBlinkDaggerTime; // offset 0x1570, size 0x4, align 255
    float32 m_flAdditionalBattleMusicWeight; // offset 0x1574, size 0x4, align 4
    bool m_bStolenScepter; // offset 0x1578, size 0x1, align 1
    bool m_bHasScepterCached; // offset 0x1579, size 0x1, align 1
    bool m_bHasShardCached; // offset 0x157A, size 0x1, align 1
    bool m_bHasForbiddenTomeCached; // offset 0x157B, size 0x1, align 1
    char _pad_157C[0x4]; // offset 0x157C
    CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // offset 0x1580, size 0x20, align 255
    char _pad_15A0[0x20]; // offset 0x15A0
    GameTime_t m_flCritBashFailUntil; // offset 0x15C0, size 0x4, align 255
    float32 m_flAttackTimeLostToLastTick; // offset 0x15C4, size 0x4, align 4
    float32 m_flAttackTimeAtLastTick; // offset 0x15C8, size 0x4, align 4
    float32 m_flCompanionDistance; // offset 0x15CC, size 0x4, align 4
    bool m_bIsPartyCompanion; // offset 0x15D0, size 0x1, align 1
    bool m_bCanPartyCompanionAttack; // offset 0x15D1, size 0x1, align 1
    char _pad_15D2[0x2]; // offset 0x15D2
    CHandle< CBaseEntity > m_CompanionEntity; // offset 0x15D4, size 0x4, align 4
    bool m_bFacePlayer; // offset 0x15D8, size 0x1, align 1
    char _pad_15D9[0x3]; // offset 0x15D9
    GameTime_t m_flLastIdleChangeTime; // offset 0x15DC, size 0x4, align 255
    bool m_bUseNeutralCreepBehavior; // offset 0x15E0, size 0x1, align 1
    char _pad_15E1[0x27]; // offset 0x15E1
    bool m_bHasBuiltWearableSpawnList; // offset 0x1608, size 0x1, align 1
    char _pad_1609[0x3]; // offset 0x1609
    GameTick_t[15] m_nFoWFadeStartTime; // offset 0x160C, size 0x3C, align 4
    int32 m_nFOWVisibilityRadius; // offset 0x1648, size 0x4, align 4
    VectorWS m_vFOWOriginOverride; // offset 0x164C, size 0xC, align 4
    int32 m_iTeamViewerID; // offset 0x1658, size 0x4, align 4
    int32 m_nAttackHeightBonus; // offset 0x165C, size 0x4, align 4
    uint32 m_nScepterUpgradeID; // offset 0x1660, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x1664, size 0x4, align 4
    CUtlString m_strLastKillerAbility; // offset 0x1668, size 0x8, align 8
    int32 m_anglediff; // offset 0x1670, size 0x4, align 4
    int32 m_NetworkActivity; // offset 0x1674, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1678, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x167C, size 0x1, align 1
    char _pad_167D[0x3]; // offset 0x167D
    float32 m_flStartSequenceCycle; // offset 0x1680, size 0x4, align 4
    bool m_bMidLoading; // offset 0x1684, size 0x1, align 1
    char _pad_1685[0x3]; // offset 0x1685
    CHandle< CDOTA_ScriptedSpawner > m_hTutorialSpawner; // offset 0x1688, size 0x4, align 4
    char _pad_168C[0x4]; // offset 0x168C
    CountdownTimer m_AngerCooldownTimer; // offset 0x1690, size 0x18, align 8
    int32 m_iProjectileMoveSpeed; // offset 0x16A8, size 0x4, align 4
    char _pad_16AC[0x4]; // offset 0x16AC
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0x16B0, size 0x8, align 8
    int32 m_nPoseParameterTurn; // offset 0x16B8, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x16BC, size 0x4, align 4
    float32 m_flLean; // offset 0x16C0, size 0x4, align 4
    float32 m_flRun; // offset 0x16C4, size 0x4, align 4
    char[256] m_CustomHealthLabel; // offset 0x16C8, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x17C8, size 0x4, align 1
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x17CC, size 0x1, align 1
    char _pad_17CD[0x3]; // offset 0x17CD
    item_definition_index_t m_nWearableDefIndex; // offset 0x17D0, size 0x4, align 255
    int8 m_nArcanaLevel; // offset 0x17D4, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x17D5, size 0x1, align 1
    Color m_defaultColorGemColor; // offset 0x17D6, size 0x4, align 1
    bool m_bDisableDamageDisplay; // offset 0x17DA, size 0x1, align 1
    char _pad_17DB[0x1]; // offset 0x17DB
    Color m_gibTintColor; // offset 0x17DC, size 0x4, align 1
    float32 m_flPathfindingSearchDepthScale; // offset 0x17E0, size 0x4, align 4
    char _pad_17E4[0x4]; // offset 0x17E4
    CUtlVector< int32 > m_ActivitiesStarted; // offset 0x17E8, size 0x18, align 8
    CHandle< CBaseEntity > m_hIllusionOriginal; // offset 0x1800, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDirectionalRangedFakeTarget; // offset 0x1804, size 0x4, align 4
    char _pad_1808[0x28]; // offset 0x1808
    bool m_bShouldComputeRemainingPathLength; // offset 0x1830, size 0x1, align 1
    char _pad_1831[0x3]; // offset 0x1831
    float32 m_flRemainingPathLength; // offset 0x1834, size 0x4, align 4
    char _pad_1838[0x28]; // offset 0x1838
    CUtlVector< CHandle< CBaseEntity > > m_AbilitiesPendingDelete; // offset 0x1860, size 0x18, align 8
    float32 m_flPrevHealthThinkRegen; // offset 0x1878, size 0x4, align 4
    GameTime_t m_prevRegenChangeTime; // offset 0x187C, size 0x4, align 255
    float32 m_flAccumulatedHealthRegenSinceLastLogged; // offset 0x1880, size 0x4, align 4
    char _pad_1884[0x1C]; // offset 0x1884
};
