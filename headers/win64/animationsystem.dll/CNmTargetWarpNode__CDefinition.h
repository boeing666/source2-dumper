#pragma once

class CNmTargetWarpNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nClipReferenceNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nTargetValueNodeIdx; // offset 0x12, size 0x2, align 2
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0x14, size 0x1, align 1
    CNmTargetWarpNode::TargetUpdateRule_t m_targetUpdateRule; // offset 0x15, size 0x1, align 1
    bool m_bAlignWithTargetAtLastWarpEvent; // offset 0x16, size 0x1, align 1
    char _pad_0017[0x1]; // offset 0x17
    float32 m_flSamplingPositionErrorThresholdSq; // offset 0x18, size 0x4, align 4
    float32 m_flMaxTangentLength; // offset 0x1C, size 0x4, align 4
    float32 m_flLerpFallbackDistanceThreshold; // offset 0x20, size 0x4, align 4
    float32 m_flTargetUpdateDistanceThreshold; // offset 0x24, size 0x4, align 4
    float32 m_flTargetUpdateAngleThresholdRadians; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CGlobalSymbol m_alignmentBoneID; // offset 0x30, size 0x8, align 8
};
