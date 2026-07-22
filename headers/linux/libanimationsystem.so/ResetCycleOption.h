#pragma once

enum ResetCycleOption : uint32_t  // sizeof 0x4
{
    Beginning = 0,
    SameCycleAsSource = 1,
    InverseSourceCycle = 2,
    FixedValue = 3,
    SameTimeAsSource = 4,
};
