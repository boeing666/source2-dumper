#pragma once

enum NoiseStreamType_t : uint32_t  // sizeof 0x4
{
    NOISE_STREAM_TYPE_PERLIN = 0,
    NOISE_STREAM_TYPE_SIMPLEX = 1,
    NOISE_STREAM_TYPE_WORLEY = 2,
    NOISE_STREAM_TYPE_CURL = 3,
    NOISE_STREAM_TYPE_NONE = 4,
};
