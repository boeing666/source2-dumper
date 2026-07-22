#pragma once

class CNmLayerBlendNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nBaseNodeIdx; // offset 0xA, size 0x2, align 2
    bool m_bOnlySampleBaseRootMotion; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > m_layerDefinition; // offset 0x10, size 0x30, align 8
};
