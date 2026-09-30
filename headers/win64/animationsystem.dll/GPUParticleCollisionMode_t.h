#pragma once

enum GPUParticleCollisionMode_t : uint32_t  // sizeof 0x4
{
    PARTICLE_GPU_COLLISION_MODE_RT = 0,
    PARTICLE_GPU_COLLISION_MODE_DEPTH = 1,
    PARTICLE_GPU_COLLISION_MODE_HYBRID = 2,
};
