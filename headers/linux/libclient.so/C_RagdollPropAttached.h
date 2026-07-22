#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xEA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE68]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xE68, size 0x4, align 4 | MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xE6C, size 0x4, align 4 | MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xE70, size 0xC, align 4 | MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xE7C, size 0xC, align 4 | MNotSaved
    Vector m_vecOffset; // offset 0xE88, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xE94, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xE98, size 0x1, align 1 | MNotSaved
    char _pad_0E99[0x7]; // offset 0xE99
};
