#pragma once

enum ESkullState_t : uint8_t  // sizeof 0x1
{
    EHauntingSkull_Idle = 0,
    EHauntingSkull_FollowCaster = 1,
    EHauntingSkull_FollowTarget = 2,
    EHauntingSkull_Charging = 3,
    EHauntingSkull_Recovering = 4,
    EHauntingSkull_Spawning = 5,
};
