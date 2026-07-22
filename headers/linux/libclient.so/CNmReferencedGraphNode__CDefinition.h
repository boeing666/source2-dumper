#pragma once

class CNmReferencedGraphNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nReferencedGraphIdx; // offset 0xA, size 0x2, align 2
    int16 m_nFallbackNodeIdx; // offset 0xC, size 0x2, align 2
    char _pad_000E[0x2]; // offset 0xE
};
