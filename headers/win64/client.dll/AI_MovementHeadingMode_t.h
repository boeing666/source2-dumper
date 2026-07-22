#pragma once

enum AI_MovementHeadingMode_t : uint32_t  // sizeof 0x4
{
    eContinuous = 0,
    eDiscretized_180 = 1,
    eDiscretized_90 = 2,
    eDiscretized_45 = 3,
};
