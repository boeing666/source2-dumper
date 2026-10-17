#pragma once

enum SmartPropCastShadowsMode_t : uint32_t  // sizeof 0x4
{
    DEFAULT = 0,
    NONE = 1,
    ONLY_BAKED = 2,
    ONLY_REAL_TIME = 3,
    BAKED_AND_REALTIME = 4,
};
