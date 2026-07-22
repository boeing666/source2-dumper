#pragma once

enum SeqMode_t : uint32_t  // sizeof 0x4
{
    SQM_RGBA = 0,
    SQM_RGB = 1,
    SQM_ALPHA = 2,
    SQM_ALPHA_INVALID = 3,
};
