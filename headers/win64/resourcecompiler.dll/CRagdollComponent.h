#pragma once

class CRagdollComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CAnimGraphDoc_RigidBodyWeightList > m_weightLists; // offset 0x38, size 0x18, align 8
    float32 m_flSpringFrequencyMin; // offset 0x50, size 0x4, align 4
    float32 m_flSpringFrequencyMax; // offset 0x54, size 0x4, align 4
    float32 m_flMaxStretch; // offset 0x58, size 0x4, align 4
    bool m_bSolidCollisionAtZeroWeight; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x3]; // offset 0x5D
};
