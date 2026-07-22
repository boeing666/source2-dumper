#pragma once

class CNmStateCompletedConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nTransitionDurationOverrideNodeIdx; // offset 0x12, size 0x2, align 2
    float32 m_flTransitionDurationSeconds; // offset 0x14, size 0x4, align 4
};
