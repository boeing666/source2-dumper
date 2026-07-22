#pragma once

enum FinishedConditionOption : uint32_t  // sizeof 0x4
{
    FinishedConditionOption_OnFinished = 0,
    FinishedConditionOption_OnAlmostFinished = 1,
};
