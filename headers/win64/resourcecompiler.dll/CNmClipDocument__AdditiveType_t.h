#pragma once

enum CNmClipDocument::AdditiveType_t : uint8_t  // sizeof 0x1
{
    None = 0,
    RelativeToSkeleton = 1,
    RelativeToFrame = 2,
    RelativeToAnimation = 3,
    RelativeToAnimationFrame = 4,
};
