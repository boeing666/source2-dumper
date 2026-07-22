#pragma once

enum CFuncMover::Move_t : uint32_t  // sizeof 0x4
{
    MOVE_LOOP = 0,
    MOVE_OSCILLATE = 1,
    MOVE_STOP_AT_END = 2,
};
