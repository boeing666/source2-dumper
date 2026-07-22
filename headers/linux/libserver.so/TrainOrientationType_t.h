#pragma once

enum TrainOrientationType_t : uint32_t  // sizeof 0x4
{
    TrainOrientation_Fixed = 0,
    TrainOrientation_AtPathTracks = 1,
    TrainOrientation_LinearBlend = 2,
    TrainOrientation_EaseInEaseOut = 3,
};
