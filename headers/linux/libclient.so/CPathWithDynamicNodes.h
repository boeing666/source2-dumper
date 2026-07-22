#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x8C0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x880]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x880, size 0x18, align 8
    char _pad_0898[0x8]; // offset 0x898
    CTransform m_xInitialPathWorldToLocal; // offset 0x8A0, size 0x20, align 16
};
