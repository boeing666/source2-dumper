#pragma once

enum NmGraphDocGraphType_t : uint32_t  // sizeof 0x4
{
    Invalid = 0,
    BlendTree = 1,
    ValueTree = 2,
    StateMachine = 3,
    EntryOverrideTree = 4,
    TransitionConduit = 5,
    GlobalTransitionConduit = 6,
    VirtualParameterValueTree = 7,
};
