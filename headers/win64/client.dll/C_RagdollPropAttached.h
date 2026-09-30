#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xE60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE28]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xE28, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xE2C, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xE30, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xE3C, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xE48, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xE54, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xE58, size 0x1, align 1 | MNotSaved
    char _pad_0E59[0x7]; // offset 0xE59
};
