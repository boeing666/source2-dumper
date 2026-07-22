#pragma once

enum BeginDeathLifeStateTransition_t : uint8_t  // sizeof 0x1
{
    TRANSITION_TO_LIFESTATE_DYING = 0,
    TRANSITION_TO_LIFESTATE_DEAD = 1,
};
