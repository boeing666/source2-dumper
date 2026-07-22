#pragma once

class CNmGraphDocOrientationWarpNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CNmGraphDocOrientationWarpNode::OffsetType_t m_offsetType; // offset 0x100, size 0x4, align 4
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0x104, size 0x1, align 1
    bool m_bWarpTranslation; // offset 0x105, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_0106[0x2]; // offset 0x106
};
