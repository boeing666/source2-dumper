#pragma once

class CFuncMover : public CBaseModelEntity /*0x0*/  // sizeof 0xF30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CUtlSymbolLarge m_iszPathName; // offset 0xBA0, size 0x8, align 8
    CHandle< CPathMover > m_hPathMover; // offset 0xBA8, size 0x4, align 4
    CHandle< CPathMover > m_hPrevPathMover; // offset 0xBAC, size 0x4, align 4
    CUtlSymbolLarge m_iszPathNodeStart; // offset 0xBB0, size 0x8, align 8
    CUtlSymbolLarge m_iszPathNodeEnd; // offset 0xBB8, size 0x8, align 8
    bool m_bIgnoreEndNode; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x3]; // offset 0xBC1
    CFuncMover::Move_t m_eMoveType; // offset 0xBC4, size 0x4, align 4
    bool m_bIsReversing; // offset 0xBC8, size 0x1, align 1
    char _pad_0BC9[0x3]; // offset 0xBC9
    float32 m_flStartSpeed; // offset 0xBCC, size 0x4, align 4
    float32 m_flPathLocation; // offset 0xBD0, size 0x4, align 4
    float32 m_flT; // offset 0xBD4, size 0x4, align 4
    int32 m_nCurrentNodeIndex; // offset 0xBD8, size 0x4, align 4
    int32 m_nPreviousNodeIndex; // offset 0xBDC, size 0x4, align 4
    SolidType_t m_eSolidType; // offset 0xBE0, size 0x1, align 1
    bool m_bIsMoving; // offset 0xBE1, size 0x1, align 1
    char _pad_0BE2[0x2]; // offset 0xBE2
    float32 m_flTimeToReachMaxSpeed; // offset 0xBE4, size 0x4, align 4
    float32 m_flDistanceToReachMaxSpeed; // offset 0xBE8, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xBEC, size 0x4, align 4
    float32 m_flComputedDistanceToReachMaxSpeed; // offset 0xBF0, size 0x4, align 4
    float32 m_flComputedDistanceToReachZeroSpeed; // offset 0xBF4, size 0x4, align 4
    float32 m_flStartCurveScale; // offset 0xBF8, size 0x4, align 4
    float32 m_flStopCurveScale; // offset 0xBFC, size 0x4, align 4
    float32 m_flDistanceToReachZeroSpeed; // offset 0xC00, size 0x4, align 4
    GameTime_t m_flTimeMovementStart; // offset 0xC04, size 0x4, align 255
    GameTime_t m_flTimeMovementStop; // offset 0xC08, size 0x4, align 255
    CHandle< CMoverPathNode > m_hStopAtNode; // offset 0xC0C, size 0x4, align 4
    float32 m_flMoveToT; // offset 0xC10, size 0x4, align 4
    float32 m_flPathLocationToBeginStop; // offset 0xC14, size 0x4, align 4
    float32 m_flPathLocationStart; // offset 0xC18, size 0x4, align 4
    float32 m_flBeginStopT; // offset 0xC1C, size 0x4, align 4
    CGameSoundEventName m_iszStartForwardSound; // offset 0xC20, size 0x8, align 8
    CGameSoundEventName m_iszLoopForwardSound; // offset 0xC28, size 0x8, align 8
    CGameSoundEventName m_iszStopForwardSound; // offset 0xC30, size 0x8, align 8
    CGameSoundEventName m_iszStartReverseSound; // offset 0xC38, size 0x8, align 8
    CGameSoundEventName m_iszLoopReverseSound; // offset 0xC40, size 0x8, align 8
    CGameSoundEventName m_iszStopReverseSound; // offset 0xC48, size 0x8, align 8
    CGameSoundEventName m_iszArriveAtDestinationSound; // offset 0xC50, size 0x8, align 8
    char _pad_0C58[0x18]; // offset 0xC58
    CEntityIOOutput m_OnMovementEnd; // offset 0xC70, size 0x18, align 255
    bool m_bStartAtClosestPoint; // offset 0xC88, size 0x1, align 1
    bool m_bStartAtEnd; // offset 0xC89, size 0x1, align 1
    bool m_bStartFollowingClosestMover; // offset 0xC8A, size 0x1, align 1
    char _pad_0C8B[0x1]; // offset 0xC8B
    float32 m_flStartFollowingClosestMoverWhenWithinDistance; // offset 0xC8C, size 0x4, align 4
    float32 m_flStartFollowingClosestMoverWhenOutsideDistance; // offset 0xC90, size 0x4, align 4
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // offset 0xC94, size 0x4, align 4
    GameTime_t m_flTimeStartOrientationChange; // offset 0xC98, size 0x4, align 255
    float32 m_flTimeToBlendToNewOrientation; // offset 0xC9C, size 0x4, align 4
    float32 m_flDurationBlendToNewOrientationRan; // offset 0xCA0, size 0x4, align 4
    bool m_bCreateMovableNavMesh; // offset 0xCA4, size 0x1, align 1
    bool m_bCreateMovableSurfaceGraph; // offset 0xCA5, size 0x1, align 1
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // offset 0xCA6, size 0x1, align 1
    char _pad_0CA7[0x1]; // offset 0xCA7
    CEntityOutputTemplate< CUtlString > m_OnNodePassed; // offset 0xCA8, size 0x20, align 8
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // offset 0xCC8, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationMatchEntity; // offset 0xCD0, size 0x4, align 4
    VectorWS m_vLerpToNewPosStartWS; // offset 0xCD4, size 0xC, align 4
    float32 m_flLerpToPositionTargetT; // offset 0xCE0, size 0x4, align 4
    float32 m_flLerpToPositionT; // offset 0xCE4, size 0x4, align 4
    float32 m_flLerpToPositionDeltaT; // offset 0xCE8, size 0x4, align 4
    CHandle< CPathMover > m_hTransitionSourcePath; // offset 0xCEC, size 0x4, align 4
    float32 m_flTransitionSourceT; // offset 0xCF0, size 0x4, align 4
    float32 m_flTransitionSourcePathLocation; // offset 0xCF4, size 0x4, align 4
    CUtlSymbolLarge m_iszTransitionSourcePathNodeStart; // offset 0xCF8, size 0x8, align 8
    bool m_bStoppedDuringTransition; // offset 0xD00, size 0x1, align 1
    char _pad_0D01[0x7]; // offset 0xD01
    CEntityIOOutput m_OnLerpToPositionComplete; // offset 0xD08, size 0x18, align 255
    bool m_bIsPaused; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0x3]; // offset 0xD21
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // offset 0xD24, size 0x4, align 4
    char _pad_0D28[0x8]; // offset 0xD28
    Quaternion m_qTransitionSourceOrientation; // offset 0xD30, size 0x10, align 16
    bool m_bTransitionOrientationCorrectionPending; // offset 0xD40, size 0x1, align 1
    char _pad_0D41[0xF]; // offset 0xD41
    Quaternion m_qTransitionOrientationCorrection; // offset 0xD50, size 0x10, align 16
    Quaternion m_qTransitionOrientationCorrectionApplied; // offset 0xD60, size 0x10, align 16
    GameTime_t m_flTimeTransitionOrientationCorrectionStart; // offset 0xD70, size 0x4, align 255
    float32 m_flTransitionOrientationCorrectionTime; // offset 0xD74, size 0x4, align 4
    int32 m_nDelayedTeleportToNode; // offset 0xD78, size 0x4, align 4
    bool m_bIsImGuiLogging; // offset 0xD7C, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xD7D, size 0x1, align 1
    char _pad_0D7E[0x2]; // offset 0xD7E
    float32 m_flSpeed; // offset 0xD80, size 0x4, align 4
    CHandle< CBaseEntity > m_hFollowEntity; // offset 0xD84, size 0x4, align 4
    float32 m_flFollowDistance; // offset 0xD88, size 0x4, align 4
    float32 m_flFollowMinimumSpeed; // offset 0xD8C, size 0x4, align 4
    float32 m_flCurFollowEntityT; // offset 0xD90, size 0x4, align 4
    float32 m_flCurFollowSpeed; // offset 0xD94, size 0x4, align 4
    CUtlSymbolLarge m_strOrientationFaceEntityName; // offset 0xD98, size 0x8, align 8
    CHandle< CBaseEntity > m_hOrientationFaceEntity; // offset 0xDA0, size 0x4, align 4
    char _pad_0DA4[0x4]; // offset 0xDA4
    CEntityIOOutput m_OnStart; // offset 0xDA8, size 0x18, align 255
    CEntityIOOutput m_OnStartForward; // offset 0xDC0, size 0x18, align 255
    CEntityIOOutput m_OnStartReverse; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_OnStop; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_OnStopped; // offset 0xE08, size 0x18, align 255
    bool m_bNextNodeReturnsCurrent; // offset 0xE20, size 0x1, align 1
    bool m_bStartedMoving; // offset 0xE21, size 0x1, align 1
    char _pad_0E22[0x1E]; // offset 0xE22
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // offset 0xE40, size 0x4, align 4
    CHandle< CFuncMover > m_hFollowMover; // offset 0xE44, size 0x4, align 4
    CUtlSymbolLarge m_iszFollowEntityName; // offset 0xE48, size 0x8, align 8
    CUtlSymbolLarge m_iszFollowMoverEntityName; // offset 0xE50, size 0x8, align 8
    float32 m_flFollowMoverDistance; // offset 0xE58, size 0x4, align 4
    float32 m_flFollowMoverRatio; // offset 0xE5C, size 0x4, align 4
    float32 m_flFollowMoverCalculatedDistance; // offset 0xE60, size 0x4, align 4
    float32 m_flFollowMoverSpringStrength; // offset 0xE64, size 0x4, align 4
    int32 m_nFollowMoverConstraintPriority; // offset 0xE68, size 0x4, align 4
    Vector2D m_vecFollowMoverCouplerRange; // offset 0xE6C, size 0x8, align 4
    bool m_bFollowConstraintsInitialized; // offset 0xE74, size 0x1, align 1
    char _pad_0E75[0x3]; // offset 0xE75
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // offset 0xE78, size 0x4, align 4
    float32 m_flFollowMoverSpeed; // offset 0xE7C, size 0x4, align 4
    float32 m_flFollowMoverVelocity; // offset 0xE80, size 0x4, align 4
    GameTick_t m_nTickMovementRan; // offset 0xE84, size 0x4, align 255
    GameTick_t m_nTickDependenciesResolved; // offset 0xE88, size 0x4, align 255
    FuncMoverMovementSummary_t m_movementSummary; // offset 0xE8C, size 0x20, align 4
    FuncMoverMovementSummary_t m_movementSummaryAfterTransition; // offset 0xEAC, size 0x20, align 4
    char _pad_0ECC[0x1C]; // offset 0xECC
    CUtlVector< FuncMoverTransitionRecord_t > m_vecTransitionHistory; // offset 0xEE8, size 0x18, align 8
    int32 m_nNextTransitionId; // offset 0xF00, size 0x4, align 4
    int32 m_nNextFollowMoverTransitionId; // offset 0xF04, size 0x4, align 4
    int32 m_nReplayingFollowMoverTransitionId; // offset 0xF08, size 0x4, align 4
    bool m_bStopFromBeginStopTarget; // offset 0xF0C, size 0x1, align 1
    bool m_bQueueStop; // offset 0xF0D, size 0x1, align 1
    bool m_bQueueStopMoving; // offset 0xF0E, size 0x1, align 1
    bool m_bQueueSetupPathMover; // offset 0xF0F, size 0x1, align 1
    CFuncMover::PathRebuildStrategy_t m_ePathRebuildStrategy; // offset 0xF10, size 0x4, align 4
    CFuncMover::FindFollowMoverStrategy_t m_eFindFollowMoverStrategy; // offset 0xF14, size 0x4, align 4
    bool m_bDisableDecelerationToStop; // offset 0xF18, size 0x1, align 1
    char _pad_0F19[0x3]; // offset 0xF19
    Vector m_vOffsetFromPath; // offset 0xF1C, size 0xC, align 4
    char _pad_0F28[0x4]; // offset 0xF28
    CHandle< CPathMoverEntitySpawner > m_hPathMoverEntitySpawner; // offset 0xF2C, size 0x4, align 4
};
