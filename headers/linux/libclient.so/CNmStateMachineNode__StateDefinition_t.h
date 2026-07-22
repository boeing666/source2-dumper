#pragma once

struct CNmStateMachineNode::StateDefinition_t  // sizeof 0x38, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
    int16 m_nStateNodeIdx; // offset 0x0, size 0x2, align 2
    int16 m_nEntryConditionNodeIdx; // offset 0x2, size 0x2, align 2
    char _pad_0004[0x4]; // offset 0x4
    CUtlLeanVectorFixedGrowable< CNmStateMachineNode::TransitionDefinition_t, 5 > m_transitionDefinitions; // offset 0x8, size 0x30, align 8
};
