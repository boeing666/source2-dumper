#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x750, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x710]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x710, size 0x18, align 8
    char _pad_0728[0x8]; // offset 0x728
    CTransform m_xInitialPathWorldToLocal; // offset 0x730, size 0x20, align 16
};
