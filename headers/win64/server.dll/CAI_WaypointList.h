#pragma once

class CAI_WaypointList  // sizeof 0x8, align 0xFF (server)
{
public:
    AI_Waypoint_t* m_pFirstWaypoint; // offset 0x0, size 0x8, align 8
};
