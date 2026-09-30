#pragma once

struct AI_PathfindingData_t  // sizeof 0x1C8, align 0x8 (server) {MGetKV3ClassDefaults}
{
    NavGoalPathfindingAlgorithm_t m_pathFindingAlgorithm; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    AI_PathfindingData_Waypoints_t m_dataWaypoints; // offset 0x8, size 0x18, align 8
    AI_PathfindingData_RadialGoal_t m_dataRadialGoal; // offset 0x20, size 0x70, align 8
    AI_PathfindingData_DirectionalGoal_t m_dataDirectionalGoal; // offset 0x90, size 0x14, align 4
    char _pad_00A4[0x4]; // offset 0xA4
    AI_PathfindingData_RandomGoal_t m_dataRandomGoal; // offset 0xA8, size 0x50, align 8
    AI_PathfindingData_WanderGoal_t m_dataWanderGoal; // offset 0xF8, size 0x50, align 8
    AI_PathfindingData_VectorGoal_t m_dataVectorGoal; // offset 0x148, size 0x60, align 8
    AI_PathfindingData_MultiGoal_t m_dataMultiGoal; // offset 0x1A8, size 0x18, align 8
    AI_PathfindingData_StopGoal_t m_dataStopGoal; // offset 0x1C0, size 0x8, align 4
};
