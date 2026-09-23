#pragma once

class CNmTimeControlledClipNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nPlayInReverseValueNodeIdx; // offset 0x10, size 0x2, align 2
    bool m_bSampleRootMotion; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
    int16 m_nDataSlotIdx; // offset 0x14, size 0x2, align 2
    int16 m_nTimeValueNodeIdx; // offset 0x16, size 0x2, align 2
    CUtlVectorFixedGrowable< CGlobalSymbol, 2 > m_graphEvents; // offset 0x18, size 0x28, align 8
};
