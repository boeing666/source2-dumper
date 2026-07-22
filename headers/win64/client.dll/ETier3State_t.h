#pragma once

enum ETier3State_t : uint32_t  // sizeof 0x4
{
    ETier3State_Alive = 0,
    ETier3State_Dying = 1,
    ETier3State_Falling = 2,
    ETier3State_Vulnerable = 3,
};
