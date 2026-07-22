#pragma once

class CNmTargetWarpNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nClipReferenceNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nTargetValueNodeIdx; // offset 0xC, size 0x2, align 2
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0xE, size 0x1, align 1
    CNmTargetWarpNode::TargetUpdateRule_t m_targetUpdateRule; // offset 0xF, size 0x1, align 1
    bool m_bAlignWithTargetAtLastWarpEvent; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 m_flSamplingPositionErrorThresholdSq; // offset 0x14, size 0x4, align 4
    float32 m_flMaxTangentLength; // offset 0x18, size 0x4, align 4
    float32 m_flLerpFallbackDistanceThreshold; // offset 0x1C, size 0x4, align 4
    float32 m_flTargetUpdateDistanceThreshold; // offset 0x20, size 0x4, align 4
    float32 m_flTargetUpdateAngleThresholdRadians; // offset 0x24, size 0x4, align 4
    CGlobalSymbol m_alignmentBoneID; // offset 0x28, size 0x8, align 8
};
