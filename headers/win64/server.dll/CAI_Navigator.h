#pragma once

class CAI_Navigator : public CAI_Component /*0x0*/  // sizeof 0x350, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x58]; // offset 0x0
    float32 m_flGoalStoppingDistance; // offset 0x58, size 0x4, align 4
    Navigation_t m_navType; // offset 0x5C, size 0x4, align 4
    bool m_bNavComplete; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x27]; // offset 0x61
    CAI_Path* m_pPath; // offset 0x88, size 0x8, align 8
    CHandle< CBaseEntity > m_hLosTarget; // offset 0x90, size 0x4, align 4
    VectorWS m_vThreatPos; // offset 0x94, size 0xC, align 4
    CAI_WaypointList m_interruptPathWaypoints; // offset 0xA0, size 0x8, align 255
    GameTime_t m_flLastSuccessfulSimplifyTime; // offset 0xA8, size 0x4, align 255
    GameTime_t m_flTimeLastAvoidanceTriangulate; // offset 0xAC, size 0x4, align 255
    GameTime_t m_flStartWaitingForFacingTime; // offset 0xB0, size 0x4, align 255
    char _pad_00B4[0x4]; // offset 0xB4
    AI_NavGoal_t m_queuedGoal; // offset 0xB8, size 0xC0, align 255
    AI_NavSetGoalFlags_t m_queuedGoalFlags; // offset 0x178, size 0x4, align 4
    bool m_bQueuedGoalSuccess; // offset 0x17C, size 0x1, align 1
    char _pad_017D[0x3]; // offset 0x17D
    CGlobalSymbol m_sQueuedGoalName; // offset 0x180, size 0x8, align 8
    bool m_bPeerMoveWait; // offset 0x188, size 0x1, align 1
    char _pad_0189[0x3]; // offset 0x189
    CHandle< CBaseEntity > m_hPeerWaitingOn; // offset 0x18C, size 0x4, align 4
    CSimTimer m_PeerWaitMoveTimer; // offset 0x190, size 0xC, align 255
    CSimTimer m_PeerWaitClearTimer; // offset 0x19C, size 0xC, align 255
    CSimTimer m_NextSidestepTimer; // offset 0x1A8, size 0xC, align 255
    CHandle< CBaseEntity > m_hBigStepGroundEnt; // offset 0x1B4, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastBlockingEnt; // offset 0x1B8, size 0x4, align 4
    VectorWS m_vPosBeginFailedSteer; // offset 0x1BC, size 0xC, align 4
    GameTime_t m_timeBeginFailedSteer; // offset 0x1C8, size 0x4, align 255
    int32 m_nNavFailCounter; // offset 0x1CC, size 0x4, align 4
    GameTime_t m_flLastNavFailTime; // offset 0x1D0, size 0x4, align 255
    bool m_bShouldBruteForceFailedNav; // offset 0x1D4, size 0x1, align 1
    bool m_bNavChangedAlongPath; // offset 0x1D5, size 0x1, align 1
    char _pad_01D6[0x2]; // offset 0x1D6
    int32 m_nPreviousCollisionGroup; // offset 0x1D8, size 0x4, align 4
    GameTime_t m_flLastNpcOverlapTime; // offset 0x1DC, size 0x4, align 255
    float32 m_flGoalBlockedTolerance; // offset 0x1E0, size 0x4, align 4
    float32 m_flWaypointBlockedTolerance; // offset 0x1E4, size 0x4, align 4
    Vector m_vGoalDirection; // offset 0x1E8, size 0xC, align 4
    CHandle< CBaseEntity > m_hGoalDirectionTarget; // offset 0x1F4, size 0x4, align 4
    float32 m_flGoalDirectionToleranceDot; // offset 0x1F8, size 0x4, align 4
    float32 m_flGoalArrivalTolerance; // offset 0x1FC, size 0x4, align 4
    StanceType_t m_eGoalStance; // offset 0x200, size 0x4, align 4
    char _pad_0204[0x4]; // offset 0x204
    CGlobalSymbol m_sGoalMovementGaitSet; // offset 0x208, size 0x8, align 8
    float32 m_flArrivalFlyingSpeedScale; // offset 0x210, size 0x4, align 4
    float32 m_flPathEndGoalRange; // offset 0x214, size 0x4, align 4
    float32 m_flPathEndGoalRange_Repathing; // offset 0x218, size 0x4, align 4
    float32 m_flGoalMaxPathLength; // offset 0x21C, size 0x4, align 4
    float32 m_flGoalMaxTravelDist; // offset 0x220, size 0x4, align 4
    char _pad_0224[0x4]; // offset 0x224
    CUtlString m_pathRestrictionTag; // offset 0x228, size 0x8, align 8
    char _pad_0230[0x18]; // offset 0x230
    CNavSmartGoalHelper m_smartGoalHelper; // offset 0x248, size 0x108, align 255
};
