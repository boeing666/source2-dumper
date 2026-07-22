#pragma once

enum PoseType_t : uint8_t  // sizeof 0x1
{
    POSETYPE_STATIC = 0,
    POSETYPE_DYNAMIC = 1,
    POSETYPE_INVALID = 255,
};
