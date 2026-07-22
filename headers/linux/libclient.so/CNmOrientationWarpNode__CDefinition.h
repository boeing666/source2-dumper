#pragma once

class CNmOrientationWarpNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nClipReferenceNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nTargetValueNodeIdx; // offset 0xC, size 0x2, align 2
    bool m_bIsOffsetNode; // offset 0xE, size 0x1, align 1
    bool m_bIsOffsetRelativeToCharacter; // offset 0xF, size 0x1, align 1
    bool m_bWarpTranslation; // offset 0x10, size 0x1, align 1
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x6]; // offset 0x12
};
