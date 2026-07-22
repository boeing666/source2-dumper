#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xB60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB20]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xB20, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xB24, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xB28, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xB34, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0xF]; // offset 0xB41
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xB50, size 0x1, align 1 | MNotSaved
    char _pad_0B51[0xF]; // offset 0xB51
};
