#pragma once

enum RenderSlotType_t : uint8_t  // sizeof 0x1
{
    RENDER_SLOT_INVALID = -1,
    RENDER_SLOT_PER_VERTEX = 0,
    RENDER_SLOT_PER_INSTANCE = 1,
};
