#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xE80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0xB38, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0xB40, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0xB44, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0xB48, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0xB50, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0xB58, size 0x1, align 1
    char _pad_0B59[0x3]; // offset 0xB59
    CFuncMover::Move_t m_eMoveType; // offset 0xB5C, size 0x4, align 4
    bool m_bIsReversing; // offset 0xB60, size 0x1, align 1
    char _pad_0B61[0x3]; // offset 0xB61
    float32 m_flStartSpeed; // offset 0xB64, size 0x4, align 4
    float32 m_flPathLocation; // offset 0xB68, size 0x4, align 4
    float32 m_flT; // offset 0xB6C, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0xB70, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0xB74, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0xB78, size 0x1, align 1
    bool m_bIsMoving; // offset 0xB79, size 0x1, align 1
    char _pad_0B7A[0x2]; // offset 0xB7A
    float32 m_flTimeToReachMaxSpeed; // offset 0xB7C, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0xB80, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xB84, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0xB88, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0xB8C, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0xB90, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0xB94, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0xB98, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0xB9C, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0xBA0, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0xBA4, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0xBA8, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0xBAC, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
    CGameSoundEventName m_iszStartForwardSound; // offset 0xBB8, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0xBC0, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0xBC8, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0xBD0, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0xBD8, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0xBE0, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0xBE8, size 0x8, align 8
    char _pad_0BF0[0x18]; // offset 0xBF0
    CEntityIOOutput m_OnMovementEnd; // offset 0xC08, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0xC20, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0xC21, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0xC22, size 0x1, align 1
    char _pad_0C23[0x1]; // offset 0xC23
    float32 m_flStartFollowingClosestMoverWhenWithinDistance; // offset 0xC24, size 0x4, align 4
    float32 m_flStartFollowingClosestMoverWhenOutsideDistance; // offset 0xC28, size 0x4, align 4
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0xC2C, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0xC30, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0xC34, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0xC38, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xC3C, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0xC3D, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xC3E, size 0x1, align 1
    char _pad_0C3F[0x1]; // offset 0xC3F
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0xC40, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0xC60, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0xC68, size 0x4, align 4
    VectorWS m_vLerpToNewPosStartWS; // offset 0xC6C, size 0xC, align 4
    float32 m_flLerpToPositionTargetT; // offset 0xC78, size 0x4, align 4
    float32 m_flLerpToPositionT; // offset 0xC7C, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0xC80, size 0x4, align 4
    CHandle< CPathMover > m_hTransitionSourcePath; // offset 0xC84, size 0x4, align 4
    float32 m_flTransitionSourceT; // offset 0xC88, size 0x4, align 4
    float32 m_flTransitionSourcePathLocation; // offset 0xC8C, size 0x4, align 4
    CUtlSymbolLarge m_iszTransitionSourcePathNodeStart; // offset 0xC90, size 0x8, align 8
    bool m_bStoppedDuringTransition; // offset 0xC98, size 0x1, align 1
    char _pad_0C99[0x7]; // offset 0xC99
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0xCA0, size 0x18, align 255
    bool m_bIsPaused; // offset 0xCB8, size 0x1, align 1
    char _pad_0CB9[0x3]; // offset 0xCB9
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0xCBC, size 0x4, align 4
    Quaternion m_qTransitionSourceOrientation; // offset 0xCC0, size 0x10, align 16
    int32 m_nDelayedTeleportToNode; // offset 0xCD0, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0xCD4, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xCD5, size 0x1, align 1
    char _pad_0CD6[0x2]; // offset 0xCD6
    float32 m_flSpeed; // offset 0xCD8, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0xCDC, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0xCE0, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0xCE4, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0xCE8, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0xCEC, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0xCF0, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0xCF8, size 0x4, align 4
    char _pad_0CFC[0x4]; // offset 0xCFC
    CEntityIOOutput m_OnStart; // offset 0xD00, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0xD18, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0xD30, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0xD48, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0xD60, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0xD78, size 0x1, align 1
    bool m_bStartedMoving; // offset 0xD79, size 0x1, align 1
    char _pad_0D7A[0x1E]; // offset 0xD7A
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0xD98, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0xD9C, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0xDA0, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0xDA8, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0xDB0, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0xDB4, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0xDB8, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0xDBC, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0xDC0, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0xDC4, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0xDCC, size 0x1, align 1
    char _pad_0DCD[0x3]; // offset 0xDCD
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xDD0, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xDD4, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xDD8, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xDDC, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xDE0, size 0x20, align 4
    FuncMoverMovementSummary_t m_movementSummaryAfterTransition; // offset 0xE00, size 0x20, align 4
    char _pad_0E20[0x18]; // offset 0xE20
    CUtlVector< FuncMoverTransitionRecord_t > m_vecTransitionHistory; // offset 0xE38, size 0x18, align 8
    int32 m_nNextTransitionId; // offset 0xE50, size 0x4, align 4
    int32 m_nNextFollowMoverTransitionId; // offset 0xE54, size 0x4, align 4
    int32 m_nReplayingFollowMoverTransitionId; // offset 0xE58, size 0x4, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xE5C, size 0x1, align 1
    bool m_bQueueStop; // offset 0xE5D, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xE5E, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xE5F, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xE60, size 0x4, align 4
    CFuncMover::FindFollowMoverStrategy_t m_eFindFollowMoverStrategy; // offset 0xE64, size 0x4, align 4
    bool m_bDisableDecelerationToStop; // offset 0xE68, size 0x1, align 1
    char _pad_0E69[0x3]; // offset 0xE69
    Vector m_vOffsetFromPath; // offset 0xE6C, size 0xC, align 4
    char _pad_0E78[0x4]; // offset 0xE78
    CHandle< CPathMoverEntitySpawner > m_hPathMoverEntitySpawner; // offset 0xE7C, size 0x4, align 4
};
