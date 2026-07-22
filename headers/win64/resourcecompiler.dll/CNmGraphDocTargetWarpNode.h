#pragma once

class CNmGraphDocTargetWarpNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x200]; // offset 0x0
    CNmTargetWarpNode::TargetUpdateRule_t m_targetUpdateRule; // offset 0x200, size 0x1, align 1
    bool m_bAllowTargetUpdate; // offset 0x201, size 0x1, align 1 | MPropertySuppressField
    bool m_bAlignWithTargetAtLastWarpEvent; // offset 0x202, size 0x1, align 1
    CNmRootMotionData::SamplingMode_t m_samplingMode; // offset 0x203, size 0x1, align 1
    float32 m_flSamplingPositionErrorThreshold; // offset 0x204, size 0x4, align 4
    float32 m_flMaxTangentLength; // offset 0x208, size 0x4, align 4
    float32 m_flLerpFallbackDistanceThreshold; // offset 0x20C, size 0x4, align 4
    float32 m_flTargetUpdateDistanceThresholdDegrees; // offset 0x210, size 0x4, align 4
    float32 m_flTargetUpdateAngleThresholdDegrees; // offset 0x214, size 0x4, align 4
};
