#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0x878, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0x880, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0x884, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0x888, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0x890, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0x898, size 0x1, align 1
    char _pad_0899[0x3]; // offset 0x899
    CFuncMover::Move_t m_eMoveType; // offset 0x89C, size 0x4, align 4
    bool m_bIsReversing; // offset 0x8A0, size 0x1, align 1
    char _pad_08A1[0x3]; // offset 0x8A1
    float32 m_flStartSpeed; // offset 0x8A4, size 0x4, align 4
    float32 m_flPathLocation; // offset 0x8A8, size 0x4, align 4
    float32 m_flT; // offset 0x8AC, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0x8B0, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0x8B4, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0x8B8, size 0x1, align 1
    bool m_bIsMoving; // offset 0x8B9, size 0x1, align 1
    char _pad_08BA[0x2]; // offset 0x8BA
    float32 m_flTimeToReachMaxSpeed; // offset 0x8BC, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0x8C0, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x8C4, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0x8C8, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0x8CC, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0x8D0, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0x8D4, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0x8D8, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0x8DC, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0x8E0, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0x8E4, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0x8E8, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0x8EC, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
    CGameSoundEventName m_iszStartForwardSound; // offset 0x8F8, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0x900, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0x908, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0x910, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0x918, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0x920, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0x928, size 0x8, align 8
    char _pad_0930[0x18]; // offset 0x930
    CEntityIOOutput m_OnMovementEnd; // offset 0x948, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0x960, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0x961, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0x962, size 0x1, align 1
    char _pad_0963[0x1]; // offset 0x963
    float32 m_flStartFollowingClosestMoverWhenWithinDistance; // offset 0x964, size 0x4, align 4
    float32 m_flStartFollowingClosestMoverWhenOutsideDistance; // offset 0x968, size 0x4, align 4
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0x96C, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0x970, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0x974, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0x978, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x97C, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0x97D, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x97E, size 0x1, align 1
    char _pad_097F[0x1]; // offset 0x97F
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0x980, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0x9A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0x9A8, size 0x4, align 4
    VectorWS m_vLerpToNewPosStartWS; // offset 0x9AC, size 0xC, align 4
    float32 m_flLerpToPositionTargetT; // offset 0x9B8, size 0x4, align 4
    float32 m_flLerpToPositionT; // offset 0x9BC, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0x9C0, size 0x4, align 4
    CHandle< CPathMover > m_hTransitionSourcePath; // offset 0x9C4, size 0x4, align 4
    float32 m_flTransitionSourceT; // offset 0x9C8, size 0x4, align 4
    float32 m_flTransitionSourcePathLocation; // offset 0x9CC, size 0x4, align 4
    CUtlSymbolLarge m_iszTransitionSourcePathNodeStart; // offset 0x9D0, size 0x8, align 8
    bool m_bStoppedDuringTransition; // offset 0x9D8, size 0x1, align 1
    char _pad_09D9[0x7]; // offset 0x9D9
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0x9E0, size 0x18, align 255
    bool m_bIsPaused; // offset 0x9F8, size 0x1, align 1
    char _pad_09F9[0x3]; // offset 0x9F9
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0x9FC, size 0x4, align 4
    Quaternion m_qTransitionSourceOrientation; // offset 0xA00, size 0x10, align 16
    int32 m_nDelayedTeleportToNode; // offset 0xA10, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0xA14, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xA15, size 0x1, align 1
    char _pad_0A16[0x2]; // offset 0xA16
    float32 m_flSpeed; // offset 0xA18, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0xA1C, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0xA20, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0xA24, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0xA28, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0xA2C, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0xA30, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0xA38, size 0x4, align 4
    char _pad_0A3C[0x4]; // offset 0xA3C
    CEntityIOOutput m_OnStart; // offset 0xA40, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0xA58, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0xA70, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0xAA0, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0xAB8, size 0x1, align 1
    bool m_bStartedMoving; // offset 0xAB9, size 0x1, align 1
    char _pad_0ABA[0x1E]; // offset 0xABA
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0xAD8, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0xADC, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0xAE0, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0xAE8, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0xAF0, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0xAF4, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0xAF8, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0xAFC, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0xB00, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0xB04, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0xB0C, size 0x1, align 1
    char _pad_0B0D[0x3]; // offset 0xB0D
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xB10, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xB14, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xB18, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xB1C, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xB20, size 0x20, align 4
    FuncMoverMovementSummary_t m_movementSummaryAfterTransition; // offset 0xB40, size 0x20, align 4
    char _pad_0B60[0x18]; // offset 0xB60
    CUtlVector< FuncMoverTransitionRecord_t > m_vecTransitionHistory; // offset 0xB78, size 0x18, align 8
    int32 m_nNextTransitionId; // offset 0xB90, size 0x4, align 4
    int32 m_nNextFollowMoverTransitionId; // offset 0xB94, size 0x4, align 4
    int32 m_nReplayingFollowMoverTransitionId; // offset 0xB98, size 0x4, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xB9C, size 0x1, align 1
    bool m_bQueueStop; // offset 0xB9D, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xB9E, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xB9F, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xBA0, size 0x4, align 4
    CFuncMover::FindFollowMoverStrategy_t m_eFindFollowMoverStrategy; // offset 0xBA4, size 0x4, align 4
    bool m_bDisableDecelerationToStop; // offset 0xBA8, size 0x1, align 1
    char _pad_0BA9[0x3]; // offset 0xBA9
    Vector m_vOffsetFromPath; // offset 0xBAC, size 0xC, align 4
    char _pad_0BB8[0x4]; // offset 0xBB8
    CHandle< CPathMoverEntitySpawner > m_hPathMoverEntitySpawner; // offset 0xBBC, size 0x4, align 4
};
