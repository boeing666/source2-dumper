#pragma once

enum NmGraphEventTypeCondition_t : uint8_t  // sizeof 0x1
{
    Entry = 0,
    FullyInState = 1,
    Exit = 2,
    Timed = 3,
    Generic = 4,
    Any = 5,
};
