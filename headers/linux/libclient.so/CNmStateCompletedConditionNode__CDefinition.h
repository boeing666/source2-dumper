#pragma once

class CNmStateCompletedConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nTransitionDurationOverrideNodeIdx; // offset 0xC, size 0x2, align 2
    char _pad_000E[0x2]; // offset 0xE
    float32 m_flTransitionDurationSeconds; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
