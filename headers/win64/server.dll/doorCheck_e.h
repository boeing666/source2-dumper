#pragma once

enum doorCheck_e : uint32_t  // sizeof 0x4
{
    DOOR_CHECK_FORWARD = 0,
    DOOR_CHECK_BACKWARD = 1,
    DOOR_CHECK_FULL = 2,
};
