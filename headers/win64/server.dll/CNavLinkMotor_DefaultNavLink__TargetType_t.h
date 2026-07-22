#pragma once

enum CNavLinkMotor_DefaultNavLink::TargetType_t : uint32_t  // sizeof 0x4
{
    eWaypoint = 0,
    eEdgePosition = 1,
    eEdgePositionAndOrientation = 2,
};
