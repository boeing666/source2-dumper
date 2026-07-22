#pragma once

enum CNmTargetWarpNode::TargetUpdateRule_t : uint8_t  // sizeof 0x1
{
    None = 0,
    Recalculate = 1,
    Offset = 2,
    RecalculateOrOffset = 3,
};
