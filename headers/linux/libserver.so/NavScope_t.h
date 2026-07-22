#pragma once

enum NavScope_t : uint8_t  // sizeof 0x1
{
    eGround = 0,
    eAir = 1,
    eCount = 2,
    eFirst = 0,
    eInvalid = 255,
};
