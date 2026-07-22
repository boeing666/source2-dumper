#pragma once

enum ParticleOrientationType_t : uint32_t  // sizeof 0x4
{
    PARTICLE_ORIENTATION_NONE = 0,
    PARTICLE_ORIENTATION_VELOCITY = 1,
    PARTICLE_ORIENTATION_NORMAL = 2,
    PARTICLE_ORIENTATION_ROTATION = 4,
};
