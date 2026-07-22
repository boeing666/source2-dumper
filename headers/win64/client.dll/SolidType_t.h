#pragma once

enum SolidType_t : uint8_t  // sizeof 0x1
{
    SOLID_NONE = 0,
    SOLID_BSP = 1,
    SOLID_BBOX = 2,
    SOLID_OBB = 3,
    SOLID_SPHERE = 4,
    SOLID_POINT = 5,
    SOLID_VPHYSICS = 6,
    SOLID_CAPSULE = 7,
    SOLID_CYLINDER = 8,
    SOLID_LAST = 9,
};
