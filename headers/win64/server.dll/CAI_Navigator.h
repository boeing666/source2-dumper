#pragma once

class CAI_Navigator : public CAI_Component /*0x0*/  // sizeof 0x9A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    AI_NavigatorConfig_t m_config; // offset 0x60, size 0x5, align 1
    char _pad_0065[0x3]; // offset 0x65
    CAI_PathCost* m_pPathCost; // offset 0x68, size 0x8, align 8
    NavType_t m_navType; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x24]; // offset 0x74
    CAI_Path* m_pPath; // offset 0x98, size 0x8, align 8
    GameTime_t m_flGoalChangeTime; // offset 0xA0, size 0x4, align 255
    GameTime_t m_flTimeLastAvoidanceTriangulate; // offset 0xA4, size 0x4, align 255
    GameTime_t m_flStartWaitingForFacingTime; // offset 0xA8, size 0x4, align 255
    GameTime_t m_gtSpeedAvoidanceTimer; // offset 0xAC, size 0x4, align 255
    AI_NavGoal_t m_queuedGoal; // offset 0xB0, size 0x448, align 8
    AI_NavSetGoalFlags_t m_queuedGoalFlags; // offset 0x4F8, size 0x4, align 4
    char _pad_04FC[0x4]; // offset 0x4FC
    CAI_Path* m_pQueuedPath; // offset 0x500, size 0x8, align 8
    CUtlVector< CAI_Navigator::QueuedGoal_t* > m_vecSpeculativeGoals; // offset 0x508, size 0x18, align 8
    int32 m_nActiveSpeculativePathIndex; // offset 0x520, size 0x4, align 4
    uint32 m_nPathSerialNumber; // offset 0x524, size 0x4, align 4
    CAI_Path* m_pMotorQueuedPath; // offset 0x528, size 0x8, align 8
    AI_NavGoal_t m_motorQueuedGoal; // offset 0x530, size 0x448, align 8
    bool m_bUpdatingPathQuery; // offset 0x978, size 0x1, align 1
    char _pad_0979[0x3]; // offset 0x979
    AI_NavGoalFlags_t m_nExtraPathQueryGoalFlags; // offset 0x97C, size 0x4, align 4
    CHandle< CBaseEntity > m_hBigStepGroundEnt; // offset 0x980, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastBlockingEnt; // offset 0x984, size 0x4, align 4
    int32 m_nPreviousCollisionGroup; // offset 0x988, size 0x4, align 4
    GameTime_t m_flLastNpcOverlapTime; // offset 0x98C, size 0x4, align 255
    char _pad_0990[0x10]; // offset 0x990
};
