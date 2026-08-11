#pragma once

class CPathNode : public CPointEntity /*0x0*/  // sizeof 0x500, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x4A8, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x4B4, size 0xC, align 4
    CUtlString m_strParentPathUniqueID; // offset 0x4C0, size 0x8, align 8
    CUtlString m_strPathNodeParameter; // offset 0x4C8, size 0x8, align 8
    CTransformWS m_xWSPrevParent; // offset 0x4D0, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0xC]; // offset 0x4F4
};
