#pragma once

enum ParticleFloatInputMode_t : uint32_t  // sizeof 0x4
{
    PF_INPUT_MODE_INVALID = -1,
    PF_INPUT_MODE_CLAMPED = 0,
    PF_INPUT_MODE_LOOPED = 1,
    PF_INPUT_MODE_COUNT = 2,
};
