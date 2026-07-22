#pragma once

enum CNmRootMotionData::SamplingMode_t : uint8_t  // sizeof 0x1
{
    Delta = 0,
    WorldSpace = 1,
};
