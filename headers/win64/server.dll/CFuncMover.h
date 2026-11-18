#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xC40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0x8B8, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0x8C0, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0x8C4, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0x8C8, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0x8D0, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0x8D8, size 0x1, align 1
    char _pad_08D9[0x3]; // offset 0x8D9
    CFuncMover::Move_t m_eMoveType; // offset 0x8DC, size 0x4, align 4
    bool m_bIsReversing; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0x3]; // offset 0x8E1
    float32 m_flStartSpeed; // offset 0x8E4, size 0x4, align 4
    float32 m_flPathLocation; // offset 0x8E8, size 0x4, align 4
    float32 m_flT; // offset 0x8EC, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0x8F0, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0x8F4, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0x8F8, size 0x1, align 1
    bool m_bIsMoving; // offset 0x8F9, size 0x1, align 1
    char _pad_08FA[0x2]; // offset 0x8FA
    float32 m_flTimeToReachMaxSpeed; // offset 0x8FC, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0x900, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x904, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0x908, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0x90C, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0x910, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0x914, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0x918, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0x91C, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0x920, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0x924, size 0x4, align 4
    float32 m_flMoveToT; // offset 0x928, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0x92C, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0x930, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0x934, size 0x4, align 4
    CGameSoundEventName m_iszStartForwardSound; // offset 0x938, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0x940, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0x948, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0x950, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0x958, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0x960, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0x968, size 0x8, align 8
    char _pad_0970[0x18]; // offset 0x970
    CEntityIOOutput m_OnMovementEnd; // offset 0x988, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0x9A0, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0x9A1, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0x9A2, size 0x1, align 1
    char _pad_09A3[0x1]; // offset 0x9A3
    float32 m_flStartFollowingClosestMoverWhenWithinDistance; // offset 0x9A4, size 0x4, align 4
    float32 m_flStartFollowingClosestMoverWhenOutsideDistance; // offset 0x9A8, size 0x4, align 4
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0x9AC, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0x9B0, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0x9B4, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0x9B8, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0x9BC, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0x9BD, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0x9BE, size 0x1, align 1
    char _pad_09BF[0x1]; // offset 0x9BF
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0x9C0, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0x9E0, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0x9E8, size 0x4, align 4
    VectorWS m_vLerpToNewPosStartWS; // offset 0x9EC, size 0xC, align 4
    float32 m_flLerpToPositionTargetT; // offset 0x9F8, size 0x4, align 4
    float32 m_flLerpToPositionT; // offset 0x9FC, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0xA00, size 0x4, align 4
    CHandle< CPathMover > m_hTransitionSourcePath; // offset 0xA04, size 0x4, align 4
    float32 m_flTransitionSourceT; // offset 0xA08, size 0x4, align 4
    float32 m_flTransitionSourcePathLocation; // offset 0xA0C, size 0x4, align 4
    CUtlSymbolLarge m_iszTransitionSourcePathNodeStart; // offset 0xA10, size 0x8, align 8
    bool m_bStoppedDuringTransition; // offset 0xA18, size 0x1, align 1
    char _pad_0A19[0x7]; // offset 0xA19
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0xA20, size 0x18, align 255
    bool m_bIsPaused; // offset 0xA38, size 0x1, align 1
    char _pad_0A39[0x3]; // offset 0xA39
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0xA3C, size 0x4, align 4
    Quaternion m_qTransitionSourceOrientation; // offset 0xA40, size 0x10, align 16
    bool m_bTransitionOrientationCorrectionPending; // offset 0xA50, size 0x1, align 1
    char _pad_0A51[0xF]; // offset 0xA51
    Quaternion m_qTransitionOrientationCorrection; // offset 0xA60, size 0x10, align 16
    Quaternion m_qTransitionOrientationCorrectionApplied; // offset 0xA70, size 0x10, align 16
    GameTime_t m_flTimeTransitionOrientationCorrectionStart; // offset 0xA80, size 0x4, align 255
    float32 m_flTransitionOrientationCorrectionTime; // offset 0xA84, size 0x4, align 4
    int32 m_nDelayedTeleportToNode; // offset 0xA88, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0xA8C, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xA8D, size 0x1, align 1
    char _pad_0A8E[0x2]; // offset 0xA8E
    float32 m_flSpeed; // offset 0xA90, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0xA94, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0xA98, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0xA9C, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0xAA0, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0xAA4, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0xAA8, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0xAB0, size 0x4, align 4
    char _pad_0AB4[0x4]; // offset 0xAB4
    CEntityIOOutput m_OnStart; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0xB18, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0xB30, size 0x1, align 1
    bool m_bStartedMoving; // offset 0xB31, size 0x1, align 1
    char _pad_0B32[0x1E]; // offset 0xB32
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0xB50, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0xB54, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0xB58, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0xB60, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0xB68, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0xB6C, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0xB70, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0xB74, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0xB78, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0xB7C, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0xB84, size 0x1, align 1
    char _pad_0B85[0x3]; // offset 0xB85
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xB88, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xB8C, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xB90, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xB94, size 0x4, align 255
    GameTick_t m_nTickDependenciesResolved; // offset 0xB98, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xB9C, size 0x20, align 4
    FuncMoverMovementSummary_t m_movementSummaryAfterTransition; // offset 0xBBC, size 0x20, align 4
    char _pad_0BDC[0x1C]; // offset 0xBDC
    CUtlVector< FuncMoverTransitionRecord_t > m_vecTransitionHistory; // offset 0xBF8, size 0x18, align 8
    int32 m_nNextTransitionId; // offset 0xC10, size 0x4, align 4
    int32 m_nNextFollowMoverTransitionId; // offset 0xC14, size 0x4, align 4
    int32 m_nReplayingFollowMoverTransitionId; // offset 0xC18, size 0x4, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xC1C, size 0x1, align 1
    bool m_bQueueStop; // offset 0xC1D, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xC1E, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xC1F, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xC20, size 0x4, align 4
    CFuncMover::FindFollowMoverStrategy_t m_eFindFollowMoverStrategy; // offset 0xC24, size 0x4, align 4
    bool m_bDisableDecelerationToStop; // offset 0xC28, size 0x1, align 1
    char _pad_0C29[0x3]; // offset 0xC29
    Vector m_vOffsetFromPath; // offset 0xC2C, size 0xC, align 4
    char _pad_0C38[0x4]; // offset 0xC38
    CHandle< CPathMoverEntitySpawner > m_hPathMoverEntitySpawner; // offset 0xC3C, size 0x4, align 4
};
