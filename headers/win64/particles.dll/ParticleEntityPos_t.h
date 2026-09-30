#pragma once

enum ParticleEntityPos_t : uint32_t  // sizeof 0x4
{
    PARTICLE_ABS_ORIGIN = 0,
    PARTICLE_WORLDSPACE_CENTER = 1,
    PARTICLE_EYES = 2,
    PARTICLE_FLASHLIGHT = 3,
};
