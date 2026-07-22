#pragma once

enum ValueRemapperMomentumType_t : uint32_t  // sizeof 0x4
{
    MomentumType_None = 0,
    MomentumType_Friction = 1,
    MomentumType_SpringTowardSnapValue = 2,
    MomentumType_SpringAwayFromSnapValue = 3,
};
