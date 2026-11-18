#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xE68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE30]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xE30, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xE34, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xE38, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xE44, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xE50, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xE5C, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xE60, size 0x1, align 1 | MNotSaved
    char _pad_0E61[0x7]; // offset 0xE61
};
