#pragma once

class CCSBot : public CBot /*0x0*/  // sizeof 0x5E38, align 0xFF [vtable] (server)
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
    char _pad_0611[0x48EF]; // offset 0x611
    int32 m_pathIndex; // offset 0x4F00, size 0x4, align 4
    GameTime_t m_areaEnteredTimestamp; // offset 0x4F04, size 0x4, align 255
    CountdownTimer m_repathTimer; // offset 0x4F08, size 0x18, align 8
    CountdownTimer m_avoidFriendTimer; // offset 0x4F20, size 0x18, align 8
    bool m_isFriendInTheWay; // offset 0x4F38, size 0x1, align 1
    char _pad_4F39[0x7]; // offset 0x4F39
    CountdownTimer m_politeTimer; // offset 0x4F40, size 0x18, align 8
    bool m_isWaitingBehindFriend; // offset 0x4F58, size 0x1, align 1
    char _pad_4F59[0x2B]; // offset 0x4F59
    float32 m_pathLadderEnd; // offset 0x4F84, size 0x4, align 4
    char _pad_4F88[0x48]; // offset 0x4F88
    CountdownTimer m_mustRunTimer; // offset 0x4FD0, size 0x18, align 8
    CountdownTimer m_waitTimer; // offset 0x4FE8, size 0x18, align 8
    CountdownTimer m_updateTravelDistanceTimer; // offset 0x5000, size 0x18, align 8
    float32[64] m_playerTravelDistance; // offset 0x5018, size 0x100, align 4
    uint8 m_travelDistancePhase; // offset 0x5118, size 0x1, align 1
    char _pad_5119[0x197]; // offset 0x5119
    uint8 m_hostageEscortCount; // offset 0x52B0, size 0x1, align 1
    char _pad_52B1[0x3]; // offset 0x52B1
    float32 m_hostageEscortCountTimestamp; // offset 0x52B4, size 0x4, align 4
    int32 m_desiredTeam; // offset 0x52B8, size 0x4, align 4
    bool m_hasJoined; // offset 0x52BC, size 0x1, align 1
    bool m_isWaitingForHostage; // offset 0x52BD, size 0x1, align 1
    char _pad_52BE[0x2]; // offset 0x52BE
    CountdownTimer m_inhibitWaitingForHostageTimer; // offset 0x52C0, size 0x18, align 8
    CountdownTimer m_waitForHostageTimer; // offset 0x52D8, size 0x18, align 8
    VectorWS m_noisePosition; // offset 0x52F0, size 0xC, align 4
    float32 m_noiseTravelDistance; // offset 0x52FC, size 0x4, align 4
    float32 m_noiseTimestamp; // offset 0x5300, size 0x4, align 4
    char _pad_5304[0x4]; // offset 0x5304
    CCSPlayerPawn* m_noiseSource; // offset 0x5308, size 0x8, align 8
    char _pad_5310[0x10]; // offset 0x5310
    CountdownTimer m_noiseBendTimer; // offset 0x5320, size 0x18, align 8
    VectorWS m_bentNoisePosition; // offset 0x5338, size 0xC, align 4
    bool m_bendNoisePositionValid; // offset 0x5344, size 0x1, align 1
    char _pad_5345[0x3]; // offset 0x5345
    float32 m_lookAroundStateTimestamp; // offset 0x5348, size 0x4, align 4
    float32 m_lookAheadAngle; // offset 0x534C, size 0x4, align 4
    float32 m_lookUpAngle; // offset 0x5350, size 0x4, align 4
    float32 m_forwardAngle; // offset 0x5354, size 0x4, align 4
    float32 m_inhibitLookAroundTimestamp; // offset 0x5358, size 0x4, align 4
    char _pad_535C[0x4]; // offset 0x535C
    VectorWS m_lookAtSpot; // offset 0x5360, size 0xC, align 4
    char _pad_536C[0x4]; // offset 0x536C
    float32 m_lookAtSpotDuration; // offset 0x5370, size 0x4, align 4
    float32 m_lookAtSpotTimestamp; // offset 0x5374, size 0x4, align 4
    float32 m_lookAtSpotAngleTolerance; // offset 0x5378, size 0x4, align 4
    bool m_lookAtSpotClearIfClose; // offset 0x537C, size 0x1, align 1
    bool m_lookAtSpotAttack; // offset 0x537D, size 0x1, align 1
    char _pad_537E[0x2]; // offset 0x537E
    char* m_lookAtDesc; // offset 0x5380, size 0x8, align 8
    float32 m_peripheralTimestamp; // offset 0x5388, size 0x4, align 4
    char _pad_538C[0x184]; // offset 0x538C
    uint8 m_approachPointCount; // offset 0x5510, size 0x1, align 1
    char _pad_5511[0x3]; // offset 0x5511
    VectorWS m_approachPointViewPosition; // offset 0x5514, size 0xC, align 4
    IntervalTimer m_viewSteadyTimer; // offset 0x5520, size 0x10, align 8
    char _pad_5530[0x8]; // offset 0x5530
    CountdownTimer m_tossGrenadeTimer; // offset 0x5538, size 0x18, align 8
    char _pad_5550[0x8]; // offset 0x5550
    CountdownTimer m_isAvoidingGrenade; // offset 0x5558, size 0x18, align 8
    char _pad_5570[0x8]; // offset 0x5570
    float32 m_spotCheckTimestamp; // offset 0x5578, size 0x4, align 4
    char _pad_557C[0x404]; // offset 0x557C
    int32 m_checkedHidingSpotCount; // offset 0x5980, size 0x4, align 4
    float32 m_lookPitch; // offset 0x5984, size 0x4, align 4
    float32 m_lookPitchVel; // offset 0x5988, size 0x4, align 4
    float32 m_lookYaw; // offset 0x598C, size 0x4, align 4
    float32 m_lookYawVel; // offset 0x5990, size 0x4, align 4
    VectorWS m_targetSpot; // offset 0x5994, size 0xC, align 4
    Vector m_targetSpotVelocity; // offset 0x59A0, size 0xC, align 4
    VectorWS m_targetSpotPredicted; // offset 0x59AC, size 0xC, align 4
    QAngle m_aimError; // offset 0x59B8, size 0xC, align 4
    QAngle m_aimGoal; // offset 0x59C4, size 0xC, align 4
    GameTime_t m_targetSpotTime; // offset 0x59D0, size 0x4, align 255
    float32 m_aimFocus; // offset 0x59D4, size 0x4, align 4
    float32 m_aimFocusInterval; // offset 0x59D8, size 0x4, align 4
    GameTime_t m_aimFocusNextUpdate; // offset 0x59DC, size 0x4, align 255
    char _pad_59E0[0x8]; // offset 0x59E0
    CountdownTimer m_ignoreEnemiesTimer; // offset 0x59E8, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_enemy; // offset 0x5A00, size 0x4, align 4
    bool m_isEnemyVisible; // offset 0x5A04, size 0x1, align 1
    uint8 m_visibleEnemyParts; // offset 0x5A05, size 0x1, align 1
    char _pad_5A06[0x2]; // offset 0x5A06
    VectorWS m_lastEnemyPosition; // offset 0x5A08, size 0xC, align 4
    float32 m_lastSawEnemyTimestamp; // offset 0x5A14, size 0x4, align 4
    float32 m_firstSawEnemyTimestamp; // offset 0x5A18, size 0x4, align 4
    float32 m_currentEnemyAcquireTimestamp; // offset 0x5A1C, size 0x4, align 4
    float32 m_enemyDeathTimestamp; // offset 0x5A20, size 0x4, align 4
    float32 m_friendDeathTimestamp; // offset 0x5A24, size 0x4, align 4
    bool m_isLastEnemyDead; // offset 0x5A28, size 0x1, align 1
    char _pad_5A29[0x3]; // offset 0x5A29
    int32 m_nearbyEnemyCount; // offset 0x5A2C, size 0x4, align 4
    char _pad_5A30[0x208]; // offset 0x5A30
    CHandle< CCSPlayerPawn > m_bomber; // offset 0x5C38, size 0x4, align 4
    int32 m_nearbyFriendCount; // offset 0x5C3C, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_closestVisibleFriend; // offset 0x5C40, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_closestVisibleHumanFriend; // offset 0x5C44, size 0x4, align 4
    IntervalTimer m_attentionInterval; // offset 0x5C48, size 0x10, align 8
    CHandle< CCSPlayerPawn > m_attacker; // offset 0x5C58, size 0x4, align 4
    float32 m_attackedTimestamp; // offset 0x5C5C, size 0x4, align 4
    IntervalTimer m_burnedByFlamesTimer; // offset 0x5C60, size 0x10, align 8
    int32 m_lastVictimID; // offset 0x5C70, size 0x4, align 4
    bool m_isAimingAtEnemy; // offset 0x5C74, size 0x1, align 1
    bool m_isRapidFiring; // offset 0x5C75, size 0x1, align 1
    char _pad_5C76[0x2]; // offset 0x5C76
    IntervalTimer m_equipTimer; // offset 0x5C78, size 0x10, align 8
    CountdownTimer m_zoomTimer; // offset 0x5C88, size 0x18, align 8
    GameTime_t m_fireWeaponTimestamp; // offset 0x5CA0, size 0x4, align 255
    char _pad_5CA4[0x4]; // offset 0x5CA4
    CountdownTimer m_lookForWeaponsOnGroundTimer; // offset 0x5CA8, size 0x18, align 8
    bool m_bIsSleeping; // offset 0x5CC0, size 0x1, align 1
    bool m_isEnemySniperVisible; // offset 0x5CC1, size 0x1, align 1
    char _pad_5CC2[0x6]; // offset 0x5CC2
    CountdownTimer m_sawEnemySniperTimer; // offset 0x5CC8, size 0x18, align 8
    char _pad_5CE0[0xA0]; // offset 0x5CE0
    uint8 m_enemyQueueIndex; // offset 0x5D80, size 0x1, align 1
    uint8 m_enemyQueueCount; // offset 0x5D81, size 0x1, align 1
    uint8 m_enemyQueueAttendIndex; // offset 0x5D82, size 0x1, align 1
    bool m_isStuck; // offset 0x5D83, size 0x1, align 1
    GameTime_t m_stuckTimestamp; // offset 0x5D84, size 0x4, align 255
    VectorWS m_stuckSpot; // offset 0x5D88, size 0xC, align 4
    char _pad_5D94[0x4]; // offset 0x5D94
    CountdownTimer m_wiggleTimer; // offset 0x5D98, size 0x18, align 8
    CountdownTimer m_stuckJumpTimer; // offset 0x5DB0, size 0x18, align 8
    GameTime_t m_nextCleanupCheckTimestamp; // offset 0x5DC8, size 0x4, align 255
    float32[10] m_avgVel; // offset 0x5DCC, size 0x28, align 4
    int32 m_avgVelIndex; // offset 0x5DF4, size 0x4, align 4
    int32 m_avgVelCount; // offset 0x5DF8, size 0x4, align 4
    VectorWS m_lastOrigin; // offset 0x5DFC, size 0xC, align 4
    char _pad_5E08[0x4]; // offset 0x5E08
    float32 m_lastRadioRecievedTimestamp; // offset 0x5E0C, size 0x4, align 4
    float32 m_lastRadioSentTimestamp; // offset 0x5E10, size 0x4, align 4
    CHandle< CCSPlayerPawn > m_radioSubject; // offset 0x5E14, size 0x4, align 4
    VectorWS m_radioPosition; // offset 0x5E18, size 0xC, align 4
    float32 m_voiceEndTimestamp; // offset 0x5E24, size 0x4, align 4
    char _pad_5E28[0x8]; // offset 0x5E28
    int32 m_lastValidReactionQueueFrame; // offset 0x5E30, size 0x4, align 4
    char _pad_5E34[0x4]; // offset 0x5E34
};
