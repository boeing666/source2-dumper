#pragma once

class CRagdollUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    int32 m_nWeightListIndex; // offset 0x70, size 0x4, align 4
    RagdollPoseControl m_poseControlMethod; // offset 0x74, size 0x4, align 4
};
