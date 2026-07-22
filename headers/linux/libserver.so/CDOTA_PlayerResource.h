#pragma once

class CDOTA_PlayerResource : public CBaseEntity /*0x0*/  // sizeof 0xF290, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9B8]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< PlayerResourcePlayerTeamData_t > m_vecPlayerTeamData; // offset 0x9B8, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< PlayerResourcePlayerData_t > m_vecPlayerData; // offset 0xA20, size 0x68, align 8
    CUtlVectorEmbeddedNetworkVar< PlayerResourceBroadcasterData_t > m_vecBrodcasterData; // offset 0xA88, size 0x68, align 8
    CNetworkUtlVectorBase< uint32 > m_vecEventsForDisplay; // offset 0xAF0, size 0x18, align 8
    int8 m_nPrimaryEventIndex; // offset 0xB08, size 0x1, align 1
    char _pad_0B09[0x13]; // offset 0xB09
    CHandle< CBaseEntity >[64] m_playerIDToPlayer; // offset 0xB1C, size 0x100, align 4
    CHandle< CBaseEntity >[64] m_playerIDToPawn; // offset 0xC1C, size 0x100, align 4
    char _pad_0D1C[0x244]; // offset 0xD1C
    CUtlVector< sPendingTreeRemoval > m_vecPendingTreeRemovals; // offset 0xF60, size 0x18, align 8
    CUtlVector< sPendingTreeModelChange > m_vecPendingTreeModelChanges; // offset 0xF78, size 0x18, align 8
    float32[24] m_flClaimedFarm; // offset 0xF90, size 0x60, align 4
    float32[24] m_flEarnedCreepFarm; // offset 0xFF0, size 0x60, align 4
    float32[24] m_flScaledPlayerDamage; // offset 0x1050, size 0x60, align 4
    float32[24] m_flScaledTowerDamage; // offset 0x10B0, size 0x60, align 4
    int32[24] m_iScaledHealing; // offset 0x1110, size 0x60, align 4
    int32[24] m_iSupportAbilityValue; // offset 0x1170, size 0x60, align 4
    int32[24] m_nNumMouseClickCastOrders; // offset 0x11D0, size 0x60, align 4
    float32[24] m_flTimeWithUnspentSkillPoints; // offset 0x1230, size 0x60, align 4
    float32[24] m_flRawPlayerDamage; // offset 0x1290, size 0x60, align 4
    float32[24] m_flRawTowerDamage; // offset 0x12F0, size 0x60, align 4
    float32[24] m_flRawHealing; // offset 0x1350, size 0x60, align 4
    float32[24][3] m_flRawPlayerDamageReceivedPreReduction; // offset 0x13B0, size 0x120, align 4
    float32[24][3] m_flRawPlayerDamageReceivedPostReduction; // offset 0x14D0, size 0x120, align 4
    float32[24][24] m_flTotalPlayerDamageMatrix; // offset 0x15F0, size 0x900, align 4
    float32[24][24] m_flRawPlayerDamageMatrix; // offset 0x1EF0, size 0x900, align 4
    int32[24][24] m_iAssistsMatrix; // offset 0x27F0, size 0x900, align 4
    int32[24] m_iTimeLastSeen; // offset 0x30F0, size 0x60, align 4
    int32[24] m_iTotalDisconnectedTime; // offset 0x3150, size 0x60, align 4
    float64[24] m_dTimeLastRecieved; // offset 0x31B0, size 0xC0, align 8
    int32[24] m_iGoldBonusEarned; // offset 0x3270, size 0x60, align 4
    int32[24] m_iExperimentalGoldEarned; // offset 0x32D0, size 0x60, align 4
    int32[24] m_iExperimental2GoldEarned; // offset 0x3330, size 0x60, align 4
    int32[24] m_iCreepDenyGoldEarned; // offset 0x3390, size 0x60, align 4
    int32[24] m_iTPScrollsPurchased; // offset 0x33F0, size 0x60, align 4
    char _pad_3450[0x240]; // offset 0x3450
    int32[24] m_iAegisPickups; // offset 0x3690, size 0x60, align 4
    int32[24] m_iTeleportsUsed; // offset 0x36F0, size 0x60, align 4
    int32[24] m_iNumConsumablesPurchased; // offset 0x3750, size 0x60, align 4
    int32[24] m_iNumItemsPurchased; // offset 0x37B0, size 0x60, align 4
    CUtlVector< PurchasedItem_t >[24] m_vecItemsPurchased; // offset 0x3810, size 0x240, align 8
    float32[24] m_flTimeOfLastItemPurchase; // offset 0x3A50, size 0x60, align 4
    float32[24] m_flTimeOfLastConsumablePurchase; // offset 0x3AB0, size 0x60, align 4
    float32[24] m_flTimeOfLastDeath; // offset 0x3B10, size 0x60, align 4
    float32[24] m_flTowerDamageTaken; // offset 0x3B70, size 0x60, align 4
    float32[24] m_flCreepDamageTaken; // offset 0x3BD0, size 0x60, align 4
    float32[24] m_flHeroDamageTaken; // offset 0x3C30, size 0x60, align 4
    float32[24] m_flTotalTowerDamageTaken; // offset 0x3C90, size 0x60, align 4
    float32[24] m_flTotalCreepDamageTaken; // offset 0x3CF0, size 0x60, align 4
    float32[24] m_flTotalHeroDamageTaken; // offset 0x3D50, size 0x60, align 4
    int32[24] m_iRank; // offset 0x3DB0, size 0x60, align 4
    int32[24] m_iRankUncertainty; // offset 0x3E10, size 0x60, align 4
    bool[24] m_bRankCalibrated; // offset 0x3E70, size 0x18, align 1
    bool[24] m_bLowPriority; // offset 0x3E88, size 0x18, align 1
    int32[24] m_nWins; // offset 0x3EA0, size 0x60, align 4
    int32[24] m_nLosses; // offset 0x3F00, size 0x60, align 4
    int32[24] m_nSmurfCategory; // offset 0x3F60, size 0x60, align 4
    int32[24] m_nBehaviorScore; // offset 0x3FC0, size 0x60, align 4
    int32[24] m_nCommScore; // offset 0x4020, size 0x60, align 4
    bool[24] m_bWasHeroPickDotaPlusSuggestion; // offset 0x4080, size 0x18, align 1
    GameTime_t[24] m_flLastActiveTime; // offset 0x4098, size 0x60, align 4
    float32[24] m_flIdleTime; // offset 0x40F8, size 0x60, align 4
    bool[24] m_bLoggedInElsewhere; // offset 0x4158, size 0x18, align 1
    bool[64] m_bPlayerLoadedCompletely; // offset 0x4170, size 0x40, align 1
    int32[64] m_iDisconnectionReason; // offset 0x41B0, size 0x100, align 4
    char _pad_42B0[0x600]; // offset 0x42B0
    uint64[64] m_SelectedGuide; // offset 0x48B0, size 0x200, align 8
    bool[64] m_bIsUsingPlusGuide; // offset 0x4AB0, size 0x40, align 1
    uint32[64] m_vecPredictedRanks; // offset 0x4AF0, size 0x100, align 4
    char _pad_4BF0[0xC00]; // offset 0x4BF0
    uint32 m_unLastRadiantFortPct; // offset 0x57F0, size 0x4, align 4
    uint32 m_unLastDireFortPct; // offset 0x57F4, size 0x4, align 4
    int32[24] m_iCustomTeamAssignments; // offset 0x57F8, size 0x60, align 4
    CUtlVector< float32 >[24] m_vecPlayerLevelUpTimes; // offset 0x5858, size 0x240, align 8
    int32[6][64] m_iManaSpent; // offset 0x5A98, size 0x600, align 4
    int32[6][6][64] m_iNeutralOption; // offset 0x6098, size 0x2400, align 4
    bool m_bLeaverAlreadyDetected; // offset 0x8498, size 0x1, align 1
    char _pad_8499[0x427]; // offset 0x8499
    CUtlVector< TimedKillEvent_t > m_TimedKillList; // offset 0x88C0, size 0x18, align 8
    CUtlVector< TimedKillEvent_t > m_TimedAssistList; // offset 0x88D8, size 0x18, align 8
    CUtlVector< TimedKillEvent_t > m_TimedDeathList; // offset 0x88F0, size 0x18, align 8
    uint32 m_unLastHeroPickOrder; // offset 0x8908, size 0x4, align 4
    int32[24] m_iBountyGoldEarned; // offset 0x890C, size 0x60, align 4
    int32[24] m_iRangeCreepUpgradeGoldEarned; // offset 0x896C, size 0x60, align 4
    int32[24] m_iObserverWardsDestroyed; // offset 0x89CC, size 0x60, align 4
    int32[24] m_iReliableGoldEarned; // offset 0x8A2C, size 0x60, align 4
    int32[24] m_iGoldLossPrevented; // offset 0x8A8C, size 0x60, align 4
    int32[24] m_iMaxHatStacks; // offset 0x8AEC, size 0x60, align 4
    char _pad_8B4C[0x5C]; // offset 0x8B4C
    CUtlVector< CHandle< CDOTA_Unit_Courier > >[15] m_hTeamCouriers; // offset 0x8BA8, size 0x168, align 8
    CUtlVector< CHandle< CDOTA_Unit_Courier > >[64] m_hPlayerCouriers; // offset 0x8D10, size 0x600, align 8
    float32[15] m_flAvailableLaneGold; // offset 0x9310, size 0x3C, align 4
    char _pad_934C[0x4]; // offset 0x934C
    CUtlVector< DamageShareEvent_t >[24] m_DamageShareList; // offset 0x9350, size 0x240, align 8
    DamageShareEvent_t[25][24] m_AbsorbedDamageRollup; // offset 0x9590, size 0x1C20, align 4
    AbilityID_t[25][24] m_playerAbilityUpgradeOrder; // offset 0xB1B0, size 0x960, align 4
    int32[25][24] m_playerAbilityUpgradeTimes; // offset 0xBB10, size 0x960, align 4
    int32[24] m_playerAbilityUpgradeCount; // offset 0xC470, size 0x60, align 4
    char _pad_C4D0[0x40]; // offset 0xC4D0
    int32[64] m_fullUpdateCount; // offset 0xC510, size 0x100, align 4
    int32[24] m_iCouriersDeployed; // offset 0xC610, size 0x60, align 4
    int32[24] m_iCouriersPotentiallyKilled; // offset 0xC670, size 0x60, align 4
    int32[24] m_iCommandsIssued; // offset 0xC6D0, size 0x60, align 4
    uint32[24] m_hHeroSpawnGroup; // offset 0xC730, size 0x60, align 4
    char _pad_C790[0x17C0]; // offset 0xC790
    float32 m_fNextLaneDetectionUpdate; // offset 0xDF50, size 0x4, align 4
    float32 m_fNextTimedHeroStatsUpdate; // offset 0xDF54, size 0x4, align 4
    char _pad_DF58[0x2A0]; // offset 0xDF58
    bool m_bInitializedLaneWaypoints; // offset 0xE1F8, size 0x1, align 1
    char _pad_E1F9[0x517]; // offset 0xE1F9
    uint32 m_nLastWardSuggestionBuildingState; // offset 0xE710, size 0x4, align 4
    uint32 m_nLastWardSuggestionUpdateNum; // offset 0xE714, size 0x4, align 4
    bool m_bLastWardSuggestionRoshanAlive; // offset 0xE718, size 0x1, align 1
    bool[10] m_bDoFinalPregameSuggestion; // offset 0xE719, size 0xA, align 1
    char _pad_E723[0x1]; // offset 0xE723
    float32 m_fNextCreepDistanceUpdate; // offset 0xE724, size 0x4, align 4
    float32[15] m_fCreepDistanceSafe; // offset 0xE728, size 0x3C, align 4
    float32[15] m_fCreepDistanceMid; // offset 0xE764, size 0x3C, align 4
    float32[15] m_fCreepDistanceOff; // offset 0xE7A0, size 0x3C, align 4
    GameTime_t m_fLastSuggestionTime; // offset 0xE7DC, size 0x4, align 255
    bool m_bHasRevealedAnonymizedEnemyPlayerInfo; // offset 0xE7E0, size 0x1, align 1
    char _pad_E7E1[0x607]; // offset 0xE7E1
    PlayerID_t m_nRequestedBotPlayerID; // offset 0xEDE8, size 0x4, align 255
    float32 m_fNextCombatLogLocationUpdateTime; // offset 0xEDEC, size 0x4, align 4
    float32 m_fNextAPMUpdateTime; // offset 0xEDF0, size 0x4, align 4
    char _pad_EDF4[0x4]; // offset 0xEDF4
    CUtlVector< uint32 > m_vecPendingPlayerResourceRequests; // offset 0xEDF8, size 0x18, align 8
    int32[24] m_iRampages; // offset 0xEE10, size 0x60, align 4
    int32[24] m_iTripleKills; // offset 0xEE70, size 0x60, align 4
    int32[24] m_iCouriersKilled; // offset 0xEED0, size 0x60, align 4
    int32[24] m_iAegisesSnatched; // offset 0xEF30, size 0x60, align 4
    int32[24] m_iCheesesEaten; // offset 0xEF90, size 0x60, align 4
    int32[24] m_iRapiersPurchased; // offset 0xEFF0, size 0x60, align 4
    float32[24] m_flPushingDamage; // offset 0xF050, size 0x60, align 4
    int32[24] m_iRoshanKillsNight; // offset 0xF0B0, size 0x60, align 4
    int32[24] m_iRoshanKillsDay; // offset 0xF110, size 0x60, align 4
    int32[24] m_iPortalsUsed; // offset 0xF170, size 0x60, align 4
    int32[24] m_iWisdomRunesGained; // offset 0xF1D0, size 0x60, align 4
    int32[24] m_iShieldRunesGained; // offset 0xF230, size 0x60, align 4
};
