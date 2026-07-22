#pragma once

class CNmStateMachineNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x138, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< CNmStateMachineNode::StateDefinition_t, 5 > m_stateDefinitions; // offset 0x10, size 0x120, align 8
    int16 m_nDefaultStateIndex; // offset 0x130, size 0x2, align 2
    char _pad_0132[0x6]; // offset 0x132
};
