#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x600, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5B0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x5B0, size 0x18, align 8
    char _pad_05C8[0x8]; // offset 0x5C8
    CTransform m_xInitialPathWorldToLocal; // offset 0x5D0, size 0x20, align 16
    DirectionAlongSimplePath_t m_eDesiredDirection; // offset 0x5F0, size 0x4, align 4
    bool m_bIgnoreParentRotation; // offset 0x5F4, size 0x1, align 1
    char _pad_05F5[0xB]; // offset 0x5F5
};
