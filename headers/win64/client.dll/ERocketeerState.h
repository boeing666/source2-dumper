#pragma once

enum ERocketeerState : uint8_t  // sizeof 0x1
{
    IDLE = 0,
    INAIR = 1,
    VTOL = 2,
    VTOLCASTDELAY = 3,
};
