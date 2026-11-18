#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xFF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFC0]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xFC0, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xFC8, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xFD4, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xFE0, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xFEC, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xFF0, size 0x1, align 1 | MNotSaved
    char _pad_0FF1[0x7]; // offset 0xFF1
};
