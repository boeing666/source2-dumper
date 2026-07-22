#pragma once

enum AI_Locomotion_MovementHeading_t : uint32_t  // sizeof 0x4
{
    eForward = 0,
    eForwardRight = 1,
    eRight = 2,
    eBackRight = 3,
    eBack = 4,
    eBackLeft = 5,
    eLeft = 6,
    eForwardLeft = 7,
    eCount = 8,
};
