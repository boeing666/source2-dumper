#pragma once

class CDOTA_BaseNPC : public NextBotCombatCharacter /*0x0*/  // sizeof 0x1D10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    bool m_bPledgedOfrenda; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x3]; // offset 0xD39
    uint32 m_iUnitType; // offset 0xD3C, size 0x4, align 4
    Color m_colorGemColor; // offset 0xD40, size 0x4, align 4
    bool m_bHasColorGem; // offset 0xD44, size 0x1, align 1
    bool m_bSelectionRingVisible; // offset 0xD45, size 0x1, align 1
    char _pad_0D46[0xA]; // offset 0xD46
    CUtlSymbolLarge m_iszBaseClass; // offset 0xD50, size 0x8, align 8
    int32 m_iStartingMaxHealth; // offset 0xD58, size 0x4, align 4
    int32 m_iStartingMaxMana; // offset 0xD5C, size 0x4, align 4
    int32 m_iStartingMana; // offset 0xD60, size 0x4, align 4
    int32 m_iCurrentLevel; // offset 0xD64, size 0x4, align 4
    float32 m_flMana; // offset 0xD68, size 0x4, align 4
    float32 m_flBaseMaxMana; // offset 0xD6C, size 0x4, align 4
    float32 m_flMaxMana; // offset 0xD70, size 0x4, align 4
    float32 m_flManaThinkRegen; // offset 0xD74, size 0x4, align 4
    float32 m_flBaseMaxHealth; // offset 0xD78, size 0x4, align 4
    float32 m_flHealthThinkRegen; // offset 0xD7C, size 0x4, align 4
    int32 m_nHealthBarOffsetOverride; // offset 0xD80, size 0x4, align 4
    int32 m_nHealthBarOffset; // offset 0xD84, size 0x4, align 4
    bool m_bIsPhantom; // offset 0xD88, size 0x1, align 1
    bool m_bIsAncient; // offset 0xD89, size 0x1, align 1
    bool m_bIsBossCreature; // offset 0xD8A, size 0x1, align 1
    bool m_bIsNeutralUnitType; // offset 0xD8B, size 0x1, align 1
    bool m_bAutoAttacksByDefault; // offset 0xD8C, size 0x1, align 1
    bool m_bIsSummoned; // offset 0xD8D, size 0x1, align 1
    bool m_bCanBeDominated; // offset 0xD8E, size 0x1, align 1
    bool m_bCanRespawn; // offset 0xD8F, size 0x1, align 1
    bool m_bIsClone; // offset 0xD90, size 0x1, align 1
    bool m_bConsideredHero; // offset 0xD91, size 0x1, align 1
    bool m_bCountsAsCreepForLifesteal; // offset 0xD92, size 0x1, align 1
    bool m_bUsesConstantGesture; // offset 0xD93, size 0x1, align 1
    bool m_bIsPlayingSingleForcedActivity; // offset 0xD94, size 0x1, align 1
    bool m_bHasUpgradeableAbilities; // offset 0xD95, size 0x1, align 1
    char _pad_0D96[0x2]; // offset 0xD96
    int32 m_iBKBChargesUsed; // offset 0xD98, size 0x4, align 4
    int32 m_iAeonChargesUsed; // offset 0xD9C, size 0x4, align 4
    int32 m_iRefresherChargesUsed; // offset 0xDA0, size 0x4, align 4
    GameTime_t m_flRefresherUseTime; // offset 0xDA4, size 0x4, align 255
    float32 m_flRefresherLastCooldown; // offset 0xDA8, size 0x4, align 4
    GameTime_t m_flLastDealtDamageTime; // offset 0xDAC, size 0x4, align 255
    int32 m_iBotDebugData; // offset 0xDB0, size 0x4, align 4
    bool m_bIsMoving; // offset 0xDB4, size 0x1, align 1
    char _pad_0DB5[0x1BB]; // offset 0xDB5
    float32 m_flChannelMultiplier; // offset 0xF70, size 0x4, align 4
    bool m_bCanUseWards; // offset 0xF74, size 0x1, align 1
    bool m_bCanUseAllItems; // offset 0xF75, size 0x1, align 1
    char _pad_0F76[0x2]; // offset 0xF76
    PlayerID_t m_iLastAbilityPlayer; // offset 0xF78, size 0x4, align 255
    bool m_bIsPhantomBlocker; // offset 0xF7C, size 0x1, align 1
    bool m_bBlocksCreepSpawn; // offset 0xF7D, size 0x1, align 1
    bool m_bCanSellItems; // offset 0xF7E, size 0x1, align 1
    char _pad_0F7F[0x1]; // offset 0xF7F
    CHandle< CDOTA_NeutralSpawner > m_hNeutralSpawner; // offset 0xF80, size 0x4, align 4
    bool m_bTrackDamageTaken; // offset 0xF84, size 0x1, align 1
    char _pad_0F85[0x3]; // offset 0xF85
    GameTick_t m_nNextRegenThink; // offset 0xF88, size 0x4, align 255
    GameTick_t m_nNextModifierThink; // offset 0xF8C, size 0x4, align 255
    GameTick_t m_nNextModelScaleThink; // offset 0xF90, size 0x4, align 255
    GameTick_t m_nNextUnitThink; // offset 0xF94, size 0x4, align 255
    float32 m_flManaRegen; // offset 0xF98, size 0x4, align 4
    float32 m_flHealthRegen; // offset 0xF9C, size 0x4, align 4
    int64 m_nTotalDamageTaken; // offset 0xFA0, size 0x8, align 8
    float32 m_flHealthRegenCounter; // offset 0xFA8, size 0x4, align 4
    float32 m_flHealthDrainCounter; // offset 0xFAC, size 0x4, align 4
    float32 m_flManaRegenCounter; // offset 0xFB0, size 0x4, align 4
    float32 m_flAccumulatedHeal; // offset 0xFB4, size 0x4, align 4
    int32 m_iBaseAttackSpeed; // offset 0xFB8, size 0x4, align 4
    int32 m_iBaseDamageMin; // offset 0xFBC, size 0x4, align 4
    int32 m_iBaseDamageMax; // offset 0xFC0, size 0x4, align 4
    int32 m_iAttackRange; // offset 0xFC4, size 0x4, align 4
    int32 m_iAttackRangeBuffer; // offset 0xFC8, size 0x4, align 4
    int32 m_iMoveSpeed; // offset 0xFCC, size 0x4, align 4
    float32 m_flTurnRate; // offset 0xFD0, size 0x4, align 4
    int32 m_iHasAggressiveStance; // offset 0xFD4, size 0x4, align 4
    bool m_bInAggressiveStance; // offset 0xFD8, size 0x1, align 1
    bool m_bInInjuredAggressiveStance; // offset 0xFD9, size 0x1, align 1
    char _pad_0FDA[0x2]; // offset 0xFDA
    float32 m_flFollowRange; // offset 0xFDC, size 0x4, align 4
    int32 m_iAcquisitionRange; // offset 0xFE0, size 0x4, align 4
    float32 m_flAttackAnimationPoint; // offset 0xFE4, size 0x4, align 4
    float32 m_flHullRadius; // offset 0xFE8, size 0x4, align 4
    float32 m_flCollisionPadding; // offset 0xFEC, size 0x4, align 4
    GameTime_t m_flTauntCooldown; // offset 0xFF0, size 0x4, align 255
    GameTime_t m_flTauntCooldown2; // offset 0xFF4, size 0x4, align 255
    float32 m_fRevealRadius; // offset 0xFF8, size 0x4, align 4
    float32 m_flProjectileCollisionSize; // offset 0xFFC, size 0x4, align 4
    ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // offset 0x1000, size 0x4, align 4
    char _pad_1004[0x4]; // offset 0x1004
    CUtlSymbolLarge m_iszParticleFolder; // offset 0x1008, size 0x8, align 8
    CUtlSymbolLarge m_iszGameSoundsFile; // offset 0x1010, size 0x8, align 8
    CUtlSymbolLarge m_iszVoiceFile; // offset 0x1018, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundSet; // offset 0x1020, size 0x8, align 8
    CUtlSymbolLarge m_iszSelectionGroup; // offset 0x1028, size 0x8, align 8
    CUtlSymbolLarge m_iszAnimationModifier; // offset 0x1030, size 0x8, align 8
    char _pad_1038[0x8]; // offset 0x1038
    float32 m_flBaseAttackTime; // offset 0x1040, size 0x4, align 4
    int32 m_iDayTimeVisionRange; // offset 0x1044, size 0x4, align 4
    int32 m_iNightTimeVisionRange; // offset 0x1048, size 0x4, align 4
    float32 m_fBotAttackDesire; // offset 0x104C, size 0x4, align 4
    int32 m_iUnitRelationshipClass; // offset 0x1050, size 0x4, align 4
    float32 m_flPhysicalArmorValue; // offset 0x1054, size 0x4, align 4
    float32 m_flMagicalResistanceValue; // offset 0x1058, size 0x4, align 4
    int32 m_iTeamName; // offset 0x105C, size 0x4, align 4
    int32 m_iAttackCapabilities; // offset 0x1060, size 0x4, align 4
    int32 m_iSpecialAbility; // offset 0x1064, size 0x4, align 4
    int32 m_iMoveCapabilities; // offset 0x1068, size 0x4, align 4
    int32 m_iOriginalAttackCapabilities; // offset 0x106C, size 0x4, align 4
    int32 m_iXPBounty; // offset 0x1070, size 0x4, align 4
    int32 m_iXPBountyExtra; // offset 0x1074, size 0x4, align 4
    int32 m_iGoldBountyMin; // offset 0x1078, size 0x4, align 4
    int32 m_iGoldBountyMax; // offset 0x107C, size 0x4, align 4
    PlayerID_t m_nFarmClaimPlayerID; // offset 0x1080, size 0x4, align 255
    PlayerID_t m_nPlayerOwnerID; // offset 0x1084, size 0x4, align 255
    CUtlSymbolLarge[40] m_iszAbilityList; // offset 0x1088, size 0x140, align 8
    int32 m_iAttackDamageType; // offset 0x11C8, size 0x4, align 4
    bool m_bIsIdle; // offset 0x11CC, size 0x1, align 1
    bool m_bHold; // offset 0x11CD, size 0x1, align 1
    bool m_bWasKilledPassively; // offset 0x11CE, size 0x1, align 1
    char _pad_11CF[0x1]; // offset 0x11CF
    CountdownTimer m_AngerTimer; // offset 0x11D0, size 0x18, align 8
    CountdownTimer m_AlertTimer; // offset 0x11E8, size 0x18, align 8
    CHandle< CBaseEntity > m_hAngerTarget; // offset 0x1200, size 0x4, align 4
    CHandle< CBaseEntity > m_hAlertTarget; // offset 0x1204, size 0x4, align 4
    CHandle< CBaseEntity > m_hForceAttackTarget; // offset 0x1208, size 0x4, align 4
    bool m_bAllowAllyForceAttack; // offset 0x120C, size 0x1, align 1
    char _pad_120D[0x3]; // offset 0x120D
    VectorWS m_vTargetLastKnownPosition; // offset 0x1210, size 0xC, align 4
    char _pad_121C[0x1C]; // offset 0x121C
    GameTime_t m_flLastDamageTime; // offset 0x1238, size 0x4, align 255
    GameTime_t m_flLastAttackTime; // offset 0x123C, size 0x4, align 255
    GameTime_t m_flTimeSinceLastAbilityNag; // offset 0x1240, size 0x4, align 255
    GameTime_t m_flLastTeleportTime; // offset 0x1244, size 0x4, align 255
    uint64 m_nUnitState64; // offset 0x1248, size 0x8, align 8
    GameTime_t[15] m_vLastVisibilityChange; // offset 0x1250, size 0x3C, align 4
    char _pad_128C[0x24]; // offset 0x128C
    bool m_bFirstSpawn; // offset 0x12B0, size 0x1, align 1
    char _pad_12B1[0x3]; // offset 0x12B1
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x12B4, size 0x4, align 4
    CHandle< CBaseEntity > m_hAggroTarget; // offset 0x12B8, size 0x4, align 4
    CHandle< CBaseEntity > m_hCommandAttackTarget; // offset 0x12BC, size 0x4, align 4
    CUtlSymbolLarge m_iszOriginalModel; // offset 0x12C0, size 0x8, align 8
    int8 m_nUnitModelVariant; // offset 0x12C8, size 0x1, align 1
    int8 m_nUnitModelVariantCount; // offset 0x12C9, size 0x1, align 1
    bool m_bPseudoQueueOrders; // offset 0x12CA, size 0x1, align 1
    bool m_bCastLocked; // offset 0x12CB, size 0x1, align 1
    char _pad_12CC[0x1C]; // offset 0x12CC
    GameTime_t m_flAttackRegulator; // offset 0x12E8, size 0x4, align 255
    float32 m_flTimeDisparityTolerance; // offset 0x12EC, size 0x4, align 4
    GameTime_t m_fAttackPhaseEndTime; // offset 0x12F0, size 0x4, align 255
    GameTime_t m_flPositionUpdateTime; // offset 0x12F4, size 0x4, align 255
    VectorWS m_vLastPositionSent; // offset 0x12F8, size 0xC, align 4
    int32 m_iTaggedAsVisibleByTeam; // offset 0x1304, size 0x4, align 4
    uint64 m_iIsControllableByPlayer64; // offset 0x1308, size 0x8, align 8
    PlayerID_t m_nControllingPlayerID; // offset 0x1310, size 0x4, align 255
    bool m_bControllableByAllPlayers; // offset 0x1314, size 0x1, align 1
    bool m_bRunAIWhenControllableByPlayer; // offset 0x1315, size 0x1, align 1
    char _pad_1316[0x2]; // offset 0x1316
    CUtlSymbolLarge m_iszUnitToAbilityMapping; // offset 0x1318, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecAbilities; // offset 0x1320, size 0x18, align 8
    uint64 m_unReservedAbilitySlots; // offset 0x1338, size 0x8, align 8
    CUtlVector< CHandle< CBaseEntity > > m_associatedEmptyAbilities; // offset 0x1340, size 0x18, align 8
    CHandle< CBaseEntity > m_hActiveAbility; // offset 0x1358, size 0x4, align 4
    VectorWS m_vCursorLocation; // offset 0x135C, size 0xC, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x1368, size 0x4, align 4
    CHandle< CBaseEntity > m_hOriginalCursorTarget; // offset 0x136C, size 0x4, align 4
    bool m_bCursorTargetingNothing; // offset 0x1370, size 0x1, align 1
    char _pad_1371[0x7]; // offset 0x1371
    CDOTA_ModifierManager m_ModifierManager; // offset 0x1378, size 0x3A0, align 255
    char _pad_1718[0x8]; // offset 0x1718
    float32 m_flInvisibilityLevel; // offset 0x1720, size 0x4, align 4
    char _pad_1724[0x4]; // offset 0x1724
    CUtlSymbolLarge m_iszMapUnitName; // offset 0x1728, size 0x8, align 8
    CUtlSymbolLarge m_iszUnitName; // offset 0x1730, size 0x8, align 8
    int32 m_iUnitNameIndex; // offset 0x1738, size 0x4, align 4
    int32 m_iUnitNameStringTableIndex; // offset 0x173C, size 0x4, align 4
    int32 m_iDamageMin; // offset 0x1740, size 0x4, align 4
    int32 m_iDamageMax; // offset 0x1744, size 0x4, align 4
    int32 m_iDamageBonus; // offset 0x1748, size 0x4, align 4
    bool m_bIsWaitingToSpawn; // offset 0x174C, size 0x1, align 1
    char _pad_174D[0x3]; // offset 0x174D
    int32 m_iLeashType; // offset 0x1750, size 0x4, align 4
    int32 m_iAggroType; // offset 0x1754, size 0x4, align 4
    bool m_bCreepIgnoreAggro; // offset 0x1758, size 0x1, align 1
    bool m_bCreepFirstWave; // offset 0x1759, size 0x1, align 1
    bool m_bIsIllusion; // offset 0x175A, size 0x1, align 1
    uint8 m_nUnitLabelIndex; // offset 0x175B, size 0x1, align 1
    char _pad_175C[0x4]; // offset 0x175C
    CUtlString m_szScaleset; // offset 0x1760, size 0x8, align 8
    CUtlString m_szUnitLabel; // offset 0x1768, size 0x8, align 8
    CUtlString m_strAnimationModifier; // offset 0x1770, size 0x8, align 8
    char _pad_1778[0x8]; // offset 0x1778
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1780, size 0x4, align 4
    char _pad_1784[0x4]; // offset 0x1784
    CLocomotionBase* m_locomotor; // offset 0x1788, size 0x8, align 8
    INextBotBody* m_body; // offset 0x1790, size 0x8, align 8
    bool m_bNeverMoveToClearSpace; // offset 0x1798, size 0x1, align 1
    char _pad_1799[0x3]; // offset 0x1799
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x179C, size 0x4, align 4
    bool m_bMustReachEachGoalEntity; // offset 0x17A0, size 0x1, align 1
    char _pad_17A1[0x3]; // offset 0x17A1
    VectorWS m_vInitialGoalPosition; // offset 0x17A4, size 0xC, align 4
    char _pad_17B0[0x18]; // offset 0x17B0
    CUnitOrders m_CurrentQueuedOrder; // offset 0x17C8, size 0x40, align 255
    char _pad_1808[0x18]; // offset 0x1808
    CDOTA_UnitInventory m_Inventory; // offset 0x1820, size 0xF8, align 255
    CHandle< CBaseEntity > m_hItemToDrop; // offset 0x1918, size 0x4, align 4
    DOTA_SHOP_TYPE m_iCurShop; // offset 0x191C, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastNearShop; // offset 0x1920, size 0x4, align 4
    char _pad_1924[0x4]; // offset 0x1924
    CUtlSymbolLarge m_szCurShopEntName; // offset 0x1928, size 0x8, align 8
    bool m_bHasInventory; // offset 0x1930, size 0x1, align 1
    char _pad_1931[0x3]; // offset 0x1931
    float32 m_flBaselineModelScale; // offset 0x1934, size 0x4, align 4
    float32 m_fModelScaleMultiplier; // offset 0x1938, size 0x4, align 4
    float32 m_fModelScaleMultiplierChangeStart; // offset 0x193C, size 0x4, align 4
    GameTime_t m_fModelScaleMultiplierChangeTime; // offset 0x1940, size 0x4, align 255
    float32 m_flPreviousModelScale; // offset 0x1944, size 0x4, align 4
    float32 m_fMaxModelScaleMultiplier; // offset 0x1948, size 0x4, align 4
    bool m_bIsCamped; // offset 0x194C, size 0x1, align 1
    bool m_bIsReturningHome; // offset 0x194D, size 0x1, align 1
    bool m_bIgnoreHome; // offset 0x194E, size 0x1, align 1
    bool m_bWantsToFlee; // offset 0x194F, size 0x1, align 1
    bool m_bWakesNeutrals; // offset 0x1950, size 0x1, align 1
    bool m_bNeutralIgnore; // offset 0x1951, size 0x1, align 1
    bool m_bIdleAcquire; // offset 0x1952, size 0x1, align 1
    bool m_bIdleAcquireForceSet; // offset 0x1953, size 0x1, align 1
    bool m_bCanFollowUnseenUnits; // offset 0x1954, size 0x1, align 1
    bool m_bExpired; // offset 0x1955, size 0x1, align 1
    char _pad_1956[0x2]; // offset 0x1956
    VectorWS m_vCurrentMovementOrderDestination; // offset 0x1958, size 0xC, align 4
    VectorWS m_vPreviousMovementOrderDestination; // offset 0x1964, size 0xC, align 4
    VectorWS m_vResumePreviousMovementRequestLocation; // offset 0x1970, size 0xC, align 4
    bool m_bCurrentOrderIsMovement; // offset 0x197C, size 0x1, align 1
    bool m_bPreviousOrderIsMovement; // offset 0x197D, size 0x1, align 1
    bool m_bResumePreviousMovement; // offset 0x197E, size 0x1, align 1
    bool m_bIsPatrolling; // offset 0x197F, size 0x1, align 1
    GameTime_t m_flCreationTime; // offset 0x1980, size 0x4, align 255
    bool m_bTargetMovedOutOfRange; // offset 0x1984, size 0x1, align 1
    bool m_bChaseTargetMoves; // offset 0x1985, size 0x1, align 1
    char _pad_1986[0x2]; // offset 0x1986
    float32 m_flChaseDistance; // offset 0x1988, size 0x4, align 4
    CHandle< CBaseEntity > m_hChaseEntity; // offset 0x198C, size 0x4, align 4
    CUtlVector< CUtlSymbol > m_ActivityModifiers; // offset 0x1990, size 0x18, align 8
    bool m_bActivityModifiersDirty; // offset 0x19A8, size 0x1, align 1
    char _pad_19A9[0x7]; // offset 0x19A9
    CUtlVector< CUtlSymbol > m_ActivityModifiersFromScript; // offset 0x19B0, size 0x18, align 8
    GameTime_t m_flBlinkDaggerTime; // offset 0x19C8, size 0x4, align 255
    float32 m_flAdditionalBattleMusicWeight; // offset 0x19CC, size 0x4, align 4
    bool m_bStolenScepter; // offset 0x19D0, size 0x1, align 1
    bool m_bHasScepterCached; // offset 0x19D1, size 0x1, align 1
    bool m_bHasShardCached; // offset 0x19D2, size 0x1, align 1
    bool m_bHasForbiddenTomeCached; // offset 0x19D3, size 0x1, align 1
    char _pad_19D4[0x4]; // offset 0x19D4
    CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // offset 0x19D8, size 0x20, align 255
    char _pad_19F8[0x20]; // offset 0x19F8
    GameTime_t m_flCritBashFailUntil; // offset 0x1A18, size 0x4, align 255
    float32 m_flAttackTimeLostToLastTick; // offset 0x1A1C, size 0x4, align 4
    float32 m_flAttackTimeAtLastTick; // offset 0x1A20, size 0x4, align 4
    float32 m_flCompanionDistance; // offset 0x1A24, size 0x4, align 4
    bool m_bIsPartyCompanion; // offset 0x1A28, size 0x1, align 1
    bool m_bCanPartyCompanionAttack; // offset 0x1A29, size 0x1, align 1
    char _pad_1A2A[0x2]; // offset 0x1A2A
    CHandle< CBaseEntity > m_CompanionEntity; // offset 0x1A2C, size 0x4, align 4
    bool m_bFacePlayer; // offset 0x1A30, size 0x1, align 1
    char _pad_1A31[0x3]; // offset 0x1A31
    GameTime_t m_flLastIdleChangeTime; // offset 0x1A34, size 0x4, align 255
    bool m_bUseNeutralCreepBehavior; // offset 0x1A38, size 0x1, align 1
    char _pad_1A39[0x27]; // offset 0x1A39
    bool m_bHasBuiltWearableSpawnList; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    GameTick_t[15] m_nFoWFadeStartTime; // offset 0x1A64, size 0x3C, align 4
    int32 m_nFOWVisibilityRadius; // offset 0x1AA0, size 0x4, align 4
    VectorWS m_vFOWOriginOverride; // offset 0x1AA4, size 0xC, align 4
    int32 m_iTeamViewerID; // offset 0x1AB0, size 0x4, align 4
    int32 m_nAttackHeightBonus; // offset 0x1AB4, size 0x4, align 4
    bool m_bShouldDrawPath; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    uint32 m_nScepterUpgradeID; // offset 0x1ABC, size 0x4, align 4
    uint32 m_nShardUpgradeID; // offset 0x1AC0, size 0x4, align 4
    bool m_bHasConsideredNPCController; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0xB]; // offset 0x1AC5
    CUtlString m_strLastKillerAbility; // offset 0x1AD0, size 0x8, align 8
    int32 m_anglediff; // offset 0x1AD8, size 0x4, align 4
    int32 m_NetworkActivity; // offset 0x1ADC, size 0x4, align 4
    int32 m_NetworkSequenceIndex; // offset 0x1AE0, size 0x4, align 4
    bool m_bShouldDoFlyHeightVisual; // offset 0x1AE4, size 0x1, align 1
    char _pad_1AE5[0x3]; // offset 0x1AE5
    float32 m_flStartSequenceCycle; // offset 0x1AE8, size 0x4, align 4
    bool m_bMidLoading; // offset 0x1AEC, size 0x1, align 1
    char _pad_1AED[0x3]; // offset 0x1AED
    CHandle< CDOTA_ScriptedSpawner > m_hTutorialSpawner; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
    CountdownTimer m_AngerCooldownTimer; // offset 0x1AF8, size 0x18, align 8
    int32 m_iProjectileMoveSpeed; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0x1B18, size 0x8, align 8
    int32 m_nPoseParameterTurn; // offset 0x1B20, size 0x4, align 4
    int32 m_nPoseParameterRun; // offset 0x1B24, size 0x4, align 4
    float32 m_flLean; // offset 0x1B28, size 0x4, align 4
    float32 m_flRun; // offset 0x1B2C, size 0x4, align 4
    char[256] m_CustomHealthLabel; // offset 0x1B30, size 0x100, align 1
    Color m_CustomHealthLabelColor; // offset 0x1C30, size 0x4, align 4
    OriginalModelFlags_t m_nIsOriginalModel; // offset 0x1C34, size 0x1, align 1
    char _pad_1C35[0x3]; // offset 0x1C35
    item_definition_index_t m_nWearableDefIndex; // offset 0x1C38, size 0x4, align 255
    int8 m_nArcanaLevel; // offset 0x1C3C, size 0x1, align 1
    int8 m_nDefaultArcanaLevel; // offset 0x1C3D, size 0x1, align 1
    char _pad_1C3E[0x2]; // offset 0x1C3E
    Color m_defaultColorGemColor; // offset 0x1C40, size 0x4, align 4
    bool m_bDisableDamageDisplay; // offset 0x1C44, size 0x1, align 1
    char _pad_1C45[0x3]; // offset 0x1C45
    Color m_gibTintColor; // offset 0x1C48, size 0x4, align 4
    float32 m_flPathfindingSearchDepthScale; // offset 0x1C4C, size 0x4, align 4
    CUtlVector< int32 > m_ActivitiesStarted; // offset 0x1C50, size 0x18, align 8
    CHandle< CBaseEntity > m_hIllusionOriginal; // offset 0x1C68, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hDirectionalRangedFakeTarget; // offset 0x1C6C, size 0x4, align 4
    char _pad_1C70[0x28]; // offset 0x1C70
    bool m_bShouldComputeRemainingPathLength; // offset 0x1C98, size 0x1, align 1
    char _pad_1C99[0x3]; // offset 0x1C99
    float32 m_flRemainingPathLength; // offset 0x1C9C, size 0x4, align 4
    char _pad_1CA0[0x28]; // offset 0x1CA0
    CUtlVector< CHandle< CBaseEntity > > m_AbilitiesPendingDelete; // offset 0x1CC8, size 0x18, align 8
    float32 m_flPrevHealthThinkRegen; // offset 0x1CE0, size 0x4, align 4
    GameTime_t m_prevRegenChangeTime; // offset 0x1CE4, size 0x4, align 255
    float32 m_flAccumulatedHealthRegenSinceLastLogged; // offset 0x1CE8, size 0x4, align 4
    char _pad_1CEC[0x1C]; // offset 0x1CEC
    float32 m_flBuffEffectivenessOverride; // offset 0x1D08, size 0x4, align 4
    char _pad_1D0C[0x4]; // offset 0x1D0C
};
