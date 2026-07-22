#pragma once

class CFuncMoverRouter : public CLogicalEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    int32 m_nMoverIndex; // offset 0x498, size 0x4, align 4
    bool m_bRouteToAllMovers; // offset 0x49C, size 0x1, align 1
    char _pad_049D[0x3]; // offset 0x49D
    CHandle< CPathMover > m_hPathMover; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x4A8, size 0x8, align 8
};
