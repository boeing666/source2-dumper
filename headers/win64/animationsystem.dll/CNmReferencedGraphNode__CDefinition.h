#pragma once

class CNmReferencedGraphNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nReferencedGraphIdx; // offset 0x10, size 0x2, align 2
    int16 m_nFallbackNodeIdx; // offset 0x12, size 0x2, align 2
    char _pad_0014[0x4]; // offset 0x14
};
