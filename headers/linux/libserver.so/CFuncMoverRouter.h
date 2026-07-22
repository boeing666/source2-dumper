#pragma once

class CFuncMoverRouter : public CLogicalEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    int32 m_nMoverIndex; // offset 0x790, size 0x4, align 4
    bool m_bRouteToAllMovers; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x3]; // offset 0x795
    CHandle< CPathMover > m_hPathMover; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x7A0, size 0x8, align 8
    char _pad_07A8[0x20]; // offset 0x7A8
};
