#pragma once

enum NmTransitionRuleCondition_t : uint8_t  // sizeof 0x1
{
    AnyAllowed = 0,
    FullyAllowed = 1,
    ConditionallyAllowed = 2,
    Blocked = 3,
};
