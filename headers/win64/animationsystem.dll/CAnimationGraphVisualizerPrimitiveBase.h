#pragma once

class CAnimationGraphVisualizerPrimitiveBase  // sizeof 0x40, align 0x8 [vtable trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CAnimationGraphVisualizerPrimitiveType m_Type; // offset 0x8, size 0x4, align 4
    AnimNodeID[11] m_OwningAnimNodePaths; // offset 0xC, size 0x2C, align 4
    int32 m_nOwningAnimNodePathCount; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
