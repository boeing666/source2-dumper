#pragma once

struct WorldBuilderParams_t  // sizeof 0x60, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    float32 m_flMinDrawVolumeSize; // offset 0x0, size 0x4, align 4
    bool m_bBuildBakedLighting; // offset 0x4, size 0x1, align 1
    bool m_bAggregateInstanceStreams; // offset 0x5, size 0x1, align 1
    char _pad_0006[0x2]; // offset 0x6
    BakedLightingInfo_t m_bakedLightingInfo; // offset 0x8, size 0x48, align 8
    uint64 m_nCompileTimestamp; // offset 0x50, size 0x8, align 8
    uint64 m_nCompileFingerprint; // offset 0x58, size 0x8, align 8
};
