#pragma once

class CNmClip  // sizeof 0x200, align 0x10 (animlib) {MGetKV3ClassDefaults}
{
public:
    CStrongHandle< InfoForResourceTypeCNmSkeleton > m_skeleton; // offset 0x0, size 0x8, align 8
    uint32 m_nNumFrames; // offset 0x8, size 0x4, align 4
    float32 m_flDuration; // offset 0xC, size 0x4, align 4
    CUtlBinaryBlock m_compressedPoseData; // offset 0x10, size 0x10, align 8
    CUtlVector< NmCompressionSettings_t > m_trackCompressionSettings; // offset 0x20, size 0x18, align 8
    CUtlVector< uint32 > m_compressedPoseOffsets; // offset 0x38, size 0x18, align 8
    char _pad_0050[0x28]; // offset 0x50
    CUtlVectorFixedGrowable< CNmClip*, 1 > m_secondaryAnimations; // offset 0x78, size 0x20, align 8
    CUtlVectorFixedGrowable< CNmFloatChannelData*, 2 > m_floatChannelData; // offset 0x98, size 0x28, align 8
    CNmSyncTrack m_syncTrack; // offset 0xC0, size 0xB0, align 8
    CNmRootMotionData m_rootMotion; // offset 0x170, size 0x50, align 16
    bool m_bIsAdditive; // offset 0x1C0, size 0x1, align 1
    char _pad_01C1[0x7]; // offset 0x1C1
    CUtlVector< CNmClip::ModelSpaceSamplingChainLink_t > m_modelSpaceSamplingChain; // offset 0x1C8, size 0x18, align 8
    CUtlVector< int32 > m_modelSpaceBoneSamplingIndices; // offset 0x1E0, size 0x18, align 8
    char _pad_01F8[0x8]; // offset 0x1F8
};
