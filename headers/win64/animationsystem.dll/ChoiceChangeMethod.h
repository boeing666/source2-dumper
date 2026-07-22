#pragma once

enum ChoiceChangeMethod : uint32_t  // sizeof 0x4
{
    OnReset = 0,
    OnCycleEnd = 1,
    OnResetOrCycleEnd = 2,
};
