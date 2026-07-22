#pragma once

class CDOTA_Bot  // sizeof 0x88E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int32 m_iLifesteal; // offset 0x10, size 0x4, align 4
    int32 m_iBlock; // offset 0x14, size 0x4, align 4
    bool m_bForceIdle; // offset 0x18, size 0x1, align 1
    bool m_bForceCreepAttack; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x2]; // offset 0x1A
    float32[30] m_fExecutionTime; // offset 0x1C, size 0x78, align 4
    int32 m_iCurExecutionTime; // offset 0x94, size 0x4, align 4
    PlayerID_t m_iPlayerID; // offset 0x98, size 0x4, align 255
    CHandle< CBaseEntity > m_hUnit; // offset 0x9C, size 0x4, align 4
    CDOTA_TeamCommander* m_pTeamCommander; // offset 0xA0, size 0x8, align 8
    int32 m_iUnitType; // offset 0xA8, size 0x4, align 4
    float32 m_fAggressionFactor; // offset 0xAC, size 0x4, align 4
    bool m_bBotControlled; // offset 0xB0, size 0x1, align 1
    bool m_bLiquidate; // offset 0xB1, size 0x1, align 1
    bool m_bDoNotPurchase; // offset 0xB2, size 0x1, align 1
    char _pad_00B3[0x1]; // offset 0xB3
    int32 m_iDifficulty; // offset 0xB4, size 0x4, align 4
    bool m_bIsFullScriptTakeover; // offset 0xB8, size 0x1, align 1
    bool m_bIsTrialModeEnabled; // offset 0xB9, size 0x1, align 1
    bool m_bIsTaskLogicEnabled; // offset 0xBA, size 0x1, align 1
    char _pad_00BB[0x1]; // offset 0xBB
    DOTA_LANE m_CurrentLane; // offset 0xBC, size 0x4, align 4
    DOTA_LANE m_MostRecentLane; // offset 0xC0, size 0x4, align 4
    DOTA_LANE m_AssignedLane; // offset 0xC4, size 0x4, align 4
    DOTA_LANE m_TargetLane; // offset 0xC8, size 0x4, align 4
    DOTA_LANE m_ForcedLane; // offset 0xCC, size 0x4, align 4
    float32 m_fCurrentLaneAmount; // offset 0xD0, size 0x4, align 4
    bool m_bIsNPXCarry; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x7]; // offset 0xD5
    bool m_bIsInLaningPhase; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0x3]; // offset 0xDD
    float32 m_fEstimatedUnitDamage; // offset 0xE0, size 0x4, align 4
    float32 m_fEstimatedMaxUnitDamage; // offset 0xE4, size 0x4, align 4
    float32 m_fEstimatedBuildingDamage; // offset 0xE8, size 0x4, align 4
    bool m_bWantsToCast; // offset 0xEC, size 0x1, align 1
    char _pad_00ED[0x3]; // offset 0xED
    int32 m_iWantsToCastFrame; // offset 0xF0, size 0x4, align 4
    bool m_bWantsToAttack; // offset 0xF4, size 0x1, align 1
    char _pad_00F5[0x3]; // offset 0xF5
    int32 m_iWantsToAttackFrame; // offset 0xF8, size 0x4, align 4
    char _pad_00FC[0x4]; // offset 0xFC
    CountdownTimer m_UpdateCurrentLaneTimer; // offset 0x100, size 0x18, align 8
    CountdownTimer m_UpdateModeTimer; // offset 0x118, size 0x18, align 8
    CountdownTimer m_ModeThinkTimer; // offset 0x130, size 0x18, align 8
    CountdownTimer m_UpdateTaskTimer; // offset 0x148, size 0x18, align 8
    CountdownTimer m_InteralRatingsTimer; // offset 0x160, size 0x18, align 8
    CountdownTimer m_BuybackDelayTimer; // offset 0x178, size 0x18, align 8
    CountdownTimer m_CourierUsageTimer; // offset 0x190, size 0x18, align 8
    CountdownTimer m_ItemModeTimeout; // offset 0x1A8, size 0x18, align 8
    CountdownTimer m_AbilityMutedTimer; // offset 0x1C0, size 0x18, align 8
    CountdownTimer m_AbilityMutedCheckTimer; // offset 0x1D8, size 0x18, align 8
    GameTime_t m_HitByTowerTime; // offset 0x1F0, size 0x4, align 255
    GameTime_t[24] m_HitByHeroTime; // offset 0x1F4, size 0x60, align 4
    GameTime_t m_HitByCreepTime; // offset 0x254, size 0x4, align 255
    GameTick_t m_nEstimatedDamageUpdatedTick; // offset 0x258, size 0x4, align 255
    GameTick_t m_nNearbyUnitsUpdatedTick; // offset 0x25C, size 0x4, align 255
    GameTick_t m_nNearbyTreesUpdatedTick; // offset 0x260, size 0x4, align 255
    char _pad_0264[0xC4]; // offset 0x264
    CUtlVector< int32 > m_NearbyTrees; // offset 0x328, size 0x18, align 8
    int32 m_nNearbyEnemyCreeps; // offset 0x340, size 0x4, align 4
    int32 m_nAttackingCreeps; // offset 0x344, size 0x4, align 4
    int32 m_nAttackingTowers; // offset 0x348, size 0x4, align 4
    int32 m_nAttackingHeroes; // offset 0x34C, size 0x4, align 4
    GameTime_t m_fLastSeen; // offset 0x350, size 0x4, align 255
    int32 m_nFailedPaths; // offset 0x354, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x358, size 0x4, align 4
    VectorWS m_vTargetLoc; // offset 0x35C, size 0xC, align 4
    GameTime_t m_fTargetLastSeen; // offset 0x368, size 0x4, align 255
    CHandle< CBaseEntity > m_hTargetLastHitCreep; // offset 0x36C, size 0x4, align 4
    bool m_bWasInvisible; // offset 0x370, size 0x1, align 1
    bool m_bKnownInvisible; // offset 0x371, size 0x1, align 1
    char _pad_0372[0x2]; // offset 0x372
    VectorWS m_vLastSeenLoc; // offset 0x374, size 0xC, align 4
    char _pad_0380[0x38]; // offset 0x380
    VectorWS m_vRequestedBlinkLoc; // offset 0x3B8, size 0xC, align 4
    GameTime_t m_fRequestedBlinkStart; // offset 0x3C4, size 0x4, align 255
    GameTime_t m_fRequestedBlinkExpire; // offset 0x3C8, size 0x4, align 255
    char _pad_03CC[0x20]; // offset 0x3CC
    VectorWS m_vRequestedWardLocation; // offset 0x3EC, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hMinions; // offset 0x3F8, size 0x18, align 8
    CUtlVector< CDOTABaseAbility* > m_Build; // offset 0x410, size 0x18, align 8
    char _pad_0428[0x8308]; // offset 0x428
    float32[32] m_fModeDesires; // offset 0x8730, size 0x80, align 4
    int32 m_iPreviousBotModeType; // offset 0x87B0, size 0x4, align 4
    char _pad_87B4[0x7C]; // offset 0x87B4
    float32 m_flNextTaskDistance; // offset 0x8830, size 0x4, align 4
    GameTime_t m_flTaskReconsiderTime; // offset 0x8834, size 0x4, align 255
    char _pad_8838[0x38]; // offset 0x8838
    GameTime_t m_flPlannerStateExpiration; // offset 0x8870, size 0x4, align 255
    char _pad_8874[0x4]; // offset 0x8874
    CountdownTimer m_UpdateDangerTimer; // offset 0x8878, size 0x18, align 8
    char _pad_8890[0x48]; // offset 0x8890
    GameTime_t m_fPendingActionExecuteTime; // offset 0x88D8, size 0x4, align 255
    bool m_bPendingActionBypass; // offset 0x88DC, size 0x1, align 1
    char _pad_88DD[0x3]; // offset 0x88DD
    int32 m_nForceAbility; // offset 0x88E0, size 0x4, align 4
    GameTime_t m_flLastDebugTime; // offset 0x88E4, size 0x4, align 255
};
