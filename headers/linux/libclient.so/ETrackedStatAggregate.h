#pragma once

enum ETrackedStatAggregate : uint32_t  // sizeof 0x4
{
    k_eTrackedStatAggregate_Invalid = 0,
    k_eTrackedStatAggregate_Sum = 1,
    k_eTrackedStatAggregate_Max = 2,
    k_eTrackedStatAggregate_Min = 3,
    k_eTrackedStatAggregate_Or = 4,
    k_eTrackedStatAggregate_And = 5,
};
