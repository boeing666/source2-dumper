#pragma once

class CCachedPose  // sizeof 0x40, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CTransform > m_transforms; // offset 0x8, size 0x18, align 8
    CUtlVector< float32 > m_morphWeights; // offset 0x20, size 0x18, align 8
    HSequence m_hSequence; // offset 0x38, size 0x4, align 255
    float32 m_flCycle; // offset 0x3C, size 0x4, align 4
};
