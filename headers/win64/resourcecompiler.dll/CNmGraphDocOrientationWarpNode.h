#pragma once

class CNmGraphDocOrientationWarpNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CNmGraphDocOrientationWarpNode::OffsetType_t m_offsetType; // offset 0x108, size 0x4, align 4
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0x10C, size 0x1, align 1
    CNmOrientationWarpNode::AlignmentMode_t m_alignmentMode; // offset 0x10D, size 0x1, align 1
    bool m_bWarpTranslation; // offset 0x10E, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_010F[0x1]; // offset 0x10F
};
