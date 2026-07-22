#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xA40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0x778, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0x780, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0x784, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0x790, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x3]; // offset 0x799
    CFuncMover::Move_t m_eMoveType; // offset 0x79C, size 0x4, align 4
    bool m_bIsReversing; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x3]; // offset 0x7A1
    float32 m_flStartSpeed; // offset 0x7A4, size 0x4, align 4
    float32 m_flPathLocation; // offset 0x7A8, size 0x4, align 4
    float32 m_flT; // offset 0x7AC, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0x7B0, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0x7B4, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0x7B8, size 0x1, align 1
    bool m_bIsMoving; // offset 0x7B9, size 0x1, align 1
    char _pad_07BA[0x2]; // offset 0x7BA
    float32 m_flTimeToReachMaxSpeed; // offset 0x7BC, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0x7C0, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x7C4, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0x7C8, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0x7CC, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0x7D0, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0x7D4, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0x7D8, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0x7DC, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0x7E0, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0x7E4, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0x7E8, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0x7EC, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
    CGameSoundEventName m_iszStartForwardSound; // offset 0x7F8, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0x800, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0x808, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0x810, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0x818, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0x820, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0x828, size 0x8, align 8
    char _pad_0830[0x18]; // offset 0x830
    CEntityIOOutput m_OnMovementEnd; // offset 0x848, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0x860, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0x861, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0x862, size 0x1, align 1
    char _pad_0863[0x1]; // offset 0x863
    float32 m_flStartFollowingClosestMoverWhenWithinDistance; // offset 0x864, size 0x4, align 4
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0x868, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0x86C, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0x870, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0x874, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x878, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0x879, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x87A, size 0x1, align 1
    char _pad_087B[0x5]; // offset 0x87B
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0x880, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0x8A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0x8A8, size 0x4, align 4
    float32 m_flTimeToTraverseToNextNode; // offset 0x8AC, size 0x4, align 4
    Vector m_vLerpToNewPosStartInPathEntitySpace; // offset 0x8B0, size 0xC, align 4
    Vector m_vLerpToNewPosEndInPathEntitySpace; // offset 0x8BC, size 0xC, align 4
    float32 m_flLerpToPositionT; // offset 0x8C8, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0x8CC, size 0x4, align 4
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0x8D0, size 0x18, align 255
    bool m_bIsPaused; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x3]; // offset 0x8E9
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0x8EC, size 0x4, align 4
    Quaternion m_qTransitionSourceOrientation; // offset 0x8F0, size 0x10, align 16
    int32 m_nDelayedTeleportToNode; // offset 0x900, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0x904, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0x905, size 0x1, align 1
    char _pad_0906[0x2]; // offset 0x906
    float32 m_flSpeed; // offset 0x908, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0x90C, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0x910, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0x914, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0x918, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0x91C, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0x920, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0x928, size 0x4, align 4
    char _pad_092C[0x4]; // offset 0x92C
    CEntityIOOutput m_OnStart; // offset 0x930, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0x948, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0x960, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0x978, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0x990, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0x9A8, size 0x1, align 1
    bool m_bStartedMoving; // offset 0x9A9, size 0x1, align 1
    char _pad_09AA[0x1E]; // offset 0x9AA
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0x9C8, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0x9CC, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0x9D0, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0x9D8, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0x9E0, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0x9E4, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0x9E8, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0x9EC, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0x9F0, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0x9F4, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0x9FC, size 0x1, align 1
    char _pad_09FD[0x3]; // offset 0x9FD
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xA00, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xA04, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xA08, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xA0C, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xA10, size 0x20, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xA30, size 0x1, align 1
    bool m_bQueueStop; // offset 0xA31, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xA32, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xA33, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xA34, size 0x4, align 4
    CFuncMover::FindFollowMoverStrategy_t m_eFindFollowMoverStrategy; // offset 0xA38, size 0x4, align 4
    char _pad_0A3C[0x4]; // offset 0xA3C
};
