#pragma once

enum TraceNoHitResult_t : uint32_t  // sizeof 0x4
{
    NOTHING = 0,
    DISCARD = 1,
    MOVE_TO_START = 2,
    MOVE_TO_END = 3,
};
