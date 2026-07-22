#pragma once

enum CNmFloatComparisonNode::Comparison_t : uint8_t  // sizeof 0x1
{
    GreaterThanEqual = 0,
    LessThanEqual = 1,
    NearEqual = 2,
    GreaterThan = 3,
    LessThan = 4,
};
