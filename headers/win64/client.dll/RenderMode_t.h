#pragma once

enum RenderMode_t : uint8_t  // sizeof 0x1
{
    kRenderNormal = 0,
    kRenderTransAlpha = 1,
    kRenderNone = 2,
    kRenderModeCount = 3,
};
