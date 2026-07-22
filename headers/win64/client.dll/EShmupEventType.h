#pragma once

enum EShmupEventType : uint32_t  // sizeof 0x4
{
    k_eShmupEventType_Invalid = -1,
    k_eShmupEventType_SpawnEnemy = 0,
    k_eShmupEventType_UI = 1,
};
