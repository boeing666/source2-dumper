#pragma once

class CRagdollPropAttached : public CRagdollProp /*0x0*/  // sizeof 0xC20, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xBE0, size 0x4, align 4 | MNetworkEnable
    uint32 m_ragdollAttachedObjectIndex; // offset 0xBE4, size 0x4, align 4 | MNetworkEnable
    Vector m_attachmentPointBoneSpace; // offset 0xBE8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    Vector m_attachmentPointRagdollSpace; // offset 0xBF4, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    bool m_bShouldDetach; // offset 0xC00, size 0x1, align 1
    char _pad_0C01[0xF]; // offset 0xC01
    bool m_bShouldDeleteAttachedActivationRecord; // offset 0xC10, size 0x1, align 1 | MNotSaved
    char _pad_0C11[0xF]; // offset 0xC11
};
