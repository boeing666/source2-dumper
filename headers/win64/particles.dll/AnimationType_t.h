#pragma once

enum AnimationType_t : uint32_t  // sizeof 0x4
{
    ANIMATION_TYPE_FIXED_RATE = 0,
    ANIMATION_TYPE_FIT_LIFETIME = 1,
    ANIMATION_TYPE_MANUAL_FRAMES = 2,
};
