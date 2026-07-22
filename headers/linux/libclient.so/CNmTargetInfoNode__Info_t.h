#pragma once

enum CNmTargetInfoNode::Info_t : uint32_t  // sizeof 0x4
{
    AngleHorizontal = 0,
    AngleVertical = 1,
    Distance = 2,
    DistanceHorizontalOnly = 3,
    DistanceVerticalOnly = 4,
    DeltaOrientationX = 5,
    DeltaOrientationY = 6,
    DeltaOrientationZ = 7,
};
