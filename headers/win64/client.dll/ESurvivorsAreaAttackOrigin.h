#pragma once

enum ESurvivorsAreaAttackOrigin : uint32_t  // sizeof 0x4
{
    INVALID_ORIGIN = -1,
    PLAYER_ORIGIN = 0,
    RANDOM_ENEMY_ORIGIN = 1,
};
