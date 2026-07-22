#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x740, align 0x10 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x700]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x700, size 0x18, align 8 | MNetworkEnable
    char _pad_0718[0x8]; // offset 0x718
    CTransform m_xInitialPathWorldToLocal; // offset 0x720, size 0x20, align 16 | MNetworkEnable
};
