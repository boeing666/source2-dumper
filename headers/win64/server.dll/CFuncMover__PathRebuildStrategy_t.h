#pragma once

enum CFuncMover::PathRebuildStrategy_t : uint32_t  // sizeof 0x4
{
    PATH_REBUILD_DONT_MOVE = 0,
    PATH_REBUILD_MAINTAIN_T = 1,
    PATH_REBUILD_USE_CURRENT_NODE_T = 2,
};
