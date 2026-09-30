#pragma once

struct AI_PathfindingData_Waypoints_t  // sizeof 0x18, align 0x8 (server) {MGetKV3ClassDefaults}
{
    VectorWS m_vPrevWaypointPos; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
    AI_Waypoint_t* m_pFirstWaypoint; // offset 0x10, size 0x8, align 8
};
