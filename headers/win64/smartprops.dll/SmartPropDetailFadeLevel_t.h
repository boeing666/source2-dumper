#pragma once

enum SmartPropDetailFadeLevel_t : uint32_t  // sizeof 0x4
{
    NONE = 0,
    MOST_AGGRESSIVE = 1,
    MORE_AGGRESSIVE = 2,
    NORMAL = 3,
    LESS_AGGRESSIVE = 4,
    LEAST_AGGRESSIVE = 5,
};
