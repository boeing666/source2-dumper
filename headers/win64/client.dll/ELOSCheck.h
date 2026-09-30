#pragma once

enum ELOSCheck : uint32_t  // sizeof 0x4
{
    None = 0,
    Head = 1,
    Head_IgnoreObscureBlockers = 2,
    BodyCenter = 3,
    BodyCenter_IgnoreObscureBlockers = 4,
    Bounds = 5,
    Bounds_IgnoreObscureBlockers = 6,
    FibonacciSphere = 7,
};
