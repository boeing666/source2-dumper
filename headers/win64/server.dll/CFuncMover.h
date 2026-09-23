#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xB40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0x850, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0x858, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0x85C, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0x860, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0x868, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0x870, size 0x1, align 1
    char _pad_0871[0x3]; // offset 0x871
    CFuncMover::Move_t m_eMoveType; // offset 0x874, size 0x4, align 4
    bool m_bIsReversing; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x3]; // offset 0x879
    float32 m_flStartSpeed; // offset 0x87C, size 0x4, align 4
    float32 m_flPathLocation; // offset 0x880, size 0x4, align 4
    float32 m_flT; // offset 0x884, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0x888, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0x88C, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0x890, size 0x1, align 1
    bool m_bIsMoving; // offset 0x891, size 0x1, align 1
    char _pad_0892[0x2]; // offset 0x892
    float32 m_flTimeToReachMaxSpeed; // offset 0x894, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0x898, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x89C, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0x8A0, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0x8A4, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0x8A8, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0x8AC, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0x8B0, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0x8B4, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0x8B8, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0x8BC, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0x8C0, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0x8C4, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0x8C8, size 0x4, align 4
    char _pad_08CC[0x4]; // offset 0x8CC
    CGameSoundEventName m_iszStartForwardSound; // offset 0x8D0, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0x8D8, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0x8E0, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0x8E8, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0x8F0, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0x8F8, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0x900, size 0x8, align 8
    char _pad_0908[0x18]; // offset 0x908
    CEntityIOOutput m_OnMovementEnd; // offset 0x920, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0x938, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0x939, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0x93A, size 0x1, align 1
    char _pad_093B[0x1]; // offset 0x93B
    float32 m_flStartFollowingClosestMoverWhenWithinDistance; // offset 0x93C, size 0x4, align 4
    float32 m_flStartFollowingClosestMoverWhenOutsideDistance; // offset 0x940, size 0x4, align 4
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0x944, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0x948, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0x94C, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0x950, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x954, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0x955, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x956, size 0x1, align 1
    char _pad_0957[0x1]; // offset 0x957
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0x958, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0x978, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0x980, size 0x4, align 4
    VectorWS m_vLerpToNewPosStartWS; // offset 0x984, size 0xC, align 4
    float32 m_flLerpToPositionTargetT; // offset 0x990, size 0x4, align 4
    float32 m_flLerpToPositionT; // offset 0x994, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0x998, size 0x4, align 4
    CHandle< CPathMover > m_hTransitionSourcePath; // offset 0x99C, size 0x4, align 4
    float32 m_flTransitionSourceT; // offset 0x9A0, size 0x4, align 4
    float32 m_flTransitionSourcePathLocation; // offset 0x9A4, size 0x4, align 4
    CUtlSymbolLarge m_iszTransitionSourcePathNodeStart; // offset 0x9A8, size 0x8, align 8
    bool m_bStoppedDuringTransition; // offset 0x9B0, size 0x1, align 1
    char _pad_09B1[0x7]; // offset 0x9B1
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0x9B8, size 0x18, align 255
    bool m_bIsPaused; // offset 0x9D0, size 0x1, align 1
    char _pad_09D1[0x3]; // offset 0x9D1
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0x9D4, size 0x4, align 4
    char _pad_09D8[0x8]; // offset 0x9D8
    Quaternion m_qTransitionSourceOrientation; // offset 0x9E0, size 0x10, align 16
    int32 m_nDelayedTeleportToNode; // offset 0x9F0, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0x9F4, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0x9F5, size 0x1, align 1
    char _pad_09F6[0x2]; // offset 0x9F6
    float32 m_flSpeed; // offset 0x9F8, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0x9FC, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0xA00, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0xA04, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0xA08, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0xA0C, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0xA10, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0xA18, size 0x4, align 4
    char _pad_0A1C[0x4]; // offset 0xA1C
    CEntityIOOutput m_OnStart; // offset 0xA20, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0xA38, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0xA50, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0xA68, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0xA80, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0xA98, size 0x1, align 1
    bool m_bStartedMoving; // offset 0xA99, size 0x1, align 1
    char _pad_0A9A[0x1E]; // offset 0xA9A
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0xAB8, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0xABC, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0xAC0, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0xAC8, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0xAD0, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0xAD4, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0xAD8, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0xADC, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0xAE0, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0xAE4, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0xAEC, size 0x1, align 1
    char _pad_0AED[0x3]; // offset 0xAED
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xAF0, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xAF4, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xAF8, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xAFC, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xB00, size 0x20, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xB20, size 0x1, align 1
    bool m_bQueueStop; // offset 0xB21, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xB22, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xB23, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xB24, size 0x4, align 4
    CFuncMover::FindFollowMoverStrategy_t m_eFindFollowMoverStrategy; // offset 0xB28, size 0x4, align 4
    bool m_bDisableDecelerationToStop; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    Vector m_vOffsetFromPath; // offset 0xB30, size 0xC, align 4
    char _pad_0B3C[0x4]; // offset 0xB3C
};
