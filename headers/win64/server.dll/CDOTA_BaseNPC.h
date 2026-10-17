#pragma once

class CDOTA_BaseNPC : public NextBotCombatCharacter /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F8]; // offset 0x0
    bool m_bPledgedOfrenda; // offset 0x9F8, size 0x1, align 1
    char _pad_09F9[0x3]; // offset 0x9F9
    uint32 m_iUnitType; // offset 0x9FC, size 0x4, align 4
    Color m_colorGemColor; // offset 0xA00, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xA04, size 0x1, align 1
    bool m_bSelectionRingVisible; // offset 0xA05, size 0x1, align 1
    char _pad_0A06[0xA]; // offset 0xA06
    CUtlSymbolLarge m_iszBaseClass; // offset 0xA10, size 0x8, align 8
    int32 m_iStartingMaxHealth; // offset 0xA18, size 0x4, align 4
    int32 m_iStartingMaxMana; // offset 0xA1C, size 0x4, align 4
    int32 m_iStartingMana; // offset 0xA20, size 0x4, align 4
    int32 m_iCurrentLevel; // offset 0xA24, size 0x4, align 4
    float32 m_flMana; // offset 0xA28, size 0x4, align 4
    float32 m_flBaseMaxMana; // offset 0xA2C, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xA30, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xA34, size 0x4, align 4
    float32 m_flBaseMaxHealth; // offset 0xA38, size 0x4, align 4
    float32 m_flHealthThinkRegen; // offset 0xA3C, size 0x4, align 4
    int32 m_nHealthBarOffsetOverride; // offset 0xA40, size 0x4, align 4
    int32 m_nHealthBarOffset; // offset 0xA44, size 0x4, align 4
    bool m_bIsPhantom; // offset 0xA48, size 0x1, align 1
    bool m_bIsAncient; // offset 0xA49, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xA4A, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xA4B, size 0x1, align 1
    bool m_bAutoAttacksByDefault; // offset 0xA4C, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xA4D, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xA4E, size 0x1, align 1
    bool m_bCanRespawn; // offset 0xA4F, size 0x1, align 1
    bool m_bIsClone; // offset 0xA50, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xA51, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xA52, size 0x1, align 1
    bool m_bIsPlayingSingleForcedActivity; // offset 0xA53, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xA54, size 0x1, align 1
    char _pad_0A55[0x3]; // offset 0xA55
    int32 m_iBKBChargesUsed; // offset 0xA58, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xA5C, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xA60, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xA64, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xA68, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xA6C, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xA70, size 0x4, align 4
    bool m_bIsMoving; // offset 0xA74, size 0x1, align 1
    char _pad_0A75[0x1BB]; // offset 0xA75
    float32 m_flChannelMultiplier; // offset 0xC30, size 0x4, align 4
    bool m_bCanUseWards; // offset 0xC34, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0xC35, size 0x1, align 1
    char _pad_0C36[0x2]; // offset 0xC36
    PlayerID_t m_iLastAbilityPlayer; // offset 0xC38, size 0x4, align 255
    bool m_bIsPhantomBlocker; // offset 0xC3C, size 0x1, align 1
    bool m_bBlocksCreepSpawn; // offset 0xC3D, size 0x1, align 1
    bool m_bCanSellItems; // offset 0xC3E, size 0x1, align 1
    char _pad_0C3F[0x1]; // offset 0xC3F
    CHandle< CDOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0xC40, size 0x4, align 4
    bool m_bTrackDamageTaken; // offset 0xC44, size 0x1, align 1
    char _pad_0C45[0x3]; // offset 0xC45
    GameTick_t m_nNextRegenThink; // offset 0xC48, size 0x4, align 255
    GameTick_t m_nNextModifierThink; // offset 0xC4C, size 0x4, align 255
    GameTick_t m_nNextModelScaleThink; // offset 0xC50, size 0x4, align 255
    GameTick_t m_nNextUnitThink; // offset 0xC54, size 0x4, align 255
    float32 m_flManaRegen; // offset 0xC58, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0xC5C, size 0x4, align 4
    int64 m_nTotalDamageTaken; // offset 0xC60, size 0x8, align 8
    float32 m_flHealthRegenCounter; // offset 0xC68, size 0x4, align 4
    float32 m_flManaRegenCounter; // offset 0xC6C, size 0x4, align 4
    float32 m_flAccumulatedHeal; // offset 0xC70, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xC74, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xC78, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xC7C, size 0x4, align 4
    int32 m_iAttackRange; // offset 0xC80, size 0x4, align 4
    int32 m_iAttackRangeBuffer; // offset 0xC84, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xC88, size 0x4, align 4
    float32 m_flTurnRate; // offset 0xC8C, size 0x4, align 4
    int32 m_iHasAggressiveStance; // offset 0xC90, size 0x4, align 4
    bool m_bInAggressiveStance; // offset 0xC94, size 0x1, align 1
    bool m_bInInjuredAggressiveStance; // offset 0xC95, size 0x1, align 1
    char _pad_0C96[0x2]; // offset 0xC96
    float32 m_flFollowRange; // offset 0xC98, size 0x4, align 4
    int32 m_iAcquisitionRange; // offset 0xC9C, size 0x4, align 4
    float32 m_flAttackAnimationPoint; // offset 0xCA0, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xCA4, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xCA8, size 0x4, align 4
    GameTime_t m_flTauntCooldown; // offset 0xCAC, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xCB0, size 0x4, align 255
    float32 m_fRevealRadius; // offset 0xCB4, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xCB8, size 0x4, align 4
    ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // offset 0xCBC, size 0x4, align 4
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xCC0, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xCC8, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xCD0, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xCD8, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xCE0, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimationModifier; // offset 0xCE8, size 0x8, align 8
    char _pad_0CF0[0x8]; // offset 0xCF0
    float32 m_flBaseAttackTime; // offset 0xCF8, size 0x4, align 4
    int32 m_iDayTimeVisionRange; // offset 0xCFC, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xD00, size 0x4, align 4
    float32 m_fBotAttackDesire; // offset 0xD04, size 0x4, align 4
    int32 m_iUnitRelationshipClass; // offset 0xD08, size 0x4, align 4
    float32 m_flPhysicalArmorValue; // offset 0xD0C, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0xD10, size 0x4, align 4
    int32 m_iTeamName; // offset 0xD14, size 0x4, align 4
    int32 m_iAttackCapabilities; // offset 0xD18, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0xD1C, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0xD20, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0xD24, size 0x4, align 4
    int32 m_iXPBounty; // offset 0xD28, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0xD2C, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0xD30, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0xD34, size 0x4, align 4
    PlayerID_t m_nFarmClaimPlayerID; // offset 0xD38, size 0x4, align 255
    PlayerID_t m_nPlayerOwnerID; // offset 0xD3C, size 0x4, align 255
    CUtlSymbolLarge[40] m_iszAbilityList; // offset 0xD40, size 0x140, align 8
    int32 m_iAttackDamageType; // offset 0xE80, size 0x4, align 4
    bool m_bIsIdle; // offset 0xE84, size 0x1, align 1
    bool m_bHold; // offset 0xE85, size 0x1, align 1
    bool m_bWasKilledPassively; // offset 0xE86, size 0x1, align 1
    char _pad_0E87[0x1]; // offset 0xE87
    CountdownTimer m_AngerTimer; // offset 0xE88, size 0x18, align 8
    CountdownTimer m_AlertTimer; // offset 0xEA0, size 0x18, align 8
    CHandle< CBaseEntity > m_hAngerTarget; // offset 0xEB8, size 0x4, align 4
    CHandle< CBaseEntity > m_hAlertTarget; // offset 0xEBC, size 0x4, align 4
    CHandle< CBaseEntity > m_hForceAttackTarget; // offset 0xEC0, size 0x4, align 4
    bool m_bAllowAllyForceAttack; // offset 0xEC4, size 0x1, align 1
    char _pad_0EC5[0x3]; // offset 0xEC5
    VectorWS m_vTargetLastKnownPosition; // offset 0xEC8, size 0xC, align 4
    char _pad_0ED4[0x1C]; // offset 0xED4
    GameTime_t m_flLastDamageTime; // offset 0xEF0, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0xEF4, size 0x4, align 255
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0xEF8, size 0x4, align 255
    GameTime_t m_flLastTeleportTime; // offset 0xEFC, size 0x4, align 255
    uint64 m_nUnitState64; // offset 0xF00, size 0x8, align 8
    GameTime_t[15] m_vLastVisibilityChange; // offset 0xF08, size 0x3C, align 4
    char _pad_0F44[0x1C]; // offset 0xF44
    bool m_bFirstSpawn; // offset 0xF60, size 0x1, align 1
    char _pad_0F61[0x3]; // offset 0xF61
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0xF64, size 0x4, align 4
    CHandle< CBaseEntity > m_hAggroTarget; // offset 0xF68, size 0x4, align 4
    CHandle< CBaseEntity > m_hCommandAttackTarget; // offset 0xF6C, size 0x4, align 4
    CUtlSymbolLarge m_iszOriginalModel; // offset 0xF70, size 0x8, align 8
    int8 m_nUnitModelVariant; // offset 0xF78, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0xF79, size 0x1, align 1
    bool m_bPseudoQueueOrders; // offset 0xF7A, size 0x1, align 1
    bool m_bCastLocked; // offset 0xF7B, size 0x1, align 1
    char _pad_0F7C[0x1C]; // offset 0xF7C
    GameTime_t m_flAttackRegulator; // offset 0xF98, size 0x4, align 255
    float32 m_flTimeDisparityTolerance; // offset 0xF9C, size 0x4, align 4
    GameTime_t m_fAttackPhaseEndTime; // offset 0xFA0, size 0x4, align 255
    GameTime_t m_flPositionUpdateTime; // offset 0xFA4, size 0x4, align 255
    VectorWS m_vLastPositionSent; // offset 0xFA8, size 0xC, align 4
    int32 m_iTaggedAsVisibleByTeam; // offset 0xFB4, size 0x4, align 4
    uint64 m_iIsControllableByPlayer64; // offset 0xFB8, size 0x8, align 8
    PlayerID_t m_nControllingPlayerID; // offset 0xFC0, size 0x4, align 255
    bool m_bControllableByAllPlayers; // offset 0xFC4, size 0x1, align 1
    bool m_bRunAIWhenControllableByPlayer; // offset 0xFC5, size 0x1, align 1
    char _pad_0FC6[0x2]; // offset 0xFC6
    CUtlSymbolLarge m_iszUnitToAbilityMapping; // offset 0xFC8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecAbilities; // offset 0xFD0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_associatedEmptyAbilities; // offset 0xFE8, size 0x18, align 8
    CHandle< CBaseEntity > m_hActiveAbility; // offset 0x1000, size 0x4, align 4
    VectorWS m_vCursorLocation; // offset 0x1004, size 0xC, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x1010, size 0x4, align 4
    CHandle< CBaseEntity > m_hOriginalCursorTarget; // offset 0x1014, size 0x4, align 4
    bool m_bCursorTargetingNothing; // offset 0x1018, size 0x1, align 1
    char _pad_1019[0x7]; // offset 0x1019
    CDOTA_ModifierManager m_ModifierManager; // offset 0x1020, size 0x390, align 255
    char _pad_13B0[0x8]; // offset 0x13B0
    float32 m_flInvisibilityLevel; // offset 0x13B8, size 0x4, align 4
    char _pad_13BC[0x4]; // offset 0x13BC
    CUtlSymbolLarge m_iszMapUnitName; // offset 0x13C0, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitName; // offset 0x13C8, size 0x8, align 8
    int32 m_iUnitNameIndex; // offset 0x13D0, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0x13D4, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x13D8, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x13DC, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x13E0, size 0x4, align 4
    bool m_bIsWaitingToSpawn; // offset 0x13E4, size 0x1, align 1
    char _pad_13E5[0x3]; // offset 0x13E5
    int32 m_iLeashType; // offset 0x13E8, size 0x4, align 4
    int32 m_iAggroType; // offset 0x13EC, size 0x4, align 4
    bool m_bCreepIgnoreAggro; // offset 0x13F0, size 0x1, align 1
    bool m_bCreepFirstWave; // offset 0x13F1, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x13F2, size 0x1, align 1
    uint8 m_nUnitLabelIndex; // offset 0x13F3, size 0x1, align 1
    char _pad_13F4[0x4]; // offset 0x13F4
    CUtlString m_szScaleset; // offset 0x13F8, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0x1400, size 0x8, align 8
    CUtlString m_strAnimationModifier; // offset 0x1408, size 0x8, align 8
    char _pad_1410[0x8]; // offset 0x1410
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1418, size 0x4, align 4
    char _pad_141C[0x4]; // offset 0x141C
    CLocomotionBase* m_locomotor; // offset 0x1420, size 0x8, align 8
    INextBotBody* m_body; // offset 0x1428, size 0x8, align 8
    bool m_bNeverMoveToClearSpace; // offset 0x1430, size 0x1, align 1
    char _pad_1431[0x3]; // offset 0x1431
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x1434, size 0x4, align 4
    bool m_bMustReachEachGoalEntity; // offset 0x1438, size 0x1, align 1
    char _pad_1439[0x3]; // offset 0x1439
    VectorWS m_vInitialGoalPosition; // offset 0x143C, size 0xC, align 4
    char _pad_1448[0x18]; // offset 0x1448
    CUnitOrders m_CurrentQueuedOrder; // offset 0x1460, size 0x40, align 255
    char _pad_14A0[0x18]; // offset 0x14A0
    CDOTA_UnitInventory m_Inventory; // offset 0x14B8, size 0xF8, align 255
    CHandle< CBaseEntity > m_hItemToDrop; // offset 0x15B0, size 0x4, align 4
    DOTA_SHOP_TYPE m_iCurShop; // offset 0x15B4, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastNearShop; // offset 0x15B8, size 0x4, align 4
    char _pad_15BC[0x4]; // offset 0x15BC
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x15C0, size 0x8, align 8
    bool m_bHasInventory; // offset 0x15C8, size 0x1, align 1
    char _pad_15C9[0x3]; // offset 0x15C9
    float32 m_flBaselineModelScale; // offset 0x15CC, size 0x4, align 4
    float32 m_fModelScaleMultiplier; // offset 0x15D0, size 0x4, align 4
    float32 m_fModelScaleMultiplierChangeStart; // offset 0x15D4, size 0x4, align 4
    GameTime_t m_fModelScaleMultiplierChangeTime; // offset 0x15D8, size 0x4, align 255
    float32 m_flPreviousModelScale; // offset 0x15DC, size 0x4, align 4
    float32 m_fMaxModelScaleMultiplier; // offset 0x15E0, size 0x4, align 4
    bool m_bIsCamped; // offset 0x15E4, size 0x1, align 1
    bool m_bIsReturningHome; // offset 0x15E5, size 0x1, align 1
    bool m_bIgnoreHome; // offset 0x15E6, size 0x1, align 1
    bool m_bWantsToFlee; // offset 0x15E7, size 0x1, align 1
    bool m_bWakesNeutrals; // offset 0x15E8, size 0x1, align 1
    bool m_bNeutralIgnore; // offset 0x15E9, size 0x1, align 1
    bool m_bIdleAcquire; // offset 0x15EA, size 0x1, align 1
    bool m_bIdleAcquireForceSet; // offset 0x15EB, size 0x1, align 1
    bool m_bCanFollowUnseenUnits; // offset 0x15EC, size 0x1, align 1
    bool m_bExpired; // offset 0x15ED, size 0x1, align 1
    char _pad_15EE[0x2]; // offset 0x15EE
    VectorWS m_vCurrentMovementOrderDestination; // offset 0x15F0, size 0xC, align 4
    VectorWS m_vPreviousMovementOrderDestination; // offset 0x15FC, size 0xC, align 4
    VectorWS m_vResumePreviousMovementRequestLocation; // offset 0x1608, size 0xC, align 4
    bool m_bCurrentOrderIsMovement; // offset 0x1614, size 0x1, align 1
    bool m_bPreviousOrderIsMovement; // offset 0x1615, size 0x1, align 1
    bool m_bResumePreviousMovement; // offset 0x1616, size 0x1, align 1
    bool m_bIsPatrolling; // offset 0x1617, size 0x1, align 1
    GameTime_t m_flCreationTime; // offset 0x1618, size 0x4, align 255
    bool m_bTargetMovedOutOfRange; // offset 0x161C, size 0x1, align 1
    bool m_bChaseTargetMoves; // offset 0x161D, size 0x1, align 1
    char _pad_161E[0x2]; // offset 0x161E
    float32 m_flChaseDistance; // offset 0x1620, size 0x4, align 4
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x1624, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1628, size 0x18, align 8
    bool m_bActivityModifiersDirty; // offset 0x1640, size 0x1, align 1
    char _pad_1641[0x7]; // offset 0x1641
    CUtlVector< CUtlSymbol > m_ActivityModifiersFromScript; // offset 0x1648, size 0x18, align 8
    GameTime_t m_flBlinkDaggerTime; // offset 0x1660, size 0x4, align 255
    float32 m_flAdditionalBattleMusicWeight; // offset 0x1664, size 0x4, align 4
    bool m_bStolenScepter; // offset 0x1668, size 0x1, align 1
    bool m_bHasScepterCached; // offset 0x1669, size 0x1, align 1
    bool m_bHasShardCached; // offset 0x166A, size 0x1, align 1
    bool m_bHasForbiddenTomeCached; // offset 0x166B, size 0x1, align 1
    char _pad_166C[0x4]; // offset 0x166C
    CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // offset 0x1670, size 0x20, align 255
    char _pad_1690[0x20]; // offset 0x1690
    GameTime_t m_flCritBashFailUntil; // offset 0x16B0, size 0x4, align 255
    float32 m_flAttackTimeLostToLastTick; // offset 0x16B4, size 0x4, align 4
    float32 m_flAttackTimeAtLastTick; // offset 0x16B8, size 0x4, align 4
    float32 m_flCompanionDistance; // offset 0x16BC, size 0x4, align 4
    bool m_bIsPartyCompanion; // offset 0x16C0, size 0x1, align 1
    bool m_bCanPartyCompanionAttack; // offset 0x16C1, size 0x1, align 1
    char _pad_16C2[0x2]; // offset 0x16C2
    CHandle< CBaseEntity > m_CompanionEntity; // offset 0x16C4, size 0x4, align 4
    bool m_bFacePlayer; // offset 0x16C8, size 0x1, align 1
    char _pad_16C9[0x3]; // offset 0x16C9
    GameTime_t m_flLastIdleChangeTime; // offset 0x16CC, size 0x4, align 255
    bool m_bUseNeutralCreepBehavior; // offset 0x16D0, size 0x1, align 1
    char _pad_16D1[0x27]; // offset 0x16D1
    bool m_bHasBuiltWearableSpawnList; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x3]; // offset 0x16F9
    GameTick_t[15] m_nFoWFadeStartTime; // offset 0x16FC, size 0x3C, align 4
    int32 m_nFOWVisibilityRadius; // offset 0x1738, size 0x4, align 4
    VectorWS m_vFOWOriginOverride; // offset 0x173C, size 0xC, align 4
    int32 m_iTeamViewerID; // offset 0x1748, size 0x4, align 4
    int32 m_nAttackHeightBonus; // offset 0x174C, size 0x4, align 4
    bool m_bShouldDrawPath; // offset 0x1750, size 0x1, align 1
    char _pad_1751[0x3]; // offset 0x1751
    uint32 m_nScepterUpgradeID; // offset 0x1754, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x1758, size 0x4, align 4
    char _pad_175C[0x4]; // offset 0x175C
    CUtlString m_strLastKillerAbility; // offset 0x1760, size 0x8, align 8
    int32 m_anglediff; // offset 0x1768, size 0x4, align 4
    int32 m_NetworkActivity; // offset 0x176C, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1770, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x1774, size 0x1, align 1
    char _pad_1775[0x3]; // offset 0x1775
    float32 m_flStartSequenceCycle; // offset 0x1778, size 0x4, align 4
    bool m_bMidLoading; // offset 0x177C, size 0x1, align 1
    char _pad_177D[0x3]; // offset 0x177D
    CHandle< CDOTA_ScriptedSpawner > m_hTutorialSpawner; // offset 0x1780, size 0x4, align 4
    char _pad_1784[0x4]; // offset 0x1784
    CountdownTimer m_AngerCooldownTimer; // offset 0x1788, size 0x18, align 8
    int32 m_iProjectileMoveSpeed; // offset 0x17A0, size 0x4, align 4
    char _pad_17A4[0x4]; // offset 0x17A4
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0x17A8, size 0x8, align 8
    int32 m_nPoseParameterTurn; // offset 0x17B0, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x17B4, size 0x4, align 4
    float32 m_flLean; // offset 0x17B8, size 0x4, align 4
    float32 m_flRun; // offset 0x17BC, size 0x4, align 4
    char[256] m_CustomHealthLabel; // offset 0x17C0, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x18C0, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x18C4, size 0x1, align 1
    char _pad_18C5[0x3]; // offset 0x18C5
    item_definition_index_t m_nWearableDefIndex; // offset 0x18C8, size 0x4, align 255
    int8 m_nArcanaLevel; // offset 0x18CC, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x18CD, size 0x1, align 1
    char _pad_18CE[0x2]; // offset 0x18CE
    Color m_defaultColorGemColor; // offset 0x18D0, size 0x4, align 4
    bool m_bDisableDamageDisplay; // offset 0x18D4, size 0x1, align 1
    char _pad_18D5[0x3]; // offset 0x18D5
    Color m_gibTintColor; // offset 0x18D8, size 0x4, align 4
    float32 m_flPathfindingSearchDepthScale; // offset 0x18DC, size 0x4, align 4
    CUtlVector< int32 > m_ActivitiesStarted; // offset 0x18E0, size 0x18, align 8
    CHandle< CBaseEntity > m_hIllusionOriginal; // offset 0x18F8, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDirectionalRangedFakeTarget; // offset 0x18FC, size 0x4, align 4
    char _pad_1900[0x28]; // offset 0x1900
    bool m_bShouldComputeRemainingPathLength; // offset 0x1928, size 0x1, align 1
    char _pad_1929[0x3]; // offset 0x1929
    float32 m_flRemainingPathLength; // offset 0x192C, size 0x4, align 4
    char _pad_1930[0x28]; // offset 0x1930
    CUtlVector< CHandle< CBaseEntity > > m_AbilitiesPendingDelete; // offset 0x1958, size 0x18, align 8
    float32 m_flPrevHealthThinkRegen; // offset 0x1970, size 0x4, align 4
    GameTime_t m_prevRegenChangeTime; // offset 0x1974, size 0x4, align 255
    float32 m_flAccumulatedHealthRegenSinceLastLogged; // offset 0x1978, size 0x4, align 4
    char _pad_197C[0x1C]; // offset 0x197C
};
