#pragma once

class CPathWithDynamicNodes : public CPathSimple /*0x0*/  // sizeof 0x610, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5A0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes; // offset 0x5A0, size 0x18, align 8
    char _pad_05B8[0x8]; // offset 0x5B8
    CTransform m_xInitialPathWorldToLocal; // offset 0x5C0, size 0x20, align 16
    DirectionAlongSimplePath_t m_eDesiredDirection; // offset 0x5E0, size 0x4, align 4
    bool m_bIgnoreParentRotation; // offset 0x5E4, size 0x1, align 1
    char _pad_05E5[0x1B]; // offset 0x5E5
    bool m_bAlwaysReevaluateSpline; // offset 0x600, size 0x1, align 1
    char _pad_0601[0xF]; // offset 0x601
};
