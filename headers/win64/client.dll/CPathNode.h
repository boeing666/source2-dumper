#pragma once

class CPathNode : public C_PointEntity /*0x0*/  // sizeof 0x650, align 0x10 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    Vector m_vInTangentLocal; // offset 0x5F0, size 0xC, align 4 | MNetworkEnable
    Vector m_vOutTangentLocal; // offset 0x5FC, size 0xC, align 4 | MNetworkEnable
    CUtlString m_strParentPathUniqueID; // offset 0x608, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strPathNodeParameter; // offset 0x610, size 0x8, align 8 | MNetworkEnable
    char _pad_0618[0x8]; // offset 0x618
    CTransform m_xWSPrevParent; // offset 0x620, size 0x20, align 16
    CHandle< CPathWithDynamicNodes > m_hPath; // offset 0x640, size 0x4, align 4
    char _pad_0644[0xC]; // offset 0x644
};
