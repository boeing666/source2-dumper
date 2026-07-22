#pragma once

enum ParticleFalloffFunction_t : uint32_t  // sizeof 0x4
{
    PARTICLE_FALLOFF_CONSTANT = 0,
    PARTICLE_FALLOFF_LINEAR = 1,
    PARTICLE_FALLOFF_EXPONENTIAL = 2,
};
