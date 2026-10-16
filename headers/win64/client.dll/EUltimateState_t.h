#pragma once

enum EUltimateState_t : uint32_t  // sizeof 0x4
{
    ULTIMATE_INACTIVE = 0,
    ULTIMATE_CHARGING = 1,
    ULTIMATE_GOINGUP = 2,
    ULTIMATE_COMINGDOWN = 3,
};
