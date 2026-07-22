#pragma once

enum NmTargetWarpAlgorithm_t : uint8_t  // sizeof 0x1
{
    Lerp = 0,
    Hermite = 1,
    HermiteFeaturePreserving = 2,
    Bezier = 3,
};
