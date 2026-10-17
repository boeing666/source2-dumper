#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xF90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF58]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xF58, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xF5C, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xF60, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xF6C, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xF78, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xF84, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xF88, size 0x1, align 1 | MNotSaved
    char _pad_0F89[0x7]; // offset 0xF89
};
