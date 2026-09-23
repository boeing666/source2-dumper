#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x760, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x710]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x710, size 0x18, align 8
    char _pad_0728[0x8]; // offset 0x728
    CTransform m_xInitialPathWorldToLocal; // offset 0x730, size 0x20, align 16
    DirectionAlongSimplePath_t m_eDesiredDirection; // offset 0x750, size 0x4, align 4
    bool m_bIgnoreParentRotation; // offset 0x754, size 0x1, align 1
    char _pad_0755[0xB]; // offset 0x755
};
