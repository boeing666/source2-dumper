#pragma once

enum CFuncMover::FindFollowMoverStrategy_t : uint32_t  // sizeof 0x4
{
    FIND_FOLLOW_MOVER_FORWARD_CLOSEST = 0,
    FIND_FOLLOW_MOVER_REVERSE_CLOSEST = 1,
    FIND_FOLLOW_MOVER_BIDIRECTIONAL_CLOSEST = 2,
};
