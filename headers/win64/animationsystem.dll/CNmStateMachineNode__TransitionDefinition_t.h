#pragma once

struct CNmStateMachineNode::TransitionDefinition_t  // sizeof 0x8, align 0x2 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    int16 m_nTargetStateIdx; // offset 0x0, size 0x2, align 2
    int16 m_nConditionNodeIdx; // offset 0x2, size 0x2, align 2
    int16 m_nTransitionNodeIdx; // offset 0x4, size 0x2, align 2
    bool m_bCanBeForced; // offset 0x6, size 0x1, align 1
    char _pad_0007[0x1]; // offset 0x7
};
