#pragma once

class CNmExternalPoseNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bShouldSampleRootMotion; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
