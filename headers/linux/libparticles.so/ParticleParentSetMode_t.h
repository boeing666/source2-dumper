#pragma once

enum ParticleParentSetMode_t : uint32_t  // sizeof 0x4
{
    PARTICLE_SET_PARENT_NO = 0,
    PARTICLE_SET_PARENT_IMMEDIATE = 1,
    PARTICLE_SET_PARENT_ROOT = 2,
};
