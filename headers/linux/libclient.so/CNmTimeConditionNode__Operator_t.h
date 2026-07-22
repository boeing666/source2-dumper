#pragma once

enum CNmTimeConditionNode::Operator_t : uint8_t  // sizeof 0x1
{
    LessThan = 0,
    LessThanEqual = 1,
    GreaterThan = 2,
    GreaterThanEqual = 3,
};
