#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE0]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xCE0, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xCE4, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xCE8, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xCF4, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xD00, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xD0C, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xD10, size 0x1, align 1 | MNotSaved
    char _pad_0D11[0x7]; // offset 0xD11
};
