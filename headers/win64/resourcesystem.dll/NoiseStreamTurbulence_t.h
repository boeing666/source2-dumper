#pragma once

enum NoiseStreamTurbulence_t : uint32_t  // sizeof 0x4
{
    NOISE_STREAM_TURB_NONE = 0,
    NOISE_STREAM_TURB_HIGHLIGHT = 1,
    NOISE_STREAM_TURB_FEEDBACK = 2,
    NOISE_STREAM_TURB_LOOPY = 3,
    NOISE_STREAM_TURB_CONTRAST = 4,
    NOISE_STREAM_TURB_ALTERNATE = 5,
};
