#pragma once

struct CMaterialDrawDescriptor::RigidMeshPart_t  // sizeof 0xC, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    uint16 m_nRigidBLASIndex; // offset 0x0, size 0x2, align 2
    int16 m_nBoneIndex; // offset 0x2, size 0x2, align 2
    uint32 m_nStartIndexOffset; // offset 0x4, size 0x4, align 4
    uint32 m_nPrimitiveCount; // offset 0x8, size 0x4, align 4
};
