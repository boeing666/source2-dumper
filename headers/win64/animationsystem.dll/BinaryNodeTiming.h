#pragma once

enum BinaryNodeTiming : uint32_t  // sizeof 0x4
{
    UseChild1 = 0,
    UseChild2 = 1,
    SyncChildren = 2,
};
