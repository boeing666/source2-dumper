#pragma once

class CNmLayerBlendNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nBaseNodeIdx; // offset 0x10, size 0x2, align 2
    bool m_bOnlySampleBaseRootMotion; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x5]; // offset 0x13
    CUtlLeanVectorFixedGrowable< CNmLayerBlendNode::LayerDefinition_t, 3 > m_layerDefinition; // offset 0x18, size 0x30, align 8
};
