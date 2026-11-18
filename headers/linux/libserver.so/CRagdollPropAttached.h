#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xFC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF80]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xF80, size 0x4, align 4
    uint32 m_ragdollAttachedObjectIndex; // offset 0xF84, size 0x4, align 4
    Vector m_attachmentPointBoneSpace; // offset 0xF88, size 0xC, align 4
    Vector m_attachmentPointRagdollSpace; // offset 0xF94, size 0xC, align 4
    bool m_bShouldDetach; // offset 0xFA0, size 0x1, align 1
    char _pad_0FA1[0xF]; // offset 0xFA1
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xFB0, size 0x1, align 1 | MNotSaved
    char _pad_0FB1[0xF]; // offset 0xFB1
};
