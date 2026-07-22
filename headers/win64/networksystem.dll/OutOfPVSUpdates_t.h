#pragma once

enum OutOfPVSUpdates_t : uint32_t  // sizeof 0x4
{
    OOPVSUpdates_OptOut = 0,
    OOPVSUpdates_OptIn = 1,
    OOPVSUpdates_Default = 2,
    OOPVSUpdates_Count = 3,
};
