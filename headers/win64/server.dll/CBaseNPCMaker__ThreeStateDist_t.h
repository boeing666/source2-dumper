#pragma once

enum CBaseNPCMaker::ThreeStateDist_t : uint32_t  // sizeof 0x4
{
    TS_DIST_NEAREST = 0,
    TS_DIST_FARTHEST = 1,
    TS_DIST_DONT_CARE = 2,
};
