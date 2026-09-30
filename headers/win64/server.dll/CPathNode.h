#pragma once

class CPathNode : public CPointEntity /*0x0*/  // sizeof 0x510, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x4B0, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x4BC, size 0xC, align 4
    CUtlString m_strParentPathUniqueID; // offset 0x4C8, size 0x8, align 8
    CUtlString m_strPathNodeParameter; // offset 0x4D0, size 0x8, align 8
    char _pad_04D8[0x8]; // offset 0x4D8
    CTransformWS m_xWSPrevParent; // offset 0x4E0, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x500, size 0x4, align 4
    char _pad_0504[0xC]; // offset 0x504
};
