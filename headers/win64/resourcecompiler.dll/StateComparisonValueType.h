#pragma once

enum StateComparisonValueType : uint32_t  // sizeof 0x4
{
    StateComparisonValue_FixedValue = 0,
    StateComparisonValue_StateValue = 1,
    StateComparisonValue_Parameter = 2,
};
