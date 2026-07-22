#pragma once

enum SharedMovementGait_t : uint8_t  // sizeof 0x1
{
    eInvalid = -1,
    eSlow = 0,
    eMedium = 1,
    eFast = 2,
    eVeryFast = 3,
    eCount = 4,
};
