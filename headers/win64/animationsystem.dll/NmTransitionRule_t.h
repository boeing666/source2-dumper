#pragma once

enum NmTransitionRule_t : uint8_t  // sizeof 0x1
{
    AllowTransition = 0,
    ConditionallyAllowTransition = 1,
    BlockTransition = 2,
};
