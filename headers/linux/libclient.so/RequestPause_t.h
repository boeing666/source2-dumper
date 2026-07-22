#pragma once

enum RequestPause_t : uint32_t  // sizeof 0x4
{
    RP_PAUSE = 0,
    RP_UNPAUSE = 1,
    RP_TOGGLEPAUSE = 2,
};
