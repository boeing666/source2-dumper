#pragma once

enum AI_WaypointState_t : uint32_t  // sizeof 0x4
{
    eInvalid = -1,
    eBuilding = 0,
    eHasWaypoints = 1,
    eEmpty = 2,
};
