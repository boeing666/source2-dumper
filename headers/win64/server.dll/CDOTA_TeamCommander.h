#pragma once

class CDOTA_TeamCommander  // sizeof 0x1030, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    GameTick_t m_nLastUnitsCollectTick; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x2B4]; // offset 0x14
    CountdownTimer m_LaneFrontUpdate; // offset 0x2C8, size 0x18, align 8
    CountdownTimer m_LastKnownEnemyLocationTimer; // offset 0x2E0, size 0x18, align 8
    uint64 m_ulBotScriptUGC; // offset 0x2F8, size 0x8, align 8
    uint32 m_rtBotScriptUpdated; // offset 0x300, size 0x4, align 4
    char _pad_0304[0x4]; // offset 0x304
    CountdownTimer m_AvoidanceGridTimer; // offset 0x308, size 0x18, align 8
    CountdownTimer m_EnemyVisibilityGridTimer; // offset 0x320, size 0x18, align 8
    CountdownTimer m_LaneStatusTimer; // offset 0x338, size 0x18, align 8
    CountdownTimer m_ChatThrottleTimer; // offset 0x350, size 0x18, align 8
    DOTATeam_t m_eTeam; // offset 0x368, size 0x4, align 4
    char _pad_036C[0x6C]; // offset 0x36C
    bool m_bLateGame; // offset 0x3D8, size 0x1, align 1
    char _pad_03D9[0x3]; // offset 0x3D9
    float32[4] m_LaneLengths; // offset 0x3DC, size 0x10, align 4
    float32[4][2] m_LaneFrontCreepsAmounts; // offset 0x3EC, size 0x20, align 4
    float32[4][2] m_LaneFrontTowersAmounts; // offset 0x40C, size 0x20, align 4
    char _pad_042C[0x4]; // offset 0x42C
    CountdownTimer m_LaneReassignTimer; // offset 0x430, size 0x18, align 8
    CountdownTimer m_LaneMigrationTimer; // offset 0x448, size 0x18, align 8
    CUtlVector< int32 > m_AvoidanceGrid; // offset 0x460, size 0x18, align 8
    char _pad_0478[0x28]; // offset 0x478
    CHandle< CBaseEntity > m_hRoamingUnit; // offset 0x4A0, size 0x4, align 4
    DOTA_LANE m_RoamTargetLane; // offset 0x4A4, size 0x4, align 4
    char _pad_04A8[0x30]; // offset 0x4A8
    CHandle< CBaseEntity >[8][4] m_Buildings; // offset 0x4D8, size 0x80, align 4
    float32[8][4] m_fBuildingFortTimings; // offset 0x558, size 0x80, align 4
    CHandle< CBaseEntity >[9][4] m_LaneNodes; // offset 0x5D8, size 0x90, align 4
    float32[4] m_fPushLaneDesire; // offset 0x668, size 0x10, align 4
    float32[4] m_fPushLaneRawDesire; // offset 0x678, size 0x10, align 4
    float32[4] m_fPushLaneConvenienceDesire; // offset 0x688, size 0x10, align 4
    float32[4] m_fDefendLaneDesire; // offset 0x698, size 0x10, align 4
    float32[4] m_fDefendLaneUrgencyDesire; // offset 0x6A8, size 0x10, align 4
    float32[4] m_fDefendLanePowerDesire; // offset 0x6B8, size 0x10, align 4
    char _pad_06C8[0x20]; // offset 0x6C8
    float32[4] m_fFarmLaneDesire; // offset 0x6E8, size 0x10, align 4
    int32 m_iLastSeenRoshanHealth; // offset 0x6F8, size 0x4, align 4
    float32 m_fRoshanDesire; // offset 0x6FC, size 0x4, align 4
    bool[2] m_bWisdomShrineBelievedToBeReady; // offset 0x700, size 0x2, align 1
    char _pad_0702[0x6]; // offset 0x702
    CUtlVector< CHandle< CBaseEntity > >[4] m_hProposedPushUnits; // offset 0x708, size 0x60, align 8
    CUtlVector< CHandle< CBaseEntity > >[4] m_hProposedDefendUnits; // offset 0x768, size 0x60, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hProposedRoamUnits; // offset 0x7C8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hProposedRoshanUnits; // offset 0x7E0, size 0x18, align 8
    float32 m_fRoamDesire; // offset 0x7F8, size 0x4, align 4
    float32 m_fRoamOffensivePowerFactor; // offset 0x7FC, size 0x4, align 4
    float32 m_fRoamDistanceFactor; // offset 0x800, size 0x4, align 4
    float32 m_fRoamPositionFactor; // offset 0x804, size 0x4, align 4
    CHandle< CBaseEntity > m_hRoamTarget; // offset 0x808, size 0x4, align 4
    VectorWS m_vRoamTargetLoc; // offset 0x80C, size 0xC, align 4
    float32 m_flTeamfightTotalPowerRatio; // offset 0x818, size 0x4, align 4
    float32 m_flTeamfightNearbyPowerRatio; // offset 0x81C, size 0x4, align 4
    char _pad_0820[0x8]; // offset 0x820
    CUtlVector< CHandle< CBaseEntity > > m_hProposedTeamfightUnits; // offset 0x828, size 0x18, align 8
    CHandle< CBaseEntity > m_hTeamfightTarget; // offset 0x840, size 0x4, align 4
    VectorWS m_vTeamfightTargetLoc; // offset 0x844, size 0xC, align 4
    DOTA_LANE m_eTeamDefenseLane; // offset 0x850, size 0x4, align 4
    GameTime_t m_flTeamDefenseStarted; // offset 0x854, size 0x4, align 255
    CountdownTimer m_WardCalculationTimer; // offset 0x858, size 0x18, align 8
    char _pad_0870[0x18]; // offset 0x870
    float32[24] m_fHeroSelectionTimes; // offset 0x888, size 0x60, align 4
    char _pad_08E8[0x18]; // offset 0x8E8
    VectorWS m_vBaseLocation; // offset 0x900, size 0xC, align 4
    VectorWS m_vPregameGatherLocation; // offset 0x90C, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_AllUnits; // offset 0x918, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllAlliedUnits; // offset 0x930, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllAlliedHeroes; // offset 0x948, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllAlliedCreeps; // offset 0x960, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllAlliedWards; // offset 0x978, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllAlliedBuildings; // offset 0x990, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllAlliedOther; // offset 0x9A8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllEnemyUnits; // offset 0x9C0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllEnemyHeroes; // offset 0x9D8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllEnemyCreeps; // offset 0x9F0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllEnemyWards; // offset 0xA08, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllEnemyBuildings; // offset 0xA20, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllEnemyOther; // offset 0xA38, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllNeutralCreeps; // offset 0xA50, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_ThinkerUnits; // offset 0xA68, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_AllUnitsIncludingDead; // offset 0xA80, size 0x18, align 8
    char _pad_0A98[0x30]; // offset 0xA98
    CUtlVector< CHandle< CBaseEntity > > m_hCouriers; // offset 0xAC8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hDisabledBots; // offset 0xAE0, size 0x18, align 8
    char _pad_0AF8[0x370]; // offset 0xAF8
    GameTime_t m_fGoodLuckFlavorTextTime; // offset 0xE68, size 0x4, align 255
    GameTime_t m_fTeamfightFlavorTextTime; // offset 0xE6C, size 0x4, align 255
    GameTime_t m_fCongratulateHeroFlavorTextTime; // offset 0xE70, size 0x4, align 255
    GameTime_t m_fLastAliveHeroHistorySnapshotTime; // offset 0xE74, size 0x4, align 255
    int32 m_iAliveHeroHistoryIndex; // offset 0xE78, size 0x4, align 4
    int32[5] m_iAliveHeroHistory; // offset 0xE7C, size 0x14, align 4
    GameTime_t m_fPlayerDraftChooseTime; // offset 0xE90, size 0x4, align 255
    char _pad_0E94[0xC]; // offset 0xE94
    CUtlString m_sScriptDirectory; // offset 0xEA0, size 0x8, align 8
    HSCRIPT m_hHeroSelectionScriptScope; // offset 0xEA8, size 0x8, align 8
    HSCRIPT m_hTeamLevelDesiresScriptScope; // offset 0xEB0, size 0x8, align 8
    char _pad_0EB8[0x68]; // offset 0xEB8
    GameTick_t m_nScriptPathAvoidanceUpdateTick; // offset 0xF20, size 0x4, align 255
    float32[30] m_fExecutionTime; // offset 0xF24, size 0x78, align 4
    int32 m_iCurExecutionTime; // offset 0xF9C, size 0x4, align 4
    char _pad_0FA0[0x90]; // offset 0xFA0
};
