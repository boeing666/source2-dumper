#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xC90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xC50, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xC54, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xC58, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xC64, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xC70, size 0x1, align 1
    char _pad_0C71[0xF]; // offset 0xC71
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xC80, size 0x1, align 1 | MNotSaved
    char _pad_0C81[0xF]; // offset 0xC81
};
