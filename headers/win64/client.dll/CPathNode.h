#pragma once

class CPathNode : public C_PointEntity /*0x0*/  // sizeof 0x660, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x600, size 0xC, align 4
    Vector m_vOutTangentLocal; // offset 0x60C, size 0xC, align 4
    CUtlString m_strParentPathUniqueID; // offset 0x618, size 0x8, align 8
    CUtlString m_strPathNodeParameter; // offset 0x620, size 0x8, align 8
    char _pad_0628[0x8]; // offset 0x628
    CTransformWS m_xWSPrevParent; // offset 0x630, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x650, size 0x4, align 4
    char _pad_0654[0xC]; // offset 0x654
};
