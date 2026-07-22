#pragma once

class CNmOrientationWarpNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nClipReferenceNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nTargetValueNodeIdx; // offset 0x12, size 0x2, align 2
    bool m_bIsOffsetNode; // offset 0x14, size 0x1, align 1
    bool m_bIsOffsetRelativeToCharacter; // offset 0x15, size 0x1, align 1
    bool m_bWarpTranslation; // offset 0x16, size 0x1, align 1
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0x17, size 0x1, align 1
};
