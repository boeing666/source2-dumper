#pragma once

class CPathNode : public C_PointEntity /*0x0*/  // sizeof 0x7D0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x76C, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x778, size 0xC, align 4
    char _pad_0784[0x4]; // offset 0x784
    CUtlString m_strParentPathUniqueID; // offset 0x788, size 0x8, align 8
    CUtlString m_strPathNodeParameter; // offset 0x790, size 0x8, align 8
    char _pad_0798[0x8]; // offset 0x798
    CTransformWS m_xWSPrevParent; // offset 0x7A0, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0xC]; // offset 0x7C4
};
