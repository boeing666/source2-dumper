#pragma once

enum ParticleDirectionNoiseType_t : uint32_t  // sizeof 0x4
{
    PARTICLE_DIR_NOISE_PERLIN = 0,
    PARTICLE_DIR_NOISE_CURL = 1,
    PARTICLE_DIR_NOISE_WORLEY_BASIC = 2,
};
