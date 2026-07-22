#pragma once

class CNmRootMotionOverrideNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int16 m_desiredMovingVelocityNodeIdx; // offset 0x18, size 0x2, align 2
    int16 m_desiredFacingDirectionNodeIdx; // offset 0x1A, size 0x2, align 2
    int16 m_linearVelocityLimitNodeIdx; // offset 0x1C, size 0x2, align 2
    int16 m_angularVelocityLimitNodeIdx; // offset 0x1E, size 0x2, align 2
    float32 m_maxLinearVelocity; // offset 0x20, size 0x4, align 4
    float32 m_maxAngularVelocityRadians; // offset 0x24, size 0x4, align 4
    CNmBitFlags m_overrideFlags; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
