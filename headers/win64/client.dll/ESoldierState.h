#pragma once

enum ESoldierState : uint32_t  // sizeof 0x4
{
    kSoldier_State_Spawning = 0,
    kSoldier_State_Idle = 1,
    kSoldier_State_Shooting = 2,
};
