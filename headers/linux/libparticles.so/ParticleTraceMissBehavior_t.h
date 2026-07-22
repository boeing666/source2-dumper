#pragma once

enum ParticleTraceMissBehavior_t : uint32_t  // sizeof 0x4
{
    PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0,
    PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 1,
    PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 2,
};
