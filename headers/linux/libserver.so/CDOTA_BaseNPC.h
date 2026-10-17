#pragma once

class CDOTA_BaseNPC : public NextBotCombatCharacter /*0x0*/  // sizeof 0x1C78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCD0]; // offset 0x0
    bool m_bPledgedOfrenda; // offset 0xCD0, size 0x1, align 1
    char _pad_0CD1[0x3]; // offset 0xCD1
    uint32 m_iUnitType; // offset 0xCD4, size 0x4, align 4
    Color m_colorGemColor; // offset 0xCD8, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xCDC, size 0x1, align 1
    bool m_bSelectionRingVisible; // offset 0xCDD, size 0x1, align 1
    char _pad_0CDE[0xA]; // offset 0xCDE
    CUtlSymbolLarge m_iszBaseClass; // offset 0xCE8, size 0x8, align 8
    int32 m_iStartingMaxHealth; // offset 0xCF0, size 0x4, align 4
    int32 m_iStartingMaxMana; // offset 0xCF4, size 0x4, align 4
    int32 m_iStartingMana; // offset 0xCF8, size 0x4, align 4
    int32 m_iCurrentLevel; // offset 0xCFC, size 0x4, align 4
    float32 m_flMana; // offset 0xD00, size 0x4, align 4
    float32 m_flBaseMaxMana; // offset 0xD04, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xD08, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xD0C, size 0x4, align 4
    float32 m_flBaseMaxHealth; // offset 0xD10, size 0x4, align 4
    float32 m_flHealthThinkRegen; // offset 0xD14, size 0x4, align 4
    int32 m_nHealthBarOffsetOverride; // offset 0xD18, size 0x4, align 4
    int32 m_nHealthBarOffset; // offset 0xD1C, size 0x4, align 4
    bool m_bIsPhantom; // offset 0xD20, size 0x1, align 1
    bool m_bIsAncient; // offset 0xD21, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xD22, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xD23, size 0x1, align 1
    bool m_bAutoAttacksByDefault; // offset 0xD24, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xD25, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xD26, size 0x1, align 1
    bool m_bCanRespawn; // offset 0xD27, size 0x1, align 1
    bool m_bIsClone; // offset 0xD28, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xD29, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xD2A, size 0x1, align 1
    bool m_bIsPlayingSingleForcedActivity; // offset 0xD2B, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xD2C, size 0x1, align 1
    char _pad_0D2D[0x3]; // offset 0xD2D
    int32 m_iBKBChargesUsed; // offset 0xD30, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xD34, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xD38, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xD3C, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xD40, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xD44, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xD48, size 0x4, align 4
    bool m_bIsMoving; // offset 0xD4C, size 0x1, align 1
    char _pad_0D4D[0x1BB]; // offset 0xD4D
    float32 m_flChannelMultiplier; // offset 0xF08, size 0x4, align 4
    bool m_bCanUseWards; // offset 0xF0C, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0xF0D, size 0x1, align 1
    char _pad_0F0E[0x2]; // offset 0xF0E
    PlayerID_t m_iLastAbilityPlayer; // offset 0xF10, size 0x4, align 255
    bool m_bIsPhantomBlocker; // offset 0xF14, size 0x1, align 1
    bool m_bBlocksCreepSpawn; // offset 0xF15, size 0x1, align 1
    bool m_bCanSellItems; // offset 0xF16, size 0x1, align 1
    char _pad_0F17[0x1]; // offset 0xF17
    CHandle< CDOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0xF18, size 0x4, align 4
    bool m_bTrackDamageTaken; // offset 0xF1C, size 0x1, align 1
    char _pad_0F1D[0x3]; // offset 0xF1D
    GameTick_t m_nNextRegenThink; // offset 0xF20, size 0x4, align 255
    GameTick_t m_nNextModifierThink; // offset 0xF24, size 0x4, align 255
    GameTick_t m_nNextModelScaleThink; // offset 0xF28, size 0x4, align 255
    GameTick_t m_nNextUnitThink; // offset 0xF2C, size 0x4, align 255
    float32 m_flManaRegen; // offset 0xF30, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0xF34, size 0x4, align 4
    int64 m_nTotalDamageTaken; // offset 0xF38, size 0x8, align 8
    float32 m_flHealthRegenCounter; // offset 0xF40, size 0x4, align 4
    float32 m_flManaRegenCounter; // offset 0xF44, size 0x4, align 4
    float32 m_flAccumulatedHeal; // offset 0xF48, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xF4C, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xF50, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xF54, size 0x4, align 4
    int32 m_iAttackRange; // offset 0xF58, size 0x4, align 4
    int32 m_iAttackRangeBuffer; // offset 0xF5C, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xF60, size 0x4, align 4
    float32 m_flTurnRate; // offset 0xF64, size 0x4, align 4
    int32 m_iHasAggressiveStance; // offset 0xF68, size 0x4, align 4
    bool m_bInAggressiveStance; // offset 0xF6C, size 0x1, align 1
    bool m_bInInjuredAggressiveStance; // offset 0xF6D, size 0x1, align 1
    char _pad_0F6E[0x2]; // offset 0xF6E
    float32 m_flFollowRange; // offset 0xF70, size 0x4, align 4
    int32 m_iAcquisitionRange; // offset 0xF74, size 0x4, align 4
    float32 m_flAttackAnimationPoint; // offset 0xF78, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xF7C, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xF80, size 0x4, align 4
    GameTime_t m_flTauntCooldown; // offset 0xF84, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xF88, size 0x4, align 255
    float32 m_fRevealRadius; // offset 0xF8C, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xF90, size 0x4, align 4
    ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // offset 0xF94, size 0x4, align 4
    CUtlSymbolLarge m_iszParticleFolder; // offset 0xF98, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0xFA0, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0xFA8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0xFB0, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0xFB8, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimationModifier; // offset 0xFC0, size 0x8, align 8
    char _pad_0FC8[0x8]; // offset 0xFC8
    float32 m_flBaseAttackTime; // offset 0xFD0, size 0x4, align 4
    int32 m_iDayTimeVisionRange; // offset 0xFD4, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0xFD8, size 0x4, align 4
    float32 m_fBotAttackDesire; // offset 0xFDC, size 0x4, align 4
    int32 m_iUnitRelationshipClass; // offset 0xFE0, size 0x4, align 4
    float32 m_flPhysicalArmorValue; // offset 0xFE4, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0xFE8, size 0x4, align 4
    int32 m_iTeamName; // offset 0xFEC, size 0x4, align 4
    int32 m_iAttackCapabilities; // offset 0xFF0, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0xFF4, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0xFF8, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0xFFC, size 0x4, align 4
    int32 m_iXPBounty; // offset 0x1000, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x1004, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x1008, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x100C, size 0x4, align 4
    PlayerID_t m_nFarmClaimPlayerID; // offset 0x1010, size 0x4, align 255
    PlayerID_t m_nPlayerOwnerID; // offset 0x1014, size 0x4, align 255
    CUtlSymbolLarge[40] m_iszAbilityList; // offset 0x1018, size 0x140, align 8
    int32 m_iAttackDamageType; // offset 0x1158, size 0x4, align 4
    bool m_bIsIdle; // offset 0x115C, size 0x1, align 1
    bool m_bHold; // offset 0x115D, size 0x1, align 1
    bool m_bWasKilledPassively; // offset 0x115E, size 0x1, align 1
    char _pad_115F[0x1]; // offset 0x115F
    CountdownTimer m_AngerTimer; // offset 0x1160, size 0x18, align 8
    CountdownTimer m_AlertTimer; // offset 0x1178, size 0x18, align 8
    CHandle< CBaseEntity > m_hAngerTarget; // offset 0x1190, size 0x4, align 4
    CHandle< CBaseEntity > m_hAlertTarget; // offset 0x1194, size 0x4, align 4
    CHandle< CBaseEntity > m_hForceAttackTarget; // offset 0x1198, size 0x4, align 4
    bool m_bAllowAllyForceAttack; // offset 0x119C, size 0x1, align 1
    char _pad_119D[0x3]; // offset 0x119D
    VectorWS m_vTargetLastKnownPosition; // offset 0x11A0, size 0xC, align 4
    char _pad_11AC[0x1C]; // offset 0x11AC
    GameTime_t m_flLastDamageTime; // offset 0x11C8, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x11CC, size 0x4, align 255
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x11D0, size 0x4, align 255
    GameTime_t m_flLastTeleportTime; // offset 0x11D4, size 0x4, align 255
    uint64 m_nUnitState64; // offset 0x11D8, size 0x8, align 8
    GameTime_t[15] m_vLastVisibilityChange; // offset 0x11E0, size 0x3C, align 4
    char _pad_121C[0x24]; // offset 0x121C
    bool m_bFirstSpawn; // offset 0x1240, size 0x1, align 1
    char _pad_1241[0x3]; // offset 0x1241
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x1244, size 0x4, align 4
    CHandle< CBaseEntity > m_hAggroTarget; // offset 0x1248, size 0x4, align 4
    CHandle< CBaseEntity > m_hCommandAttackTarget; // offset 0x124C, size 0x4, align 4
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x1250, size 0x8, align 8
    int8 m_nUnitModelVariant; // offset 0x1258, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x1259, size 0x1, align 1
    bool m_bPseudoQueueOrders; // offset 0x125A, size 0x1, align 1
    bool m_bCastLocked; // offset 0x125B, size 0x1, align 1
    char _pad_125C[0x1C]; // offset 0x125C
    GameTime_t m_flAttackRegulator; // offset 0x1278, size 0x4, align 255
    float32 m_flTimeDisparityTolerance; // offset 0x127C, size 0x4, align 4
    GameTime_t m_fAttackPhaseEndTime; // offset 0x1280, size 0x4, align 255
    GameTime_t m_flPositionUpdateTime; // offset 0x1284, size 0x4, align 255
    VectorWS m_vLastPositionSent; // offset 0x1288, size 0xC, align 4
    int32 m_iTaggedAsVisibleByTeam; // offset 0x1294, size 0x4, align 4
    uint64 m_iIsControllableByPlayer64; // offset 0x1298, size 0x8, align 8
    PlayerID_t m_nControllingPlayerID; // offset 0x12A0, size 0x4, align 255
    bool m_bControllableByAllPlayers; // offset 0x12A4, size 0x1, align 1
    bool m_bRunAIWhenControllableByPlayer; // offset 0x12A5, size 0x1, align 1
    char _pad_12A6[0x2]; // offset 0x12A6
    CUtlSymbolLarge m_iszUnitToAbilityMapping; // offset 0x12A8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecAbilities; // offset 0x12B0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_associatedEmptyAbilities; // offset 0x12C8, size 0x18, align 8
    CHandle< CBaseEntity > m_hActiveAbility; // offset 0x12E0, size 0x4, align 4
    VectorWS m_vCursorLocation; // offset 0x12E4, size 0xC, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x12F0, size 0x4, align 4
    CHandle< CBaseEntity > m_hOriginalCursorTarget; // offset 0x12F4, size 0x4, align 4
    bool m_bCursorTargetingNothing; // offset 0x12F8, size 0x1, align 1
    char _pad_12F9[0x7]; // offset 0x12F9
    CDOTA_ModifierManager m_ModifierManager; // offset 0x1300, size 0x390, align 255
    char _pad_1690[0x8]; // offset 0x1690
    float32 m_flInvisibilityLevel; // offset 0x1698, size 0x4, align 4
    char _pad_169C[0x4]; // offset 0x169C
    CUtlSymbolLarge m_iszMapUnitName; // offset 0x16A0, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitName; // offset 0x16A8, size 0x8, align 8
    int32 m_iUnitNameIndex; // offset 0x16B0, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0x16B4, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x16B8, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x16BC, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x16C0, size 0x4, align 4
    bool m_bIsWaitingToSpawn; // offset 0x16C4, size 0x1, align 1
    char _pad_16C5[0x3]; // offset 0x16C5
    int32 m_iLeashType; // offset 0x16C8, size 0x4, align 4
    int32 m_iAggroType; // offset 0x16CC, size 0x4, align 4
    bool m_bCreepIgnoreAggro; // offset 0x16D0, size 0x1, align 1
    bool m_bCreepFirstWave; // offset 0x16D1, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x16D2, size 0x1, align 1
    uint8 m_nUnitLabelIndex; // offset 0x16D3, size 0x1, align 1
    char _pad_16D4[0x4]; // offset 0x16D4
    CUtlString m_szScaleset; // offset 0x16D8, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0x16E0, size 0x8, align 8
    CUtlString m_strAnimationModifier; // offset 0x16E8, size 0x8, align 8
    char _pad_16F0[0x8]; // offset 0x16F0
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0x4]; // offset 0x16FC
    CLocomotionBase* m_locomotor; // offset 0x1700, size 0x8, align 8
    INextBotBody* m_body; // offset 0x1708, size 0x8, align 8
    bool m_bNeverMoveToClearSpace; // offset 0x1710, size 0x1, align 1
    char _pad_1711[0x3]; // offset 0x1711
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x1714, size 0x4, align 4
    bool m_bMustReachEachGoalEntity; // offset 0x1718, size 0x1, align 1
    char _pad_1719[0x3]; // offset 0x1719
    VectorWS m_vInitialGoalPosition; // offset 0x171C, size 0xC, align 4
    char _pad_1728[0x18]; // offset 0x1728
    CUnitOrders m_CurrentQueuedOrder; // offset 0x1740, size 0x40, align 255
    char _pad_1780[0x18]; // offset 0x1780
    CDOTA_UnitInventory m_Inventory; // offset 0x1798, size 0xF8, align 255
    CHandle< CBaseEntity > m_hItemToDrop; // offset 0x1890, size 0x4, align 4
    DOTA_SHOP_TYPE m_iCurShop; // offset 0x1894, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastNearShop; // offset 0x1898, size 0x4, align 4
    char _pad_189C[0x4]; // offset 0x189C
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x18A0, size 0x8, align 8
    bool m_bHasInventory; // offset 0x18A8, size 0x1, align 1
    char _pad_18A9[0x3]; // offset 0x18A9
    float32 m_flBaselineModelScale; // offset 0x18AC, size 0x4, align 4
    float32 m_fModelScaleMultiplier; // offset 0x18B0, size 0x4, align 4
    float32 m_fModelScaleMultiplierChangeStart; // offset 0x18B4, size 0x4, align 4
    GameTime_t m_fModelScaleMultiplierChangeTime; // offset 0x18B8, size 0x4, align 255
    float32 m_flPreviousModelScale; // offset 0x18BC, size 0x4, align 4
    float32 m_fMaxModelScaleMultiplier; // offset 0x18C0, size 0x4, align 4
    bool m_bIsCamped; // offset 0x18C4, size 0x1, align 1
    bool m_bIsReturningHome; // offset 0x18C5, size 0x1, align 1
    bool m_bIgnoreHome; // offset 0x18C6, size 0x1, align 1
    bool m_bWantsToFlee; // offset 0x18C7, size 0x1, align 1
    bool m_bWakesNeutrals; // offset 0x18C8, size 0x1, align 1
    bool m_bNeutralIgnore; // offset 0x18C9, size 0x1, align 1
    bool m_bIdleAcquire; // offset 0x18CA, size 0x1, align 1
    bool m_bIdleAcquireForceSet; // offset 0x18CB, size 0x1, align 1
    bool m_bCanFollowUnseenUnits; // offset 0x18CC, size 0x1, align 1
    bool m_bExpired; // offset 0x18CD, size 0x1, align 1
    char _pad_18CE[0x2]; // offset 0x18CE
    VectorWS m_vCurrentMovementOrderDestination; // offset 0x18D0, size 0xC, align 4
    VectorWS m_vPreviousMovementOrderDestination; // offset 0x18DC, size 0xC, align 4
    VectorWS m_vResumePreviousMovementRequestLocation; // offset 0x18E8, size 0xC, align 4
    bool m_bCurrentOrderIsMovement; // offset 0x18F4, size 0x1, align 1
    bool m_bPreviousOrderIsMovement; // offset 0x18F5, size 0x1, align 1
    bool m_bResumePreviousMovement; // offset 0x18F6, size 0x1, align 1
    bool m_bIsPatrolling; // offset 0x18F7, size 0x1, align 1
    GameTime_t m_flCreationTime; // offset 0x18F8, size 0x4, align 255
    bool m_bTargetMovedOutOfRange; // offset 0x18FC, size 0x1, align 1
    bool m_bChaseTargetMoves; // offset 0x18FD, size 0x1, align 1
    char _pad_18FE[0x2]; // offset 0x18FE
    float32 m_flChaseDistance; // offset 0x1900, size 0x4, align 4
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x1904, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1908, size 0x18, align 8
    bool m_bActivityModifiersDirty; // offset 0x1920, size 0x1, align 1
    char _pad_1921[0x7]; // offset 0x1921
    CUtlVector< CUtlSymbol > m_ActivityModifiersFromScript; // offset 0x1928, size 0x18, align 8
    GameTime_t m_flBlinkDaggerTime; // offset 0x1940, size 0x4, align 255
    float32 m_flAdditionalBattleMusicWeight; // offset 0x1944, size 0x4, align 4
    bool m_bStolenScepter; // offset 0x1948, size 0x1, align 1
    bool m_bHasScepterCached; // offset 0x1949, size 0x1, align 1
    bool m_bHasShardCached; // offset 0x194A, size 0x1, align 1
    bool m_bHasForbiddenTomeCached; // offset 0x194B, size 0x1, align 1
    char _pad_194C[0x4]; // offset 0x194C
    CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // offset 0x1950, size 0x20, align 255
    char _pad_1970[0x20]; // offset 0x1970
    GameTime_t m_flCritBashFailUntil; // offset 0x1990, size 0x4, align 255
    float32 m_flAttackTimeLostToLastTick; // offset 0x1994, size 0x4, align 4
    float32 m_flAttackTimeAtLastTick; // offset 0x1998, size 0x4, align 4
    float32 m_flCompanionDistance; // offset 0x199C, size 0x4, align 4
    bool m_bIsPartyCompanion; // offset 0x19A0, size 0x1, align 1
    bool m_bCanPartyCompanionAttack; // offset 0x19A1, size 0x1, align 1
    char _pad_19A2[0x2]; // offset 0x19A2
    CHandle< CBaseEntity > m_CompanionEntity; // offset 0x19A4, size 0x4, align 4
    bool m_bFacePlayer; // offset 0x19A8, size 0x1, align 1
    char _pad_19A9[0x3]; // offset 0x19A9
    GameTime_t m_flLastIdleChangeTime; // offset 0x19AC, size 0x4, align 255
    bool m_bUseNeutralCreepBehavior; // offset 0x19B0, size 0x1, align 1
    char _pad_19B1[0x27]; // offset 0x19B1
    bool m_bHasBuiltWearableSpawnList; // offset 0x19D8, size 0x1, align 1
    char _pad_19D9[0x3]; // offset 0x19D9
    GameTick_t[15] m_nFoWFadeStartTime; // offset 0x19DC, size 0x3C, align 4
    int32 m_nFOWVisibilityRadius; // offset 0x1A18, size 0x4, align 4
    VectorWS m_vFOWOriginOverride; // offset 0x1A1C, size 0xC, align 4
    int32 m_iTeamViewerID; // offset 0x1A28, size 0x4, align 4
    int32 m_nAttackHeightBonus; // offset 0x1A2C, size 0x4, align 4
    bool m_bShouldDrawPath; // offset 0x1A30, size 0x1, align 1
    char _pad_1A31[0x3]; // offset 0x1A31
    uint32 m_nScepterUpgradeID; // offset 0x1A34, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x1A38, size 0x4, align 4
    char _pad_1A3C[0x4]; // offset 0x1A3C
    CUtlString m_strLastKillerAbility; // offset 0x1A40, size 0x8, align 8
    int32 m_anglediff; // offset 0x1A48, size 0x4, align 4
    int32 m_NetworkActivity; // offset 0x1A4C, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1A50, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x1A54, size 0x1, align 1
    char _pad_1A55[0x3]; // offset 0x1A55
    float32 m_flStartSequenceCycle; // offset 0x1A58, size 0x4, align 4
    bool m_bMidLoading; // offset 0x1A5C, size 0x1, align 1
    char _pad_1A5D[0x3]; // offset 0x1A5D
    CHandle< CDOTA_ScriptedSpawner > m_hTutorialSpawner; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CountdownTimer m_AngerCooldownTimer; // offset 0x1A68, size 0x18, align 8
    int32 m_iProjectileMoveSpeed; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0x1A88, size 0x8, align 8
    int32 m_nPoseParameterTurn; // offset 0x1A90, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x1A94, size 0x4, align 4
    float32 m_flLean; // offset 0x1A98, size 0x4, align 4
    float32 m_flRun; // offset 0x1A9C, size 0x4, align 4
    char[256] m_CustomHealthLabel; // offset 0x1AA0, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1BA0, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1BA4, size 0x1, align 1
    char _pad_1BA5[0x3]; // offset 0x1BA5
    item_definition_index_t m_nWearableDefIndex; // offset 0x1BA8, size 0x4, align 255
    int8 m_nArcanaLevel; // offset 0x1BAC, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1BAD, size 0x1, align 1
    char _pad_1BAE[0x2]; // offset 0x1BAE
    Color m_defaultColorGemColor; // offset 0x1BB0, size 0x4, align 4
    bool m_bDisableDamageDisplay; // offset 0x1BB4, size 0x1, align 1
    char _pad_1BB5[0x3]; // offset 0x1BB5
    Color m_gibTintColor; // offset 0x1BB8, size 0x4, align 4
    float32 m_flPathfindingSearchDepthScale; // offset 0x1BBC, size 0x4, align 4
    CUtlVector< int32 > m_ActivitiesStarted; // offset 0x1BC0, size 0x18, align 8
    CHandle< CBaseEntity > m_hIllusionOriginal; // offset 0x1BD8, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDirectionalRangedFakeTarget; // offset 0x1BDC, size 0x4, align 4
    char _pad_1BE0[0x28]; // offset 0x1BE0
    bool m_bShouldComputeRemainingPathLength; // offset 0x1C08, size 0x1, align 1
    char _pad_1C09[0x3]; // offset 0x1C09
    float32 m_flRemainingPathLength; // offset 0x1C0C, size 0x4, align 4
    char _pad_1C10[0x28]; // offset 0x1C10
    CUtlVector< CHandle< CBaseEntity > > m_AbilitiesPendingDelete; // offset 0x1C38, size 0x18, align 8
    float32 m_flPrevHealthThinkRegen; // offset 0x1C50, size 0x4, align 4
    GameTime_t m_prevRegenChangeTime; // offset 0x1C54, size 0x4, align 255
    float32 m_flAccumulatedHealthRegenSinceLastLogged; // offset 0x1C58, size 0x4, align 4
    char _pad_1C5C[0x1C]; // offset 0x1C5C
};
