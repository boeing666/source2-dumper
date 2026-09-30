#pragma once

enum NavGoalLocationType_t : uint8_t  // sizeof 0x1
{
    eNone = 0,
    eEntity = 1,
    ePathCorner = 2,
    ePosition = 3,
    eCount = 4,
    eInvalid = 5,
};
