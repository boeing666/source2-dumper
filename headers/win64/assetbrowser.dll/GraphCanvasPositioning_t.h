#pragma once

enum GraphCanvasPositioning_t : uint32_t  // sizeof 0x4
{
    AUTO = 0,
    INSIDE_PARENT = 1,
    OUTSIDE_PARENT = 2,
    ON_PARENT_BORDER = 3,
};
