#pragma once

enum CNmGraphDocStateNode::StateType_t : uint32_t  // sizeof 0x4
{
    OffState = 0,
    BlendTreeState = 1,
    StateMachineState = 2,
    Clone = 3,
};
