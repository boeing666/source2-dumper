#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xCF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xCB0, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xCB4, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xCB8, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xCC4, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xCD0, size 0x1, align 1
    char _pad_0CD1[0xF]; // offset 0xCD1
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xCE0, size 0x1, align 1 | MNotSaved
    char _pad_0CE1[0xF]; // offset 0xCE1
};
