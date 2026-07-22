#pragma once

enum OrientationWarpTargetOffsetMode_t : uint32_t  // sizeof 0x4
{
    eLiteralValue = 0,
    eParameter = 1,
    eAnimationMovementHeading = 2,
    eAnimationMovementHeadingAtEnd = 3,
};
