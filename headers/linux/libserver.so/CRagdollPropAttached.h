#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xE40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xDF8, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xDFC, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xE00, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xE0C, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0xF]; // offset 0xE19
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xE28, size 0x1, align 1 | MNotSaved
    char _pad_0E29[0x17]; // offset 0xE29
};
