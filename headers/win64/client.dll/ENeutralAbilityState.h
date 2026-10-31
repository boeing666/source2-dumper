#pragma once

enum ENeutralAbilityState : uint32_t  // sizeof 0x4
{
    ENASIdle = 0,
    ENASCastDelay = 1,
    ENASChanneling = 2,
    ENASPostCast = 3,
};
