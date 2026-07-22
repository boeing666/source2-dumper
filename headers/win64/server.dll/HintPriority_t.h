#pragma once

enum HintPriority_t : uint32_t  // sizeof 0x4
{
    HINT_PRIORITY_LOW = 0,
    HINT_PRIORITY_MEDIUM = 1,
    HINT_PRIORITY_HIGH = 2,
    HINT_PRIORITY_CRITICAL = 3,
};
