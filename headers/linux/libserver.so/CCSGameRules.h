#pragma once

class CCSGameRules : public CTeamplayRules /*0x0*/  // sizeof 0x11440, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    bool m_bFreezePeriod; // offset 0xD8, size 0x1, align 1
    bool m_bWarmupPeriod; // offset 0xD9, size 0x1, align 1
    char _pad_00DA[0x2]; // offset 0xDA
    GameTime_t m_fWarmupPeriodEnd; // offset 0xDC, size 0x4, align 255
    GameTime_t m_fWarmupPeriodStart; // offset 0xE0, size 0x4, align 255
    bool m_bTerroristTimeOutActive; // offset 0xE4, size 0x1, align 1
    bool m_bCTTimeOutActive; // offset 0xE5, size 0x1, align 1
    char _pad_00E6[0x2]; // offset 0xE6
    float32 m_flTerroristTimeOutRemaining; // offset 0xE8, size 0x4, align 4
    float32 m_flCTTimeOutRemaining; // offset 0xEC, size 0x4, align 4
    int32 m_nTerroristTimeOuts; // offset 0xF0, size 0x4, align 4
    int32 m_nCTTimeOuts; // offset 0xF4, size 0x4, align 4
    bool m_bTechnicalTimeOut; // offset 0xF8, size 0x1, align 1
    bool m_bMatchWaitingForResume; // offset 0xF9, size 0x1, align 1
    char _pad_00FA[0x2]; // offset 0xFA
    int32 m_iFreezeTime; // offset 0xFC, size 0x4, align 4
    int32 m_iRoundTime; // offset 0x100, size 0x4, align 4
    float32 m_fMatchStartTime; // offset 0x104, size 0x4, align 4
    GameTime_t m_fRoundStartTime; // offset 0x108, size 0x4, align 255
    GameTime_t m_flRestartRoundTime; // offset 0x10C, size 0x4, align 255
    bool m_bGameRestart; // offset 0x110, size 0x1, align 1
    char _pad_0111[0x3]; // offset 0x111
    float32 m_flGameStartTime; // offset 0x114, size 0x4, align 4
    float32 m_timeUntilNextPhaseStarts; // offset 0x118, size 0x4, align 4
    int32 m_gamePhase; // offset 0x11C, size 0x4, align 4
    int32 m_totalRoundsPlayed; // offset 0x120, size 0x4, align 4
    int32 m_nRoundsPlayedThisPhase; // offset 0x124, size 0x4, align 4
    int32 m_nOvertimePlaying; // offset 0x128, size 0x4, align 4
    int32 m_iHostagesRemaining; // offset 0x12C, size 0x4, align 4
    bool m_bAnyHostageReached; // offset 0x130, size 0x1, align 1
    bool m_bMapHasBombTarget; // offset 0x131, size 0x1, align 1
    bool m_bMapHasRescueZone; // offset 0x132, size 0x1, align 1
    bool m_bMapHasBuyZone; // offset 0x133, size 0x1, align 1
    bool m_bIsQueuedMatchmaking; // offset 0x134, size 0x1, align 1
    char _pad_0135[0x3]; // offset 0x135
    int32 m_nQueuedMatchmakingMode; // offset 0x138, size 0x4, align 4
    bool m_bIsValveDS; // offset 0x13C, size 0x1, align 1
    bool m_bLogoMap; // offset 0x13D, size 0x1, align 1
    bool m_bPlayAllStepSoundsOnServer; // offset 0x13E, size 0x1, align 1
    char _pad_013F[0x1]; // offset 0x13F
    int32 m_iSpectatorSlotCount; // offset 0x140, size 0x4, align 4
    int32 m_MatchDevice; // offset 0x144, size 0x4, align 4
    bool m_bHasMatchStarted; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x3]; // offset 0x149
    int32 m_nNextMapInMapgroup; // offset 0x14C, size 0x4, align 4
    char[512] m_szTournamentEventName; // offset 0x150, size 0x200, align 1
    char[512] m_szTournamentEventStage; // offset 0x350, size 0x200, align 1
    char[512] m_szMatchStatTxt; // offset 0x550, size 0x200, align 1
    char[512] m_szTournamentPredictionsTxt; // offset 0x750, size 0x200, align 1
    int32 m_nTournamentPredictionsPct; // offset 0x950, size 0x4, align 4
    GameTime_t m_flCMMItemDropRevealStartTime; // offset 0x954, size 0x4, align 255
    GameTime_t m_flCMMItemDropRevealEndTime; // offset 0x958, size 0x4, align 255
    bool m_bIsDroppingItems; // offset 0x95C, size 0x1, align 1
    bool m_bIsQuestEligible; // offset 0x95D, size 0x1, align 1
    bool m_bIsHltvActive; // offset 0x95E, size 0x1, align 1
    bool m_bBombPlanted; // offset 0x95F, size 0x1, align 1
    uint16[100] m_arrProhibitedItemIndices; // offset 0x960, size 0xC8, align 2
    uint32[4] m_arrTournamentActiveCasterAccounts; // offset 0xA28, size 0x10, align 4
    int32 m_numBestOfMaps; // offset 0xA38, size 0x4, align 4
    int32 m_nHalloweenMaskListSeed; // offset 0xA3C, size 0x4, align 4
    bool m_bBombDropped; // offset 0xA40, size 0x1, align 1
    char _pad_0A41[0x3]; // offset 0xA41
    int32 m_iRoundWinStatus; // offset 0xA44, size 0x4, align 4
    int32 m_eRoundWinReason; // offset 0xA48, size 0x4, align 4
    bool m_bTCantBuy; // offset 0xA4C, size 0x1, align 1
    bool m_bCTCantBuy; // offset 0xA4D, size 0x1, align 1
    char _pad_0A4E[0x2]; // offset 0xA4E
    int32[30] m_iMatchStats_RoundResults; // offset 0xA50, size 0x78, align 4
    int32[30] m_iMatchStats_PlayersAlive_CT; // offset 0xAC8, size 0x78, align 4
    int32[30] m_iMatchStats_PlayersAlive_T; // offset 0xB40, size 0x78, align 4
    float32[32] m_TeamRespawnWaveTimes; // offset 0xBB8, size 0x80, align 4
    GameTime_t[32] m_flNextRespawnWave; // offset 0xC38, size 0x80, align 4
    VectorWS m_vMinimapMins; // offset 0xCB8, size 0xC, align 4
    VectorWS m_vMinimapMaxs; // offset 0xCC4, size 0xC, align 4
    float32[8] m_MinimapVerticalSectionHeights; // offset 0xCD0, size 0x20, align 4
    uint64 m_ullLocalMatchID; // offset 0xCF0, size 0x8, align 8
    int32[10] m_nEndMatchMapGroupVoteTypes; // offset 0xCF8, size 0x28, align 4
    int32[10] m_nEndMatchMapGroupVoteOptions; // offset 0xD20, size 0x28, align 4
    int32 m_nEndMatchMapVoteWinner; // offset 0xD48, size 0x4, align 4
    int32 m_iNumConsecutiveCTLoses; // offset 0xD4C, size 0x4, align 4
    int32 m_iNumConsecutiveTerroristLoses; // offset 0xD50, size 0x4, align 4
    char _pad_0D54[0x1C]; // offset 0xD54
    bool m_bHasHostageBeenTouched; // offset 0xD70, size 0x1, align 1
    char _pad_0D71[0x3]; // offset 0xD71
    GameTime_t m_flIntermissionStartTime; // offset 0xD74, size 0x4, align 255
    GameTime_t m_flIntermissionEndTime; // offset 0xD78, size 0x4, align 255
    bool m_bLevelInitialized; // offset 0xD7C, size 0x1, align 1
    char _pad_0D7D[0x3]; // offset 0xD7D
    int32 m_iTotalRoundsPlayed; // offset 0xD80, size 0x4, align 4
    int32 m_iUnBalancedRounds; // offset 0xD84, size 0x4, align 4
    bool m_endMatchOnRoundReset; // offset 0xD88, size 0x1, align 1
    bool m_endMatchOnThink; // offset 0xD89, size 0x1, align 1
    char _pad_0D8A[0x2]; // offset 0xD8A
    int32 m_iNumTerrorist; // offset 0xD8C, size 0x4, align 4
    int32 m_iNumCT; // offset 0xD90, size 0x4, align 4
    int32 m_iNumSpawnableTerrorist; // offset 0xD94, size 0x4, align 4
    int32 m_iNumSpawnableCT; // offset 0xD98, size 0x4, align 4
    char _pad_0D9C[0x4]; // offset 0xD9C
    CUtlVector< int32 > m_arrSelectedHostageSpawnIndices; // offset 0xDA0, size 0x18, align 8
    int32 m_nSpawnPointsRandomSeed; // offset 0xDB8, size 0x4, align 4
    bool m_bFirstConnected; // offset 0xDBC, size 0x1, align 1
    bool m_bCompleteReset; // offset 0xDBD, size 0x1, align 1
    bool m_bPickNewTeamsOnReset; // offset 0xDBE, size 0x1, align 1
    bool m_bScrambleTeamsOnRestart; // offset 0xDBF, size 0x1, align 1
    bool m_bSwapTeamsOnRestart; // offset 0xDC0, size 0x1, align 1
    char _pad_0DC1[0x7]; // offset 0xDC1
    CUtlVector< int32 > m_nEndMatchTiedVotes; // offset 0xDC8, size 0x18, align 8
    char _pad_0DE0[0x4]; // offset 0xDE0
    bool m_bNeedToAskPlayersForContinueVote; // offset 0xDE4, size 0x1, align 1
    char _pad_0DE5[0x3]; // offset 0xDE5
    uint32 m_numQueuedMatchmakingAccounts; // offset 0xDE8, size 0x4, align 4
    float32 m_fAvgPlayerRank; // offset 0xDEC, size 0x4, align 4
    char* m_pQueuedMatchmakingReservationString; // offset 0xDF0, size 0x8, align 8
    uint32 m_numTotalTournamentDrops; // offset 0xDF8, size 0x4, align 4
    uint32 m_numSpectatorsCountMax; // offset 0xDFC, size 0x4, align 4
    uint32 m_numSpectatorsCountMaxTV; // offset 0xE00, size 0x4, align 4
    uint32 m_numSpectatorsCountMaxLnk; // offset 0xE04, size 0x4, align 4
    char _pad_0E08[0x8]; // offset 0xE08
    int32 m_nCTsAliveAtFreezetimeEnd; // offset 0xE10, size 0x4, align 4
    int32 m_nTerroristsAliveAtFreezetimeEnd; // offset 0xE14, size 0x4, align 4
    bool m_bForceTeamChangeSilent; // offset 0xE18, size 0x1, align 1
    bool m_bLoadingRoundBackupData; // offset 0xE19, size 0x1, align 1
    char _pad_0E1A[0x36]; // offset 0xE1A
    int32 m_nMatchInfoShowType; // offset 0xE50, size 0x4, align 4
    float32 m_flMatchInfoDecidedTime; // offset 0xE54, size 0x4, align 4
    char _pad_0E58[0x18]; // offset 0xE58
    int32 mTeamDMLastWinningTeamNumber; // offset 0xE70, size 0x4, align 4
    float32 mTeamDMLastThinkTime; // offset 0xE74, size 0x4, align 4
    float32 m_flTeamDMLastAnnouncementTime; // offset 0xE78, size 0x4, align 4
    int32 m_iAccountTerrorist; // offset 0xE7C, size 0x4, align 4
    int32 m_iAccountCT; // offset 0xE80, size 0x4, align 4
    int32 m_iSpawnPointCount_Terrorist; // offset 0xE84, size 0x4, align 4
    int32 m_iSpawnPointCount_CT; // offset 0xE88, size 0x4, align 4
    int32 m_iMaxNumTerrorists; // offset 0xE8C, size 0x4, align 4
    int32 m_iMaxNumCTs; // offset 0xE90, size 0x4, align 4
    int32 m_iLoserBonusMostRecentTeam; // offset 0xE94, size 0x4, align 4
    float32 m_tmNextPeriodicThink; // offset 0xE98, size 0x4, align 4
    bool m_bVoiceWonMatchBragFired; // offset 0xE9C, size 0x1, align 1
    char _pad_0E9D[0x3]; // offset 0xE9D
    float32 m_fWarmupNextChatNoticeTime; // offset 0xEA0, size 0x4, align 4
    char _pad_0EA4[0x4]; // offset 0xEA4
    int32 m_iHostagesRescued; // offset 0xEA8, size 0x4, align 4
    int32 m_iHostagesTouched; // offset 0xEAC, size 0x4, align 4
    float32 m_flNextHostageAnnouncement; // offset 0xEB0, size 0x4, align 4
    bool m_bNoTerroristsKilled; // offset 0xEB4, size 0x1, align 1
    bool m_bNoCTsKilled; // offset 0xEB5, size 0x1, align 1
    bool m_bNoEnemiesKilled; // offset 0xEB6, size 0x1, align 1
    bool m_bCanDonateWeapons; // offset 0xEB7, size 0x1, align 1
    char _pad_0EB8[0x4]; // offset 0xEB8
    float32 m_firstKillTime; // offset 0xEBC, size 0x4, align 4
    char _pad_0EC0[0x4]; // offset 0xEC0
    float32 m_firstBloodTime; // offset 0xEC4, size 0x4, align 4
    char _pad_0EC8[0x18]; // offset 0xEC8
    bool m_hostageWasInjured; // offset 0xEE0, size 0x1, align 1
    bool m_hostageWasKilled; // offset 0xEE1, size 0x1, align 1
    char _pad_0EE2[0xE]; // offset 0xEE2
    bool m_bVoteCalled; // offset 0xEF0, size 0x1, align 1
    bool m_bServerVoteOnReset; // offset 0xEF1, size 0x1, align 1
    char _pad_0EF2[0x2]; // offset 0xEF2
    float32 m_flVoteCheckThrottle; // offset 0xEF4, size 0x4, align 4
    bool m_bBuyTimeEnded; // offset 0xEF8, size 0x1, align 1
    char _pad_0EF9[0x3]; // offset 0xEF9
    int32 m_nLastFreezeEndBeep; // offset 0xEFC, size 0x4, align 4
    bool m_bTargetBombed; // offset 0xF00, size 0x1, align 1
    bool m_bBombDefused; // offset 0xF01, size 0x1, align 1
    bool m_bMapHasBombZone; // offset 0xF02, size 0x1, align 1
    char _pad_0F03[0x4D]; // offset 0xF03
    VectorWS m_vecMainCTSpawnPos; // offset 0xF50, size 0xC, align 4
    char _pad_0F5C[0x4]; // offset 0xF5C
    CUtlVector< CHandle< SpawnPoint > > m_CTSpawnPointsMasterList; // offset 0xF60, size 0x18, align 8
    CUtlVector< CHandle< SpawnPoint > > m_TerroristSpawnPointsMasterList; // offset 0xF78, size 0x18, align 8
    bool m_bRespawningAllRespawnablePlayers; // offset 0xF90, size 0x1, align 1
    char _pad_0F91[0x3]; // offset 0xF91
    int32 m_iNextCTSpawnPoint; // offset 0xF94, size 0x4, align 4
    float32 m_flCTSpawnPointUsedTime; // offset 0xF98, size 0x4, align 4
    int32 m_iNextTerroristSpawnPoint; // offset 0xF9C, size 0x4, align 4
    float32 m_flTerroristSpawnPointUsedTime; // offset 0xFA0, size 0x4, align 4
    char _pad_0FA4[0x4]; // offset 0xFA4
    CUtlVector< CHandle< SpawnPoint > > m_CTSpawnPoints; // offset 0xFA8, size 0x18, align 8
    CUtlVector< CHandle< SpawnPoint > > m_TerroristSpawnPoints; // offset 0xFC0, size 0x18, align 8
    bool m_bIsUnreservedGameServer; // offset 0xFD8, size 0x1, align 1
    char _pad_0FD9[0x3]; // offset 0xFD9
    float32 m_fAutobalanceDisplayTime; // offset 0xFDC, size 0x4, align 4
    char _pad_0FE0[0x38]; // offset 0xFE0
    bool m_bAllowWeaponSwitch; // offset 0x1018, size 0x1, align 1
    bool m_bRoundTimeWarningTriggered; // offset 0x1019, size 0x1, align 1
    char _pad_101A[0x2]; // offset 0x101A
    GameTime_t m_phaseChangeAnnouncementTime; // offset 0x101C, size 0x4, align 255
    float32 m_fNextUpdateTeamClanNamesTime; // offset 0x1020, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1024, size 0x4, align 255
    float32 m_fAccumulatedRoundOffDamage; // offset 0x1028, size 0x4, align 4
    int32 m_nShorthandedBonusLastEvalRound; // offset 0x102C, size 0x4, align 4
    char _pad_1030[0x48]; // offset 0x1030
    int32 m_nMatchAbortedEarlyReason; // offset 0x1078, size 0x4, align 4
    bool m_bHasTriggeredRoundStartMusic; // offset 0x107C, size 0x1, align 1
    bool m_bSwitchingTeamsAtRoundReset; // offset 0x107D, size 0x1, align 1
    char _pad_107E[0x1A]; // offset 0x107E
    CCSGameModeRules* m_pGameModeRules; // offset 0x1098, size 0x8, align 8
    KeyValues3 m_BtGlobalBlackboard; // offset 0x10A0, size 0x10, align 8
    char _pad_10B0[0x80]; // offset 0x10B0
    CHandle< CBaseEntity > m_hPlayerResource; // offset 0x1130, size 0x4, align 4
    char _pad_1134[0x4]; // offset 0x1134
    CRetakeGameRules m_RetakeRules; // offset 0x1138, size 0x1F0, align 255
    CUtlVector< int32 >[4] m_arrTeamUniqueKillWeaponsMatch; // offset 0x1328, size 0x60, align 8
    bool[4] m_bTeamLastKillUsedUniqueWeaponMatch; // offset 0x1388, size 0x4, align 1
    char _pad_138C[0x24]; // offset 0x138C
    uint8 m_nMatchEndCount; // offset 0x13B0, size 0x1, align 1
    char _pad_13B1[0x3]; // offset 0x13B1
    int32 m_nTTeamIntroVariant; // offset 0x13B4, size 0x4, align 4
    int32 m_nCTTeamIntroVariant; // offset 0x13B8, size 0x4, align 4
    bool m_bTeamIntroPeriod; // offset 0x13BC, size 0x1, align 1
    char _pad_13BD[0x3]; // offset 0x13BD
    GameTime_t m_fTeamIntroPeriodEnd; // offset 0x13C0, size 0x4, align 255
    bool m_bPlayedTeamIntroVO; // offset 0x13C4, size 0x1, align 1
    char _pad_13C5[0x3]; // offset 0x13C5
    int32 m_iRoundEndWinnerTeam; // offset 0x13C8, size 0x4, align 4
    int32 m_eRoundEndReason; // offset 0x13CC, size 0x4, align 4
    bool m_bRoundEndShowTimerDefend; // offset 0x13D0, size 0x1, align 1
    char _pad_13D1[0x3]; // offset 0x13D1
    int32 m_iRoundEndTimerTime; // offset 0x13D4, size 0x4, align 4
    CUtlString m_sRoundEndFunFactToken; // offset 0x13D8, size 0x8, align 8
    CPlayerSlot m_iRoundEndFunFactPlayerSlot; // offset 0x13E0, size 0x4, align 4
    int32 m_iRoundEndFunFactData1; // offset 0x13E4, size 0x4, align 4
    int32 m_iRoundEndFunFactData2; // offset 0x13E8, size 0x4, align 4
    int32 m_iRoundEndFunFactData3; // offset 0x13EC, size 0x4, align 4
    CUtlString m_sRoundEndMessage; // offset 0x13F0, size 0x8, align 8
    int32 m_iRoundEndPlayerCount; // offset 0x13F8, size 0x4, align 4
    bool m_bRoundEndNoMusic; // offset 0x13FC, size 0x1, align 1
    char _pad_13FD[0x3]; // offset 0x13FD
    int32 m_iRoundEndLegacy; // offset 0x1400, size 0x4, align 4
    uint8 m_nRoundEndCount; // offset 0x1404, size 0x1, align 1
    char _pad_1405[0x3]; // offset 0x1405
    int32 m_iRoundStartRoundNumber; // offset 0x1408, size 0x4, align 4
    uint8 m_nRoundStartCount; // offset 0x140C, size 0x1, align 1
    char _pad_140D[0x400B]; // offset 0x140D
    float64 m_flLastPerfSampleTime; // offset 0x5418, size 0x8, align 8
    char _pad_5420[0xC020]; // offset 0x5420
};
