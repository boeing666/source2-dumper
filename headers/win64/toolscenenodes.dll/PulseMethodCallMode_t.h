#pragma once

enum PulseMethodCallMode_t : uint32_t  // sizeof 0x4
{
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};
