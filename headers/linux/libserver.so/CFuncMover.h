#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xD10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0xA50, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0xA58, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0xA5C, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0xA60, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0xA68, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0x3]; // offset 0xA71
    CFuncMover::Move_t m_eMoveType; // offset 0xA74, size 0x4, align 4
    bool m_bIsReversing; // offset 0xA78, size 0x1, align 1
    char _pad_0A79[0x3]; // offset 0xA79
    float32 m_flStartSpeed; // offset 0xA7C, size 0x4, align 4
    float32 m_flPathLocation; // offset 0xA80, size 0x4, align 4
    float32 m_flT; // offset 0xA84, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0xA88, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0xA8C, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0xA90, size 0x1, align 1
    bool m_bIsMoving; // offset 0xA91, size 0x1, align 1
    char _pad_0A92[0x2]; // offset 0xA92
    float32 m_flTimeToReachMaxSpeed; // offset 0xA94, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0xA98, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xA9C, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0xAA0, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0xAA4, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0xAA8, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0xAAC, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0xAB0, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0xAB4, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0xAB8, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0xABC, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0xAC0, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0xAC4, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0xAC8, size 0x4, align 4
    char _pad_0ACC[0x4]; // offset 0xACC
    CGameSoundEventName m_iszStartForwardSound; // offset 0xAD0, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0xAD8, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0xAE0, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0xAE8, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0xAF0, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0xAF8, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0xB00, size 0x8, align 8
    char _pad_0B08[0x18]; // offset 0xB08
    CEntityIOOutput m_OnMovementEnd; // offset 0xB20, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0xB38, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0xB39, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0xB3A, size 0x1, align 1
    char _pad_0B3B[0x1]; // offset 0xB3B
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0xB3C, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0xB40, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0xB44, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0xB48, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xB4C, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0xB4D, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xB4E, size 0x1, align 1
    char _pad_0B4F[0x1]; // offset 0xB4F
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0xB50, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0xB70, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0xB78, size 0x4, align 4
    float32 m_flTimeToTraverseToNextNode; // offset 0xB7C, size 0x4, align 4
    Vector m_vLerpToNewPosStartInPathEntitySpace; // offset 0xB80, size 0xC, align 4
    Vector m_vLerpToNewPosEndInPathEntitySpace; // offset 0xB8C, size 0xC, align 4
    float32 m_flLerpToPositionT; // offset 0xB98, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0xB9C, size 0x4, align 4
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0xBA0, size 0x18, align 255
    bool m_bIsPaused; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x3]; // offset 0xBB9
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0xBBC, size 0x4, align 4
    Quaternion m_qTransitionSourceOrientation; // offset 0xBC0, size 0x10, align 16
    int32 m_nDelayedTeleportToNode; // offset 0xBD0, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0xBD4, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xBD5, size 0x1, align 1
    char _pad_0BD6[0x2]; // offset 0xBD6
    float32 m_flSpeed; // offset 0xBD8, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0xBDC, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0xBE0, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0xBE4, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0xBE8, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0xBEC, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0xBF0, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0xBF8, size 0x4, align 4
    char _pad_0BFC[0x4]; // offset 0xBFC
    CEntityIOOutput m_OnStart; // offset 0xC00, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0xC18, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0xC30, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0xC48, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0xC60, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0xC78, size 0x1, align 1
    bool m_bStartedMoving; // offset 0xC79, size 0x1, align 1
    char _pad_0C7A[0x1E]; // offset 0xC7A
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0xC98, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0xC9C, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0xCA0, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0xCA8, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0xCB0, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0xCB4, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0xCB8, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0xCBC, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0xCC0, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0xCC4, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0xCCC, size 0x1, align 1
    char _pad_0CCD[0x3]; // offset 0xCCD
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xCD0, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xCD4, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xCD8, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xCDC, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xCE0, size 0x20, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xD00, size 0x1, align 1
    bool m_bQueueStop; // offset 0xD01, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xD02, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xD03, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xD04, size 0x4, align 4
    char _pad_0D08[0x8]; // offset 0xD08
};
