#pragma once

enum CNmGraphDocIDEventConditionNode::SearchRule_t : uint8_t  // sizeof 0x1
{
    SearchAll = 0,
    OnlySearchGraphEvents = 1,
    OnlySearchAnimEvents = 2,
};
