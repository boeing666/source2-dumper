#pragma once

enum ENeutralAbilityState : uint32_t  // sizeof 0x4
{
    EIdle = 0,
    ECastDelay = 1,
    EChanneling = 2,
    EPostCast = 3,
};
