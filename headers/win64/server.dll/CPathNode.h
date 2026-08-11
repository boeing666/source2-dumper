#pragma once

class CPathNode : public CPointEntity /*0x0*/  // sizeof 0x500, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x4A0, size 0xC, align 4 | MNetworkEnable
    Vector m_vOutTangentLocal; // offset 0x4AC, size 0xC, align 4 | MNetworkEnable
    CUtlString m_strParentPathUniqueID; // offset 0x4B8, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strPathNodeParameter; // offset 0x4C0, size 0x8, align 8 | MNetworkEnable
    char _pad_04C8[0x8]; // offset 0x4C8
    CTransform m_xWSPrevParent; // offset 0x4D0, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0xC]; // offset 0x4F4
};
