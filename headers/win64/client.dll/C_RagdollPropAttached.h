#pragma once

class C_RagdollPropAttached : public C_RagdollProp /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    uint32 m_boneIndexAttached; // offset 0xD38, size 0x4, align 4 | MNetworkEnable MNotSaved
    uint32 m_ragdollAttachedObjectIndex; // offset 0xD3C, size 0x4, align 4 | MNetworkEnable MNotSaved
    Vector m_attachmentPointBoneSpace; // offset 0xD40, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNotSaved
    Vector m_attachmentPointRagdollSpace; // offset 0xD4C, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNotSaved
    Vector m_vecOffset; // offset 0xD58, size 0xC, align 4 | MNotSaved
    float32 m_parentTime; // offset 0xD64, size 0x4, align 4 | MNotSaved
    bool m_bHasParent; // offset 0xD68, size 0x1, align 1 | MNotSaved
    char _pad_0D69[0x7]; // offset 0xD69
};
