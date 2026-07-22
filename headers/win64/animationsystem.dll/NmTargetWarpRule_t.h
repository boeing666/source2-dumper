#pragma once

enum NmTargetWarpRule_t : uint8_t  // sizeof 0x1
{
    WarpXY = 0,
    WarpZ = 1,
    WarpXYZ = 2,
    RotationOnly = 3,
    FixedSection = 4,
};
