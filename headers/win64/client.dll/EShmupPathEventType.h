#pragma once

enum EShmupPathEventType : uint32_t  // sizeof 0x4
{
    k_eShmupPathEventType_Invalid = -1,
    k_eShmupPathEventType_Speed = 0,
    k_eShmupPathEventType_Shoot = 1,
    k_eShmupPathEventType_StorePlayerPosition = 2,
    k_eShmupPathEventType_DestroySelf = 3,
};
