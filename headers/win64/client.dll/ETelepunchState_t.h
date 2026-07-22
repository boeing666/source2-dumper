#pragma once

enum ETelepunchState_t : uint8_t  // sizeof 0x1
{
    ETelepunchState_None = 0,
    ETelepunchState_EnemyPortalTelegraph = 1,
    ETelepunchState_SelfPortalTelegraph = 2,
    ETelepunchState_Windup = 3,
    ETelepunchState_Attack = 4,
};
