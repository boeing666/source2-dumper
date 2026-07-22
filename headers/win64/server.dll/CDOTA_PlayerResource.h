#pragma once

class CDOTA_PlayerResource : public CBaseEntity /*0x0*/  // sizeof 0xEFB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x6D8]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< PlayerResourcePlayerTeamData_t > m_vecPlayerTeamData; // offset 0x6D8, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< PlayerResourcePlayerData_t > m_vecPlayerData; // offset 0x740, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< PlayerResourceBroadcasterData_t > m_vecBrodcasterData; // offset 0x7A8, size 0x68, align 8
    CNetworkUtlVectorBase< uint32 > m_vecEventsForDisplay; // offset 0x810, size 0x18, align 8
    int8 m_nPrimaryEventIndex; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x13]; // offset 0x829
    CHandle< CBaseEntity >[64] m_playerIDToPlayer; // offset 0x83C, size 0x100, align 4
    CHandle< CBaseEntity >[64] m_playerIDToPawn; // offset 0x93C, size 0x100, align 4
    char _pad_0A3C[0x244]; // offset 0xA3C
    CUtlVector< sPendingTreeRemoval > m_vecPendingTreeRemovals; // offset 0xC80, size 0x18, align 8
    CUtlVector< sPendingTreeModelChange > m_vecPendingTreeModelChanges; // offset 0xC98, size 0x18, align 8
    float32[24] m_flClaimedFarm; // offset 0xCB0, size 0x60, align 4
    float32[24] m_flEarnedCreepFarm; // offset 0xD10, size 0x60, align 4
    float32[24] m_flScaledPlayerDamage; // offset 0xD70, size 0x60, align 4
    float32[24] m_flScaledTowerDamage; // offset 0xDD0, size 0x60, align 4
    int32[24] m_iScaledHealing; // offset 0xE30, size 0x60, align 4
    int32[24] m_iSupportAbilityValue; // offset 0xE90, size 0x60, align 4
    int32[24] m_nNumMouseClickCastOrders; // offset 0xEF0, size 0x60, align 4
    float32[24] m_flTimeWithUnspentSkillPoints; // offset 0xF50, size 0x60, align 4
    float32[24] m_flRawPlayerDamage; // offset 0xFB0, size 0x60, align 4
    float32[24] m_flRawTowerDamage; // offset 0x1010, size 0x60, align 4
    float32[24] m_flRawHealing; // offset 0x1070, size 0x60, align 4
    float32[24][3] m_flRawPlayerDamageReceivedPreReduction; // offset 0x10D0, size 0x120, align 4
    float32[24][3] m_flRawPlayerDamageReceivedPostReduction; // offset 0x11F0, size 0x120, align 4
    float32[24][24] m_flTotalPlayerDamageMatrix; // offset 0x1310, size 0x900, align 4
    float32[24][24] m_flRawPlayerDamageMatrix; // offset 0x1C10, size 0x900, align 4
    int32[24][24] m_iAssistsMatrix; // offset 0x2510, size 0x900, align 4
    int32[24] m_iTimeLastSeen; // offset 0x2E10, size 0x60, align 4
    int32[24] m_iTotalDisconnectedTime; // offset 0x2E70, size 0x60, align 4
    float64[24] m_dTimeLastRecieved; // offset 0x2ED0, size 0xC0, align 8
    int32[24] m_iGoldBonusEarned; // offset 0x2F90, size 0x60, align 4
    int32[24] m_iExperimentalGoldEarned; // offset 0x2FF0, size 0x60, align 4
    int32[24] m_iExperimental2GoldEarned; // offset 0x3050, size 0x60, align 4
    int32[24] m_iCreepDenyGoldEarned; // offset 0x30B0, size 0x60, align 4
    int32[24] m_iTPScrollsPurchased; // offset 0x3110, size 0x60, align 4
    char _pad_3170[0x240]; // offset 0x3170
    int32[24] m_iAegisPickups; // offset 0x33B0, size 0x60, align 4
    int32[24] m_iTeleportsUsed; // offset 0x3410, size 0x60, align 4
    int32[24] m_iNumConsumablesPurchased; // offset 0x3470, size 0x60, align 4
    int32[24] m_iNumItemsPurchased; // offset 0x34D0, size 0x60, align 4
    CUtlVector< PurchasedItem_t >[24] m_vecItemsPurchased; // offset 0x3530, size 0x240, align 8
    float32[24] m_flTimeOfLastItemPurchase; // offset 0x3770, size 0x60, align 4
    float32[24] m_flTimeOfLastConsumablePurchase; // offset 0x37D0, size 0x60, align 4
    float32[24] m_flTimeOfLastDeath; // offset 0x3830, size 0x60, align 4
    float32[24] m_flTowerDamageTaken; // offset 0x3890, size 0x60, align 4
    float32[24] m_flCreepDamageTaken; // offset 0x38F0, size 0x60, align 4
    float32[24] m_flHeroDamageTaken; // offset 0x3950, size 0x60, align 4
    float32[24] m_flTotalTowerDamageTaken; // offset 0x39B0, size 0x60, align 4
    float32[24] m_flTotalCreepDamageTaken; // offset 0x3A10, size 0x60, align 4
    float32[24] m_flTotalHeroDamageTaken; // offset 0x3A70, size 0x60, align 4
    int32[24] m_iRank; // offset 0x3AD0, size 0x60, align 4
    int32[24] m_iRankUncertainty; // offset 0x3B30, size 0x60, align 4
    bool[24] m_bRankCalibrated; // offset 0x3B90, size 0x18, align 1
    bool[24] m_bLowPriority; // offset 0x3BA8, size 0x18, align 1
    int32[24] m_nWins; // offset 0x3BC0, size 0x60, align 4
    int32[24] m_nLosses; // offset 0x3C20, size 0x60, align 4
    int32[24] m_nSmurfCategory; // offset 0x3C80, size 0x60, align 4
    int32[24] m_nBehaviorScore; // offset 0x3CE0, size 0x60, align 4
    int32[24] m_nCommScore; // offset 0x3D40, size 0x60, align 4
    bool[24] m_bWasHeroPickDotaPlusSuggestion; // offset 0x3DA0, size 0x18, align 1
    GameTime_t[24] m_flLastActiveTime; // offset 0x3DB8, size 0x60, align 4
    float32[24] m_flIdleTime; // offset 0x3E18, size 0x60, align 4
    bool[24] m_bLoggedInElsewhere; // offset 0x3E78, size 0x18, align 1
    bool[64] m_bPlayerLoadedCompletely; // offset 0x3E90, size 0x40, align 1
    int32[64] m_iDisconnectionReason; // offset 0x3ED0, size 0x100, align 4
    char _pad_3FD0[0x600]; // offset 0x3FD0
    uint64[64] m_SelectedGuide; // offset 0x45D0, size 0x200, align 8
    bool[64] m_bIsUsingPlusGuide; // offset 0x47D0, size 0x40, align 1
    uint32[64] m_vecPredictedRanks; // offset 0x4810, size 0x100, align 4
    char _pad_4910[0xC00]; // offset 0x4910
    uint32 m_unLastRadiantFortPct; // offset 0x5510, size 0x4, align 4
    uint32 m_unLastDireFortPct; // offset 0x5514, size 0x4, align 4
    int32[24] m_iCustomTeamAssignments; // offset 0x5518, size 0x60, align 4
    CUtlVector< float32 >[24] m_vecPlayerLevelUpTimes; // offset 0x5578, size 0x240, align 8
    int32[6][64] m_iManaSpent; // offset 0x57B8, size 0x600, align 4
    int32[6][6][64] m_iNeutralOption; // offset 0x5DB8, size 0x2400, align 4
    bool m_bLeaverAlreadyDetected; // offset 0x81B8, size 0x1, align 1
    char _pad_81B9[0x427]; // offset 0x81B9
    CUtlVector< TimedKillEvent_t > m_TimedKillList; // offset 0x85E0, size 0x18, align 8
    CUtlVector< TimedKillEvent_t > m_TimedAssistList; // offset 0x85F8, size 0x18, align 8
    CUtlVector< TimedKillEvent_t > m_TimedDeathList; // offset 0x8610, size 0x18, align 8
    uint32 m_unLastHeroPickOrder; // offset 0x8628, size 0x4, align 4
    int32[24] m_iBountyGoldEarned; // offset 0x862C, size 0x60, align 4
    int32[24] m_iRangeCreepUpgradeGoldEarned; // offset 0x868C, size 0x60, align 4
    int32[24] m_iObserverWardsDestroyed; // offset 0x86EC, size 0x60, align 4
    int32[24] m_iReliableGoldEarned; // offset 0x874C, size 0x60, align 4
    int32[24] m_iGoldLossPrevented; // offset 0x87AC, size 0x60, align 4
    int32[24] m_iMaxHatStacks; // offset 0x880C, size 0x60, align 4
    char _pad_886C[0x5C]; // offset 0x886C
    CUtlVector< CHandle< CDOTA_Unit_Courier > >[15] m_hTeamCouriers; // offset 0x88C8, size 0x168, align 8
    CUtlVector< CHandle< CDOTA_Unit_Courier > >[64] m_hPlayerCouriers; // offset 0x8A30, size 0x600, align 8
    float32[15] m_flAvailableLaneGold; // offset 0x9030, size 0x3C, align 4
    char _pad_906C[0x4]; // offset 0x906C
    CUtlVector< DamageShareEvent_t >[24] m_DamageShareList; // offset 0x9070, size 0x240, align 8
    DamageShareEvent_t[25][24] m_AbsorbedDamageRollup; // offset 0x92B0, size 0x1C20, align 4
    AbilityID_t[25][24] m_playerAbilityUpgradeOrder; // offset 0xAED0, size 0x960, align 4
    int32[25][24] m_playerAbilityUpgradeTimes; // offset 0xB830, size 0x960, align 4
    int32[24] m_playerAbilityUpgradeCount; // offset 0xC190, size 0x60, align 4
    char _pad_C1F0[0x40]; // offset 0xC1F0
    int32[64] m_fullUpdateCount; // offset 0xC230, size 0x100, align 4
    int32[24] m_iCouriersDeployed; // offset 0xC330, size 0x60, align 4
    int32[24] m_iCouriersPotentiallyKilled; // offset 0xC390, size 0x60, align 4
    int32[24] m_iCommandsIssued; // offset 0xC3F0, size 0x60, align 4
    uint32[24] m_hHeroSpawnGroup; // offset 0xC450, size 0x60, align 4
    char _pad_C4B0[0x17C0]; // offset 0xC4B0
    float32 m_fNextLaneDetectionUpdate; // offset 0xDC70, size 0x4, align 4
    float32 m_fNextTimedHeroStatsUpdate; // offset 0xDC74, size 0x4, align 4
    char _pad_DC78[0x2A0]; // offset 0xDC78
    bool m_bInitializedLaneWaypoints; // offset 0xDF18, size 0x1, align 1
    char _pad_DF19[0x517]; // offset 0xDF19
    uint32 m_nLastWardSuggestionBuildingState; // offset 0xE430, size 0x4, align 4
    uint32 m_nLastWardSuggestionUpdateNum; // offset 0xE434, size 0x4, align 4
    bool m_bLastWardSuggestionRoshanAlive; // offset 0xE438, size 0x1, align 1
    bool[10] m_bDoFinalPregameSuggestion; // offset 0xE439, size 0xA, align 1
    char _pad_E443[0x1]; // offset 0xE443
    float32 m_fNextCreepDistanceUpdate; // offset 0xE444, size 0x4, align 4
    float32[15] m_fCreepDistanceSafe; // offset 0xE448, size 0x3C, align 4
    float32[15] m_fCreepDistanceMid; // offset 0xE484, size 0x3C, align 4
    float32[15] m_fCreepDistanceOff; // offset 0xE4C0, size 0x3C, align 4
    GameTime_t m_fLastSuggestionTime; // offset 0xE4FC, size 0x4, align 255
    bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // offset 0xE500, size 0x1, align 1
    char _pad_E501[0x607]; // offset 0xE501
    PlayerID_t m_nRequestedBotPlayerID; // offset 0xEB08, size 0x4, align 255
    float32 m_fNextCombatLogLocationUpdateTime; // offset 0xEB0C, size 0x4, align 4
    float32 m_fNextAPMUpdateTime; // offset 0xEB10, size 0x4, align 4
    char _pad_EB14[0x4]; // offset 0xEB14
    CUtlVector< uint32 > m_vecPendingPlayerResourceRequests; // offset 0xEB18, size 0x18, align 8
    int32[24] m_iRampages; // offset 0xEB30, size 0x60, align 4
    int32[24] m_iTripleKills; // offset 0xEB90, size 0x60, align 4
    int32[24] m_iCouriersKilled; // offset 0xEBF0, size 0x60, align 4
    int32[24] m_iAegisesSnatched; // offset 0xEC50, size 0x60, align 4
    int32[24] m_iCheesesEaten; // offset 0xECB0, size 0x60, align 4
    int32[24] m_iRapiersPurchased; // offset 0xED10, size 0x60, align 4
    float32[24] m_flPushingDamage; // offset 0xED70, size 0x60, align 4
    int32[24] m_iRoshanKillsNight; // offset 0xEDD0, size 0x60, align 4
    int32[24] m_iRoshanKillsDay; // offset 0xEE30, size 0x60, align 4
    int32[24] m_iPortalsUsed; // offset 0xEE90, size 0x60, align 4
    int32[24] m_iWisdomRunesGained; // offset 0xEEF0, size 0x60, align 4
    int32[24] m_iShieldRunesGained; // offset 0xEF50, size 0x60, align 4
};
