#pragma once

class CAnimGraphDoc_RigidBodyWeightList  // sizeof 0x28, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    CUtlVector< CRigidBodyWeight > m_weights; // offset 0x10, size 0x18, align 8
};
