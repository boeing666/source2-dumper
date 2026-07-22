#pragma once

enum EChickenActivity : uint32_t  // sizeof 0x4
{
    Idle = 0,
    Squat = 1,
    Walk = 2,
    Run = 3,
    Glide = 4,
    Land = 5,
    Panic = 6,
};
