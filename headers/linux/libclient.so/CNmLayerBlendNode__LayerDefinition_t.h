#pragma once

struct CNmLayerBlendNode::LayerDefinition_t  // sizeof 0xC, align 0x2 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    int16 m_nInputNodeIdx; // offset 0x0, size 0x2, align 2
    int16 m_nWeightValueNodeIdx; // offset 0x2, size 0x2, align 2
    int16 m_nBoneMaskValueNodeIdx; // offset 0x4, size 0x2, align 2
    int16 m_nRootMotionWeightValueNodeIdx; // offset 0x6, size 0x2, align 2
    bool m_bIsSynchronized; // offset 0x8, size 0x1, align 1
    bool m_bIgnoreEvents; // offset 0x9, size 0x1, align 1
    bool m_bIsStateMachineLayer; // offset 0xA, size 0x1, align 1
    NmPoseBlendMode_t m_blendMode; // offset 0xB, size 0x1, align 1
};
