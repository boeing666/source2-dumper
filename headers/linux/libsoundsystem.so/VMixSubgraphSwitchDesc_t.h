#pragma once

struct VMixSubgraphSwitchDesc_t  // sizeof 0x38, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_effectName; // offset 0x8, size 0x8, align 8
    CUtlVector< CUtlString > m_subgraphs; // offset 0x10, size 0x18, align 8
    VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // offset 0x28, size 0x4, align 4
    bool m_bOnlyTailsOnFadeOut; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
    float32 m_flInterpolationTime; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
