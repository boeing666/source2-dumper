#pragma once

class CFuncMoverRouter : public CLogicalEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_nMoverIndex; // offset 0x4B0, size 0x4, align 4
    bool m_bRouteToAllMovers; // offset 0x4B4, size 0x1, align 1
    char _pad_04B5[0x3]; // offset 0x4B5
    CHandle< CPathMover > m_hPathMover; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x4C0, size 0x8, align 8
    char _pad_04C8[0x20]; // offset 0x4C8
};
