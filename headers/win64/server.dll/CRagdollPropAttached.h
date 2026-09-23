#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xC40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xC00, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xC04, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xC08, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xC14, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0xF]; // offset 0xC21
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xC30, size 0x1, align 1 | MNotSaved
    char _pad_0C31[0xF]; // offset 0xC31
};
