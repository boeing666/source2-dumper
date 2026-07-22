#pragma once

enum NavGoalType_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eEntity = 1,
    ePathCorner = 2,
    eLocation = 3,
    eCover = 4,
    eLOS = 5,
    eCount = 6,
    eInvalid = 7,
};
