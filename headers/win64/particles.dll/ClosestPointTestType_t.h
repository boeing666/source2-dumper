#pragma once

enum ClosestPointTestType_t : uint32_t  // sizeof 0x4
{
    PARTICLE_CLOSEST_TYPE_BOX = 0,
    PARTICLE_CLOSEST_TYPE_CAPSULE = 1,
    PARTICLE_CLOSEST_TYPE_HYBRID = 2,
};
