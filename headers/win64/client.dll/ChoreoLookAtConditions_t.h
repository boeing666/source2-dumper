#pragma once

enum ChoreoLookAtConditions_t : uint32_t  // sizeof 0x4
{
    WHILE_MOVING = 1,
    WHILE_ANIMATING = 2,
    DURING_OUTRO = 4,
};
