#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xE50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE08]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xE08, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xE0C, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xE10, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xE1C, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xE28, size 0x1, align 1
    char _pad_0E29[0xF]; // offset 0xE29
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xE38, size 0x1, align 1 | MNotSaved
    char _pad_0E39[0x17]; // offset 0xE39
};
