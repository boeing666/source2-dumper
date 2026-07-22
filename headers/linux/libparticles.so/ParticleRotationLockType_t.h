#pragma once

enum ParticleRotationLockType_t : uint32_t  // sizeof 0x4
{
    PARTICLE_ROTATION_LOCK_NONE = 0,
    PARTICLE_ROTATION_LOCK_ROTATIONS = 1,
    PARTICLE_ROTATION_LOCK_NORMAL = 2,
};
