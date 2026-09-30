#pragma once

enum NoiseStreamModifier_t : uint32_t  // sizeof 0x4
{
    NOISE_STREAM_MODIFIER_NONE = 0,
    NOISE_STREAM_MODIFIER_LINES = 1,
    NOISE_STREAM_MODIFIER_CLUMPS = 2,
    NOISE_STREAM_MODIFIER_RINGS = 3,
};
