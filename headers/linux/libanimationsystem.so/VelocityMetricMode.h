#pragma once

enum VelocityMetricMode : uint8_t  // sizeof 0x1
{
    DirectionOnly = 0,
    MagnitudeOnly = 1,
    DirectionAndMagnitude = 2,
};
