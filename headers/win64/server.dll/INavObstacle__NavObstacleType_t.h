#pragma once

enum INavObstacle::NavObstacleType_t : uint32_t  // sizeof 0x4
{
    NAV_OBSTACLE_TYPE_INVALID = -1,
    NAV_OBSTACLE_TYPE_NONE = 0,
    NAV_OBSTACLE_TYPE_AVOID = 1,
    NAV_OBSTACLE_TYPE_CONN = 2,
    NAV_OBSTACLE_TYPE_BLOCK = 3,
};
