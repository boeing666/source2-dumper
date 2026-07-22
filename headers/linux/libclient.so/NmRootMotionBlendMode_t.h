#pragma once

enum NmRootMotionBlendMode_t : uint8_t  // sizeof 0x1
{
    Blend = 0,
    Additive = 1,
    IgnoreSource = 2,
    IgnoreTarget = 3,
};
