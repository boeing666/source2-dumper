#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x8D0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x890]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x890, size 0x18, align 8
    char _pad_08A8[0x8]; // offset 0x8A8
    CTransform m_xInitialPathWorldToLocal; // offset 0x8B0, size 0x20, align 16
};
