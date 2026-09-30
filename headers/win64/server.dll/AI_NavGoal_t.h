#pragma once

struct AI_NavGoal_t : public AI_PathGoal_t /*0x0*/  // sizeof 0x448, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x258]; // offset 0x0
    AI_TaskFailureCode_t m_nGoalTaskFailureCode; // offset 0x258, size 0x2, align 2
    char _pad_025A[0x6]; // offset 0x25A
    AI_PathfindingData_t m_pathfindingData; // offset 0x260, size 0x1C8, align 8
    char _pad_0428[0x20]; // offset 0x428
};
