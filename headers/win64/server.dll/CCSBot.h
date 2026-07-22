#pragma once

class CCSBot : public CBot /*0x0*/  // sizeof 0x5E40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x108]; // offset 0x0
    VectorWS m_eyePosition; // offset 0x108, size 0xC, align 4
    char[64] m_name; // offset 0x114, size 0x40, align 1
    float32 m_combatRange; // offset 0x154, size 0x4, align 4
    bool m_isRogue; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x7]; // offset 0x159
    CountdownTimer m_rogueTimer; // offset 0x160, size 0x18, align 8
    char _pad_0178[0x4]; // offset 0x178
    bool m_diedLastRound; // offset 0x17C, size 0x1, align 1
    char _pad_017D[0x3]; // offset 0x17D
    float32 m_safeTime; // offset 0x180, size 0x4, align 4
    bool m_wasSafe; // offset 0x184, size 0x1, align 1
    char _pad_0185[0x7]; // offset 0x185
    bool m_blindFire; // offset 0x18C, size 0x1, align 1
    char _pad_018D[0x3]; // offset 0x18D
    CountdownTimer m_surpriseTimer; // offset 0x190, size 0x18, align 8
    bool m_bAllowActive; // offset 0x1A8, size 0x1, align 1
    bool m_isFollowing; // offset 0x1A9, size 0x1, align 1
    char _pad_01AA[0x2]; // offset 0x1AA
    CHandle< CCSPlayerPawn > m_leader; // offset 0x1AC, size 0x4, align 4
    float32 m_followTimestamp; // offset 0x1B0, size 0x4, align 4
    float32 m_allowAutoFollowTime; // offset 0x1B4, size 0x4, align 4
    CountdownTimer m_hurryTimer; // offset 0x1B8, size 0x18, align 8
    CountdownTimer m_alertTimer; // offset 0x1D0, size 0x18, align 8
    CountdownTimer m_sneakTimer; // offset 0x1E8, size 0x18, align 8
    CountdownTimer m_panicTimer; // offset 0x200, size 0x18, align 8
    char _pad_0218[0x3B0]; // offset 0x218
    float32 m_stateTimestamp; // offset 0x5C8, size 0x4, align 4
    bool m_isAttacking; // offset 0x5CC, size 0x1, align 1
    bool m_isOpeningDoor; // offset 0x5CD, size 0x1, align 1
    char _pad_05CE[0x6]; // offset 0x5CE
    CHandle< CBaseEntity > m_taskEntity; // offset 0x5D4, size 0x4, align 4
    char _pad_05D8[0xC]; // offset 0x5D8
    VectorWS m_goalPosition; // offset 0x5E4, size 0xC, align 4
    CHandle< CBaseEntity > m_goalEntity; // offset 0x5F0, size 0x4, align 4
    CHandle< CBaseEntity > m_avoid; // offset 0x5F4, size 0x4, align 4
    float32 m_avoidTimestamp; // offset 0x5F8, size 0x4, align 4
    bool m_isStopping; // offset 0x5FC, size 0x1, align 1
    bool m_hasVisitedEnemySpawn; // offset 0x5FD, size 0x1, align 1
    char _pad_05FE[0x2]; // offset 0x5FE
    IntervalTimer m_stillTimer; // offset 0x600, size 0x10, align 8
    bool m_bEyeAnglesUnderPathFinderControl; // offset 0x610, size 0x1, align 1
    char _pad_0611[0x48F7]; // offset 0x611
    int32 m_pathIndex; // offset 0x4F08, size 0x4, align 4
    GameTime_t m_areaEnteredTimestamp; // offset 0x4F0C, size 0x4, align 255
    CountdownTimer m_repathTimer; // offset 0x4F10, size 0x18, align 8
    CountdownTimer m_avoidFriendTimer; // offset 0x4F28, size 0x18, align 8
    bool m_isFriendInTheWay; // offset 0x4F40, size 0x1, align 1
    char _pad_4F41[0x7]; // offset 0x4F41
    CountdownTimer m_politeTimer; // offset 0x4F48, size 0x18, align 8
    bool m_isWaitingBehindFriend; // offset 0x4F60, size 0x1, align 1
    char _pad_4F61[0x2B]; // offset 0x4F61
    float32 m_pathLadderEnd; // offset 0x4F8C, size 0x4, align 4
    char _pad_4F90[0x48]; // offset 0x4F90
    CountdownTimer m_mustRunTimer; // offset 0x4FD8, size 0x18, align 8
    CountdownTimer m_waitTimer; // offset 0x4FF0, size 0x18, align 8
    CountdownTimer m_updateTravelDistanceTimer; // offset 0x5008, size 0x18, align 8
    float32[64] m_playerTravelDistance; // offset 0x5020, size 0x100, align 4
    uint8 m_travelDistancePhase; // offset 0x5120, size 0x1, align 1
    char _pad_5121[0x197]; // offset 0x5121
    uint8 m_hostageEscortCount; // offset 0x52B8, size 0x1, align 1
    char _pad_52B9[0x3]; // offset 0x52B9
    float32 m_hostageEscortCountTimestamp; // offset 0x52BC, size 0x4, align 4
    int32 m_desiredTeam; // offset 0x52C0, size 0x4, align 4
    bool m_hasJoined; // offset 0x52C4, size 0x1, align 1
    bool m_isWaitingForHostage; // offset 0x52C5, size 0x1, align 1
    char _pad_52C6[0x2]; // offset 0x52C6
    CountdownTimer m_inhibitWaitingForHostageTimer; // offset 0x52C8, size 0x18, align 8
    CountdownTimer m_waitForHostageTimer; // offset 0x52E0, size 0x18, align 8
    VectorWS m_noisePosition; // offset 0x52F8, size 0xC, align 4
    float32 m_noiseTravelDistance; // offset 0x5304, size 0x4, align 4
    float32 m_noiseTimestamp; // offset 0x5308, size 0x4, align 4
    char _pad_530C[0x4]; // offset 0x530C
    CCSPlayerPawn* m_noiseSource; // offset 0x5310, size 0x8, align 8
    char _pad_5318[0x10]; // offset 0x5318
    CountdownTimer m_noiseBendTimer; // offset 0x5328, size 0x18, align 8
    VectorWS m_bentNoisePosition; // offset 0x5340, size 0xC, align 4
    bool m_bendNoisePositionValid; // offset 0x534C, size 0x1, align 1
    char _pad_534D[0x3]; // offset 0x534D
    float32 m_lookAroundStateTimestamp; // offset 0x5350, size 0x4, align 4
    float32 m_lookAheadAngle; // offset 0x5354, size 0x4, align 4
    float32 m_lookUpAngle; // offset 0x5358, size 0x4, align 4
    float32 m_forwardAngle; // offset 0x535C, size 0x4, align 4
    float32 m_inhibitLookAroundTimestamp; // offset 0x5360, size 0x4, align 4
    char _pad_5364[0x4]; // offset 0x5364
    VectorWS m_lookAtSpot; // offset 0x5368, size 0xC, align 4
    char _pad_5374[0x4]; // offset 0x5374
    float32 m_lookAtSpotDuration; // offset 0x5378, size 0x4, align 4
    float32 m_lookAtSpotTimestamp; // offset 0x537C, size 0x4, align 4
    float32 m_lookAtSpotAngleTolerance; // offset 0x5380, size 0x4, align 4
    bool m_lookAtSpotClearIfClose; // offset 0x5384, size 0x1, align 1
    bool m_lookAtSpotAttack; // offset 0x5385, size 0x1, align 1
    char _pad_5386[0x2]; // offset 0x5386
    char* m_lookAtDesc; // offset 0x5388, size 0x8, align 8
    float32 m_peripheralTimestamp; // offset 0x5390, size 0x4, align 4
    char _pad_5394[0x184]; // offset 0x5394
    uint8 m_approachPointCount; // offset 0x5518, size 0x1, align 1
    char _pad_5519[0x3]; // offset 0x5519
    VectorWS m_approachPointViewPosition; // offset 0x551C, size 0xC, align 4
    IntervalTimer m_viewSteadyTimer; // offset 0x5528, size 0x10, align 8
    char _pad_5538[0x8]; // offset 0x5538
    CountdownTimer m_tossGrenadeTimer; // offset 0x5540, size 0x18, align 8
    char _pad_5558[0x8]; // offset 0x5558
    CountdownTimer m_isAvoidingGrenade; // offset 0x5560, size 0x18, align 8
    char _pad_5578[0x8]; // offset 0x5578
    float32 m_spotCheckTimestamp; // offset 0x5580, size 0x4, align 4
    char _pad_5584[0x404]; // offset 0x5584
    int32 m_checkedHidingSpotCount; // offset 0x5988, size 0x4, align 4
    float32 m_lookPitch; // offset 0x598C, size 0x4, align 4
    float32 m_lookPitchVel; // offset 0x5990, size 0x4, align 4
    float32 m_lookYaw; // offset 0x5994, size 0x4, align 4
    float32 m_lookYawVel; // offset 0x5998, size 0x4, align 4
    VectorWS m_targetSpot; // offset 0x599C, size 0xC, align 4
    Vector m_targetSpotVelocity; // offset 0x59A8, size 0xC, align 4
    VectorWS m_targetSpotPredicted; // offset 0x59B4, size 0xC, align 4
    QAngle m_aimError; // offset 0x59C0, size 0xC, align 4
    QAngle m_aimGoal; // offset 0x59CC, size 0xC, align 4
    GameTime_t m_targetSpotTime; // offset 0x59D8, size 0x4, align 255
    float32 m_aimFocus; // offset 0x59DC, size 0x4, align 4
    float32 m_aimFocusInterval; // offset 0x59E0, size 0x4, align 4
    GameTime_t m_aimFocusNextUpdate; // offset 0x59E4, size 0x4, align 255
    char _pad_59E8[0x8]; // offset 0x59E8
    CountdownTimer m_ignoreEnemiesTimer; // offset 0x59F0, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_enemy; // offset 0x5A08, size 0x4, align 4
    bool m_isEnemyVisible; // offset 0x5A0C, size 0x1, align 1
    uint8 m_visibleEnemyParts; // offset 0x5A0D, size 0x1, align 1
    char _pad_5A0E[0x2]; // offset 0x5A0E
    VectorWS m_lastEnemyPosition; // offset 0x5A10, size 0xC, align 4
    float32 m_lastSawEnemyTimestamp; // offset 0x5A1C, size 0x4, align 4
    float32 m_firstSawEnemyTimestamp; // offset 0x5A20, size 0x4, align 4
    float32 m_currentEnemyAcquireTimestamp; // offset 0x5A24, size 0x4, align 4
    float32 m_enemyDeathTimestamp; // offset 0x5A28, size 0x4, align 4
    float32 m_friendDeathTimestamp; // offset 0x5A2C, size 0x4, align 4
    bool m_isLastEnemyDead; // offset 0x5A30, size 0x1, align 1
    char _pad_5A31[0x3]; // offset 0x5A31
    int32 m_nearbyEnemyCount; // offset 0x5A34, size 0x4, align 4
    char _pad_5A38[0x208]; // offset 0x5A38
    CHandle< CCSPlayerPawn > m_bomber; // offset 0x5C40, size 0x4, align 4
    int32 m_nearbyFriendCount; // offset 0x5C44, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_closestVisibleFriend; // offset 0x5C48, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // offset 0x5C4C, size 0x4, align 4
    IntervalTimer m_attentionInterval; // offset 0x5C50, size 0x10, align 8
    CHandle< CCSPlayerPawn > m_attacker; // offset 0x5C60, size 0x4, align 4
    float32 m_attackedTimestamp; // offset 0x5C64, size 0x4, align 4
    IntervalTimer m_burnedByFlamesTimer; // offset 0x5C68, size 0x10, align 8
    int32 m_lastVictimID; // offset 0x5C78, size 0x4, align 4
    bool m_isAimingAtEnemy; // offset 0x5C7C, size 0x1, align 1
    bool m_isRapidFiring; // offset 0x5C7D, size 0x1, align 1
    char _pad_5C7E[0x2]; // offset 0x5C7E
    IntervalTimer m_equipTimer; // offset 0x5C80, size 0x10, align 8
    CountdownTimer m_zoomTimer; // offset 0x5C90, size 0x18, align 8
    GameTime_t m_fireWeaponTimestamp; // offset 0x5CA8, size 0x4, align 255
    char _pad_5CAC[0x4]; // offset 0x5CAC
    CountdownTimer m_lookForWeaponsOnGroundTimer; // offset 0x5CB0, size 0x18, align 8
    bool m_bIsSleeping; // offset 0x5CC8, size 0x1, align 1
    bool m_isEnemySniperVisible; // offset 0x5CC9, size 0x1, align 1
    char _pad_5CCA[0x6]; // offset 0x5CCA
    CountdownTimer m_sawEnemySniperTimer; // offset 0x5CD0, size 0x18, align 8
    char _pad_5CE8[0xA0]; // offset 0x5CE8
    uint8 m_enemyQueueIndex; // offset 0x5D88, size 0x1, align 1
    uint8 m_enemyQueueCount; // offset 0x5D89, size 0x1, align 1
    uint8 m_enemyQueueAttendIndex; // offset 0x5D8A, size 0x1, align 1
    bool m_isStuck; // offset 0x5D8B, size 0x1, align 1
    GameTime_t m_stuckTimestamp; // offset 0x5D8C, size 0x4, align 255
    VectorWS m_stuckSpot; // offset 0x5D90, size 0xC, align 4
    char _pad_5D9C[0x4]; // offset 0x5D9C
    CountdownTimer m_wiggleTimer; // offset 0x5DA0, size 0x18, align 8
    CountdownTimer m_stuckJumpTimer; // offset 0x5DB8, size 0x18, align 8
    GameTime_t m_nextCleanupCheckTimestamp; // offset 0x5DD0, size 0x4, align 255
    float32[10] m_avgVel; // offset 0x5DD4, size 0x28, align 4
    int32 m_avgVelIndex; // offset 0x5DFC, size 0x4, align 4
    int32 m_avgVelCount; // offset 0x5E00, size 0x4, align 4
    VectorWS m_lastOrigin; // offset 0x5E04, size 0xC, align 4
    char _pad_5E10[0x4]; // offset 0x5E10
    float32 m_lastRadioRecievedTimestamp; // offset 0x5E14, size 0x4, align 4
    float32 m_lastRadioSentTimestamp; // offset 0x5E18, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_radioSubject; // offset 0x5E1C, size 0x4, align 4
    VectorWS m_radioPosition; // offset 0x5E20, size 0xC, align 4
    float32 m_voiceEndTimestamp; // offset 0x5E2C, size 0x4, align 4
    char _pad_5E30[0x8]; // offset 0x5E30
    int32 m_lastValidReactionQueueFrame; // offset 0x5E38, size 0x4, align 4
    char _pad_5E3C[0x4]; // offset 0x5E3C
};
