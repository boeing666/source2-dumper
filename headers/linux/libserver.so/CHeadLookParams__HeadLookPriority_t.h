#pragma once

enum CHeadLookParams::HeadLookPriority_t : uint32_t  // sizeof 0x4
{
    BORING = 0,
    INTERESTING = 1,
    IMPORTANT = 2,
    CRITICAL = 3,
    MANDATORY = 4,
};
