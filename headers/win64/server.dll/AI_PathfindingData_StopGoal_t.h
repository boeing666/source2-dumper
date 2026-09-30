#pragma once

struct AI_PathfindingData_StopGoal_t  // sizeof 0x8, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    AI_NavStopMovingMode_t m_eMode; // offset 0x0, size 0x4, align 4
    AI_NavStopMovingFacing_t m_eFacing; // offset 0x4, size 0x4, align 4
};
