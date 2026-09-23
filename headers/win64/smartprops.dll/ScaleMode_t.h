#pragma once

enum ScaleMode_t : uint32_t  // sizeof 0x4
{
    NONE = 0,
    SCALE_END_TO_FIT = 1,
    SCALE_EQUALLY = 2,
    SCALE_MAXIMIZE = 3,
};
