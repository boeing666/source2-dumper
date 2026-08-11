#pragma once

class CPathNode : public CPointEntity /*0x0*/  // sizeof 0x7E0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x788, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x794, size 0xC, align 4
    CUtlString m_strParentPathUniqueID; // offset 0x7A0, size 0x8, align 8
    CUtlString m_strPathNodeParameter; // offset 0x7A8, size 0x8, align 8
    CTransformWS m_xWSPrevParent; // offset 0x7B0, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0xC]; // offset 0x7D4
};
