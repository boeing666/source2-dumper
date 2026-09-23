#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0x1328, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0x12F0, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0x12F4, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0x12F8, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0x1304, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0x1310, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0x131C, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0x1320, size 0x1, align 1 | MNotSaved
    char _pad_1321[0x7]; // offset 0x1321
};
