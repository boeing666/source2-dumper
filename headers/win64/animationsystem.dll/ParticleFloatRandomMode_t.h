#pragma once

enum ParticleFloatRandomMode_t : uint32_t  // sizeof 0x4
{
    PF_RANDOM_MODE_INVALID = -1,
    PF_RANDOM_MODE_CONSTANT = 0,
    PF_RANDOM_MODE_VARYING = 1,
    PF_RANDOM_MODE_COUNT = 2,
};
