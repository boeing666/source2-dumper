#pragma once

enum RenderMeshSlotType_t : uint8_t  // sizeof 0x1
{
    RENDERMESH_SLOT_INVALID = -1,
    RENDERMESH_SLOT_PER_VERTEX = 0,
    RENDERMESH_SLOT_PER_INSTANCE = 1,
};
