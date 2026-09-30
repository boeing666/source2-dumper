#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x750, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x700]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x700, size 0x18, align 8
    char _pad_0718[0x8]; // offset 0x718
    CTransform m_xInitialPathWorldToLocal; // offset 0x720, size 0x20, align 16
    DirectionAlongSimplePath_t m_eDesiredDirection; // offset 0x740, size 0x4, align 4
    bool m_bIgnoreParentRotation; // offset 0x744, size 0x1, align 1
    char _pad_0745[0xB]; // offset 0x745
};
