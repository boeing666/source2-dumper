#pragma once

enum PhysGenericShapeType_t : uint8_t  // sizeof 0x1
{
    GENERIC_SHAPE_POINT = 0,
    GENERIC_SHAPE_SPHERE = 1,
    GENERIC_SHAPE_AABB = 2,
    GENERIC_SHAPE_CAPSULE = 3,
    GENERIC_SHAPE_HULL = 4,
};
