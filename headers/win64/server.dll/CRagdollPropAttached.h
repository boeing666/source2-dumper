#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xB70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xB30, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xB34, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xB38, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xB44, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xB50, size 0x1, align 1
    char _pad_0B51[0xF]; // offset 0xB51
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xB60, size 0x1, align 1 | MNotSaved
    char _pad_0B61[0xF]; // offset 0xB61
};
