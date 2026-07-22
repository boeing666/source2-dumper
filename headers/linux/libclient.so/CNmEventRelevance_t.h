#pragma once

enum CNmEventRelevance_t : uint32_t  // sizeof 0x4
{
    ClientOnly = 0,
    ServerOnly = 1,
    ClientAndServer = 2,
};
