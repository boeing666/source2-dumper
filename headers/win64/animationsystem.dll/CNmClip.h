#pragma once

class CNmClip  // sizeof 0x240, align 0x10 (animlib) {MGetKV3ClassDefaults}
{
public:
    CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // offset 0x0, size 0x8, align 8
    uint32 m_nNumFrames; // offset 0x8, size 0x4, align 4
    float32 m_flDuration; // offset 0xC, size 0x4, align 4
    CUtlBinaryBlock m_compressedPoseData; // offset 0x10, size 0x10, align 8
    CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings; // offset 0x20, size 0x18, align 8
    CUtlVector< uint32 > m_compressedPoseOffsets; // offset 0x38, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_floatCurveIDs; // offset 0x50, size 0x18, align 8
    CUtlVector< NmFloatCurveCompressionSettings_t > m_floatCurveDefs; // offset 0x68, size 0x18, align 8
    CUtlVector< uint16 > m_compressedFloatCurveData; // offset 0x80, size 0x18, align 8
    CUtlVector< uint32 > m_compressedFloatCurveOffsets; // offset 0x98, size 0x18, align 8
    char _pad_00B0[0x28]; // offset 0xB0
    CUtlVectorFixedGrowable< CNmClip*, 1 > m_secondaryAnimations; // offset 0xD8, size 0x20, align 8
    CNmSyncTrack m_syncTrack; // offset 0xF8, size 0xB0, align 8
    char _pad_01A8[0x8]; // offset 0x1A8
    CNmRootMotionData m_rootMotion; // offset 0x1B0, size 0x50, align 16
    bool m_bIsAdditive; // offset 0x200, size 0x1, align 1
    char _pad_0201[0x7]; // offset 0x201
    CUtlVector< CNmClip::ModelSpaceSamplingChainLink_t > m_modelSpaceSamplingChain; // offset 0x208, size 0x18, align 8
    CUtlVector< int32 > m_modelSpaceBoneSamplingIndices; // offset 0x220, size 0x18, align 8
    char _pad_0238[0x8]; // offset 0x238
};
