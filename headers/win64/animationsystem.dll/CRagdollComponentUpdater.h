#pragma once

class CRagdollComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< CAnimNodePath > m_ragdollNodePaths; // offset 0x30, size 0x18, align 8
    CUtlVector< CAnimNodePath > m_followAttachmentNodePaths; // offset 0x48, size 0x18, align 8
    CUtlVector< int32 > m_boneIndices; // offset 0x60, size 0x18, align 8
    CUtlVector< CUtlString > m_boneNames; // offset 0x78, size 0x18, align 8
    CUtlVector< WeightList > m_weightLists; // offset 0x90, size 0x18, align 8
    CUtlVector< int32 > m_boneToWeightIndices; // offset 0xA8, size 0x18, align 8
    float32 m_flSpringFrequencyMin; // offset 0xC0, size 0x4, align 4
    float32 m_flSpringFrequencyMax; // offset 0xC4, size 0x4, align 4
    float32 m_flMaxStretch; // offset 0xC8, size 0x4, align 4
    bool m_bSolidCollisionAtZeroWeight; // offset 0xCC, size 0x1, align 1
    char _pad_00CD[0xB]; // offset 0xCD
};
