#pragma once

class CNmExternalPoseNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    bool m_bShouldSampleRootMotion; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x5]; // offset 0xB
};
