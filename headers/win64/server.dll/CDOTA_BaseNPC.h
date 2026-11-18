#pragma once

class CDOTA_BaseNPC : public NextBotCombatCharacter /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    bool m_bPledgedOfrenda; // offset 0xA58, size 0x1, align 1
    char _pad_0A59[0x3]; // offset 0xA59
    uint32 m_iUnitType; // offset 0xA5C, size 0x4, align 4
    Color m_colorGemColor; // offset 0xA60, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xA64, size 0x1, align 1
    bool m_bSelectionRingVisible; // offset 0xA65, size 0x1, align 1
    char _pad_0A66[0xA]; // offset 0xA66
    CUtlSymbolLarge m_iszBaseClass; // offset 0xA70, size 0x8, align 8
    int32 m_iStartingMaxHealth; // offset 0xA78, size 0x4, align 4
    int32 m_iStartingMaxMana; // offset 0xA7C, size 0x4, align 4
    int32 m_iStartingMana; // offset 0xA80, size 0x4, align 4
    int32 m_iCurrentLevel; // offset 0xA84, size 0x4, align 4
    float32 m_flMana; // offset 0xA88, size 0x4, align 4
    float32 m_flBaseMaxMana; // offset 0xA8C, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xA90, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xA94, size 0x4, align 4
    float32 m_flBaseMaxHealth; // offset 0xA98, size 0x4, align 4
    float32 m_flHealthThinkRegen; // offset 0xA9C, size 0x4, align 4
    int32 m_nHealthBarOffsetOverride; // offset 0xAA0, size 0x4, align 4
    int32 m_nHealthBarOffset; // offset 0xAA4, size 0x4, align 4
    bool m_bIsPhantom; // offset 0xAA8, size 0x1, align 1
    bool m_bIsAncient; // offset 0xAA9, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xAAA, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xAAB, size 0x1, align 1
    bool m_bAutoAttacksByDefault; // offset 0xAAC, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xAAD, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xAAE, size 0x1, align 1
    bool m_bCanRespawn; // offset 0xAAF, size 0x1, align 1
    bool m_bIsClone; // offset 0xAB0, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xAB1, size 0x1, align 1
    bool m_bCountsAsCreepForLifesteal; // offset 0xAB2, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xAB3, size 0x1, align 1
    bool m_bIsPlayingSingleForcedActivity; // offset 0xAB4, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xAB5, size 0x1, align 1
    char _pad_0AB6[0x2]; // offset 0xAB6
    int32 m_iBKBChargesUsed; // offset 0xAB8, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xABC, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xAC0, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xAC4, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xAC8, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xACC, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xAD0, size 0x4, align 4
    bool m_bIsMoving; // offset 0xAD4, size 0x1, align 1
    char _pad_0AD5[0x1BB]; // offset 0xAD5
    float32 m_flChannelMultiplier; // offset 0xC90, size 0x4, align 4
    bool m_bCanUseWards; // offset 0xC94, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0xC95, size 0x1, align 1
    char _pad_0C96[0x2]; // offset 0xC96
    PlayerID_t m_iLastAbilityPlayer; // offset 0xC98, size 0x4, align 255
    bool m_bIsPhantomBlocker; // offset 0xC9C, size 0x1, align 1
    bool m_bBlocksCreepSpawn; // offset 0xC9D, size 0x1, align 1
    bool m_bCanSellItems; // offset 0xC9E, size 0x1, align 1
    char _pad_0C9F[0x1]; // offset 0xC9F
    CHandle< CDOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0xCA0, size 0x4, align 4
    bool m_bTrackDamageTaken; // offset 0xCA4, size 0x1, align 1
    char _pad_0CA5[0x3]; // offset 0xCA5
    GameTick_t m_nNextRegenThink; // offset 0xCA8, size 0x4, align 255
    GameTick_t m_nNextModifierThink; // offset 0xCAC, size 0x4, align 255
    GameTick_t m_nNextModelScaleThink; // offset 0xCB0, size 0x4, align 255
    GameTick_t m_nNextUnitThink; // offset 0xCB4, size 0x4, align 255
    float32 m_flManaRegen; // offset 0xCB8, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0xCBC, size 0x4, align 4
    int64 m_nTotalDamageTaken; // offset 0xCC0, size 0x8, align 8
    float32 m_flHealthRegenCounter; // offset 0xCC8, size 0x4, align 4
    float32 m_flHealthDrainCounter; // offset 0xCCC, size 0x4, align 4
    float32 m_flManaRegenCounter; // offset 0xCD0, size 0x4, align 4
    float32 m_flAccumulatedHeal; // offset 0xCD4, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xCD8, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xCDC, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xCE0, size 0x4, align 4
    int32 m_iAttackRange; // offset 0xCE4, size 0x4, align 4
    int32 m_iAttackRangeBuffer; // offset 0xCE8, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xCEC, size 0x4, align 4
    float32 m_flTurnRate; // offset 0xCF0, size 0x4, align 4
    int32 m_iHasAggressiveStance; // offset 0xCF4, size 0x4, align 4
    bool m_bInAggressiveStance; // offset 0xCF8, size 0x1, align 1
    bool m_bInInjuredAggressiveStance; // offset 0xCF9, size 0x1, align 1
    char _pad_0CFA[0x2]; // offset 0xCFA
    float32 m_flFollowRange; // offset 0xCFC, size 0x4, align 4
    int32 m_iAcquisitionRange; // offset 0xD00, size 0x4, align 4
    float32 m_flAttackAnimationPoint; // offset 0xD04, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xD08, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xD0C, size 0x4, align 4
    GameTime_t m_flTauntCooldown; // offset 0xD10, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xD14, size 0x4, align 255
    float32 m_fRevealRadius; // offset 0xD18, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xD1C, size 0x4, align 4
    ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // offset 0xD20, size 0x4, align 4
    char _pad_0D24[0x4]; // offset 0xD24
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xD28, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xD30, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xD38, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xD40, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xD48, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimationModifier; // offset 0xD50, size 0x8, align 8
    char _pad_0D58[0x8]; // offset 0xD58
    float32 m_flBaseAttackTime; // offset 0xD60, size 0x4, align 4
    int32 m_iDayTimeVisionRange; // offset 0xD64, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xD68, size 0x4, align 4
    float32 m_fBotAttackDesire; // offset 0xD6C, size 0x4, align 4
    int32 m_iUnitRelationshipClass; // offset 0xD70, size 0x4, align 4
    float32 m_flPhysicalArmorValue; // offset 0xD74, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0xD78, size 0x4, align 4
    int32 m_iTeamName; // offset 0xD7C, size 0x4, align 4
    int32 m_iAttackCapabilities; // offset 0xD80, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0xD84, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0xD88, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0xD8C, size 0x4, align 4
    int32 m_iXPBounty; // offset 0xD90, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0xD94, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0xD98, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0xD9C, size 0x4, align 4
    PlayerID_t m_nFarmClaimPlayerID; // offset 0xDA0, size 0x4, align 255
    PlayerID_t m_nPlayerOwnerID; // offset 0xDA4, size 0x4, align 255
    CUtlSymbolLarge[40] m_iszAbilityList; // offset 0xDA8, size 0x140, align 8
    int32 m_iAttackDamageType; // offset 0xEE8, size 0x4, align 4
    bool m_bIsIdle; // offset 0xEEC, size 0x1, align 1
    bool m_bHold; // offset 0xEED, size 0x1, align 1
    bool m_bWasKilledPassively; // offset 0xEEE, size 0x1, align 1
    char _pad_0EEF[0x1]; // offset 0xEEF
    CountdownTimer m_AngerTimer; // offset 0xEF0, size 0x18, align 8
    CountdownTimer m_AlertTimer; // offset 0xF08, size 0x18, align 8
    CHandle< CBaseEntity > m_hAngerTarget; // offset 0xF20, size 0x4, align 4
    CHandle< CBaseEntity > m_hAlertTarget; // offset 0xF24, size 0x4, align 4
    CHandle< CBaseEntity > m_hForceAttackTarget; // offset 0xF28, size 0x4, align 4
    bool m_bAllowAllyForceAttack; // offset 0xF2C, size 0x1, align 1
    char _pad_0F2D[0x3]; // offset 0xF2D
    VectorWS m_vTargetLastKnownPosition; // offset 0xF30, size 0xC, align 4
    char _pad_0F3C[0x1C]; // offset 0xF3C
    GameTime_t m_flLastDamageTime; // offset 0xF58, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0xF5C, size 0x4, align 255
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0xF60, size 0x4, align 255
    GameTime_t m_flLastTeleportTime; // offset 0xF64, size 0x4, align 255
    uint64 m_nUnitState64; // offset 0xF68, size 0x8, align 8
    GameTime_t[15] m_vLastVisibilityChange; // offset 0xF70, size 0x3C, align 4
    char _pad_0FAC[0x1C]; // offset 0xFAC
    bool m_bFirstSpawn; // offset 0xFC8, size 0x1, align 1
    char _pad_0FC9[0x3]; // offset 0xFC9
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0xFCC, size 0x4, align 4
    CHandle< CBaseEntity > m_hAggroTarget; // offset 0xFD0, size 0x4, align 4
    CHandle< CBaseEntity > m_hCommandAttackTarget; // offset 0xFD4, size 0x4, align 4
    CUtlSymbolLarge m_iszOriginalModel; // offset 0xFD8, size 0x8, align 8
    int8 m_nUnitModelVariant; // offset 0xFE0, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0xFE1, size 0x1, align 1
    bool m_bPseudoQueueOrders; // offset 0xFE2, size 0x1, align 1
    bool m_bCastLocked; // offset 0xFE3, size 0x1, align 1
    char _pad_0FE4[0x1C]; // offset 0xFE4
    GameTime_t m_flAttackRegulator; // offset 0x1000, size 0x4, align 255
    float32 m_flTimeDisparityTolerance; // offset 0x1004, size 0x4, align 4
    GameTime_t m_fAttackPhaseEndTime; // offset 0x1008, size 0x4, align 255
    GameTime_t m_flPositionUpdateTime; // offset 0x100C, size 0x4, align 255
    VectorWS m_vLastPositionSent; // offset 0x1010, size 0xC, align 4
    int32 m_iTaggedAsVisibleByTeam; // offset 0x101C, size 0x4, align 4
    uint64 m_iIsControllableByPlayer64; // offset 0x1020, size 0x8, align 8
    PlayerID_t m_nControllingPlayerID; // offset 0x1028, size 0x4, align 255
    bool m_bControllableByAllPlayers; // offset 0x102C, size 0x1, align 1
    bool m_bRunAIWhenControllableByPlayer; // offset 0x102D, size 0x1, align 1
    char _pad_102E[0x2]; // offset 0x102E
    CUtlSymbolLarge m_iszUnitToAbilityMapping; // offset 0x1030, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecAbilities; // offset 0x1038, size 0x18, align 8
    uint64 m_unReservedAbilitySlots; // offset 0x1050, size 0x8, align 8
    CUtlVector< CHandle< CBaseEntity > > m_associatedEmptyAbilities; // offset 0x1058, size 0x18, align 8
    CHandle< CBaseEntity > m_hActiveAbility; // offset 0x1070, size 0x4, align 4
    VectorWS m_vCursorLocation; // offset 0x1074, size 0xC, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x1080, size 0x4, align 4
    CHandle< CBaseEntity > m_hOriginalCursorTarget; // offset 0x1084, size 0x4, align 4
    bool m_bCursorTargetingNothing; // offset 0x1088, size 0x1, align 1
    char _pad_1089[0x7]; // offset 0x1089
    CDOTA_ModifierManager m_ModifierManager; // offset 0x1090, size 0x3A0, align 255
    char _pad_1430[0x8]; // offset 0x1430
    float32 m_flInvisibilityLevel; // offset 0x1438, size 0x4, align 4
    char _pad_143C[0x4]; // offset 0x143C
    CUtlSymbolLarge m_iszMapUnitName; // offset 0x1440, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitName; // offset 0x1448, size 0x8, align 8
    int32 m_iUnitNameIndex; // offset 0x1450, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0x1454, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x1458, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x145C, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x1460, size 0x4, align 4
    bool m_bIsWaitingToSpawn; // offset 0x1464, size 0x1, align 1
    char _pad_1465[0x3]; // offset 0x1465
    int32 m_iLeashType; // offset 0x1468, size 0x4, align 4
    int32 m_iAggroType; // offset 0x146C, size 0x4, align 4
    bool m_bCreepIgnoreAggro; // offset 0x1470, size 0x1, align 1
    bool m_bCreepFirstWave; // offset 0x1471, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x1472, size 0x1, align 1
    uint8 m_nUnitLabelIndex; // offset 0x1473, size 0x1, align 1
    char _pad_1474[0x4]; // offset 0x1474
    CUtlString m_szScaleset; // offset 0x1478, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0x1480, size 0x8, align 8
    CUtlString m_strAnimationModifier; // offset 0x1488, size 0x8, align 8
    char _pad_1490[0x8]; // offset 0x1490
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1498, size 0x4, align 4
    char _pad_149C[0x4]; // offset 0x149C
    CLocomotionBase* m_locomotor; // offset 0x14A0, size 0x8, align 8
    INextBotBody* m_body; // offset 0x14A8, size 0x8, align 8
    bool m_bNeverMoveToClearSpace; // offset 0x14B0, size 0x1, align 1
    char _pad_14B1[0x3]; // offset 0x14B1
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x14B4, size 0x4, align 4
    bool m_bMustReachEachGoalEntity; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x3]; // offset 0x14B9
    VectorWS m_vInitialGoalPosition; // offset 0x14BC, size 0xC, align 4
    char _pad_14C8[0x18]; // offset 0x14C8
    CUnitOrders m_CurrentQueuedOrder; // offset 0x14E0, size 0x40, align 255
    char _pad_1520[0x18]; // offset 0x1520
    CDOTA_UnitInventory m_Inventory; // offset 0x1538, size 0xF8, align 255
    CHandle< CBaseEntity > m_hItemToDrop; // offset 0x1630, size 0x4, align 4
    DOTA_SHOP_TYPE m_iCurShop; // offset 0x1634, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastNearShop; // offset 0x1638, size 0x4, align 4
    char _pad_163C[0x4]; // offset 0x163C
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x1640, size 0x8, align 8
    bool m_bHasInventory; // offset 0x1648, size 0x1, align 1
    char _pad_1649[0x3]; // offset 0x1649
    float32 m_flBaselineModelScale; // offset 0x164C, size 0x4, align 4
    float32 m_fModelScaleMultiplier; // offset 0x1650, size 0x4, align 4
    float32 m_fModelScaleMultiplierChangeStart; // offset 0x1654, size 0x4, align 4
    GameTime_t m_fModelScaleMultiplierChangeTime; // offset 0x1658, size 0x4, align 255
    float32 m_flPreviousModelScale; // offset 0x165C, size 0x4, align 4
    float32 m_fMaxModelScaleMultiplier; // offset 0x1660, size 0x4, align 4
    bool m_bIsCamped; // offset 0x1664, size 0x1, align 1
    bool m_bIsReturningHome; // offset 0x1665, size 0x1, align 1
    bool m_bIgnoreHome; // offset 0x1666, size 0x1, align 1
    bool m_bWantsToFlee; // offset 0x1667, size 0x1, align 1
    bool m_bWakesNeutrals; // offset 0x1668, size 0x1, align 1
    bool m_bNeutralIgnore; // offset 0x1669, size 0x1, align 1
    bool m_bIdleAcquire; // offset 0x166A, size 0x1, align 1
    bool m_bIdleAcquireForceSet; // offset 0x166B, size 0x1, align 1
    bool m_bCanFollowUnseenUnits; // offset 0x166C, size 0x1, align 1
    bool m_bExpired; // offset 0x166D, size 0x1, align 1
    char _pad_166E[0x2]; // offset 0x166E
    VectorWS m_vCurrentMovementOrderDestination; // offset 0x1670, size 0xC, align 4
    VectorWS m_vPreviousMovementOrderDestination; // offset 0x167C, size 0xC, align 4
    VectorWS m_vResumePreviousMovementRequestLocation; // offset 0x1688, size 0xC, align 4
    bool m_bCurrentOrderIsMovement; // offset 0x1694, size 0x1, align 1
    bool m_bPreviousOrderIsMovement; // offset 0x1695, size 0x1, align 1
    bool m_bResumePreviousMovement; // offset 0x1696, size 0x1, align 1
    bool m_bIsPatrolling; // offset 0x1697, size 0x1, align 1
    GameTime_t m_flCreationTime; // offset 0x1698, size 0x4, align 255
    bool m_bTargetMovedOutOfRange; // offset 0x169C, size 0x1, align 1
    bool m_bChaseTargetMoves; // offset 0x169D, size 0x1, align 1
    char _pad_169E[0x2]; // offset 0x169E
    float32 m_flChaseDistance; // offset 0x16A0, size 0x4, align 4
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x16A4, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x16A8, size 0x18, align 8
    bool m_bActivityModifiersDirty; // offset 0x16C0, size 0x1, align 1
    char _pad_16C1[0x7]; // offset 0x16C1
    CUtlVector< CUtlSymbol > m_ActivityModifiersFromScript; // offset 0x16C8, size 0x18, align 8
    GameTime_t m_flBlinkDaggerTime; // offset 0x16E0, size 0x4, align 255
    float32 m_flAdditionalBattleMusicWeight; // offset 0x16E4, size 0x4, align 4
    bool m_bStolenScepter; // offset 0x16E8, size 0x1, align 1
    bool m_bHasScepterCached; // offset 0x16E9, size 0x1, align 1
    bool m_bHasShardCached; // offset 0x16EA, size 0x1, align 1
    bool m_bHasForbiddenTomeCached; // offset 0x16EB, size 0x1, align 1
    char _pad_16EC[0x4]; // offset 0x16EC
    CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // offset 0x16F0, size 0x20, align 255
    char _pad_1710[0x20]; // offset 0x1710
    GameTime_t m_flCritBashFailUntil; // offset 0x1730, size 0x4, align 255
    float32 m_flAttackTimeLostToLastTick; // offset 0x1734, size 0x4, align 4
    float32 m_flAttackTimeAtLastTick; // offset 0x1738, size 0x4, align 4
    float32 m_flCompanionDistance; // offset 0x173C, size 0x4, align 4
    bool m_bIsPartyCompanion; // offset 0x1740, size 0x1, align 1
    bool m_bCanPartyCompanionAttack; // offset 0x1741, size 0x1, align 1
    char _pad_1742[0x2]; // offset 0x1742
    CHandle< CBaseEntity > m_CompanionEntity; // offset 0x1744, size 0x4, align 4
    bool m_bFacePlayer; // offset 0x1748, size 0x1, align 1
    char _pad_1749[0x3]; // offset 0x1749
    GameTime_t m_flLastIdleChangeTime; // offset 0x174C, size 0x4, align 255
    bool m_bUseNeutralCreepBehavior; // offset 0x1750, size 0x1, align 1
    char _pad_1751[0x27]; // offset 0x1751
    bool m_bHasBuiltWearableSpawnList; // offset 0x1778, size 0x1, align 1
    char _pad_1779[0x3]; // offset 0x1779
    GameTick_t[15] m_nFoWFadeStartTime; // offset 0x177C, size 0x3C, align 4
    int32 m_nFOWVisibilityRadius; // offset 0x17B8, size 0x4, align 4
    VectorWS m_vFOWOriginOverride; // offset 0x17BC, size 0xC, align 4
    int32 m_iTeamViewerID; // offset 0x17C8, size 0x4, align 4
    int32 m_nAttackHeightBonus; // offset 0x17CC, size 0x4, align 4
    bool m_bShouldDrawPath; // offset 0x17D0, size 0x1, align 1
    char _pad_17D1[0x3]; // offset 0x17D1
    uint32 m_nScepterUpgradeID; // offset 0x17D4, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x17D8, size 0x4, align 4
    bool m_bHasConsideredNPCController; // offset 0x17DC, size 0x1, align 1
    char _pad_17DD[0xB]; // offset 0x17DD
    CUtlString m_strLastKillerAbility; // offset 0x17E8, size 0x8, align 8
    int32 m_anglediff; // offset 0x17F0, size 0x4, align 4
    int32 m_NetworkActivity; // offset 0x17F4, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x17F8, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x17FC, size 0x1, align 1
    char _pad_17FD[0x3]; // offset 0x17FD
    float32 m_flStartSequenceCycle; // offset 0x1800, size 0x4, align 4
    bool m_bMidLoading; // offset 0x1804, size 0x1, align 1
    char _pad_1805[0x3]; // offset 0x1805
    CHandle< CDOTA_ScriptedSpawner > m_hTutorialSpawner; // offset 0x1808, size 0x4, align 4
    char _pad_180C[0x4]; // offset 0x180C
    CountdownTimer m_AngerCooldownTimer; // offset 0x1810, size 0x18, align 8
    int32 m_iProjectileMoveSpeed; // offset 0x1828, size 0x4, align 4
    char _pad_182C[0x4]; // offset 0x182C
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0x1830, size 0x8, align 8
    int32 m_nPoseParameterTurn; // offset 0x1838, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x183C, size 0x4, align 4
    float32 m_flLean; // offset 0x1840, size 0x4, align 4
    float32 m_flRun; // offset 0x1844, size 0x4, align 4
    char[256] m_CustomHealthLabel; // offset 0x1848, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1948, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x194C, size 0x1, align 1
    char _pad_194D[0x3]; // offset 0x194D
    item_definition_index_t m_nWearableDefIndex; // offset 0x1950, size 0x4, align 255
    int8 m_nArcanaLevel; // offset 0x1954, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1955, size 0x1, align 1
    char _pad_1956[0x2]; // offset 0x1956
    Color m_defaultColorGemColor; // offset 0x1958, size 0x4, align 4
    bool m_bDisableDamageDisplay; // offset 0x195C, size 0x1, align 1
    char _pad_195D[0x3]; // offset 0x195D
    Color m_gibTintColor; // offset 0x1960, size 0x4, align 4
    float32 m_flPathfindingSearchDepthScale; // offset 0x1964, size 0x4, align 4
    CUtlVector< int32 > m_ActivitiesStarted; // offset 0x1968, size 0x18, align 8
    CHandle< CBaseEntity > m_hIllusionOriginal; // offset 0x1980, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDirectionalRangedFakeTarget; // offset 0x1984, size 0x4, align 4
    char _pad_1988[0x28]; // offset 0x1988
    bool m_bShouldComputeRemainingPathLength; // offset 0x19B0, size 0x1, align 1
    char _pad_19B1[0x3]; // offset 0x19B1
    float32 m_flRemainingPathLength; // offset 0x19B4, size 0x4, align 4
    char _pad_19B8[0x28]; // offset 0x19B8
    CUtlVector< CHandle< CBaseEntity > > m_AbilitiesPendingDelete; // offset 0x19E0, size 0x18, align 8
    float32 m_flPrevHealthThinkRegen; // offset 0x19F8, size 0x4, align 4
    GameTime_t m_prevRegenChangeTime; // offset 0x19FC, size 0x4, align 255
    float32 m_flAccumulatedHealthRegenSinceLastLogged; // offset 0x1A00, size 0x4, align 4
    char _pad_1A04[0x1C]; // offset 0x1A04
    float32 m_flBuffEffectivenessOverride; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x4]; // offset 0x1A24
};
