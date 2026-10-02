#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xEB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE80]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xE80, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xE84, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xE88, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xE94, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xEA0, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xEAC, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xEB0, size 0x1, align 1 | MNotSaved
    char _pad_0EB1[0x7]; // offset 0xEB1
};
