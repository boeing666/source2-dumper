#pragma once

class CFuncMoverRouter : public CLogicalEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int32 m_nMoverIndex; // offset 0x4A8, size 0x4, align 4
    bool m_bRouteToAllMovers; // offset 0x4AC, size 0x1, align 1
    char _pad_04AD[0x3]; // offset 0x4AD
    CHandle< CPathMover > m_hPathMover; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x4B8, size 0x8, align 8
};
