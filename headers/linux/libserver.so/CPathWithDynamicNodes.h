#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x8F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x880]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x880, size 0x18, align 8
    char _pad_0898[0x8]; // offset 0x898
    CTransform m_xInitialPathWorldToLocal; // offset 0x8A0, size 0x20, align 16
    DirectionAlongSimplePath_t m_eDesiredDirection; // offset 0x8C0, size 0x4, align 4
    bool m_bIgnoreParentRotation; // offset 0x8C4, size 0x1, align 1
    char _pad_08C5[0x1B]; // offset 0x8C5
    bool m_bAlwaysReevaluateSpline; // offset 0x8E0, size 0x1, align 1
    char _pad_08E1[0xF]; // offset 0x8E1
};
