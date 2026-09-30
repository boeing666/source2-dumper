#pragma once

enum AI_PathState_t : uint32_t  // sizeof 0x4
{
    eInvalid = -1,
    eBuilding = 0,
    eInProgress = 1,
    eFailed = 2,
    eSucceeded = 3,
};
