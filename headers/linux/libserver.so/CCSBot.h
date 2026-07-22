#pragma once

class CCSBot : public CBot /*0x0*/  // sizeof 0x5E18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x100]; // offset 0x0
    VectorWS m_eyePosition; // offset 0x100, size 0xC, align 4
    char[64] m_name; // offset 0x10C, size 0x40, align 1
    float32 m_combatRange; // offset 0x14C, size 0x4, align 4
    bool m_isRogue; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x7]; // offset 0x151
    CountdownTimer m_rogueTimer; // offset 0x158, size 0x18, align 8
    char _pad_0170[0x4]; // offset 0x170
    bool m_diedLastRound; // offset 0x174, size 0x1, align 1
    char _pad_0175[0x3]; // offset 0x175
    float32 m_safeTime; // offset 0x178, size 0x4, align 4
    bool m_wasSafe; // offset 0x17C, size 0x1, align 1
    char _pad_017D[0x7]; // offset 0x17D
    bool m_blindFire; // offset 0x184, size 0x1, align 1
    char _pad_0185[0x3]; // offset 0x185
    CountdownTimer m_surpriseTimer; // offset 0x188, size 0x18, align 8
    bool m_bAllowActive; // offset 0x1A0, size 0x1, align 1
    bool m_isFollowing; // offset 0x1A1, size 0x1, align 1
    char _pad_01A2[0x2]; // offset 0x1A2
    CHandle< CCSPlayerPawn > m_leader; // offset 0x1A4, size 0x4, align 4
    float32 m_followTimestamp; // offset 0x1A8, size 0x4, align 4
    float32 m_allowAutoFollowTime; // offset 0x1AC, size 0x4, align 4
    CountdownTimer m_hurryTimer; // offset 0x1B0, size 0x18, align 8
    CountdownTimer m_alertTimer; // offset 0x1C8, size 0x18, align 8
    CountdownTimer m_sneakTimer; // offset 0x1E0, size 0x18, align 8
    CountdownTimer m_panicTimer; // offset 0x1F8, size 0x18, align 8
    char _pad_0210[0x3B0]; // offset 0x210
    float32 m_stateTimestamp; // offset 0x5C0, size 0x4, align 4
    bool m_isAttacking; // offset 0x5C4, size 0x1, align 1
    bool m_isOpeningDoor; // offset 0x5C5, size 0x1, align 1
    char _pad_05C6[0x6]; // offset 0x5C6
    CHandle< CBaseEntity > m_taskEntity; // offset 0x5CC, size 0x4, align 4
    char _pad_05D0[0xC]; // offset 0x5D0
    VectorWS m_goalPosition; // offset 0x5DC, size 0xC, align 4
    CHandle< CBaseEntity > m_goalEntity; // offset 0x5E8, size 0x4, align 4
    CHandle< CBaseEntity > m_avoid; // offset 0x5EC, size 0x4, align 4
    float32 m_avoidTimestamp; // offset 0x5F0, size 0x4, align 4
    bool m_isStopping; // offset 0x5F4, size 0x1, align 1
    bool m_hasVisitedEnemySpawn; // offset 0x5F5, size 0x1, align 1
    char _pad_05F6[0x2]; // offset 0x5F6
    IntervalTimer m_stillTimer; // offset 0x5F8, size 0x10, align 8
    bool m_bEyeAnglesUnderPathFinderControl; // offset 0x608, size 0x1, align 1
    char _pad_0609[0x48D7]; // offset 0x609
    int32 m_pathIndex; // offset 0x4EE0, size 0x4, align 4
    GameTime_t m_areaEnteredTimestamp; // offset 0x4EE4, size 0x4, align 255
    CountdownTimer m_repathTimer; // offset 0x4EE8, size 0x18, align 8
    CountdownTimer m_avoidFriendTimer; // offset 0x4F00, size 0x18, align 8
    bool m_isFriendInTheWay; // offset 0x4F18, size 0x1, align 1
    char _pad_4F19[0x7]; // offset 0x4F19
    CountdownTimer m_politeTimer; // offset 0x4F20, size 0x18, align 8
    bool m_isWaitingBehindFriend; // offset 0x4F38, size 0x1, align 1
    char _pad_4F39[0x2B]; // offset 0x4F39
    float32 m_pathLadderEnd; // offset 0x4F64, size 0x4, align 4
    char _pad_4F68[0x48]; // offset 0x4F68
    CountdownTimer m_mustRunTimer; // offset 0x4FB0, size 0x18, align 8
    CountdownTimer m_waitTimer; // offset 0x4FC8, size 0x18, align 8
    CountdownTimer m_updateTravelDistanceTimer; // offset 0x4FE0, size 0x18, align 8
    float32[64] m_playerTravelDistance; // offset 0x4FF8, size 0x100, align 4
    uint8 m_travelDistancePhase; // offset 0x50F8, size 0x1, align 1
    char _pad_50F9[0x197]; // offset 0x50F9
    uint8 m_hostageEscortCount; // offset 0x5290, size 0x1, align 1
    char _pad_5291[0x3]; // offset 0x5291
    float32 m_hostageEscortCountTimestamp; // offset 0x5294, size 0x4, align 4
    int32 m_desiredTeam; // offset 0x5298, size 0x4, align 4
    bool m_hasJoined; // offset 0x529C, size 0x1, align 1
    bool m_isWaitingForHostage; // offset 0x529D, size 0x1, align 1
    char _pad_529E[0x2]; // offset 0x529E
    CountdownTimer m_inhibitWaitingForHostageTimer; // offset 0x52A0, size 0x18, align 8
    CountdownTimer m_waitForHostageTimer; // offset 0x52B8, size 0x18, align 8
    VectorWS m_noisePosition; // offset 0x52D0, size 0xC, align 4
    float32 m_noiseTravelDistance; // offset 0x52DC, size 0x4, align 4
    float32 m_noiseTimestamp; // offset 0x52E0, size 0x4, align 4
    char _pad_52E4[0x4]; // offset 0x52E4
    CCSPlayerPawn* m_noiseSource; // offset 0x52E8, size 0x8, align 8
    char _pad_52F0[0x10]; // offset 0x52F0
    CountdownTimer m_noiseBendTimer; // offset 0x5300, size 0x18, align 8
    VectorWS m_bentNoisePosition; // offset 0x5318, size 0xC, align 4
    bool m_bendNoisePositionValid; // offset 0x5324, size 0x1, align 1
    char _pad_5325[0x3]; // offset 0x5325
    float32 m_lookAroundStateTimestamp; // offset 0x5328, size 0x4, align 4
    float32 m_lookAheadAngle; // offset 0x532C, size 0x4, align 4
    float32 m_lookUpAngle; // offset 0x5330, size 0x4, align 4
    float32 m_forwardAngle; // offset 0x5334, size 0x4, align 4
    float32 m_inhibitLookAroundTimestamp; // offset 0x5338, size 0x4, align 4
    char _pad_533C[0x4]; // offset 0x533C
    VectorWS m_lookAtSpot; // offset 0x5340, size 0xC, align 4
    char _pad_534C[0x4]; // offset 0x534C
    float32 m_lookAtSpotDuration; // offset 0x5350, size 0x4, align 4
    float32 m_lookAtSpotTimestamp; // offset 0x5354, size 0x4, align 4
    float32 m_lookAtSpotAngleTolerance; // offset 0x5358, size 0x4, align 4
    bool m_lookAtSpotClearIfClose; // offset 0x535C, size 0x1, align 1
    bool m_lookAtSpotAttack; // offset 0x535D, size 0x1, align 1
    char _pad_535E[0x2]; // offset 0x535E
    char* m_lookAtDesc; // offset 0x5360, size 0x8, align 8
    float32 m_peripheralTimestamp; // offset 0x5368, size 0x4, align 4
    char _pad_536C[0x184]; // offset 0x536C
    uint8 m_approachPointCount; // offset 0x54F0, size 0x1, align 1
    char _pad_54F1[0x3]; // offset 0x54F1
    VectorWS m_approachPointViewPosition; // offset 0x54F4, size 0xC, align 4
    IntervalTimer m_viewSteadyTimer; // offset 0x5500, size 0x10, align 8
    char _pad_5510[0x8]; // offset 0x5510
    CountdownTimer m_tossGrenadeTimer; // offset 0x5518, size 0x18, align 8
    char _pad_5530[0x8]; // offset 0x5530
    CountdownTimer m_isAvoidingGrenade; // offset 0x5538, size 0x18, align 8
    char _pad_5550[0x8]; // offset 0x5550
    float32 m_spotCheckTimestamp; // offset 0x5558, size 0x4, align 4
    char _pad_555C[0x404]; // offset 0x555C
    int32 m_checkedHidingSpotCount; // offset 0x5960, size 0x4, align 4
    float32 m_lookPitch; // offset 0x5964, size 0x4, align 4
    float32 m_lookPitchVel; // offset 0x5968, size 0x4, align 4
    float32 m_lookYaw; // offset 0x596C, size 0x4, align 4
    float32 m_lookYawVel; // offset 0x5970, size 0x4, align 4
    VectorWS m_targetSpot; // offset 0x5974, size 0xC, align 4
    Vector m_targetSpotVelocity; // offset 0x5980, size 0xC, align 4
    VectorWS m_targetSpotPredicted; // offset 0x598C, size 0xC, align 4
    QAngle m_aimError; // offset 0x5998, size 0xC, align 4
    QAngle m_aimGoal; // offset 0x59A4, size 0xC, align 4
    GameTime_t m_targetSpotTime; // offset 0x59B0, size 0x4, align 255
    float32 m_aimFocus; // offset 0x59B4, size 0x4, align 4
    float32 m_aimFocusInterval; // offset 0x59B8, size 0x4, align 4
    GameTime_t m_aimFocusNextUpdate; // offset 0x59BC, size 0x4, align 255
    char _pad_59C0[0x8]; // offset 0x59C0
    CountdownTimer m_ignoreEnemiesTimer; // offset 0x59C8, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_enemy; // offset 0x59E0, size 0x4, align 4
    bool m_isEnemyVisible; // offset 0x59E4, size 0x1, align 1
    uint8 m_visibleEnemyParts; // offset 0x59E5, size 0x1, align 1
    char _pad_59E6[0x2]; // offset 0x59E6
    VectorWS m_lastEnemyPosition; // offset 0x59E8, size 0xC, align 4
    float32 m_lastSawEnemyTimestamp; // offset 0x59F4, size 0x4, align 4
    float32 m_firstSawEnemyTimestamp; // offset 0x59F8, size 0x4, align 4
    float32 m_currentEnemyAcquireTimestamp; // offset 0x59FC, size 0x4, align 4
    float32 m_enemyDeathTimestamp; // offset 0x5A00, size 0x4, align 4
    float32 m_friendDeathTimestamp; // offset 0x5A04, size 0x4, align 4
    bool m_isLastEnemyDead; // offset 0x5A08, size 0x1, align 1
    char _pad_5A09[0x3]; // offset 0x5A09
    int32 m_nearbyEnemyCount; // offset 0x5A0C, size 0x4, align 4
    char _pad_5A10[0x208]; // offset 0x5A10
    CHandle< CCSPlayerPawn > m_bomber; // offset 0x5C18, size 0x4, align 4
    int32 m_nearbyFriendCount; // offset 0x5C1C, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_closestVisibleFriend; // offset 0x5C20, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // offset 0x5C24, size 0x4, align 4
    IntervalTimer m_attentionInterval; // offset 0x5C28, size 0x10, align 8
    CHandle< CCSPlayerPawn > m_attacker; // offset 0x5C38, size 0x4, align 4
    float32 m_attackedTimestamp; // offset 0x5C3C, size 0x4, align 4
    IntervalTimer m_burnedByFlamesTimer; // offset 0x5C40, size 0x10, align 8
    int32 m_lastVictimID; // offset 0x5C50, size 0x4, align 4
    bool m_isAimingAtEnemy; // offset 0x5C54, size 0x1, align 1
    bool m_isRapidFiring; // offset 0x5C55, size 0x1, align 1
    char _pad_5C56[0x2]; // offset 0x5C56
    IntervalTimer m_equipTimer; // offset 0x5C58, size 0x10, align 8
    CountdownTimer m_zoomTimer; // offset 0x5C68, size 0x18, align 8
    GameTime_t m_fireWeaponTimestamp; // offset 0x5C80, size 0x4, align 255
    char _pad_5C84[0x4]; // offset 0x5C84
    CountdownTimer m_lookForWeaponsOnGroundTimer; // offset 0x5C88, size 0x18, align 8
    bool m_bIsSleeping; // offset 0x5CA0, size 0x1, align 1
    bool m_isEnemySniperVisible; // offset 0x5CA1, size 0x1, align 1
    char _pad_5CA2[0x6]; // offset 0x5CA2
    CountdownTimer m_sawEnemySniperTimer; // offset 0x5CA8, size 0x18, align 8
    char _pad_5CC0[0xA0]; // offset 0x5CC0
    uint8 m_enemyQueueIndex; // offset 0x5D60, size 0x1, align 1
    uint8 m_enemyQueueCount; // offset 0x5D61, size 0x1, align 1
    uint8 m_enemyQueueAttendIndex; // offset 0x5D62, size 0x1, align 1
    bool m_isStuck; // offset 0x5D63, size 0x1, align 1
    GameTime_t m_stuckTimestamp; // offset 0x5D64, size 0x4, align 255
    VectorWS m_stuckSpot; // offset 0x5D68, size 0xC, align 4
    char _pad_5D74[0x4]; // offset 0x5D74
    CountdownTimer m_wiggleTimer; // offset 0x5D78, size 0x18, align 8
    CountdownTimer m_stuckJumpTimer; // offset 0x5D90, size 0x18, align 8
    GameTime_t m_nextCleanupCheckTimestamp; // offset 0x5DA8, size 0x4, align 255
    float32[10] m_avgVel; // offset 0x5DAC, size 0x28, align 4
    int32 m_avgVelIndex; // offset 0x5DD4, size 0x4, align 4
    int32 m_avgVelCount; // offset 0x5DD8, size 0x4, align 4
    VectorWS m_lastOrigin; // offset 0x5DDC, size 0xC, align 4
    char _pad_5DE8[0x4]; // offset 0x5DE8
    float32 m_lastRadioRecievedTimestamp; // offset 0x5DEC, size 0x4, align 4
    float32 m_lastRadioSentTimestamp; // offset 0x5DF0, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_radioSubject; // offset 0x5DF4, size 0x4, align 4
    VectorWS m_radioPosition; // offset 0x5DF8, size 0xC, align 4
    float32 m_voiceEndTimestamp; // offset 0x5E04, size 0x4, align 4
    char _pad_5E08[0x8]; // offset 0x5E08
    int32 m_lastValidReactionQueueFrame; // offset 0x5E10, size 0x4, align 4
    char _pad_5E14[0x4]; // offset 0x5E14
};
